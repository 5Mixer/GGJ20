package bonsai.scene;

import bonsai.render.Transformation;

class Camera {
	public var transformation:Transformation;
	var shakeTransformation:Transformation;
	var shakeDuration = 0.;
	var shakeStrength = 0;
	public var position:kha.math.Vector2;

	public function new () {
		position = new kha.math.Vector2(0,0);
		this.transformation = new Transformation();
		this.transformation.scale = new kha.math.Vector2(2, 2);
		this.shakeTransformation = new Transformation();
	}
	public function update (delta:Float) {
		shakeDuration -= delta;
	}
	public function apply (g:kha.graphics2.Graphics) {
		if (shakeDuration > 0) {
			var strength = Math.random() * shakeStrength;
			var direction = 2 * Math.PI * Math.random();
			shakeTransformation.offset.x = Math.cos(direction) * strength;
			shakeTransformation.offset.y = Math.sin(direction) * strength;
		} else {
			shakeTransformation.offset.x = 0;
			shakeTransformation.offset.y = 0;
		}

		transformation.offset = position.mult(-1);

		shakeTransformation.apply(g);
		transformation.apply(g);
	}
	public function finish (g:kha.graphics2.Graphics) {
		transformation.finish(g);
		shakeTransformation.finish(g);
	}
	public function shake (duration, strength) {
		shakeDuration = duration;
		shakeStrength = strength;

	}

}
