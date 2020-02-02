package game;

import Main;
import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;
import bonsai.input.Input;

class StartScreen extends Scene {

	var input:Input;

	override public function new(engine){
		super("Start Screen", engine);
		this.input = engine.input;	
	}

	override public function render(g:kha.graphics2.Graphics){
		g.color = kha.Color.fromBytes(40, 0, 0);
		g.fillRect(0,0,10000,10000);
		g.color = kha.Color.fromBytes(255, 255, 255);
		g.font = kha.Assets.fonts.KenneyMiniSquare;
		g.fontSize = 100;
		g.drawString("Press A to start.", 25, 200);
		g.fontSize = 60;
		g.drawString("Skullonator", 25, 100);
		super.render(g);
	}

	override public function update(dt){
		if (input.isAnyKeyDown(InputBindings.left))
			this.engine.currentScene = new World(this.engine);
	}

}
