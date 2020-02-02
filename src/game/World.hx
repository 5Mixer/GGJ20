package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;
import bonsai.input.Input;
import Main;

class World extends Scene {
	var inventory:Inventory;
	var bodyParticleSystem:BodyPartParticles;

	var bodyAnimatedSprite:AnimatedSprite;
	var bodySpriteMap:SpriteMap;

	var bodies:Array<Body> = [];
	var input:bonsai.input.Input;
	var camera:Camera;

	var summonCircle:SummonCircle;
	var map:NoiseTilemap;
	var structures:Array<Structure> = [];

	override public function new (engine) {
		super("World Scene",engine);
		input = engine.input;

		map = new NoiseTilemap();
		add(map);
		var spawn = map.findSpawn();

		bodyParticleSystem = new BodyPartParticles();
		bodyParticleSystem.poolMaximum = 6000;

		camera = new Camera();
		camera.position.x = spawn.x*2 - 300;
		camera.position.y = spawn.y*2 - 300;

		inventory = new Inventory();
		input.mouseUpListeners.push(function () {
			var clickedPart = inventory.getItemClicked(input.mousePosition);
			if (clickedPart != null) {
				if (summonCircle.addPart(clickedPart)) {
					// Successfully added clicked part to summon circle
					inventory.items.set(clickedPart, inventory.items.get(clickedPart) - 1);
					camera.shake(.1,10);

					if (summonCircle.isComplete()) {
						var body = summonCircle.getBody();
						body.position = summonCircle.position.mult(1);
						body.vz = -4;
						body.vx = -1 + Math.random() * 2;

						bodies.push(body);

						summonCircle.clear();
						summonCircle.summoningProcessTimer = 2;
						summonCircle.animation2.playOnce("summon");
						camera.shake(1,6);

					}
				}
			}

		});

		// for (i in 0...10) {
			// Sand
			// var pos = map.tilesByBiome[1][Math.floor(Math.random() * map.tilesByBiome[1].length)];
			summonCircle = new SummonCircle();
			summonCircle.position = new kha.math.Vector2(spawn.x+100, spawn.y);
		// }

		for (i in 0...15) {
			// Grass
			var pos = map.tilesByBiome[2][Math.floor(Math.random() * map.tilesByBiome[2].length)];
			var structure = new Structure(kha.Assets.blobs.castle1_tmx.toString());
			structure.tier = 1;
			structure.position = new kha.math.Vector2(pos.x * 16, pos.y * 16);
			add(structure);
			structures.push(structure);
		}
		for (i in 0...5) {
			// Dirt
			var pos = map.tilesByBiome[3][Math.floor(Math.random() * map.tilesByBiome[3].length)];
			var structure = new Structure(kha.Assets.blobs.castle2_tmx.toString());
			structure.tier = 2;
			structure.position = new kha.math.Vector2(pos.x * 16, pos.y * 16);
			add(structure);
			structures.push(structure);
		}
		for (i in 0...2) {
			// Stone
			var pos = map.tilesByBiome[4][Math.floor(Math.random() * map.tilesByBiome[4].length)];
			var structure = new Structure(kha.Assets.blobs.castle3_tmx.toString());
			structure.tier = 3;
			structure.position = new kha.math.Vector2(pos.x * 16, pos.y * 16);
			add(structure);
			structures.push(structure);
		}
			// Kingdom
			var structure = new Structure(kha.Assets.blobs.castle4_tmx.toString());
			structure.tier = 4;
			structure.position = new kha.math.Vector2(150 * 16, 150 * 16);
			add(structure);
			structures.push(structure);

		var enemyCount = [3,7,10,50];

		for (structure in structures)
			for (spawnRegion in structure.spawnRegions)
				for (i in 0...enemyCount[structure.tier - 1]) {
					var body = new Body();
					body.position = new kha.math.Vector2(Math.random()*spawnRegion.width + spawnRegion.x + structure.position.x,Math.random()*spawnRegion.height + spawnRegion.y + structure.position.y);
					body.friendly = false;
					body.targetPosition = body.position.mult(1);
					body.homePoint = body.position.mult(1);
					bodies.push(body);
				}


		for (i in 0...350) {
			var pos = map.tilesByBiome[1][Math.floor(Math.random() * map.tilesByBiome[1].length)];

			bodyParticleSystem.spawnParticle({ x: pos.x * 16, y: pos.y * 16, z: 0, vx: 0, vz: 0,
				part: BodyPart.createByIndex(Math.floor(Math.random()*4))
			});
		}
		for (i in 0...350) {
			var pos = map.tilesByBiome[2][Math.floor(Math.random() * map.tilesByBiome[1].length)];

			bodyParticleSystem.spawnParticle({ x: pos.x * 16, y: pos.y * 16, z: 0, vx: 0, vz: 0,
				part: BodyPart.createByIndex(Math.floor(Math.random()*8))
			});
		}

		add(bodyParticleSystem);

		for (i in 0...1) {
			var body = new Body();
			body.leftArm = BodyPart.Axe;
			body.rightArm = BodyPart.Axe;
			body.position = spawn.add(new kha.math.Vector2(Math.random()*10,Math.random()*10));
			bodies.push(body);
		}
		add(summonCircle);
	}
	var f = 0.;
	var worldMousePos:kha.math.FastVector2;
	var cameraSpeed = 400;

