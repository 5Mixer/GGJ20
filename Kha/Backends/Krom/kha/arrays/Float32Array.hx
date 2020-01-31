package kha.arrays;

import kha.FastFloat;

abstract Float32Array(js.lib.Float32Array) {
	public inline function new(elements: Int) {
		this = new js.lib.Float32Array(elements);
	}

	public var buffer(get, never): js.lib.ArrayBuffer;

	inline function get_buffer(): js.lib.ArrayBuffer {
		return this.buffer;
	}

	public var length(get, never): Int;

	inline function get_length(): Int {
		return this.length;
	}

	@:arrayAccess
	public inline function set(index: Int, value: FastFloat): FastFloat {
		return this[index] = value;
	}

	@:arrayAccess
	public inline function get(index: Int): FastFloat {
		return this[index];
	}

	public inline function data(): js.lib.Float32Array {
		return this;
	}

	public inline function subarray(start: Int, ?end: Int): Float32Array {
		return cast this.subarray(start, end);
	}
}