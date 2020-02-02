package game;

enum Behaviour {
	Idle;
	Chase;
	Return;
}

class Body extends bonsai.entity.Entity{
	public var head:BodyPart;
	public var chest:BodyPart;
	public var leftArm:BodyPart;
	public var rightArm:BodyPart;
	public var leftLeg:BodyPart;
	public var rightLeg:BodyPart;

	public var mohawk:kha.Color;
	public var health = 100;
	public var attackCooldown = 0.;

	public var vz:Float = 0;
	public var z:Float = 0;
	public var vx:Float = 0;
	public var vy:Float = 0;

	public var collider:differ.shapes.Circle;

	public var friendly=true;
	public var enemyBehaviour:Behaviour = Behaviour.Idle;

	public var homePoint:kha.math.Vector2;

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

	var mohawks:Map<BodyPart,Int> = [
		BodyPart.NaturalHeadRight => 11,
		BodyPart.NaturalHeadLeft => 12,
		BodyPart.NaturalHeadDown => 13,
		BodyPart.NaturalHeadUp => 14
	];


	public var animatedSprite:bonsai.render.AnimatedSprite;
	public var targetPosition:kha.math.Vector2;
	var time:Float = 0.;
	var drawnHead:BodyPart;

	override public function new () {
		super();

		position = new kha.math.Vector2(0,0);
		targetPosition = new kha.math.Vector2(0,0);
		homePoint = new kha.math.Vector2(0,0);

		collider = new differ.shapes.Circle(position.x, position.y, 7);

		friendly = true;

		chest = BodyPart.NaturalChest;
		head = BodyPart.NaturalHead;
		leftArm = BodyPart.NaturalArm;
		rightArm = friendly ? BodyPart.Knife : BodyPart.NaturalArm;
		leftLeg = BodyPart.NaturalLeg;
		rightLeg = BodyPart.NaturalLeg;

		this.animatedSprite = new bonsai.render.AnimatedSprite();
		this.animatedSprite.registerAnimation("idle", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.bodyParts2, 32, 32), frames: [0] });
		this.animatedSprite.registerAnimation("attack", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.bodyParts2, 32, 32), frames: [0,1,2] });
		this.animatedSprite.play("idle");
	}
	var speed = 150;
	override public function update (dt:Float) {
		attackCooldown -= dt;
		if (attackCooldown < 0)
			attackCooldown = 0.;

		time+=dt;
		this.animatedSprite.update(dt);
		
		if (!friendly) {
			if (this.enemyBehaviour == Behaviour.Idle) {
				this.targetPosition = this.position.mult(1);
			}
			if (this.enemyBehaviour == Behaviour.Return) {
				this.targetPosition = this.homePoint.mult(1);
			}
		}

		var movement = targetPosition.sub(position).normalized().mult(speed * dt * (friendly ? 1.5 : 1));
		if (targetPosition.sub(position).length > 5) {
			position = position.add(movement);
		}
		if (head == BodyPart.NaturalHead) {
			if (Math.abs(this.vx + movement.x) > Math.abs(this.vy+movement.y)) {
				if (vx+movement.x > 0)
					drawnHead = BodyPart.NaturalHeadRight;
				else
					drawnHead = BodyPart.NaturalHeadLeft;
			}else{
				if (vy+movement.y > 0)
					drawnHead = BodyPart.NaturalHeadDown;
				else
					drawnHead = BodyPart.NaturalHeadUp;
			}

		}

		position.x += vx;
		position.y += vy;

		vx *= .9;
		vy *= .9;

		var height = 5;
		z = Math.abs(Math.sin((time + (friendly ? 0 : 2))*10))*height;


		if (Math.abs(vz) < .1 && z < 1 && Math.abs(vx) < .1){
			// vz = -3;
			// z = 0;
		}else{
			if (z >= 0) {
				// vz += 10 * dt;
				// z -= vz;
			} else {
				// vz *= -.4;
				// z = 0;
				// vx *= .6;
			}
		}


		collider.x = position.x+8;
		collider.y = position.y+24;

		super.update(dt);
	}

	public function getItemDamage(bodyPart) {
		if (bodyPart == BodyPart.NaturalArm) return 5;
		if (bodyPart == BodyPart.Knife) return 10;
		if (bodyPart == BodyPart.Sword) return 15;
		if (bodyPart == BodyPart.Axe) return 20;
		return 1;
	}
	public function getDamage () {
		return getItemDamage(leftArm) + getItemDamage(rightArm);
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		if (chest == null || drawnHead == null || leftLeg == null || rightLeg == null || leftArm == null || rightArm == null) {
			trace("attempted to render a body that lacks part/s");
			return;
		}
		animatedSprite.drawLayers = [bodyLayers[chest]];
		animatedSprite.render(graphics, position.x, position.y-z);

		animatedSprite.drawLayers = [bodyLayers[drawnHead]];
		animatedSprite.render(graphics, position.x, position.y-z);

		animatedSprite.drawLayers = [mohawks[drawnHead]];
		graphics.color = friendly ? kha.Color.fromBytes(41,196,77) : kha.Color.Red;
		animatedSprite.render(graphics, position.x, position.y-z);
		graphics.color = kha.Color.White;

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
