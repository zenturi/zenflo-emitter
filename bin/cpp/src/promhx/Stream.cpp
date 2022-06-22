#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_Stream
#include <promhx/Stream.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_43682c417a6d3d17_19_new,"promhx.Stream","new",0x42e89290,"promhx.Stream.new","promhx/Stream.hx",19,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_86_then,"promhx.Stream","then",0x4c912aad,"promhx.Stream.then","promhx/Stream.hx",86,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_81_then,"promhx.Stream","then",0x4c912aad,"promhx.Stream.then","promhx/Stream.hx",81,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_83_then,"promhx.Stream","then",0x4c912aad,"promhx.Stream.then","promhx/Stream.hx",83,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_91_detachStream,"promhx.Stream","detachStream",0x26739e03,"promhx.Stream.detachStream","promhx/Stream.hx",91,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_143_first,"promhx.Stream","first",0xa38b2660,"promhx.Stream.first","promhx/Stream.hx",143,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_141_first,"promhx.Stream","first",0xa38b2660,"promhx.Stream.first","promhx/Stream.hx",141,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_148_handleResolve,"promhx.Stream","handleResolve",0xfa645a54,"promhx.Stream.handleResolve","promhx/Stream.hx",148,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_155_pause,"promhx.Stream","pause",0x60458526,"promhx.Stream.pause","promhx/Stream.hx",155,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_163_pipe,"promhx.Stream","pipe",0x49ed1bfe,"promhx.Stream.pipe","promhx/Stream.hx",163,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_160_pipe,"promhx.Stream","pipe",0x49ed1bfe,"promhx.Stream.pipe","promhx/Stream.hx",160,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_162_pipe,"promhx.Stream","pipe",0x49ed1bfe,"promhx.Stream.pipe","promhx/Stream.hx",162,0x5cb766bf)
static const bool _hx_array_data_cbf04a9e_15[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_172_errorPipe,"promhx.Stream","errorPipe",0xea58f646,"promhx.Stream.errorPipe","promhx/Stream.hx",172,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_178_errorPipe,"promhx.Stream","errorPipe",0xea58f646,"promhx.Stream.errorPipe","promhx/Stream.hx",178,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_170_errorPipe,"promhx.Stream","errorPipe",0xea58f646,"promhx.Stream.errorPipe","promhx/Stream.hx",170,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_187_handleEnd,"promhx.Stream","handleEnd",0x23ef7743,"promhx.Stream.handleEnd","promhx/Stream.hx",187,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_198_end,"promhx.Stream","end",0x42e1c60b,"promhx.Stream.end","promhx/Stream.hx",198,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_204_endThen,"promhx.Stream","endThen",0xab7a5688,"promhx.Stream.endThen","promhx/Stream.hx",204,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_215_filter,"promhx.Stream","filter",0x723fdb88,"promhx.Stream.filter","promhx/Stream.hx",215,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_217_filter,"promhx.Stream","filter",0x723fdb88,"promhx.Stream.filter","promhx/Stream.hx",217,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_211_filter,"promhx.Stream","filter",0x723fdb88,"promhx.Stream.filter","promhx/Stream.hx",211,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_232_concat,"promhx.Stream","concat",0xb4dac4e4,"promhx.Stream.concat","promhx/Stream.hx",232,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_234_concat,"promhx.Stream","concat",0xb4dac4e4,"promhx.Stream.concat","promhx/Stream.hx",234,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_239_concat,"promhx.Stream","concat",0xb4dac4e4,"promhx.Stream.concat","promhx/Stream.hx",239,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_233_concat,"promhx.Stream","concat",0xb4dac4e4,"promhx.Stream.concat","promhx/Stream.hx",233,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_226_concat,"promhx.Stream","concat",0xb4dac4e4,"promhx.Stream.concat","promhx/Stream.hx",226,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_258_merge,"promhx.Stream","merge",0xa8b450e8,"promhx.Stream.merge","promhx/Stream.hx",258,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_259_merge,"promhx.Stream","merge",0xa8b450e8,"promhx.Stream.merge","promhx/Stream.hx",259,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_248_merge,"promhx.Stream","merge",0xa8b450e8,"promhx.Stream.merge","promhx/Stream.hx",248,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_70_foreach,"promhx.Stream","foreach",0x563e97ba,"promhx.Stream.foreach","promhx/Stream.hx",70,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_112_wheneverAll,"promhx.Stream","wheneverAll",0x51137f59,"promhx.Stream.wheneverAll","promhx/Stream.hx",112,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_114_wheneverAll,"promhx.Stream","wheneverAll",0x51137f59,"promhx.Stream.wheneverAll","promhx/Stream.hx",114,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_122_concatAll,"promhx.Stream","concatAll",0x741e129d,"promhx.Stream.concatAll","promhx/Stream.hx",122,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_132_mergeAll,"promhx.Stream","mergeAll",0x3a68e119,"promhx.Stream.mergeAll","promhx/Stream.hx",132,0x5cb766bf)
HX_LOCAL_STACK_FRAME(_hx_pos_43682c417a6d3d17_266_stream,"promhx.Stream","stream",0xfe37d050,"promhx.Stream.stream","promhx/Stream.hx",266,0x5cb766bf)
namespace promhx{

void Stream_obj::__construct( ::promhx::Deferred d){
            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_19_new)
HXLINE(  20)		super::__construct(d);
HXLINE(  21)		this->_end_promise =  ::promhx::Promise_obj::__alloc( HX_CTX ,null());
            	}

