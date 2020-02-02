//typedef FoliageParticle = {
//	public var x:Float;
//	public var y:Float;
//	public var sprPos:Int;
//} 
//
//class Foliage extends bonsai.entity.ParticleSystem<FoliageParticle> {
//	
//	override public function new(x, y){
//		super()
//		this.spriteMap = new bonsai.render.SpriteMap(kha.Assets.images.tiles, 16, 16);
//		this.x = x;
//		this.y = y;
//	}
//
//	override public function render(graphics:kha.graphics2.Graphics) {
//		super.render(graphcics);
//		this.spriteMap.render(graphics, x, y);	
//	}
//
//}

import kha.Sound;
import kha.audio1.Audio;
import kha.audio1.AudioChannel;
import kha.Assets;

class Music{

	public var sound:Sound;
	public var audioChannel:AudioChannel;

	public function new(){
		sound = Assets.sounds.axe;
		audioChannel = Audio.play(sound,true);
	}

}
