package game;

typedef BodyParticle = {
	public var x:Float; // z=0 (floor) position
	public var y:Float;
	public var vz:Float;
	public var vx:Float;
	public var z:Float; // How high the particle is off the ground
	public var part:BodyPart;
}

class BodyPartParticles extends bonsai.entity.ParticleSystem<BodyParticle> {
	var animatedSprite:bonsai.render.AnimatedSprite;
	var bodyPartToLayer:Map<BodyPart, Int>;
	override public function new () {
		super(400); // Lot's of body parts
		this.animatedSprite = new bonsai.render.AnimatedSprite();
		this.animatedSprite.registerAnimation("idle", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.bodyParts2, 32, 32), frames: [0] });
		this.animatedSprite.play("idle");
		bodyPartToLayer = [
			BodyPart.NaturalChest => 0,
			BodyPart.NaturalHead  => 3,
			BodyPart.NaturalLeg   => 5,
			BodyPart.NaturalArm   => 6,
			BodyPart.Axe          => 9,
			BodyPart.Sword        => 8,
			BodyPart.Knife        => 7,
			BodyPart.Boots        => 10
		];
	}

	override public function update (delta:Float) {
		super.update(delta);
		for (particle in members) {
			if (particle == null)
				continue;

			if (Math.abs(particle.vz) < .1 && particle.z < 1 && Math.abs(particle.vx) < .1){
				particle.vz = 0;
				particle.vx = 0;
				particle.z = 0;
				particle.x = Math.round(particle.x);
				particle.y = Math.round(particle.y);
				continue;
			}
			if (particle.z >= 0) {
				particle.vz += 10 * delta;
				particle.z -= particle.vz;
				particle.x += particle.vx;
			} else {
				particle.vz *= -.4;
				particle.z = 0;
				particle.vx *= .6;
			}
	
		}
	}
	override public function render (graphics:kha.graphics2.Graphics) {
		super.render(graphics);

		for (particle in members) {
			if (particle == null)
				continue;
			animatedSprite.drawLayers = [bodyPartToLayer[particle.part]];
			animatedSprite.render(graphics, particle.x, particle.y - particle.z);
		}
	}
}
