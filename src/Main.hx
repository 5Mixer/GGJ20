package;

import kha.input.KeyCode;

import game.*;
import bonsai.*;

class Main {
	public static var engine:Engine;
	public static function main() {
		#if hotml new hotml.client.Client(); #end

		engine = new Engine();
		engine.start(onAssetLoad);
	}
	public static function onAssetLoad () {
		engine.currentScene = new World(engine);
	}
}

class InputBindings {
	public static var left  = [KeyCode.Left,  KeyCode.A];
	public static var right = [KeyCode.Right, KeyCode.D];
	public static var up    = [KeyCode.Up,    KeyCode.W];
	public static var down  = [KeyCode.Down,  KeyCode.S];
}