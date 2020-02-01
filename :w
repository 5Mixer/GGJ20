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

	override public function new (engine) {
		super("World Scene",engine);
		input = engine.input;

		// bodySpriteMap = new SpriteMap(kha.Assets.);
		add(new TileMap());
		// add(new Player(10, 30, engine.input), 1);

		bodyParticleSystem = new BodyPartParticles();
		bodyParticleSystem.poolMaximum = 6000;
		add(bodyParticleSystem);

		camera = new Camera();
		camera.position.x = -300;
		camera.position.y = -300;
		summonCircle = new SummonCircle();
		add(summonCircle);

		inventory = new Inventory();
		// add(inventory);
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

		for (i in 0...1000) {
			var body = new Body();
			add(body);
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
		
		if (f > 50){
			for (body in bodies) {
				if (Math.sqrt(Math.pow(body.position.x,2) + Math.pow(body.position.y,2)) < (f - 50)) {
					explodeBody(body);
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
	override public function render (g) {
		camera.apply(g);
		super.render(g);
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
