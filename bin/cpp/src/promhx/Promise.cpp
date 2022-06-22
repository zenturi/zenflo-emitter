#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif
#ifndef INCLUDED_promhx_error_PromiseError
#include <promhx/error/PromiseError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b1f4dfaee22da664_16_new,"promhx.Promise","new",0xc9b9b52f,"promhx.Promise.new","promhx/Promise.hx",16,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_69_isRejected,"promhx.Promise","isRejected",0xb0dbf499,"promhx.Promise.isRejected","promhx/Promise.hx",69,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_75_reject,"promhx.Promise","reject",0xa3b917f0,"promhx.Promise.reject","promhx/Promise.hx",75,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_93_handleResolve,"promhx.Promise","handleResolve",0x24d899b3,"promhx.Promise.handleResolve","promhx/Promise.hx",93,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_104_then,"promhx.Promise","then",0xbcbe532e,"promhx.Promise.then","promhx/Promise.hx",104,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_106_then,"promhx.Promise","then",0xbcbe532e,"promhx.Promise.then","promhx/Promise.hx",106,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_110_unlink,"promhx.Promise","unlink",0x06bbe564,"promhx.Promise.unlink","promhx/Promise.hx",110,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_112_unlink,"promhx.Promise","unlink",0x06bbe564,"promhx.Promise.unlink","promhx/Promise.hx",112,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_122_handleError,"promhx.Promise","handleError",0xee9142cf,"promhx.Promise.handleError","promhx/Promise.hx",122,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_127_pipe,"promhx.Promise","pipe",0xba1a447f,"promhx.Promise.pipe","promhx/Promise.hx",127,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_129_pipe,"promhx.Promise","pipe",0xba1a447f,"promhx.Promise.pipe","promhx/Promise.hx",129,0x4985b062)
static const bool _hx_array_data_a7f5f1bd_13[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_138_errorPipe,"promhx.Promise","errorPipe",0x91845a25,"promhx.Promise.errorPipe","promhx/Promise.hx",138,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_136_errorPipe,"promhx.Promise","errorPipe",0x91845a25,"promhx.Promise.errorPipe","promhx/Promise.hx",136,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_84_whenAll,"promhx.Promise","whenAll",0xc61172d6,"promhx.Promise.whenAll","promhx/Promise.hx",84,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_86_whenAll,"promhx.Promise","whenAll",0xc61172d6,"promhx.Promise.whenAll","promhx/Promise.hx",86,0x4985b062)
HX_LOCAL_STACK_FRAME(_hx_pos_b1f4dfaee22da664_149_promise,"promhx.Promise","promise",0x6403c5ea,"promhx.Promise.promise","promhx/Promise.hx",149,0x4985b062)
namespace promhx{

void Promise_obj::__construct( ::promhx::Deferred d){
            	HX_STACKFRAME(&_hx_pos_b1f4dfaee22da664_16_new)
HXLINE(  17)		super::__construct(d);
HXLINE(  18)		this->_rejected = false;
            	}

Dynamic Promise_obj::__CreateEmpty() { return new Promise_obj; }

void *Promise_obj::_hx_vtable = 0;

Dynamic Promise_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Promise_obj > _hx_result = new Promise_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Promise_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12b0cfec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12b0cfec;
	} else {
		return inClassId==(int)0x1a0bae67;
	}
}

bool Promise_obj::isRejected(){
            	HX_STACKFRAME(&_hx_pos_b1f4dfaee22da664_69_isRejected)
HXDLIN(  69)		return this->_rejected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,isRejected,return )

void Promise_obj::reject( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_b1f4dfaee22da664_75_reject)
HXLINE(  76)		this->_rejected = true;
HXLINE(  77)		this->handleError(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,reject,(void))

void Promise_obj::handleResolve( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_b1f4dfaee22da664_93_handleResolve)
HXLINE(  94)		if (this->_resolved) {
HXLINE(  95)			::String msg = HX_("Promise has already been resolved",f9,14,e6,73);
HXLINE(  96)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::promhx::error::PromiseError_obj::AlreadyResolved(msg)));
            		}
HXLINE(  98)		this->_resolve(val);
            	}


 ::promhx::base::AsyncBase Promise_obj::then( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_104_then)
