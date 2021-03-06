package bonsai.render;

typedef Animation = {
	var frames: Array<Int>;
	var spriteMap: bonsai.render.SpriteMap;
}

class AnimatedSprite {
	var animations:Map<String, Animation>;
	public var drawLayers:Array<Int>;
	var playing:String;
	var frame:Int;

	var frameTime = .1;
	var timeUntilNextFrame = .1;

	var looping = true;

	public function new () {
		animations = new Map<String, Animation>();
		drawLayers = [0];
	}
	public function registerAnimation (identifier:String, animation:Animation) {
		animations.set(identifier, animation);
	}
	public function playOnce (identifier:String) {
		play(identifier);
		looping = false;
	}
	public function play (identifier:String) {
		if (playing == identifier)
			return;
		if (!animations.exists(identifier)){
			trace('Attempted to play animation $identifier, which isn\'t registered');
			return;
		}
		playing = identifier;
		frame = 0;
		timeUntilNextFrame = frameTime;
	}
	public function update (dt:Float) {
		timeUntilNextFrame -= dt;
		if (timeUntilNextFrame <= 0) {
			timeUntilNextFrame = frameTime;
			if (frame >= animations.get(playing).frames.length - 1){
				if (looping)
					frame = 0;
				else
					frame-=1; // NOTE: THIS CAUSES FINAL 2 FRAME PULSING
			}else{
				frame++;
			}
		}
	}
	public function render (graphics:kha.graphics2.Graphics, x, y) {
		var currentAnimation = animations.get(playing);
		if (currentAnimation == null)
			return;
		var currentFrame = currentAnimation.frames[frame];
		if (drawLayers == null || drawLayers == [])
			trace("Null layers object");
		for (layer in drawLayers)
			currentAnimation.spriteMap.renderCell(graphics, x, y, currentFrame, layer);
	}
}
