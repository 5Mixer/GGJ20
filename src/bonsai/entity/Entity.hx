package bonsai.entity;

class Entity {
	public var position:kha.math.Vector2;
	public var active = true;
	public var visible = true;

	public function new () {
		position = new kha.math.Vector2();
	}
	public function render (graphics:kha.graphics2.Graphics) {

	}
	public function update (dt) {

	}
}