HXLINE( 105)		 ::promhx::Promise ret =  ::promhx::Promise_obj::__alloc( HX_CTX ,null());
HXLINE( 106)		{
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::promhx::base::AsyncBase,next, ::Dynamic,f1) HXARGC(1)
            			void _hx_run( ::Dynamic x){
            				HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_106_then)
HXLINE( 106)				 ::promhx::base::AsyncBase next1 = next;
HXDLIN( 106)				next1->handleResolve(f1(x));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 106)			 ::promhx::base::AsyncBase next = ret;
HXDLIN( 106)			 ::Dynamic f1 = f;
HXDLIN( 106)			this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("async",3c,ff,3d,26),next)
            				->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_0(next,f1)))));
HXDLIN( 106)			::promhx::base::AsyncBase_obj::immediateLinkUpdate(::hx::ObjectPtr<OBJ_>(this),next,f1);
            		}
HXLINE( 107)		return ret;
            	}


void Promise_obj::unlink( ::promhx::base::AsyncBase to){
            	HX_STACKFRAME(&_hx_pos_b1f4dfaee22da664_110_unlink)
HXDLIN( 110)		 ::promhx::Promise _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 111)		{
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::promhx::Promise,_gthis, ::promhx::base::AsyncBase,to) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_b1f4dfaee22da664_112_unlink)
HXLINE( 112)				if (!(_gthis->_fulfilled)) {
HXLINE( 113)					::String msg = HX_("Downstream Promise is not fullfilled",d1,9a,9d,4f);
HXLINE( 114)					_gthis->handleError(::promhx::error::PromiseError_obj::DownstreamNotFullfilled(msg));
            				}
            				else {
HXLINE( 117)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 117)					{
HXLINE( 117)						int _g1 = 0;
HXDLIN( 117)						::Array< ::Dynamic> _g2 = _gthis->_update;
HXDLIN( 117)						while((_g1 < _g2->length)){
HXLINE( 117)							 ::Dynamic v = _g2->__get(_g1);
HXDLIN( 117)							_g1 = (_g1 + 1);
HXDLIN( 117)							if (::hx::IsInstanceNotEq( v->__Field(HX_("async",3c,ff,3d,26),::hx::paccDynamic),to )) {
HXLINE( 117)								_g->push(v);
            							}
            						}
            					}
HXDLIN( 117)					_gthis->_update = _g;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 111)			::promhx::base::EventLoop_obj::queue->add( ::Dynamic(new _hx_Closure_0(_gthis,to)));
HXDLIN( 111)			::promhx::base::EventLoop_obj::continueOnNextLoop();
            		}
            	}


void Promise_obj::handleError( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_b1f4dfaee22da664_122_handleError)
HXLINE( 123)		this->_rejected = true;
HXLINE( 124)		this->_handleError(error);
            	}


 ::promhx::Promise Promise_obj::pipe( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_127_pipe)
HXLINE( 128)		 ::promhx::Promise ret =  ::promhx::Promise_obj::__alloc( HX_CTX ,null());
HXLINE( 129)		{
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Array< bool >,linked, ::promhx::base::AsyncBase,ret1, ::Dynamic,f1) HXARGC(1)
            			void _hx_run( ::Dynamic x){
            				HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_129_pipe)
HXLINE( 129)				if (!(linked->__get(0))) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            					 ::Dynamic _hx_run( ::Dynamic x){
            						HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_129_pipe)
HXLINE( 129)						return x;
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 129)					linked[0] = true;
HXDLIN( 129)					 ::promhx::base::AsyncBase pipe_ret = ( ( ::promhx::base::AsyncBase)(f1(x)) );
HXDLIN( 129)					pipe_ret->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("async",3c,ff,3d,26),ret1)
            						->setFixed(1,HX_("linkf",2c,e3,01,75),ret1->handleResolve_dyn())));