Dynamic Stream_obj::__CreateEmpty() { return new Stream_obj; }

void *Stream_obj::_hx_vtable = 0;

Dynamic Stream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stream_obj > _hx_result = new Stream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Stream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12b0cfec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12b0cfec;
	} else {
		return inClassId==(int)0x24a248d0;
	}
}

 ::promhx::base::AsyncBase Stream_obj::then( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::promhx::Stream,ret) HXARGC(1)
            		void _hx_run( ::haxe::ds::Option x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_86_then)
HXLINE(  86)			ret->end();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_81_then)
HXLINE(  82)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE(  83)		{
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::promhx::base::AsyncBase,next, ::Dynamic,f1) HXARGC(1)
            			void _hx_run( ::Dynamic x){
            				HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_83_then)
HXLINE(  83)				 ::promhx::base::AsyncBase next1 = next;
HXDLIN(  83)				next1->handleResolve(f1(x));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  83)			 ::promhx::base::AsyncBase next = ret;
HXDLIN(  83)			 ::Dynamic f1 = f;
HXDLIN(  83)			this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("async",3c,ff,3d,26),next)
            				->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_0(next,f1)))));
HXDLIN(  83)			::promhx::base::AsyncBase_obj::immediateLinkUpdate(::hx::ObjectPtr<OBJ_>(this),next,f1);
            		}
HXLINE(  84)		this->_end_promise->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("async",3c,ff,3d,26),( ( ::promhx::base::AsyncBase)(ret->_end_promise) ))
            			->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_1(ret)))));
HXLINE(  88)		return ret;
            	}


bool Stream_obj::detachStream( ::promhx::Stream str){
            	HX_STACKFRAME(&_hx_pos_43682c417a6d3d17_91_detachStream)
HXLINE(  92)		::Array< ::Dynamic> filtered = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  93)		bool removed = false;
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			::Array< ::Dynamic> _g1 = this->_update;
HXDLIN(  94)			while((_g < _g1->length)){
HXLINE(  94)				 ::Dynamic u = _g1->__get(_g);
HXDLIN(  94)				_g = (_g + 1);
HXLINE(  95)				if (::hx::IsInstanceEq( u->__Field(HX_("async",3c,ff,3d,26),::hx::paccDynamic),str )) {
HXLINE(  97)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  97)					{
HXLINE(  97)						int _g1 = 0;
HXDLIN(  97)						::Array< ::Dynamic> _g2 = this->_end_promise->_update;
HXDLIN(  97)						while((_g1 < _g2->length)){
HXLINE(  97)							 ::Dynamic v = _g2->__get(_g1);
HXDLIN(  97)							_g1 = (_g1 + 1);
HXDLIN(  97)							if (::hx::IsInstanceNotEq( v->__Field(HX_("async",3c,ff,3d,26),::hx::paccDynamic),str->_end_promise )) {
HXLINE(  97)								_g->push(v);
            							}
            						}
            					}
HXDLIN(  97)					this->_end_promise->_update = _g;
HXLINE( 100)					removed = true;
            				}
            				else {
HXLINE( 102)					filtered->push(u);
            				}
            			}
            		}
