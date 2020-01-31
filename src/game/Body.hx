package game;

enum HeadPart {
	NaturalHead;
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
		HeadPart.NaturalHead => 0
	];
	var chestLayers:Map<ChestPart,Int> = [
		ChestPart.NaturalChest => 0
	];
	var armLayers:Map<ArmPart,Int> = [
		ArmPart.NaturalArm => 0,
		ArmPart.Knife => 0,
		ArmPart.Sword => 0,
		ArmPart.Axe => 0
	];
	var legLayers:Map<LegPart,Int> = [
		LegPart.NaturalLeg => 0,
		LegPart.Boots => 0
	];
	
	var animatedSprite:bonsai.render.AnimatedSprite;

	override public function new () {
		super();

		position = new kha.math.Vector2();

		chest = ChestPart.NaturalChest;
		head = HeadPart.NaturalHead;
		leftArm = ArmPart.NaturalArm;
		rightArm = ArmPart.NaturalArm;
		leftLeg = LegPart.NaturalLeg;
		rightLeg = LegPart.NaturalLeg;

		this.animatedSprite = new bonsai.render.AnimatedSprite();
		this.animatedSprite.registerAnimation("idle", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.body1, 32, 32), frames: [0] });
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
		animatedSprite.render(graphics, position.x + 7, position.y);
		
		animatedSprite.drawLayers = [armLayers[leftArm]];
		animatedSprite.render(graphics, position.x, position.y);

		animatedSprite.drawLayers = [armLayers[rightArm]];
		animatedSprite.render(graphics, position.x + 7, position.y);
	}
}
