package game;

import bonsai.render.AnimatedSprite;
import bonsai.render.SpriteMap;
import game.BodyPart.BodyPart;

class SummonCircle extends bonsai.entity.Entity {
	public var width:Int = 64;
	public var height:Int = 64;
	public var animation:AnimatedSprite;

	public var head:BodyPart;
	public var chest:BodyPart;
	public var leftArm:BodyPart;
	public var rightArm:BodyPart;
	public var leftLeg:BodyPart;
	public var rightLeg:BodyPart;

	var armParts = [BodyPart.NaturalArm, BodyPart.Axe, BodyPart.Sword, BodyPart.Knife];
	var legParts = [BodyPart.NaturalLeg, BodyPart.Boots];
	var chestParts = [BodyPart.NaturalChest];
	var headParts = [BodyPart.NaturalHead];

	var animatedSprite:bonsai.render.AnimatedSprite;

	var bodyLayers:Map<BodyPart,Int> = [
	];

	override public function new () {
		super();

		bodyLayers = [
			BodyPart.NaturalChest => 0,
			BodyPart.NaturalHead => 3,
			BodyPart.NaturalHeadUp => 3,
			BodyPart.NaturalHeadDown => 2,
			BodyPart.NaturalHeadLeft => 1,
			BodyPart.NaturalHeadRight => 0,
			BodyPart.NaturalLeg => 5,
			BodyPart.NaturalArm => 6,
			BodyPart.Knife => 7,
			BodyPart.Sword => 8,
			BodyPart.Axe => 9,
			BodyPart.Boots => 10
		];

		this.animation = new AnimatedSprite();
		this.animation.drawLayers = [0,1,2];
		this.animation.registerAnimation("idle", {
			spriteMap: new SpriteMap(kha.Assets.images.satanicCircle, this.width, this.height),
			frames:[0,4]
		});
		this.animation.registerAnimation("summon", {
			spriteMap: new SpriteMap(kha.Assets.images.satanicCircle, this.width, this.height),
			frames:[0,1,2,3,4]
		});
		this.animation.play("summon");

		this.animatedSprite = new bonsai.render.AnimatedSprite();
		this.animatedSprite.registerAnimation("idle", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.bodyParts2, 32, 32), frames: [0] });
		this.animatedSprite.play("idle");
	}
	
	public function isComplete () {
		return head != null && chest != null && leftArm != null && rightArm != null && leftLeg != null && rightLeg != null;
	}
	public function getBody () {
		var body = new Body();
		if (head == BodyPart.NaturalHead)
			head = BodyPart.NaturalHeadDown;
		
		body.head = BodyPart.createByName(head.getName());
		body.chest =  BodyPart.createByName(chest.getName());
		body.leftArm = BodyPart.createByName(leftArm.getName());
		body.rightArm = BodyPart.createByName(rightArm.getName());
		body.leftLeg = BodyPart.createByName(leftLeg.getName());
		body.rightLeg = BodyPart.createByName(rightLeg.getName());
		return body;
	}
	public function clear () {
		head = null;
		chest = null;
		leftArm = null;
		rightArm = null;
		leftLeg = null;
		rightLeg = null;
	}

	public function addPart (part:BodyPart) {
		if (armParts.indexOf(part) != -1) {
			if (leftArm == null) {
				leftArm = part;
				return true;
			}
			if (rightArm == null) {
				rightArm = part;
				return true;
			}
		}
		if (legParts.indexOf(part) != -1) {
			if (leftLeg == null) {
				leftLeg = part;
				return true;
			}
			if (rightLeg == null) {
				rightLeg = part;
				return true;
			}
		}
		if (headParts.indexOf(part) != -1) {
			if (head == null) {
				head = part;
				return true;
			}
		}
		if (chestParts.indexOf(part) != -1) {
			if (chest == null) {
				chest = part;
				return true;
			}
		}
		return false;
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		this.animation.render(graphics, 0, 0);

		if (chest != null) {
			animatedSprite.drawLayers = [bodyLayers[chest]];
			animatedSprite.render(graphics, position.x, position.y);
		}

		if (head != null) {
			animatedSprite.drawLayers = [bodyLayers[head]];
			animatedSprite.render(graphics, position.x, position.y);
		}

		if (leftLeg != null) {
			animatedSprite.drawLayers = [bodyLayers[leftLeg]];
			animatedSprite.render(graphics, position.x, position.y);
		}

		if (rightLeg != null) {
			animatedSprite.drawLayers = [bodyLayers[rightLeg]];
			animatedSprite.render(graphics, position.x + 5, position.y);
		}

		if (leftArm != null) {
			animatedSprite.drawLayers = [bodyLayers[leftArm]];
			animatedSprite.render(graphics, position.x, position.y);
		}

		if (rightArm != null) {
			animatedSprite.drawLayers = [bodyLayers[rightArm]];
			animatedSprite.render(graphics, position.x + 7, position.y);
		}
	}

	override public function update (dt:Float){
		this.animation.update(dt);
		super.update(dt);
	}
}
