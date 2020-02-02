package bonsai.resource;

typedef TiledEntity = {
	var x:Int;
	var y:Int;
	var properties:Map<String,String>;
}
typedef TiledLayer = {
	var tiles:Array<Array<Int>>;
}

class Tiled {
	public var width:Int;
	public var height:Int;
	public var layers:Map<String,TiledLayer> = [];
	public var entities:Array<TiledEntity> = [];
	public var polygons:Array<Array<kha.math.Vector2>> = [];
	public var rectangles:Array<{x:Int,y:Int,width:Int,height:Int}> = [];

	public function new (data:String) {
		loadRawData(data);
	}
	function loadRawData(raw) {
		var data = haxe.xml.Parser.parse(raw);

		var map = data.elementsNamed("map").next();
		width = Std.parseInt(map.get("width"));
		height = Std.parseInt(map.get("height"));

		for (layer in map.elementsNamed("layer")){
			var n = 0;
			var rawLayerTiles = layer.elementsNamed("data").next().firstChild().nodeValue.split(",");
			var layerTiles:Array<Array<Int>> = [];
			for (tile in rawLayerTiles) {
				var x = n%width;
				var y = Math.floor(n/width);

				// Load individual tile
				if (layerTiles[y] == null)
					layerTiles[y] = [];

				layerTiles[y][x] = Std.parseInt(tile);

				n++;
			}
			layers.set(layer.get("name"), {
				tiles: layerTiles
			});
		}

		for (objectlayer in map.elementsNamed("objectgroup")){
			var layerName = objectlayer.get("name");
			for (object in objectlayer.elements()){
				var properties = new Map<String,String>();
				for (element in object.elements()){
					if (element.nodeName == "properties"){
						for (property in element.elements()){
							properties.set(property.get("name"),property.get("value"));
						}
					}
				}
				var polygons = object.elementsNamed("polygon");
				var polygonPoints:Array<kha.math.Vector2> = [];

				var xOffset = Math.floor(Std.parseInt(object.get("x")));
				var yOffset = Math.floor(Std.parseInt(object.get("y")));
				
				rectangles.push({x:Std.parseInt(object.get("x")), y:Std.parseInt(object.get("y")), width: Std.parseInt(object.get("width")), height: Std.parseInt(object.get("height")) });

				for (polygon in polygons) {
					var rawPolygonData = polygon.get("points");
					var points = Lambda.map(
							rawPolygonData.split(" "), 
							function(s) {
								return new kha.math.Vector2(
										Std.parseInt(s.split(",")[0]) + xOffset, 
										Std.parseInt(s.split(",")[1]) + yOffset
										); 
							});
					polygonPoints = points;
				}
				// this.polygons.push(polygonPoints);
				// entities.push({
				// 	x: Math.floor(Std.parseInt(object.get("x"))),
				// 	y: Math.floor(Std.parseInt(object.get("y"))),
				// 	properties: properties
				// });
			}
		}
	}
}
