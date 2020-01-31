package game;

class BodyParticle {
	public var x:Float; // z=0 (floor) position
	public var y:Float;
	public var vz:Float;
	public var z:Float; // How high the particle is off the ground
	public var part:BodyPart;
}

class BodyPartParticles extends bonsai.entity.ParticleSystem<BodyParticle> {
	var animatedSprite:bonsai.render.AnimatedSprite;
	var bodyPartToLayer:Map<BodyPart, Int>;
	override public function new (animatedSprite) {
		super(400); // Lot's of body parts
		this.animatedSprite = animatedSprite;
		bodyPartToLayer = [
			BodyPart.Head => 0,
			BodyPart.Body => 0,
			BodyPart.Arm  => 0,
			BodyPart.Leg  => 0
		];
	}

	override public function update (delta:Float) {
		super.update(delta);
		for (particle in members) {
			if (particle.z > 0) {
				particle.vz += 1 * delta;
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