HXLINE( 104)		this->_update = filtered;
HXLINE( 105)		return removed;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,detachStream,return )

 ::promhx::Promise Stream_obj::first(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::promhx::Promise,s) HXARGC(1)
            		void _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_143_first)
HXLINE( 143)			if (!(s->_resolved)) {
HXLINE( 143)				s->handleResolve(x);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_141_first)
HXLINE( 142)		 ::promhx::Promise s =  ::promhx::Promise_obj::__alloc( HX_CTX ,null());
HXLINE( 143)		this->then( ::Dynamic(new _hx_Closure_0(s)));
HXLINE( 144)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stream_obj,first,return )

void Stream_obj::handleResolve( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_43682c417a6d3d17_148_handleResolve)
HXDLIN( 148)		bool _hx_tmp;
HXDLIN( 148)		if (!(this->_end)) {
HXDLIN( 148)			_hx_tmp = !(this->_pause);
            		}
            		else {
HXDLIN( 148)			_hx_tmp = false;
            		}
HXDLIN( 148)		if (_hx_tmp) {
HXDLIN( 148)			this->_resolve(val);
            		}
            	}


void Stream_obj::pause( ::Dynamic set){
            	HX_STACKFRAME(&_hx_pos_43682c417a6d3d17_155_pause)
HXLINE( 156)		if (::hx::IsNull( set )) {
HXLINE( 156)			set = !(this->_pause);
            		}
HXLINE( 157)		this->_pause = ( (bool)(set) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,pause,(void))

 ::promhx::Stream Stream_obj::pipe( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::promhx::Stream,ret) HXARGC(1)
            		void _hx_run( ::haxe::ds::Option x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_163_pipe)
HXLINE( 163)			ret->end();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_160_pipe)
HXLINE( 161)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 162)		{
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Array< bool >,linked, ::promhx::base::AsyncBase,ret1, ::Dynamic,f1) HXARGC(1)
            			void _hx_run( ::Dynamic x){
            				HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_162_pipe)
HXLINE( 162)				if (!(linked->__get(0))) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            					 ::Dynamic _hx_run( ::Dynamic x){
            						HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_162_pipe)
HXLINE( 162)						return x;
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 162)					linked[0] = true;
HXDLIN( 162)					 ::promhx::base::AsyncBase pipe_ret = ( ( ::promhx::base::AsyncBase)(f1(x)) );
HXDLIN( 162)					pipe_ret->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("async",3c,ff,3d,26),ret1)
            						->setFixed(1,HX_("linkf",2c,e3,01,75),ret1->handleResolve_dyn())));
HXDLIN( 162)					::promhx::base::AsyncBase_obj::immediateLinkUpdate(pipe_ret,ret1, ::Dynamic(new _hx_Closure_0()));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 162)			 ::promhx::base::AsyncBase ret1 = ret;
HXDLIN( 162)			 ::Dynamic f1 = f;
HXDLIN( 162)			::Array< bool > linked = ::Array_obj< bool >::fromData( _hx_array_data_cbf04a9e_15,1);
HXDLIN( 162)			 ::Dynamic linkf =  ::Dynamic(new _hx_Closure_1(linked,ret1,f1));
HXDLIN( 162)			this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("async",3c,ff,3d,26),ret1)
            				->setFixed(1,HX_("linkf",2c,e3,01,75),linkf)));
HXDLIN( 162)			bool _hx_tmp;
HXDLIN( 162)			if (this->_resolved) {
HXLINE( 162)				_hx_tmp = !(this->_pending);
            			}
            			else {
HXLINE( 162)				_hx_tmp = false;
            			}
HXDLIN( 162)			if (_hx_tmp) {
HXLINE( 162)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 162)					linkf(this->_val);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 349)						{
HXLINE( 349)							null();
            						}
