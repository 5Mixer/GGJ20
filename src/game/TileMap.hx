package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;

class TileMap extends Entity {
	public var width:Int = 100;
	public var height:Int = 100;
	var transformation:Transformation;
	var tiles:Array<Array<Int>> = [];

	var tiled:bonsai.resource.Tiled;
	var spriteMap:bonsai.render.SpriteMap;

	override public function new () {
		super();

		tiled = new bonsai.resource.Tiled(kha.Assets.blobs.map_tmx.toString());
		trace(tiled.tiles);
		width = tiled.width;
		height = tiled.height;
		width = 100;
		height = 100;

		spriteMap = new SpriteMap(kha.Assets.images.tiles, 16, 16);

		this.transformation = new Transformation();
		this.transformation.offset = new kha.math.Vector2(0,0);
		this.transformation.origin = new kha.math.Vector2(0,0);
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		this.transformation.apply(graphics);
		
		for (y in 0...width) {
			for (x in 0...height) {
				spriteMap.render(graphics, x*16, y*16, tiled.tiles[y][x] - 1);
			}
		}

		this.transformation.finish(graphics);
	}

	override public function update (dt){
	}
}
