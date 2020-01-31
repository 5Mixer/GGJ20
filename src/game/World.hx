package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;

class World extends Scene {
	var transformation:Transformation;
	var bodyParticleSystem:BodyPartParticles;

	var bodyAnimatedSprite:AnimatedSprite;
	var bodySpriteMap:SpriteMap;

	override public function new (engine) {
		super("World Scene",engine);

		// bodySpriteMap = new SpriteMap(kha.Assets.);
		this.transformation = new Transformation();
		this.transformation.scale = new kha.math.Vector2(3, 3);
		// add(new TileMap());
		// add(new Player(10, 30, engine.input), 1);

		bodyParticleSystem = new BodyPartParticles();
		bodyParticleSystem.poolMaximum = 5;
		add(bodyParticleSystem);

		add(new Body());
	}
	var f = 0;
	override public function update (dt:Float) {
		f++;
		// var dtMultiplier = engine.input.mouseInside ? 1 : .5;
		// super.update(dt * dtMultiplier);
		super.update(dt);
		if (f%40 == 0)
			bodyParticleSystem.spawnParticle({
				x: Math.random() * 230,
				y: Math.random() * 230,
				z: 16,
				vz: -.7,
				part: BodyPart.createByIndex(Math.floor(Math.random() * 4))
			});
	}
	override public function render (g) {
		transformation.apply(g);
		super.render(g);
		transformation.finish(g);
	}
}