HXDLIN( 349)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 162)						ret1->handleError(e);
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
HXLINE( 163)		Dynamic( this->_end_promise->then( ::Dynamic(new _hx_Closure_2(ret)))).StaticCast<  ::promhx::Promise >();
HXLINE( 164)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,pipe,return )

 ::promhx::Stream Stream_obj::errorPipe( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::promhx::Stream,ret) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_172_errorPipe)
HXLINE( 173)			 ::promhx::Stream piped = ( ( ::promhx::Stream)(f(e)) );
HXLINE( 174)			Dynamic( piped->then(ret->_resolve_dyn())).StaticCast<  ::promhx::Stream >();
HXLINE( 175)			Dynamic( piped->_end_promise->then(ret->_end_promise->_resolve_dyn())).StaticCast<  ::promhx::Promise >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::promhx::Stream,ret) HXARGC(1)
            		void _hx_run( ::haxe::ds::Option x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_178_errorPipe)
HXLINE( 178)			ret->end();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_170_errorPipe)
HXLINE( 171)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 172)		this->catchError( ::Dynamic(new _hx_Closure_0(f,ret)));
HXLINE( 177)		this->then(ret->_resolve_dyn());
HXLINE( 178)		Dynamic( this->_end_promise->then( ::Dynamic(new _hx_Closure_1(ret)))).StaticCast<  ::promhx::Promise >();
HXLINE( 179)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,errorPipe,return )

void Stream_obj::handleEnd(){
            	HX_STACKFRAME(&_hx_pos_43682c417a6d3d17_187_handleEnd)
HXDLIN( 187)		if (this->_pending) {
HXDLIN( 187)			::promhx::base::EventLoop_obj::queue->add(this->handleEnd_dyn());
HXDLIN( 187)			::promhx::base::EventLoop_obj::continueOnNextLoop();
            		}
            		else {
HXLINE( 188)			if (this->_end_promise->_resolved) {
HXLINE( 188)				return;
            			}
            			else {
HXLINE( 190)				this->_end = true;
HXLINE( 191)				 ::haxe::ds::Option o;
HXDLIN( 191)				if (this->_resolved) {
HXLINE( 191)					o = ::haxe::ds::Option_obj::Some(this->_val);
            				}
            				else {
HXLINE( 191)					o = ::haxe::ds::Option_obj::None_dyn();
            				}
HXLINE( 192)				this->_end_promise->handleResolve(o);
HXLINE( 193)				this->_update = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 194)				this->_error = ::Array_obj< ::Dynamic>::__new(0);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stream_obj,handleEnd,(void))

 ::promhx::Stream Stream_obj::end(){
            	HX_STACKFRAME(&_hx_pos_43682c417a6d3d17_198_end)
HXLINE( 199)		{
HXLINE( 199)			::promhx::base::EventLoop_obj::queue->add(this->handleEnd_dyn());
HXDLIN( 199)			::promhx::base::EventLoop_obj::continueOnNextLoop();
            		}
HXLINE( 200)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stream_obj,end,return )

 ::promhx::Promise Stream_obj::endThen( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_43682c417a6d3d17_204_endThen)
HXDLIN( 204)		return Dynamic( this->_end_promise->then(f)).StaticCast<  ::promhx::Promise >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,endThen,return )

 ::promhx::Stream Stream_obj::filter( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::promhx::Stream,ret) HXARGC(1)
            		void _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_215_filter)
HXLINE( 215)			if (( (bool)(f(x)) )) {
HXLINE( 215)				ret->handleResolve(x);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_217_filter)
HXLINE( 217)			return x;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_211_filter)
HXLINE( 212)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 213)		this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("async",3c,ff,3d,26),( ( ::promhx::base::AsyncBase)(ret) ))
            			->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_0(f,ret)))));
HXLINE( 217)		::promhx::base::AsyncBase_obj::immediateLinkUpdate(::hx::ObjectPtr<OBJ_>(this),ret, ::Dynamic(new _hx_Closure_1()));
HXLINE( 218)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,filter,return )

 ::promhx::Stream Stream_obj::concat( ::promhx::Stream s){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_232_concat)