HXDLIN( 129)					::promhx::base::AsyncBase_obj::immediateLinkUpdate(pipe_ret,ret1, ::Dynamic(new _hx_Closure_0()));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 129)			 ::promhx::base::AsyncBase ret1 = ret;
HXDLIN( 129)			 ::Dynamic f1 = f;
HXDLIN( 129)			::Array< bool > linked = ::Array_obj< bool >::fromData( _hx_array_data_a7f5f1bd_13,1);
HXDLIN( 129)			 ::Dynamic linkf =  ::Dynamic(new _hx_Closure_1(linked,ret1,f1));
HXDLIN( 129)			this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("async",3c,ff,3d,26),ret1)
            				->setFixed(1,HX_("linkf",2c,e3,01,75),linkf)));
HXDLIN( 129)			bool _hx_tmp;
HXDLIN( 129)			if (this->_resolved) {
HXLINE( 129)				_hx_tmp = !(this->_pending);
            			}
            			else {
HXLINE( 129)				_hx_tmp = false;
            			}
HXDLIN( 129)			if (_hx_tmp) {
HXLINE( 129)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 129)					linkf(this->_val);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 349)						{
HXLINE( 349)							null();
            						}
HXDLIN( 349)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 129)						ret1->handleError(e);
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
HXLINE( 130)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,pipe,return )

 ::promhx::Promise Promise_obj::errorPipe( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::promhx::Promise,ret) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_138_errorPipe)
HXLINE( 139)			 ::promhx::Promise piped = ( ( ::promhx::Promise)(f(e)) );
HXLINE( 140)			Dynamic( piped->then(ret->_resolve_dyn())).StaticCast<  ::promhx::Promise >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_136_errorPipe)
HXLINE( 137)		 ::promhx::Promise ret =  ::promhx::Promise_obj::__alloc( HX_CTX ,null());
HXLINE( 138)		this->catchError( ::Dynamic(new _hx_Closure_0(f,ret)));
HXLINE( 142)		this->then(ret->_resolve_dyn());
HXLINE( 143)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,errorPipe,return )

 ::promhx::Promise Promise_obj::whenAll( ::Dynamic itb){
            	HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_84_whenAll)
HXLINE(  85)		 ::promhx::Promise ret =  ::promhx::Promise_obj::__alloc( HX_CTX ,null());
HXLINE(  86)		{
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,all, ::promhx::base::AsyncBase,next) HXARGC(3)
            			void _hx_run(::Array< ::Dynamic> arr, ::promhx::base::AsyncBase current, ::Dynamic v){
            				HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_86_whenAll)
HXLINE(  86)				bool cthen;
HXDLIN(  86)				if ((arr->length != 0)) {
HXLINE(  86)					cthen = ::promhx::base::AsyncBase_obj::allFulfilled(arr);
            				}
            				else {
HXLINE(  86)					cthen = true;
            				}
HXDLIN(  86)				if (cthen) {
HXLINE(  86)					::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  86)					{
HXLINE(  86)						 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  86)						while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  86)							 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  86)							 ::Dynamic cthen;
HXDLIN(  86)							if (::hx::IsInstanceEq( a1,current )) {
HXLINE(  86)								cthen = v;
            							}
            							else {
HXLINE(  86)								cthen = a1->_val;
            							}
HXDLIN(  86)							_g->push(cthen);
            						}
            					}
HXDLIN(  86)					::cpp::VirtualArray vals = _g;
HXDLIN(  86)					next->handleResolve(vals);
            				}
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE(  86)			 ::Dynamic all = itb;
HXDLIN(  86)			 ::promhx::base::AsyncBase next = ret;
HXDLIN(  86)			 ::Dynamic cthen =  ::Dynamic(new _hx_Closure_0(all,next));
HXDLIN(  86)			{
HXLINE(  86)				 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  86)				while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::promhx::base::AsyncBase,current,::Array< ::Dynamic>,arr, ::Dynamic,_g) HXARGC(1)
            					void _hx_run( ::Dynamic v){
            						HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_86_whenAll)
