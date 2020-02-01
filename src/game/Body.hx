package game;


class Body extends bonsai.entity.Entity{
	public var head:BodyPart;
	public var chest:BodyPart;
	public var leftArm:BodyPart;
	public var rightArm:BodyPart;
	public var leftLeg:BodyPart;
	public var rightLeg:BodyPart;

	public var vz:Float = 0;
	public var z:Float = 0;
	public var vx:Float = 0;

	var bodyLayers:Map<BodyPart,Int> = [
		BodyPart.NaturalHeadRight => 1,
		BodyPart.NaturalHeadLeft => 2,
		BodyPart.NaturalHeadDown => 3,
		BodyPart.NaturalHeadUp => 4,
		BodyPart.NaturalChest => 0,
		BodyPart.NaturalArm => 6,
		BodyPart.Knife => 7,
		BodyPart.Sword => 8,
		BodyPart.Axe => 9,
		BodyPart.NaturalLeg => 5,
		BodyPart.Boots => 10
	];

	var animatedSprite:bonsai.render.AnimatedSprite;

	override public function new () {
		super();

		position = new kha.math.Vector2(-160 + 320 * Math.random(), -110 + 220*Math.random());

		chest = BodyPart.NaturalChest;
		head = BodyPart.NaturalHeadDown;
		leftArm = BodyPart.Knife;
		rightArm = BodyPart.Sword;
		leftLeg = BodyPart.NaturalLeg;
		rightLeg = BodyPart.NaturalLeg;

		this.animatedSprite = new bonsai.render.AnimatedSprite();
		this.animatedSprite.registerAnimation("idle", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.bodyParts2, 32, 32), frames: [0] });
		this.animatedSprite.play("idle");
	}
	override public function update (dt:Float) {

		if (Math.abs(vz) < .1 && z < 1 && Math.abs(vx) < .1){
			vz = 0;
			vx = 0;
			z = 0;
			position.x = Math.round(position.x);
		}else{
			if (z >= 0) {
				vz += 10 * dt;
				z -= vz;
				position.x += vx;
			} else {
				vz *= -.4;
				z = 0;
				vx *= .6;
			}
		}

		super.update(dt);
	}
	override public function render (graphics:kha.graphics2.Graphics) {
		if (chest == null || head == null || leftLeg == null || rightLeg == null || leftArm == null || rightArm == null) {
			trace("attempted to render a body that lacks part/s");
			return;
		}
		animatedSprite.drawLayers = [bodyLayers[chest]];
		animatedSprite.render(graphics, position.x, position.y-z);

		animatedSprite.drawLayers = [bodyLayers[head]];
		animatedSprite.render(graphics, position.x, position.y-z);

		animatedSprite.drawLayers = [bodyLayers[leftLeg]];
		animatedSprite.render(graphics, position.x, position.y-z);

		animatedSprite.drawLayers = [bodyLayers[rightLeg]];
		animatedSprite.render(graphics, position.x + 5, position.y-z);

		animatedSprite.drawLayers = [bodyLayers[leftArm]];
		animatedSprite.render(graphics, position.x, position.y-z);

		animatedSprite.drawLayers = [bodyLayers[rightArm]];
		animatedSprite.render(graphics, position.x + 7, position.y-z);
	}
}