HXLINE( 232)			return x;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::promhx::Stream,ret, ::promhx::Stream,s) HXARGC(1)
            		void _hx_run( ::haxe::ds::Option _){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::promhx::Stream,ret) HXARGC(1)
            			 ::promhx::Stream _hx_run( ::Dynamic x){
            				HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_234_concat)
HXLINE( 235)				ret->handleResolve(x);
HXLINE( 236)				return ret;
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::promhx::Stream,ret) HXARGC(1)
            			void _hx_run( ::haxe::ds::Option _){
            				HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_239_concat)
HXLINE( 239)				ret->end();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_233_concat)
HXLINE( 234)			s->pipe( ::Dynamic(new _hx_Closure_1(ret)));
HXLINE( 238)			Dynamic( s->_end_promise->then( ::Dynamic(new _hx_Closure_2(ret)))).StaticCast<  ::promhx::Promise >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_226_concat)
HXLINE( 227)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 228)		this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("async",3c,ff,3d,26),( ( ::promhx::base::AsyncBase)(ret) ))
            			->setFixed(1,HX_("linkf",2c,e3,01,75),ret->handleResolve_dyn())));
HXLINE( 232)		::promhx::base::AsyncBase_obj::immediateLinkUpdate(::hx::ObjectPtr<OBJ_>(this),ret, ::Dynamic(new _hx_Closure_0()));
HXLINE( 233)		Dynamic( this->_end_promise->then( ::Dynamic(new _hx_Closure_3(ret,s)))).StaticCast<  ::promhx::Promise >();
HXLINE( 242)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,concat,return )

 ::promhx::Stream Stream_obj::merge( ::promhx::Stream s){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_258_merge)
HXLINE( 258)			return x;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_259_merge)
HXLINE( 259)			return x;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_248_merge)
HXLINE( 249)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 250)		this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("async",3c,ff,3d,26),( ( ::promhx::base::AsyncBase)(ret) ))
            			->setFixed(1,HX_("linkf",2c,e3,01,75),ret->handleResolve_dyn())));
HXLINE( 254)		s->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("async",3c,ff,3d,26),( ( ::promhx::base::AsyncBase)(ret) ))
            			->setFixed(1,HX_("linkf",2c,e3,01,75),ret->handleResolve_dyn())));
HXLINE( 258)		::promhx::base::AsyncBase_obj::immediateLinkUpdate(::hx::ObjectPtr<OBJ_>(this),ret, ::Dynamic(new _hx_Closure_0()));
HXLINE( 259)		::promhx::base::AsyncBase_obj::immediateLinkUpdate(s,ret, ::Dynamic(new _hx_Closure_1()));
HXLINE( 260)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,merge,return )

 ::promhx::Stream Stream_obj::foreach( ::Dynamic itb){
            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_70_foreach)
HXLINE(  71)		 ::promhx::Stream s =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE(  72)		{
HXLINE(  72)			 ::Dynamic i = itb->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  72)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  72)				 ::Dynamic i1 = i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN(  72)				s->handleResolve(i1);
            			}
            		}
HXLINE(  73)		s->end();
HXLINE(  74)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,foreach,return )

 ::promhx::Stream Stream_obj::wheneverAll( ::Dynamic itb){
            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_112_wheneverAll)
HXLINE( 113)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 114)		{
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,all, ::promhx::base::AsyncBase,next) HXARGC(3)
            			void _hx_run(::Array< ::Dynamic> arr, ::promhx::base::AsyncBase current, ::Dynamic v){
            				HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_114_wheneverAll)
HXLINE( 114)				bool cthen;
HXDLIN( 114)				if ((arr->length != 0)) {
HXLINE( 114)					cthen = ::promhx::base::AsyncBase_obj::allFulfilled(arr);
            				}
            				else {
HXLINE( 114)					cthen = true;
            				}
HXDLIN( 114)				if (cthen) {
HXLINE( 114)					::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 114)					{
HXLINE( 114)						 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 114)						while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 114)							 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 114)							 ::Dynamic cthen;
HXDLIN( 114)							if (::hx::IsInstanceEq( a1,current )) {
HXLINE( 114)								cthen = v;
            							}
            							else {
HXLINE( 114)								cthen = a1->_val;
            							}
