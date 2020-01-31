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
		bodyAnimatedSprite = new AnimatedSprite();

		this.transformation = new Transformation();
		this.transformation.scale = new kha.math.Vector2(3, 3);
		// add(new TileMap());
		add(new Player(10, 30, engine.input), 1);

		bodyParticleSystem = new BodyPartParticles(bodyAnimatedSprite);
	}
	override public function update (dt:Float) {
		// var dtMultiplier = engine.input.mouseInside ? 1 : .5;
		// super.update(dt * dtMultiplier);
		super.update(dt);
	}
	override public function render (g) {
		transformation.apply(g);
		super.render(g);
		transformation.finish(g);
	}
}
