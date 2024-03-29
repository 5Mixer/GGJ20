/*
 * Copyright (C)2005-2019 Haxe Foundation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

package cpp.cppia;

class Host {
	#if utf16
	public static function run(source:haxe.io.Bytes) {
		var module = Module.fromData(source.getData());
		module.boot();
		module.run();
	}
	#else
	public static function run(source:String) {
		var module = Module.fromString(source);
		module.boot();
		module.run();
	}
	#end

	@:native("hx::EnableJit")
	extern public static function enableJit(enable:Bool):Void;

	public static function runFile(filename:String) {
		var source = sys.io.File.getBytes(filename);
		var module = Module.fromData(source.getData());
		module.boot();
		module.run();
	}

	public static function main() {
		var args = Sys.args();
		if (args.remove("-jit"))
			enableJit(true);

		var script = args[0];

		#if (!scriptable && !doc_gen)
		#error "Please define scriptable to use cppia"
		#end
		if (script == null) {
			Sys.println("Usage : Cppia scriptname");
		} else {
			runFile(script);
		}
	}
}