HXDLIN( 114)							_g->push(cthen);
            						}
            					}
HXDLIN( 114)					::cpp::VirtualArray vals = _g;
HXDLIN( 114)					next->handleResolve(vals);
            				}
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE( 114)			 ::Dynamic all = itb;
HXDLIN( 114)			 ::promhx::base::AsyncBase next = ret;
HXDLIN( 114)			 ::Dynamic cthen =  ::Dynamic(new _hx_Closure_0(all,next));
HXDLIN( 114)			{
HXLINE( 114)				 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 114)				while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::promhx::base::AsyncBase,current,::Array< ::Dynamic>,arr, ::Dynamic,_g) HXARGC(1)
            					void _hx_run( ::Dynamic v){
            						HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_114_wheneverAll)
HXLINE( 114)						_g(arr,current,v);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 114)					 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 114)					::Array< ::Dynamic> a2 = a1->_update;
HXDLIN( 114)					 ::promhx::base::AsyncBase next1 = next;
HXDLIN( 114)					 ::Dynamic _g = cthen;
HXDLIN( 114)					::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 114)					{
HXLINE( 114)						 ::Dynamic a21 = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 114)						while(( (bool)(a21->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 114)							 ::promhx::base::AsyncBase a2 = ( ( ::promhx::base::AsyncBase)(a21->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 114)							if (::hx::IsInstanceNotEq( a2,a1 )) {
HXLINE( 114)								_g1->push(a2);
            							}
            						}
            					}
HXDLIN( 114)					::Array< ::Dynamic> arr = _g1;
HXDLIN( 114)					 ::promhx::base::AsyncBase current = a1;
HXDLIN( 114)					a2->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("async",3c,ff,3d,26),next1)
            						->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_1(current,arr,_g)))));
            				}
            			}
HXDLIN( 114)			if (::promhx::base::AsyncBase_obj::allFulfilled(all)) {
HXLINE( 114)				 ::promhx::base::AsyncBase next1 = next;
HXDLIN( 114)				::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 114)				{
HXLINE( 114)					 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 114)					while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 114)						 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 114)						_g->push(a1->_val);
            					}
            				}
HXDLIN( 114)				next1->handleResolve(_g);
            			}
            		}
HXLINE( 115)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,wheneverAll,return )

 ::promhx::Stream Stream_obj::concatAll( ::Dynamic itb){
            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_122_concatAll)
HXLINE( 123)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 124)		{
HXLINE( 124)			 ::Dynamic i = itb->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 124)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 124)				 ::promhx::Stream i1 = ( ( ::promhx::Stream)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 124)				ret->concat(i1);
            			}
            		}
HXLINE( 125)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,concatAll,return )

 ::promhx::Stream Stream_obj::mergeAll( ::Dynamic itb){
            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_132_mergeAll)
HXLINE( 133)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 134)		{
HXLINE( 134)			 ::Dynamic i = itb->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 134)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 134)				 ::promhx::Stream i1 = ( ( ::promhx::Stream)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 134)				ret->merge(i1);
            			}
            		}
HXLINE( 135)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,mergeAll,return )

 ::promhx::Stream Stream_obj::stream( ::Dynamic _val){
            	HX_GC_STACKFRAME(&_hx_pos_43682c417a6d3d17_266_stream)
HXLINE( 267)		 ::promhx::Stream ret =  ::promhx::Stream_obj::__alloc( HX_CTX ,null());
HXLINE( 268)		ret->handleResolve(_val);
HXLINE( 269)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,stream,return )


::hx::ObjectPtr< Stream_obj > Stream_obj::__new( ::promhx::Deferred d) {
	::hx::ObjectPtr< Stream_obj > __this = new Stream_obj();
	__this->__construct(d);
	return __this;
}

::hx::ObjectPtr< Stream_obj > Stream_obj::__alloc(::hx::Ctx *_hx_ctx, ::promhx::Deferred d) {
	Stream_obj *__this = (Stream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stream_obj), true, "promhx.Stream"));
	*(void **)__this = Stream_obj::_hx_vtable;
	__this->__construct(d);
	return __this;
}

