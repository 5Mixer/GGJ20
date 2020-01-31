package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;

class World extends Scene {
	var transformation:Transformation;
	var bodyParticleSystem:BodyPartParticles;

	var bodyAnimatedSprite:AnimatedSprite;
	var bodySpriteMap:SpriteMap;

	var bodies:Array<Body> = [];

	override public function new (engine) {
		super("World Scene",engine);

		// bodySpriteMap = new SpriteMap(kha.Assets.);
		this.transformation = new Transformation();
		this.transformation.scale = new kha.math.Vector2(.11, .1);
		add(new TileMap());
		// add(new Player(10, 30, engine.input), 1);

		bodyParticleSystem = new BodyPartParticles();
		bodyParticleSystem.poolMaximum = 6000;
		add(bodyParticleSystem);

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
		// var dtMultiplier = engine.input.mouseInside ? 1 : .5;
		// super.update(dt * dtMultiplier);
		super.update(dt);
		if (f > 100){
			for (body in bodies) {
				if (Math.sqrt(Math.pow(body.position.x,2) + Math.pow(body.position.y,2)) < (f - 100)) {
					explodeBody(body);
				}
			}
		}
		bodyParticleSystem.members.sort(function (a,b) {
			return a.y - b.y > 0 ? 1 : -1;
		});

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
		transformation.apply(g);
		super.render(g);
		transformation.finish(g);
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