	override public function update (dt:Float) {
		f++;
		this.camera.update(dt);

		worldMousePos = camera.transformation.transformPoint(input.mousePosition);
		

		if (input.isAnyKeyDown(InputBindings.left))
			this.camera.position.x -= dt * cameraSpeed;
		if (input.isAnyKeyDown(InputBindings.right))
			this.camera.position.x += dt * cameraSpeed;
		if (input.isAnyKeyDown(InputBindings.down))
			this.camera.position.y += dt * cameraSpeed;
		if (input.isAnyKeyDown(InputBindings.up))
			this.camera.position.y -= dt * cameraSpeed;

		super.update(dt);

		bodies.sort(function (a,b) {
			return a.position.y < b.position.y ? -1 : 1;
		});

		for (body in bodies)
			body.update(dt);

		var worldMouseFast = camera.transformation.transformPoint(input.mousePosition);
		var worldMouse = new kha.math.Vector2(worldMouseFast.x - 16,worldMouseFast.y - 32);
		for (body in bodies) {
			body.animatedSprite.play("idle");
			if (body.friendly) {
				body.targetPosition = worldMouse.mult(1);
				if (map.getTile(Math.floor(body.position.x/16), Math.floor(body.position.y/16)) == 0) {
					body.targetPosition.x = 150*16;
					body.targetPosition.y = 150*16;

				}
			}

			for (body2 in bodies) {
				if (!body.friendly && body2.friendly) {
					if (body.position.sub(body2.position).length < 150) {
						body.enemyBehaviour = Body.Behaviour.Chase;
						body.targetPosition = body2.position.mult(1);
					}else {
						if (body.enemyBehaviour == Body.Behaviour.Chase)
							body.enemyBehaviour = Body.Behaviour.Return;
					}

				}


				if (body == body2 || Math.abs(body.position.x-body2.position.x) >15 || Math.abs(body.position.y-body2.position.y) > 15) 
					continue;
				var collision = body.collider.testCircle(body2.collider);
				if (collision != null) {
					if (body.friendly != body2.friendly) {
						// attack
						if (body.attackCooldown == 0){
							body.animatedSprite.play("attack");
							body2.health -= body.getDamage();
							body.attackCooldown = .5;
						}
						if (body2.attackCooldown == 0){
							body2.animatedSprite.play("attack");
							body.health -= body2.getDamage();
							body2.attackCooldown = .5;
						}

						if (body.health < 0)
							explodeBody(body);
						if (body2.health < 0)
							explodeBody(body2);

					}

					body.vx += collision.separationX*.1;
					body.vy += collision.separationY*.1;
				}
			}
			for (structure in structures) {
				for (collider in structure.colliders) {
					var collision = collider.testCircle(body.collider);
					if (collision != null) {
						body.position.x -= collision.separationX;
						body.position.y -= collision.separationY;
					}
				}
			}
			// bodyParticleSystem.members.sort(function (a,b) {
				// return a.y - b.y > 0 ? 1 : -1;
			// });

			var i = bodyParticleSystem.members.length - 1;
			while (i >= 0) {
				var item = bodyParticleSystem.members[i];
				if (item == null){
					i--;
					continue;
				}

				if (Math.pow(item.x + 16 - worldMousePos.x, 2) + Math.pow(item.y + 14 - worldMousePos.y, 2) < 200) {
					// Reorient heads to be directionless
					if ([BodyPart.NaturalHeadUp, BodyPart.NaturalHeadDown, BodyPart.NaturalHeadRight, BodyPart.NaturalHeadLeft].indexOf(item.part) != -1)
						item.part = BodyPart.NaturalHead;
					inventory.items.set(item.part, inventory.items.get(item.part) + 1);
					bodyParticleSystem.members.remove(item);
					// item.vz = -4;
				}else{
					i--;
				}

			}

		}
	}
	override public function render (g:kha.graphics2.Graphics) {
		// g.color = kha.Color.fromBytes(99,155,255);
		// g.fillRect(0,0,000,1000);
		g.color = kha.Color.White;

		camera.transformation.scale.x = 2;
		camera.transformation.scale.y = 2;
		camera.apply(g);
		var camWorld = camera.transformation.transformPoint(new kha.math.Vector2(0,0));
		summonCircle.position = new kha.math.Vector2(camWorld.x+150, camWorld.y);
		super.render(g);
		for (body in bodies)
			body.render(g);
		
		g.color = kha.Color.Pink;
		for (structure in structures) {
			for (collider in structure.colliders) {
				var verts = collider.transformedVertices;
				var i = 0;
				while (i < verts.length-1) {
					g.drawLine(verts[i].x,verts[i].y,verts[i+1].x,verts[i+1].y);
					i++;
				}
			}
		}
		g.color = kha.Color.White;
		camera.finish(g);
		inventory.render(g);
	}
	var zOffset = [
		BodyPart.NaturalHead  => 21,
		BodyPart.NaturalChest => 10,
		BodyPart.NaturalLeg   => 0,
		BodyPart.NaturalArm   => 32 - 18,
		BodyPart.Boots        => 0,
		BodyPart.Axe          => 1,
		BodyPart.Sword        => 2,
		BodyPart.Knife        => 32 - 23
	];
	public function explodeBody (body:Body) {
		var offset = 0;
		var vz = -1 * Math.random() - 2;
		if (body == null)
			return;
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y+ zOffset[body.head],
			z: offset + zOffset[body.head],
			vx: Math.random() * 1 - .5,
			vz: vz,
			part: body.head
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y+ zOffset[body.chest],
			z: offset + zOffset[body.chest],
			vz: vz,
			vx: Math.random() * 1 - .5,
			part: body.chest
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.leftArm],
			z: offset + zOffset[body.leftArm],
			vz: vz,
			vx: Math.random() * 1 - .5,
			part: body.leftArm
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.rightArm],
			z: offset + zOffset[body.rightArm],
			vz: vz,
			vx: Math.random() * 1 - .5,
			part: body.rightArm
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.leftLeg],
			z: offset + zOffset[body.leftLeg],
			vz: vz,
			vx: Math.random() - .5,
			part: body.leftLeg
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.rightLeg],
			z: offset + zOffset[body.rightLeg],
			vz: vz,
			vx: Math.random() - .5,
			part: body.rightLeg
		});
		bodies.remove(body);
		body = null;
	}
}
