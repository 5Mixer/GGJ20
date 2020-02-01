package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;
import hxnoise.Perlin;

class NoiseTilemap extends Entity {
	public var width:Int = 300;
	public var height:Int = 300;

	var spriteMap:bonsai.render.SpriteMap;
	public var colliders:Array<differ.shapes.Polygon> = [];

	var perlin : Perlin;
	var seed = 0.;
	var seaLevel = -.75;

	override public function new () {
		super();

		spriteMap = new SpriteMap(kha.Assets.images.tiles, 16, 16);

		perlin = new Perlin();
		for(x in 0...width)
		{
		}
		seed = Math.random() * 30000;
	}

	public function findSpawn () {
		var spawnx = 2;
		var spawny = 150;
		while (getTile(spawnx, spawny) < 1 && spawnx < 150) {
			spawnx++;
		}
		spawnx += 4;
		return new kha.math.Vector2(spawnx * 16, spawny*16);
	}
	public function getTile (x,y) {
		var offset = Math.max(0,(Math.pow(x-150,2)+Math.pow(y-150, 2))/5000 + seaLevel);
		var c = Math.min(5,perlin.OctavePerlin(x / 16, y / 16, seed, 5, 0.5, 0.25)*8 - offset);

		return Math.round(c) - 1;
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		for (y in 0...width) {
			for (x in 0...height) {
				spriteMap.renderCell(graphics, x*16, y*16, 0,getTile(x,y));
			}
		}

	}

	override public function update (dt){
	}
}

