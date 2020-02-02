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

	public var baseTiles:Array<Array<Int>> = [];
	public var tilesByBiome:Array<Array<{x:Int,y:Int}>> = [[],[],[],[],[],[]];

	var perlin : Perlin;
	var seed = 0.;
	var seaLevel = -.75;

	override public function new () {
		super();

		spriteMap = new SpriteMap(kha.Assets.images.tiles, 16, 16);

		perlin = new Perlin();
		seed = Math.random() * 30000;
		for (y in 0...width) {
			baseTiles[y] = [];
			for (x in 0...height) {
				baseTiles[y][x] = getTile(x,y);
				tilesByBiome[getTile(x,y)].push({x:x,y:y});
			}
		}
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
	public function getTile (x,y):Int {
		var offset = Math.max(0,(Math.pow(x-150,2)+Math.pow(y-150, 2))/5000 + seaLevel);
		var c = Math.min(5,perlin.OctavePerlin(x / 16, y / 16, seed, 5, 0.5, 0.25)*8 - offset);

		return Math.round(Math.max(0,Math.min(5,c - 1)));
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		for (y in 0...width) {
			for (x in 0...height) {
				spriteMap.renderCell(graphics, x*16, y*16, 0,baseTiles[y][x]);
			}
		}

	}

	override public function update (dt){
	}
}

