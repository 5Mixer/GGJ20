package game;

typedef BodyParticle = {
	public var x:Float; // z=0 (floor) position
	public var y:Float;
	public var vz:Float;
	public var z:Float; // How high the particle is off the ground
	public var part:BodyPart;
}

class BodyPartParticles extends bonsai.entity.ParticleSystem<BodyParticle> {
	var animatedSprite:bonsai.render.AnimatedSprite;
	var bodyPartToLayer:Map<BodyPart, Int>;
	override public function new () {
		super(400); // Lot's of body parts
		this.animatedSprite = new bonsai.render.AnimatedSprite();
		this.animatedSprite.registerAnimation("idle", { spriteMap: new bonsai.render.SpriteMap(kha.Assets.images.body1, 32, 32), frames: [0] });
		this.animatedSprite.play("idle");
		bodyPartToLayer = [
			BodyPart.Body => 0,
			BodyPart.Head => 1,
			BodyPart.Leg  => 2,
			BodyPart.Arm  => 3
		];
	}

	override public function update (delta:Float) {
		super.update(delta);
		for (particle in members) {
			if (particle.z >= 0) {
				particle.vz += 10 * delta;
				particle.z -= particle.vz;
			} else {
				particle.vz *= -.4;
				particle.z = 0;
			}
	
		}
	}
	override public function render (graphics:kha.graphics2.Graphics) {
		super.render(graphics);

		for (particle in members) {
			animatedSprite.drawLayers = [bodyPartToLayer[particle.part]];
			animatedSprite.render(graphics, particle.x, particle.y - particle.z);
		}
	}
}
