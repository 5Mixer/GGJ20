package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;
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
		summonCircle = new SummonCircle();
		add(summonCircle);

		inventory = new Inventory();
		add(inventory);

		for (i in 0...10) {
			var body = new Body();
			add(body);
			bodies.push(body);
		}
		bodies.sort(function (a,b) {
			return a.position.y < b.position.y ? -1 : 1;
		});
	}
	var f = 0;
	override public function update (dt:Float) {
		f++;
		this.camera.update(dt);

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
			y: body.position.y+ zOffset[body.getHeadDrop()],
			z: offset + zOffset[body.getHeadDrop()],
			vx: Math.random() * 1 - .5,
			vz: vz,
			part: body.getHeadDrop()
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y+ zOffset[body.getChestDrop()],
			z: offset + zOffset[body.getChestDrop()],
			vz: vz,
			vx: Math.random() * 1 - .5,
			part: body.getChestDrop()
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.getLeftArmDrop()],
			z: offset + zOffset[body.getLeftArmDrop()],
			vz: vz,
			vx: Math.random() * 1 - .5,
			part: body.getLeftArmDrop()
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.getRightArmDrop()],
			z: offset + zOffset[body.getRightArmDrop()],
			vz: vz,
			vx: Math.random() * 1 - .5,
			part: body.getRightArmDrop()
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.getLeftLegDrop()],
			z: offset + zOffset[body.getLeftLegDrop()],
			vz: vz,
			vx: Math.random() - .5,
			part: body.getLeftLegDrop()
		});
		bodyParticleSystem.spawnParticle({
			x: body.position.x,
			y: body.position.y + zOffset[body.getRightLegDrop()],
			z: offset + zOffset[body.getRightLegDrop()],
			vz: vz,
			vx: Math.random() - .5,
			part: body.getRightLegDrop()
		});
		bodies.remove(body);
		remove(body);
	}
}
