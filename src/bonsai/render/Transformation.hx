package bonsai.render;

import kha.math.FastMatrix3;

class Transformation {
	public var offset:kha.math.Vector2;
	public var rotation:Float;
	public var scale:kha.math.Vector2;
	public var origin:kha.math.Vector2;

	public function new () {
		offset = new kha.math.Vector2(0, 0);
		scale = new kha.math.Vector2(1, 1);
		origin = new kha.math.Vector2(0, 0);
	}

	public function apply (graphics:kha.graphics2.Graphics) {
		graphics.pushTransformation(graphics.transformation.multmat(
			FastMatrix3
				.translation(offset.x + origin.x, offset.y + origin.y))
				.multmat(FastMatrix3.scale(scale.x,scale.y))
				.multmat(FastMatrix3.rotation(rotation))
				.multmat(FastMatrix3.translation(-origin.x, -origin.y))
			);
	}

	public function finish (graphics:kha.graphics2.Graphics) {
		graphics.popTransformation();
	}
	public function transformPoint (point:kha.math.Vector2) {
		var matrix = FastMatrix3
				.translation(offset.x + origin.x, offset.y + origin.y)
				.multmat(FastMatrix3.scale(scale.x,scale.y))
				.multmat(FastMatrix3.rotation(rotation))
				.multmat(FastMatrix3.translation(-origin.x, -origin.y))
						.inverse();
		return matrix.multvec(kha.math.FastVector2.fromVector2(point));
	}
	public function untransformPoint (point:kha.math.Vector2) {
		var matrix = FastMatrix3
				.translation(offset.x + origin.x, offset.y + origin.y)
				.multmat(FastMatrix3.scale(scale.x,scale.y))
				.multmat(FastMatrix3.rotation(rotation))
				.multmat(FastMatrix3.translation(-origin.x, -origin.y))
				.inverse();

		return matrix.multvec(kha.math.FastVector2.fromVector2(point));

	}
}