Stream_obj::Stream_obj()
{
}

void Stream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stream);
	HX_MARK_MEMBER_NAME(deferred,"deferred");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_end,"_end");
	HX_MARK_MEMBER_NAME(_end_promise,"_end_promise");
	 ::promhx::base::AsyncBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deferred,"deferred");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_end,"_end");
	HX_VISIT_MEMBER_NAME(_end_promise,"_end_promise");
	 ::promhx::base::AsyncBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Stream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { return ::hx::Val( _end ); }
		if (HX_FIELD_EQ(inName,"then") ) { return ::hx::Val( then_dyn() ); }
		if (HX_FIELD_EQ(inName,"pipe") ) { return ::hx::Val( pipe_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return ::hx::Val( first_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pause") ) { return ::hx::Val( _pause ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endThen") ) { return ::hx::Val( endThen_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deferred") ) { return ::hx::Val( deferred ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"errorPipe") ) { return ::hx::Val( errorPipe_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleEnd") ) { return ::hx::Val( handleEnd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_end_promise") ) { return ::hx::Val( _end_promise ); }
		if (HX_FIELD_EQ(inName,"detachStream") ) { return ::hx::Val( detachStream_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleResolve") ) { return ::hx::Val( handleResolve_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stream_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { outValue = stream_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foreach") ) { outValue = foreach_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mergeAll") ) { outValue = mergeAll_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"concatAll") ) { outValue = concatAll_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wheneverAll") ) { outValue = wheneverAll_dyn(); return true; }
	}
	return false;
}

::hx::Val Stream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { _end=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deferred") ) { deferred=inValue.Cast<  ::promhx::Deferred >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_end_promise") ) { _end_promise=inValue.Cast<  ::promhx::Promise >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("deferred",1f,ff,3c,fb));
	outFields->push(HX_("_pause",37,1e,3f,b9));
	outFields->push(HX_("_end",dc,48,18,3f));
	outFields->push(HX_("_end_promise",f8,ab,b8,75));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stream_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::promhx::Deferred */ ,(int)offsetof(Stream_obj,deferred),HX_("deferred",1f,ff,3c,fb)},
	{::hx::fsBool,(int)offsetof(Stream_obj,_pause),HX_("_pause",37,1e,3f,b9)},
	{::hx::fsBool,(int)offsetof(Stream_obj,_end),HX_("_end",dc,48,18,3f)},
	{::hx::fsObject /*  ::promhx::Promise */ ,(int)offsetof(Stream_obj,_end_promise),HX_("_end_promise",f8,ab,b8,75)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Stream_obj_sStaticStorageInfo = 0;
#endif

static ::String Stream_obj_sMemberFields[] = {
	HX_("deferred",1f,ff,3c,fb),
	HX_("_pause",37,1e,3f,b9),
	HX_("_end",dc,48,18,3f),
	HX_("_end_promise",f8,ab,b8,75),
	HX_("then",dd,02,fc,4c),
	HX_("detachStream",33,26,ba,de),
	HX_("first",30,78,9d,00),
	HX_("handleResolve",24,fc,d4,7f),
	HX_("pause",f6,d6,57,bd),
	HX_("pipe",2e,f4,57,4a),
	HX_("errorPipe",16,70,c0,70),
	HX_("handleEnd",13,f1,56,aa),
	HX_("end",db,03,4d,00),
	HX_("endThen",58,bc,20,2f),
	HX_("filter",b8,1f,35,85),
	HX_("concat",14,09,d0,c7),
	HX_("merge",b8,a2,c6,05),
	::String(null()) };

::hx::Class Stream_obj::__mClass;

static ::String Stream_obj_sStaticFields[] = {
	HX_("foreach",8a,fd,e4,d9),
	HX_("wheneverAll",29,0d,a9,db),
	HX_("concatAll",6d,8c,85,fa),
	HX_("mergeAll",49,91,5b,e8),
	HX_("stream",80,14,2d,11),
	::String(null())
};

void Stream_obj::__register()
{
	Stream_obj _hx_dummy;
	Stream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("promhx.Stream",9e,4a,f0,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stream_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stream_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace promhx
