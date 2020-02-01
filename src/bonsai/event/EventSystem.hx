package bonsai.event;

class EventSystem<EventType> {
	// var listeners:Map<EventType, Array<()->Void>> = [];
	public function new () {

	}
	public function listen(event:EventType, func: () -> Void) {
		// if (!listeners.exists(event))
			// listeners.set(event, []);
		
		// listeners.get(event).push(func);
	}
	public function dispatch (event:EventType) {
		// if (listeners.exists(event)) {
			// for (listener in listeners.get(event))
				// listener();
		// }
	}
}
