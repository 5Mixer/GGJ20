package game;

class Inventory extends bonsai.entity.Entity {
	public var items:Map<BodyPart, Int> = [];

	override public function new () {
		items = [for (part in BodyPart.createAll()) part => 0 ];
		super();
	}

	public function getItemClicked(position:kha.math.Vector2):BodyPart {
		if (position.x < 250) {
			var yOffset = 0;
			for (item => quantity in items) {
				if (quantity > 0) {
					if (position.y > yOffset * 40 - 2 && position.y < yOffset*40-2 + 34) 
						return item;
					yOffset++;
				}
			}
		}
		return null;
	}

	override public function render(graphics:kha.graphics2.Graphics) {
		var yOffset = 0;
		graphics.font = kha.Assets.fonts.KenneyMini;
		graphics.fontSize = 30;

		var total = 0;
		for (item => quantity in items)
			if (quantity > 0)
				total++;

		graphics.color = kha.Color.fromBytes(26,24,23);
		graphics.fillRect(3, 3, 250, total * 40);
		graphics.color = kha.Color.White;

		for (item => quantity in items) {
			if (quantity > 0) {
				graphics.color = kha.Color.fromBytes(36,34,33);
				graphics.fillRect(3, yOffset * 40 - 2, 250, 34);
				graphics.color = kha.Color.White;
				graphics.drawString('$quantity', 5, yOffset * 40);
				graphics.drawString('$item', 70, yOffset * 40);

				yOffset++;
			}
		}
	}

}
