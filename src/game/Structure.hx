package game;

import bonsai.scene.*;
import bonsai.render.*;
import bonsai.entity.*;

class Structure extends Entity {
	public var width:Int = 100;
	public var height:Int = 100;
	var transformation:Transformation;
	public var tier = 0;

	var tiled:bonsai.resource.Tiled;
	var spriteMap:bonsai.render.SpriteMap;
	public var colliders:Array<differ.shapes.Polygon> = [];
	public var spawnRegions:Array<{x:Int,y:Int,width:Int,height:Int}> = [];

	override public function new (tmx) {
		super();

		tiled = new bonsai.resource.Tiled(tmx);
		width = tiled.width;
		height = tiled.height;

		for (polygon in tiled.polygons) {
			// colliders.push(new differ.shapes.Polygon(0,0,
			// 	Lambda.map(polygon, function (p) {
			// 		return new differ.math.Vector(p.x, p.y);
			// 	}))
			// );
		}
		for (rectangle in tiled.rectangles) {
			if (rectangle.layer == "collide") {
				colliders.push(differ.shapes.Polygon.rectangle(rectangle.x+position.x,rectangle.y+position.y,rectangle.width,rectangle.height,false));
			}
			if (rectangle.layer == "spawn") {
				spawnRegions.push({x:rectangle.x,y:rectangle.y,width:rectangle.width, height: rectangle.height});
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
					spriteMap.render(graphics, position.x + x*16, position.y + y*16, layer.tiles[y][x] - 1);
				}
			}
		}

		this.transformation.finish(graphics);
	}

	override public function update (dt){
	}
}
