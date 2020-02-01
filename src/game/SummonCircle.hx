package game;

import bonsai.render.AnimatedSprite;
import bonsai.render.SpriteMap;

class SummonCircle extends bonsai.entity.Entity {
	public var width:Int = 32;
	public var height:Int = 32;
	var animation:AnimatedSprite;

	override public function new () {
		super();

		this.animation = new AnimatedSprite();
		this.animation.registerAnimation("idle", {
			spriteMap: new SpriteMap(kha.Assets.images.summonCircle, this.width, this.height),
			frames:[0,1]
		});
		this.animation.registerAnimation("summon", {
			spriteMap: new SpriteMap(kha.Assets.images.summonCircle, this.width, this.height),
			frames:[0]
		});
		this.animation.play("idle");
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		this.animation.render(graphics, 0, 0);
	}

	override public function update (dt:Float){
		this.animation.update(dt);
		super.update(dt);
	}
}
