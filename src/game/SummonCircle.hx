package game;

import bonsai.render.AnimatedSprite;
import bonsai.render.SpriteMap;

class SummonCircle extends bonsai.entity.Entity {
	public var width:Int = 64;
	public var height:Int = 64;
	var animation:AnimatedSprite;

	override public function new () {
		super();

		this.animation = new AnimatedSprite();
		this.animation.drawLayers = [0,1,2];
		this.animation.registerAnimation("idle", {
			spriteMap: new SpriteMap(kha.Assets.images.satanicCircle, this.width, this.height),
			frames:[0,1]
		});
		this.animation.registerAnimation("summon", {
			spriteMap: new SpriteMap(kha.Assets.images.satanicCircle, this.width, this.height),
			frames:[0,1,2,3]
		});
		this.animation.playOnce("summon");
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		this.animation.render(graphics, 0, 0);
	}

	override public function update (dt:Float){
		this.animation.update(dt);
		super.update(dt);
	}
}
