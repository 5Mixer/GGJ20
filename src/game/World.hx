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
	var structure:Structure;

	override public function new (engine) {
		super("World Scene",engine);
		input = engine.input;
		
		var map = new NoiseTilemap();
		add(map);
		var spawn = map.findSpawn();

		// bodySpriteMap = new SpriteMap(kha.Assets.);
		structure = new Structure();
		add(structure);
		// add(new Player(10, 30, engine.input), 1);

		bodyParticleSystem = new BodyPartParticles();
		bodyParticleSystem.poolMaximum = 6000;
		add(bodyParticleSystem);

		camera = new Camera();
		camera.position.x = spawn.x*2 - 300;
		camera.position.y = spawn.y*2 - 300;
		summonCircle = new SummonCircle();
		summonCircle.position = spawn.add(new kha.math.Vector2(30,30));
		add(summonCircle);

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
						add(body);
						summonCircle.clear();
						summonCircle.animation.playOnce("summon");
						camera.shake(1,6);

					}
				}
			}

		});

		for (i in 0...100) {
			var body = new Body();
			body.position = spawn;
			// add(body);
			bodies.push(body);
		}
		bodies.sort(function (a,b) {
			return a.position.y < b.position.y ? -1 : 1;
		});
	}
	var f = 0.;

	override public function update (dt:Float) {
		f++;
		this.camera.update(dt);
		// this.camera.shake(1, Math.min(4,Math.round(f*.03)));

		var worldMousePos = camera.transformation.transformPoint(input.mousePosition);

		var cameraSpeed = 800;
		if (input.isAnyKeyDown(InputBindings.left))
			this.camera.position.x -= dt * cameraSpeed;
		if (input.isAnyKeyDown(InputBindings.right))
			this.camera.position.x += dt * cameraSpeed;
		if (input.isAnyKeyDown(InputBindings.down))
			this.camera.position.y += dt * cameraSpeed;
		if (input.isAnyKeyDown(InputBindings.up))
			this.camera.position.y -= dt * cameraSpeed;

		super.update(dt);
		for (body in bodies)
			body.update(dt);

		// if (f > 500){
			// for (body in bodies) {
				// if (Math.sqrt(Math.pow(body.position.x,2) + Math.pow(body.position.y,2)) < (f - 50)) {
					// explodeBody(body);
				// }
			// }
		// }
		var worldMouseFast = camera.transformation.transformPoint(input.mousePosition);
		var worldMouse = new kha.math.Vector2(worldMouseFast.x,worldMouseFast.y);
		for (body in bodies) {
			if (body.friendly)
				body.targetPosition = worldMouse;

			for (body2 in bodies) {
				if (body == body2 || Math.abs(body.position.x-body2.position.x) > 15 || Math.abs(body.position.y-body2.position.y) > 15) 
					continue;
				var collision = body.collider.testCircle(body2.collider);
				if (collision != null) {
					if (body.friendly != body2.friendly) {
						// attack

						if (body.attackCooldown == 0){
							body2.health -= body.getDamage();
							body.attackCooldown = .5;
						}
						if (body2.attackCooldown == 0){
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
			for (collider in structure.colliders) {
				var collision = collider.testCircle(body.collider);
				if (collision != null) {
					body.position.x -= collision.separationX;
					body.position.y -= collision.separationY;
					// body.vx += collision.separationX*.1;
					// body.vy += collision.separationY*.1;

				}
			}
		}
		bodyParticleSystem.members.sort(function (a,b) {
			return a.y - b.y > 0 ? 1 : -1;
		});

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

		/*
		   bodyParticleSystem.spawnParticle({
		   x: Math.random() * 230,
		   y: Math.random() * 230,
		   z: 16,
		   vz: -.7,
		   part: BodyPart.createByIndex(Math.floor(Math.random() * 4))
		   });*/
	}
	override public function render (g:kha.graphics2.Graphics) {
		g.color = kha.Color.fromBytes(99,155,255);
		g.fillRect(0,0,10000,10000);
		g.color = kha.Color.White;

		camera.apply(g);
		super.render(g);
		for (body in bodies)
			body.render(g);

		g.color = kha.Color.Pink;
		for (collider in structure.colliders) {
			var verts = collider.transformedVertices;
			var i = 0;
			while (i < verts.length-1) {
				g.drawLine(verts[i].x,verts[i].y,verts[i+1].x,verts[i+1].y);
				i++;
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
		remove(body);
	}
}
