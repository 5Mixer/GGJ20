package;

import kha.input.KeyCode;

import game.*;
import bonsai.*;

class Main {
	public static var engine:Engine;
	public static function main() {
		#if hotml new hotml.client.Client(); #end

		engine = new Engine();
		engine.start("skull",1200,800,onAssetLoad);
	}
	public static function onAssetLoad () {
		engine.currentScene = new StartScreen(engine);
		//engine.currentScene = new World(engine);
		//engine.currentScene = new WinScreen(engine);
		//engine.currentScene = new LoseScreen(engine);
		//engine.currentScene.add(new Music());
	}
}

class InputBindings {
	public static var left  = [KeyCode.Left,  KeyCode.A];
	public static var right = [KeyCode.Right, KeyCode.D];
	public static var up    = [KeyCode.Up,    KeyCode.W];
	public static var down  = [KeyCode.Down,  KeyCode.S];
}
