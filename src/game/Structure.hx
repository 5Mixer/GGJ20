package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;

class Structure extends Entity {
	public var width:Int = 100;
	public var height:Int = 100;
	var transformation:Transformation;

	var tiled:bonsai.resource.Tiled;
	var spriteMap:bonsai.render.SpriteMap;
	public var colliders:Array<differ.shapes.Polygon> = [];

	override public function new () {
		super();

		tiled = new bonsai.resource.Tiled(kha.Assets.blobs.castle2_tmx.toString());
		width = tiled.width;
		height = tiled.height;

		for (layerName => layer in tiled.layers){
			if (layerName == "wallsCollide") {
				for (y in 0...width) {
					for (x in 0...height) {
						if (layer.tiles[y][x] != 0)
							colliders.push(differ.shapes.Polygon.rectangle(x*16, y*16,17,17,false));

					}
				}
			}
		}

		spriteMap = new SpriteMap(kha.Assets.images.castleTiles, 16, 16);

		this.transformation = new Transformation();
		this.transformation.offset = new kha.math.Vector2(0,0);
	}

	override public function render (graphics:kha.graphics2.Graphics) {
		this.transformation.apply(graphics);
		for (layerName => layer in tiled.layers){
			for (y in 0...width) {
				for (x in 0...height) {
					spriteMap.render(graphics, x*16, y*16, layer.tiles[y][x] - 1);
				}
			}
		}

		this.transformation.finish(graphics);
	}

	override public function update (dt){
	}
}