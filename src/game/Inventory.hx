package game;

class Inventory extends bonsai.entity.Entity {
	public var items:Map<BodyPart, Int> = [];

	override public function new () {
		items = [for (part in BodyPart.createAll()) part => 0 ];
		super();
	}

	override public function render(graphics:kha.graphics2.Graphics) {
		var yOffset = 0;
		graphics.font = kha.Assets.fonts.KenneyMini;
		graphics.fontSize = 10;
		for (item => quantity in items) {
			if (quantity > 0) {
				graphics.drawString('$quantity $item', 5, yOffset * 10);

				yOffset++;
			}
		}
	}

}
