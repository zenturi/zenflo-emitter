package zenflo.lib;

// import hx.concurrent.Future.FutureResult;
import haxe.ds.Map;
import signals.Signal1;

using StringTools;

/**
 * Todo: This Event emitter implementation is not perfect. It doesn't work for nested listeners. 
 * [NEED A FIX]
 */
// typedef SubjectMap = {subject:Subject<Array<Any>>, once:Bool, handler:(data:Array<Any>) -> Void};

class EventEmitter {

	var subjects:Map<String, Signal1<Array<Any>>> = new Map();

	var listeners:Map<String, Array<(data:Array<Any>) -> Void>> = new Map();

	public function new() {}

	function createName(name:String) {
		return '$ ${name}';
	}

	public function emit(name:String, data:haxe.Rest<Any>) {
		final fnName = createName(name);
		if (this.subjects.exists(fnName)) {
			final x = [for (v in data) v];
			final fs = this.subjects.get(fnName);
			fs.dispatch(x);


		}
	}

	public function on(name:String, handler:(data:Array<Any>) -> Void, once:Bool = false) {
		final fnName = createName(name);
		if (!this.subjects.exists(fnName)) {
			this.subjects.set(fnName, new Signal1());
		}
		
		final fs = this.subjects.get(fnName);
		fs.add(handler, once);
		if(!this.listeners.exists(fnName)) {
			listeners.set(fnName, []);
		}
		listeners.get(fnName).unshift(handler);
	}

	public function once(name:String, handler:(data:Array<Any>) -> Void) {
		return on(name, handler, true);
	}

	public function removeAllListeners() {
		for (k => v in this.listeners) {
			this.subjects.get(k).remove(true);
		}
		this.subjects.clear();
	}

	public function removeListener(name:String, handler:(data:Array<Any>) -> Void) {
		final fnName = createName(name);
		if (this.subjects.exists(fnName)) {
			final fs = this.subjects[fnName];
			fs.remove(handler);
		}
	}

	public function hasSubject(name:String) {
		final fnName = createName(name);
		return this.subjects.exists(fnName);
	}
}
