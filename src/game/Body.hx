package game;

enum HeadPart {
	NaturalHeadRight;
	NaturalHeadLeft;
	NaturalHeadDown;
	NaturalHeadUp;
}
enum ChestPart {
	NaturalChest;
}
enum ArmPart {
	NaturalArm;
	Knife;
	Sword;
	Axe;
}
enum LegPart {
	NaturalLeg;
	Boots;
}

class Body extends bonsai.entity.Entity{
	public var head:HeadPart;
	public var chest:ChestPart;
	public var leftArm:ArmPart;
	public var rightArm:ArmPart;
	public var leftLeg:LegPart;
	public var rightLeg:LegPart;

	var headLayers:Map<HeadPart,Int> = [
		HeadPart.NaturalHeadRight => 1,
		HeadPart.NaturalHeadLeft => 2,
		HeadPart.NaturalHeadDown => 3,
		HeadPart.NaturalHeadUp => 4
	];
	var chestLayers:Map<ChestPart,Int> = [
		ChestPart.NaturalChest => 0
	];
	var armLayers:Map<ArmPart,Int> = [
		ArmPart.NaturalArm => 6,
		ArmPart.Knife => 7,
		ArmPart.Sword => 8,
		ArmPart.Axe => 9
	];
	var legLayers:Map<LegPart,Int> = [
		LegPart.NaturalLeg => 5,
		LegPart.Boots => 10
	];
	
	var animatedSprite:bonsai.render.AnimatedSprite;

	override public function new () {
		super();

		position = new kha.math.Vector2(220 * Math.random(), 160*Math.random());

		chest = ChestPart.NaturalChest;
		head = HeadPart.NaturalHeadDown;
		leftArm = ArmPart.Knife;
		rightArm = ArmPart.Sword;
		leftLeg = LegPart.NaturalLeg;
		rightLeg = LegPart.NaturalLeg;

		this.animatedSprite = new bonsai.render.AnimatedSprite();
		this.animatedSprite.registerAnimation("idle", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.bodyParts, 32, 32), frames: [0] });
		this.animatedSprite.play("idle");
	}
	override public function render (graphics:kha.graphics2.Graphics) {
		if (chest == null || head == null || leftLeg == null || rightLeg == null || leftArm == null || rightArm == null) {
			trace("attempted to render a body that lacks part/s");
			return;
		}
		animatedSprite.drawLayers = [chestLayers[chest]];
		animatedSprite.render(graphics, position.x, position.y);
		
		animatedSprite.drawLayers = [headLayers[head]];
		animatedSprite.render(graphics, position.x, position.y);
		
		animatedSprite.drawLayers = [legLayers[leftLeg]];
		animatedSprite.render(graphics, position.x, position.y);
		
		animatedSprite.drawLayers = [legLayers[rightLeg]];
		animatedSprite.render(graphics, position.x + 3, position.y);
		
		animatedSprite.drawLayers = [armLayers[leftArm]];
		animatedSprite.render(graphics, position.x, position.y);

		animatedSprite.drawLayers = [armLayers[rightArm]];
		animatedSprite.render(graphics, position.x + 7, position.y);
	}

	public function getHeadDrop () {
		return BodyPart.NaturalHead;

	}
	public function getChestDrop () {
		return BodyPart.NaturalChest;
	}
	public function getLeftArmDrop () {
		return [
			ArmPart.NaturalArm => BodyPart.NaturalArm,
			ArmPart.Axe => BodyPart.Axe,
			ArmPart.Sword => BodyPart.Sword,
			ArmPart.Knife => BodyPart.Knife
		][leftArm];
	}
	public function getRightArmDrop () {
		return [
			ArmPart.NaturalArm => BodyPart.NaturalArm,
			ArmPart.Axe => BodyPart.Axe,
			ArmPart.Sword => BodyPart.Sword,
			ArmPart.Knife => BodyPart.Knife
		][rightArm];
	}
	public function getLeftLegDrop () {
		return [
			LegPart.NaturalLeg => BodyPart.NaturalLeg,
			LegPart.Boots => BodyPart.Boots
		][leftLeg];
	}
	public function getRightLegDrop () {
		return [
			LegPart.NaturalLeg => BodyPart.NaturalLeg,
			LegPart.Boots => BodyPart.Boots
		][rightLeg];
	}
}