HXLINE(  86)						_g(arr,current,v);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  86)					 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  86)					::Array< ::Dynamic> a2 = a1->_update;
HXDLIN(  86)					 ::promhx::base::AsyncBase next1 = next;
HXDLIN(  86)					 ::Dynamic _g = cthen;
HXDLIN(  86)					::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)					{
HXLINE(  86)						 ::Dynamic a21 = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  86)						while(( (bool)(a21->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  86)							 ::promhx::base::AsyncBase a2 = ( ( ::promhx::base::AsyncBase)(a21->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  86)							if (::hx::IsInstanceNotEq( a2,a1 )) {
HXLINE(  86)								_g1->push(a2);
            							}
            						}
            					}
HXDLIN(  86)					::Array< ::Dynamic> arr = _g1;
HXDLIN(  86)					 ::promhx::base::AsyncBase current = a1;
HXDLIN(  86)					a2->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("async",3c,ff,3d,26),next1)
            						->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_1(current,arr,_g)))));
            				}
            			}
HXDLIN(  86)			if (::promhx::base::AsyncBase_obj::allFulfilled(all)) {
HXLINE(  86)				 ::promhx::base::AsyncBase next1 = next;
HXDLIN(  86)				::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  86)				{
HXLINE(  86)					 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  86)					while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  86)						 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  86)						_g->push(a1->_val);
            					}
            				}
HXDLIN(  86)				next1->handleResolve(_g);
            			}
            		}
HXLINE(  87)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,whenAll,return )

 ::promhx::Promise Promise_obj::promise( ::Dynamic _val){
            	HX_GC_STACKFRAME(&_hx_pos_b1f4dfaee22da664_149_promise)
HXLINE( 150)		 ::promhx::Promise ret =  ::promhx::Promise_obj::__alloc( HX_CTX ,null());
HXLINE( 151)		ret->handleResolve(_val);
HXLINE( 152)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,promise,return )


::hx::ObjectPtr< Promise_obj > Promise_obj::__new( ::promhx::Deferred d) {
	::hx::ObjectPtr< Promise_obj > __this = new Promise_obj();
	__this->__construct(d);
	return __this;
}

::hx::ObjectPtr< Promise_obj > Promise_obj::__alloc(::hx::Ctx *_hx_ctx, ::promhx::Deferred d) {
	Promise_obj *__this = (Promise_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Promise_obj), true, "promhx.Promise"));
	*(void **)__this = Promise_obj::_hx_vtable;
	__this->__construct(d);
	return __this;
}

Promise_obj::Promise_obj()
{
}

::hx::Val Promise_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return ::hx::Val( then_dyn() ); }
		if (HX_FIELD_EQ(inName,"pipe") ) { return ::hx::Val( pipe_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reject") ) { return ::hx::Val( reject_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlink") ) { return ::hx::Val( unlink_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rejected") ) { return ::hx::Val( _rejected ); }
		if (HX_FIELD_EQ(inName,"errorPipe") ) { return ::hx::Val( errorPipe_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isRejected") ) { return ::hx::Val( isRejected_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleError") ) { return ::hx::Val( handleError_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleResolve") ) { return ::hx::Val( handleResolve_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Promise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"whenAll") ) { outValue = whenAll_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"promise") ) { outValue = promise_dyn(); return true; }
	}
	return false;
}

::hx::Val Promise_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_rejected") ) { _rejected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_rejected",dd,f6,19,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Promise_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Promise_obj,_rejected),HX_("_rejected",dd,f6,19,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Promise_obj_sStaticStorageInfo = 0;
#endif

static ::String Promise_obj_sMemberFields[] = {
	HX_("_rejected",dd,f6,19,f3),
	HX_("isRejected",88,11,33,26),
	HX_("reject",5f,51,85,02),
	HX_("handleResolve",24,fc,d4,7f),
	HX_("then",dd,02,fc,4c),
	HX_("unlink",d3,1e,88,65),
	HX_("handleError",00,77,73,25),
	HX_("pipe",2e,f4,57,4a),
	HX_("errorPipe",16,70,c0,70),
	::String(null()) };

::hx::Class Promise_obj::__mClass;

static ::String Promise_obj_sStaticFields[] = {
	HX_("whenAll",87,7a,f7,59),
	HX_("promise",9b,cd,e9,f7),
	::String(null())
};

void Promise_obj::__register()
{
	Promise_obj _hx_dummy;
	Promise_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("promhx.Promise",bd,f1,f5,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Promise_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Promise_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Promise_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace promhx
