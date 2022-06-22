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
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_43_new,"promhx.base.AsyncBase","new",0x69b652a0,"promhx.base.AsyncBase.new","promhx/base/AsyncBase.hx",43,0xe6f74d30)
HX_DEFINE_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_57_new,"promhx.base.AsyncBase","new",0x69b652a0,"promhx.base.AsyncBase.new","promhx/base/AsyncBase.hx",57,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_67_catchError,"promhx.base.AsyncBase","catchError",0x36d0cf4d,"promhx.base.AsyncBase.catchError","promhx/base/AsyncBase.hx",67,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_75_errorThen,"promhx.base.AsyncBase","errorThen",0x5df23105,"promhx.base.AsyncBase.errorThen","promhx/base/AsyncBase.hx",75,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_84_isResolved,"promhx.base.AsyncBase","isResolved",0xd8cdd3c2,"promhx.base.AsyncBase.isResolved","promhx/base/AsyncBase.hx",84,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_90_isErrored,"promhx.base.AsyncBase","isErrored",0xd896d59d,"promhx.base.AsyncBase.isErrored","promhx/base/AsyncBase.hx",90,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_96_isErrorHandled,"promhx.base.AsyncBase","isErrorHandled",0xc10b999e,"promhx.base.AsyncBase.isErrorHandled","promhx/base/AsyncBase.hx",96,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_102_isErrorPending,"promhx.base.AsyncBase","isErrorPending",0xa7228239,"promhx.base.AsyncBase.isErrorPending","promhx/base/AsyncBase.hx",102,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_108_isFulfilled,"promhx.base.AsyncBase","isFulfilled",0x0e0a9e95,"promhx.base.AsyncBase.isFulfilled","promhx/base/AsyncBase.hx",108,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_115_isPending,"promhx.base.AsyncBase","isPending",0x1a78c7cd,"promhx.base.AsyncBase.isPending","promhx/base/AsyncBase.hx",115,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_119_handleResolve,"promhx.base.AsyncBase","handleResolve",0x61c8ce64,"promhx.base.AsyncBase.handleResolve","promhx/base/AsyncBase.hx",119,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_124__resolve,"promhx.base.AsyncBase","_resolve",0xf035c22d,"promhx.base.AsyncBase._resolve","promhx/base/AsyncBase.hx",124,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_129__resolve,"promhx.base.AsyncBase","_resolve",0xf035c22d,"promhx.base.AsyncBase._resolve","promhx/base/AsyncBase.hx",129,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_140__resolve,"promhx.base.AsyncBase","_resolve",0xf035c22d,"promhx.base.AsyncBase._resolve","promhx/base/AsyncBase.hx",140,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_161_handleError,"promhx.base.AsyncBase","handleError",0x14823940,"promhx.base.AsyncBase.handleError","promhx/base/AsyncBase.hx",161,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_165__handleError,"promhx.base.AsyncBase","_handleError",0xc9585ac1,"promhx.base.AsyncBase._handleError","promhx/base/AsyncBase.hx",165,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_164__handleError,"promhx.base.AsyncBase","_handleError",0xc9585ac1,"promhx.base.AsyncBase._handleError","promhx/base/AsyncBase.hx",164,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_204__handleError,"promhx.base.AsyncBase","_handleError",0xc9585ac1,"promhx.base.AsyncBase._handleError","promhx/base/AsyncBase.hx",204,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_223_then,"promhx.base.AsyncBase","then",0x19cb789d,"promhx.base.AsyncBase.then","promhx/base/AsyncBase.hx",223,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_225_then,"promhx.base.AsyncBase","then",0x19cb789d,"promhx.base.AsyncBase.then","promhx/base/AsyncBase.hx",225,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_233_unlink,"promhx.base.AsyncBase","unlink",0x9d708493,"promhx.base.AsyncBase.unlink","promhx/base/AsyncBase.hx",233,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_235_unlink,"promhx.base.AsyncBase","unlink",0x9d708493,"promhx.base.AsyncBase.unlink","promhx/base/AsyncBase.hx",235,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_242_isLinked,"promhx.base.AsyncBase","isLinked",0x942bd423,"promhx.base.AsyncBase.isLinked","promhx/base/AsyncBase.hx",242,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_266_link,"promhx.base.AsyncBase","link",0x14828dba,"promhx.base.AsyncBase.link","promhx/base/AsyncBase.hx",266,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_255_link,"promhx.base.AsyncBase","link",0x14828dba,"promhx.base.AsyncBase.link","promhx/base/AsyncBase.hx",255,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_274_immediateLinkUpdate,"promhx.base.AsyncBase","immediateLinkUpdate",0x01641b34,"promhx.base.AsyncBase.immediateLinkUpdate","promhx/base/AsyncBase.hx",274,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_300_linkAll,"promhx.base.AsyncBase","linkAll",0xd6f6f387,"promhx.base.AsyncBase.linkAll","promhx/base/AsyncBase.hx",300,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_295_linkAll,"promhx.base.AsyncBase","linkAll",0xd6f6f387,"promhx.base.AsyncBase.linkAll","promhx/base/AsyncBase.hx",295,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_310_linkAll,"promhx.base.AsyncBase","linkAll",0xd6f6f387,"promhx.base.AsyncBase.linkAll","promhx/base/AsyncBase.hx",310,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_328_pipeLink,"promhx.base.AsyncBase","pipeLink",0x857a3d08,"promhx.base.AsyncBase.pipeLink","promhx/base/AsyncBase.hx",328,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_335_pipeLink,"promhx.base.AsyncBase","pipeLink",0x857a3d08,"promhx.base.AsyncBase.pipeLink","promhx/base/AsyncBase.hx",335,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_325_pipeLink,"promhx.base.AsyncBase","pipeLink",0x857a3d08,"promhx.base.AsyncBase.pipeLink","promhx/base/AsyncBase.hx",325,0xe6f74d30)
static const bool _hx_array_data_a2b8c2ae_42[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_359_allResolved,"promhx.base.AsyncBase","allResolved",0xc6fa7c79,"promhx.base.AsyncBase.allResolved","promhx/base/AsyncBase.hx",359,0xe6f74d30)
HX_LOCAL_STACK_FRAME(_hx_pos_cbde63ebb55b7a1d_372_allFulfilled,"promhx.base.AsyncBase","allFulfilled",0x86f195fe,"promhx.base.AsyncBase.allFulfilled","promhx/base/AsyncBase.hx",372,0xe6f74d30)
namespace promhx{
namespace base{

void AsyncBase_obj::__construct( ::promhx::Deferred d){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_43_new)
HXLINE(  48)		this->_resolved = false;
HXLINE(  49)		this->_pending = false;
HXLINE(  50)		this->_errorPending = false;
HXLINE(  51)		this->_fulfilled = false;
HXLINE(  52)		this->_update = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  53)		this->_error = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  54)		this->_errored = false;
HXLINE(  56)		if (::hx::IsNotNull( d )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::Dynamic _hx_run( ::Dynamic x){
            				HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_57_new)
HXLINE(  57)				return x;
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f, ::promhx::base::AsyncBase,next) HXARGC(1)
            			void _hx_run( ::Dynamic x){
            				HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_57_new)
HXLINE(  57)				 ::promhx::base::AsyncBase next1 = next;
HXDLIN(  57)				next1->handleResolve(f(x));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  57)			 ::promhx::base::AsyncBase next = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)			 ::Dynamic f =  ::Dynamic(new _hx_Closure_0());
HXDLIN(  57)			d->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("async",3c,ff,3d,26),next)
            				->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_1(f,next)))));
HXDLIN(  57)			::promhx::base::AsyncBase_obj::immediateLinkUpdate(d,next,f);
            		}
            	}

Dynamic AsyncBase_obj::__CreateEmpty() { return new AsyncBase_obj; }

void *AsyncBase_obj::_hx_vtable = 0;

Dynamic AsyncBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AsyncBase_obj > _hx_result = new AsyncBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AsyncBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12b0cfec;
}

 ::promhx::base::AsyncBase AsyncBase_obj::catchError( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_67_catchError)
HXLINE(  68)		this->_error->push(f);
HXLINE(  69)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,catchError,return )

 ::promhx::base::AsyncBase AsyncBase_obj::errorThen( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_75_errorThen)
HXLINE(  76)		this->_errorMap = f;
HXLINE(  77)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,errorThen,return )

bool AsyncBase_obj::isResolved(){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_84_isResolved)
HXDLIN(  84)		return this->_resolved;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isResolved,return )

bool AsyncBase_obj::isErrored(){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_90_isErrored)
HXDLIN(  90)		return this->_errored;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isErrored,return )

bool AsyncBase_obj::isErrorHandled(){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_96_isErrorHandled)
HXDLIN(  96)		return (this->_error->length > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isErrorHandled,return )

bool AsyncBase_obj::isErrorPending(){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_102_isErrorPending)
HXDLIN( 102)		return this->_errorPending;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isErrorPending,return )

bool AsyncBase_obj::isFulfilled(){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_108_isFulfilled)
HXDLIN( 108)		return this->_fulfilled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isFulfilled,return )

bool AsyncBase_obj::isPending(){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_115_isPending)
HXDLIN( 115)		return this->_pending;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isPending,return )

void AsyncBase_obj::handleResolve( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_119_handleResolve)
HXDLIN( 119)		this->_resolve(val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,handleResolve,(void))

void AsyncBase_obj::_resolve( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_124__resolve)
HXDLIN( 124)		 ::promhx::base::AsyncBase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 128)		if (this->_pending) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,val1, ::Dynamic,_g) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_129__resolve)
HXLINE( 129)				_g(val1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 129)			 ::Dynamic _g = this->_resolve_dyn();
HXDLIN( 129)			 ::Dynamic val1 = val;
HXDLIN( 129)			 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(val1,_g));
HXDLIN( 129)			::promhx::base::EventLoop_obj::queue->add(_hx_tmp);
HXDLIN( 129)			::promhx::base::EventLoop_obj::continueOnNextLoop();
            		}
            		else {
HXLINE( 133)			this->_resolved = true;
HXLINE( 137)			this->_pending = true;
HXLINE( 140)			{
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::promhx::base::AsyncBase,_gthis, ::Dynamic,val) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_140__resolve)
HXLINE( 141)					_gthis->_val = val;
HXLINE( 142)					{
HXLINE( 142)						int _g = 0;
HXDLIN( 142)						::Array< ::Dynamic> _g1 = _gthis->_update;
HXDLIN( 142)						while((_g < _g1->length)){
HXLINE( 142)							 ::Dynamic up = _g1->__get(_g);
HXDLIN( 142)							_g = (_g + 1);
HXLINE( 146)							try {
            								HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 146)								up->__Field(HX_("linkf",2c,e3,01,75),::hx::paccDynamic)(val);
            							} catch( ::Dynamic _hx_e) {
            								if (_hx_e.IsClass<  ::Dynamic >() ){
            									HX_STACK_BEGIN_CATCH
            									 ::Dynamic _g = _hx_e;
HXLINE( 147)									{
HXLINE( 147)										null();
            									}
HXDLIN( 147)									 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 147)									( ( ::promhx::base::AsyncBase)(up->__Field(HX_("async",3c,ff,3d,26),::hx::paccDynamic)) )->handleError(e);
            								}
            								else {
            									HX_STACK_DO_THROW(_hx_e);
            								}
            							}
            						}
            					}
HXLINE( 150)					_gthis->_fulfilled = true;
HXLINE( 151)					_gthis->_pending = false;
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 140)				::promhx::base::EventLoop_obj::queue->add( ::Dynamic(new _hx_Closure_1(_gthis,val)));
HXDLIN( 140)				::promhx::base::EventLoop_obj::continueOnNextLoop();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,_resolve,(void))

void AsyncBase_obj::handleError( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_161_handleError)
HXDLIN( 161)		this->_handleError(error);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,handleError,(void))

void AsyncBase_obj::_handleError( ::Dynamic error){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::promhx::base::AsyncBase,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_165__handleError)
HXLINE( 166)			if ((_gthis->_error->length > 0)) {
HXLINE( 166)				int _g = 0;
HXDLIN( 166)				::Array< ::Dynamic> _g1 = _gthis->_error;
HXDLIN( 166)				while((_g < _g1->length)){
HXLINE( 166)					 ::Dynamic ef = _g1->__get(_g);
HXDLIN( 166)					_g = (_g + 1);
HXDLIN( 166)					ef(e);
            				}
            			}
            			else {
HXLINE( 167)				if ((_gthis->_update->length > 0)) {
HXLINE( 167)					int _g = 0;
HXDLIN( 167)					::Array< ::Dynamic> _g1 = _gthis->_update;
HXDLIN( 167)					while((_g < _g1->length)){
HXLINE( 167)						 ::Dynamic up = _g1->__get(_g);
HXDLIN( 167)						_g = (_g + 1);
HXDLIN( 167)						( ( ::promhx::base::AsyncBase)(up->__Field(HX_("async",3c,ff,3d,26),::hx::paccDynamic)) )->handleError(e);
            					}
            				}
            				else {
HXLINE( 194)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            			}
HXLINE( 196)			_gthis->_errorPending = false;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_164__handleError)
HXDLIN( 164)		 ::promhx::base::AsyncBase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 165)		 ::Dynamic update_errors =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 198)		if (!(this->_errorPending)) {
HXLINE( 199)			this->_errorPending = true;
HXLINE( 200)			this->_errored = true;
HXLINE( 201)			this->_errorVal = error;
HXLINE( 203)			{
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::promhx::base::AsyncBase,_gthis, ::Dynamic,error, ::Dynamic,update_errors) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_204__handleError)
HXLINE( 204)					if (::hx::IsNotNull( _gthis->_errorMap )) {
HXLINE( 209)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 209)							 ::promhx::base::AsyncBase _gthis1 = _gthis;
HXDLIN( 209)							_gthis1->_resolve(_gthis->_errorMap(error));
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 210)								{
HXLINE( 210)									null();
            								}
HXDLIN( 210)								 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 210)								update_errors(e);
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					else {
HXLINE( 213)						update_errors(error);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 203)				::promhx::base::EventLoop_obj::queue->add( ::Dynamic(new _hx_Closure_1(_gthis,error,update_errors)));
HXDLIN( 203)				::promhx::base::EventLoop_obj::continueOnNextLoop();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,_handleError,(void))

 ::promhx::base::AsyncBase AsyncBase_obj::then( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_223_then)
HXLINE( 224)		 ::promhx::base::AsyncBase ret =  ::promhx::base::AsyncBase_obj::__alloc( HX_CTX ,null());
HXLINE( 225)		{
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::promhx::base::AsyncBase,next, ::Dynamic,f1) HXARGC(1)
            			void _hx_run( ::Dynamic x){
            				HX_GC_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_225_then)
HXLINE( 225)				 ::promhx::base::AsyncBase next1 = next;
HXDLIN( 225)				next1->handleResolve(f1(x));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 225)			 ::promhx::base::AsyncBase next = ret;
HXDLIN( 225)			 ::Dynamic f1 = f;
HXDLIN( 225)			this->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("async",3c,ff,3d,26),next)
            				->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_0(next,f1)))));
HXDLIN( 225)			::promhx::base::AsyncBase_obj::immediateLinkUpdate(::hx::ObjectPtr<OBJ_>(this),next,f1);
            		}
HXLINE( 226)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,then,return )

void AsyncBase_obj::unlink( ::promhx::base::AsyncBase to){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_233_unlink)
HXDLIN( 233)		 ::promhx::base::AsyncBase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 234)		{
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::promhx::base::AsyncBase,_gthis, ::promhx::base::AsyncBase,to) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_235_unlink)
HXLINE( 235)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 235)				{
HXLINE( 235)					int _g1 = 0;
HXDLIN( 235)					::Array< ::Dynamic> _g2 = _gthis->_update;
HXDLIN( 235)					while((_g1 < _g2->length)){
HXLINE( 235)						 ::Dynamic v = _g2->__get(_g1);
HXDLIN( 235)						_g1 = (_g1 + 1);
HXDLIN( 235)						if (::hx::IsInstanceNotEq( v->__Field(HX_("async",3c,ff,3d,26),::hx::paccDynamic),to )) {
HXLINE( 235)							_g->push(v);
            						}
            					}
            				}
HXDLIN( 235)				_gthis->_update = _g;
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 234)			::promhx::base::EventLoop_obj::queue->add( ::Dynamic(new _hx_Closure_0(_gthis,to)));
HXDLIN( 234)			::promhx::base::EventLoop_obj::continueOnNextLoop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,unlink,(void))

bool AsyncBase_obj::isLinked( ::promhx::base::AsyncBase to){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_242_isLinked)
HXLINE( 243)		bool updated = false;
HXLINE( 244)		{
HXLINE( 244)			int _g = 0;
HXDLIN( 244)			::Array< ::Dynamic> _g1 = this->_update;
HXDLIN( 244)			while((_g < _g1->length)){
HXLINE( 244)				 ::Dynamic u = _g1->__get(_g);
HXDLIN( 244)				_g = (_g + 1);
HXDLIN( 244)				if (::hx::IsInstanceEq( u->__Field(HX_("async",3c,ff,3d,26),::hx::paccDynamic),to )) {
HXLINE( 244)					return true;
            				}
            			}
            		}
HXLINE( 245)		return updated;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,isLinked,return )

void AsyncBase_obj::link( ::promhx::base::AsyncBase current, ::promhx::base::AsyncBase next, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::promhx::base::AsyncBase,next) HXARGC(1)
            		void _hx_run( ::Dynamic x){
            			HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_266_link)
HXLINE( 266)			 ::promhx::base::AsyncBase next1 = next;
HXDLIN( 266)			next1->handleResolve(f(x));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_255_link)
HXLINE( 263)		current->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("async",3c,ff,3d,26),next)
            			->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_0(f,next)))));
HXLINE( 269)		::promhx::base::AsyncBase_obj::immediateLinkUpdate(current,next,f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncBase_obj,link,(void))

void AsyncBase_obj::immediateLinkUpdate( ::promhx::base::AsyncBase current, ::promhx::base::AsyncBase next, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_274_immediateLinkUpdate)
HXLINE( 275)		bool _hx_tmp;
HXDLIN( 275)		bool _hx_tmp1;
HXDLIN( 275)		if (current->_errored) {
HXLINE( 275)			_hx_tmp1 = !(current->_errorPending);
            		}
            		else {
HXLINE( 275)			_hx_tmp1 = false;
            		}
HXDLIN( 275)		if (_hx_tmp1) {
HXLINE( 275)			_hx_tmp = (current->_error->length <= 0);
            		}
            		else {
HXLINE( 275)			_hx_tmp = false;
            		}
HXDLIN( 275)		if (_hx_tmp) {
HXLINE( 278)			next->handleError(current->_errorVal);
            		}
HXLINE( 281)		bool _hx_tmp2;
HXDLIN( 281)		if (current->_resolved) {
HXLINE( 281)			_hx_tmp2 = !(current->_pending);
            		}
            		else {
HXLINE( 281)			_hx_tmp2 = false;
            		}
HXDLIN( 281)		if (_hx_tmp2) {
HXLINE( 286)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 286)				next->handleResolve(f(current->_val));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 287)					{
HXLINE( 287)						null();
            					}
HXDLIN( 287)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 287)					next->handleError(e);
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncBase_obj,immediateLinkUpdate,(void))

void AsyncBase_obj::linkAll( ::Dynamic all, ::promhx::base::AsyncBase next){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,all, ::promhx::base::AsyncBase,next) HXARGC(3)
            		void _hx_run(::Array< ::Dynamic> arr, ::promhx::base::AsyncBase current, ::Dynamic v){
            			HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_300_linkAll)
HXLINE( 301)			bool cthen;
HXDLIN( 301)			if ((arr->length != 0)) {
HXLINE( 301)				cthen = ::promhx::base::AsyncBase_obj::allFulfilled(arr);
            			}
            			else {
HXLINE( 301)				cthen = true;
            			}
HXDLIN( 301)			if (cthen) {
HXLINE( 302)				::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 302)				{
HXLINE( 302)					 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 302)					while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 302)						 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 302)						 ::Dynamic cthen;
HXDLIN( 302)						if (::hx::IsInstanceEq( a1,current )) {
HXLINE( 302)							cthen = v;
            						}
            						else {
HXLINE( 302)							cthen = a1->_val;
            						}
HXDLIN( 302)						_g->push(cthen);
            					}
            				}
HXDLIN( 302)				::cpp::VirtualArray vals = _g;
HXLINE( 303)				next->handleResolve(vals);
            			}
            		}
            		HX_END_LOCAL_FUNC3((void))

            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_295_linkAll)
HXLINE( 300)		 ::Dynamic cthen =  ::Dynamic(new _hx_Closure_0(all,next));
HXLINE( 307)		{
HXLINE( 307)			 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 307)			while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::promhx::base::AsyncBase,current,::Array< ::Dynamic>,arr, ::Dynamic,_g) HXARGC(1)
            				void _hx_run( ::Dynamic v){
            					HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_310_linkAll)
HXLINE( 310)					_g(arr,current,v);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 307)				 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 308)				::Array< ::Dynamic> a2 = a1->_update;
HXLINE( 309)				 ::promhx::base::AsyncBase next1 = next;
HXLINE( 310)				 ::Dynamic _g = cthen;
HXDLIN( 310)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 310)				{
HXLINE( 310)					 ::Dynamic a21 = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 310)					while(( (bool)(a21->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 310)						 ::promhx::base::AsyncBase a2 = ( ( ::promhx::base::AsyncBase)(a21->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 310)						if (::hx::IsInstanceNotEq( a2,a1 )) {
HXLINE( 310)							_g1->push(a2);
            						}
            					}
            				}
HXDLIN( 310)				::Array< ::Dynamic> arr = _g1;
HXDLIN( 310)				 ::promhx::base::AsyncBase current = a1;
HXLINE( 308)				a2->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("async",3c,ff,3d,26),next1)
            					->setFixed(1,HX_("linkf",2c,e3,01,75), ::Dynamic(new _hx_Closure_1(current,arr,_g)))));
            			}
            		}
HXLINE( 314)		if (::promhx::base::AsyncBase_obj::allFulfilled(all)) {
HXLINE( 315)			 ::promhx::base::AsyncBase next1 = next;
HXDLIN( 315)			::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 315)			{
HXLINE( 315)				 ::Dynamic a = all->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 315)				while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 315)					 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 315)					_g->push(a1->_val);
            				}
            			}
HXDLIN( 315)			next1->handleResolve(_g);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AsyncBase_obj,linkAll,(void))

void AsyncBase_obj::pipeLink( ::promhx::base::AsyncBase current, ::promhx::base::AsyncBase ret, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f, ::promhx::base::AsyncBase,ret,::Array< bool >,linked) HXARGC(1)
            		void _hx_run( ::Dynamic x){
            			HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_328_pipeLink)
HXLINE( 328)			if (!(linked->__get(0))) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				 ::Dynamic _hx_run( ::Dynamic x){
            					HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_335_pipeLink)
HXLINE( 335)					return x;
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 329)				linked[0] = true;
HXLINE( 330)				 ::promhx::base::AsyncBase pipe_ret = ( ( ::promhx::base::AsyncBase)(f(x)) );
HXLINE( 331)				pipe_ret->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("async",3c,ff,3d,26),ret)
            					->setFixed(1,HX_("linkf",2c,e3,01,75),ret->handleResolve_dyn())));
HXLINE( 335)				::promhx::base::AsyncBase_obj::immediateLinkUpdate(pipe_ret,ret, ::Dynamic(new _hx_Closure_0()));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_325_pipeLink)
HXLINE( 326)		::Array< bool > linked = ::Array_obj< bool >::fromData( _hx_array_data_a2b8c2ae_42,1);
HXLINE( 327)		 ::Dynamic linkf =  ::Dynamic(new _hx_Closure_1(f,ret,linked));
HXLINE( 339)		current->_update->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("async",3c,ff,3d,26),ret)
            			->setFixed(1,HX_("linkf",2c,e3,01,75),linkf)));
HXLINE( 344)		bool _hx_tmp;
HXDLIN( 344)		if (current->_resolved) {
HXLINE( 344)			_hx_tmp = !(current->_pending);
            		}
            		else {
HXLINE( 344)			_hx_tmp = false;
            		}
HXDLIN( 344)		if (_hx_tmp) {
HXLINE( 348)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 348)				linkf(current->_val);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 349)					{
HXLINE( 349)						null();
            					}
HXDLIN( 349)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 349)					ret->handleError(e);
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncBase_obj,pipeLink,(void))

bool AsyncBase_obj::allResolved( ::Dynamic as){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_359_allResolved)
HXLINE( 360)		{
HXLINE( 360)			 ::Dynamic a = as->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 360)			while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 360)				 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 361)				if (!(a1->_resolved)) {
HXLINE( 361)					return false;
            				}
            			}
            		}
HXLINE( 363)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,allResolved,return )

bool AsyncBase_obj::allFulfilled( ::Dynamic as){
            	HX_STACKFRAME(&_hx_pos_cbde63ebb55b7a1d_372_allFulfilled)
HXLINE( 373)		{
HXLINE( 373)			 ::Dynamic a = as->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 373)			while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 373)				 ::promhx::base::AsyncBase a1 = ( ( ::promhx::base::AsyncBase)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 374)				if (!(a1->_fulfilled)) {
HXLINE( 374)					return false;
            				}
            			}
            		}
HXLINE( 376)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,allFulfilled,return )


::hx::ObjectPtr< AsyncBase_obj > AsyncBase_obj::__new( ::promhx::Deferred d) {
	::hx::ObjectPtr< AsyncBase_obj > __this = new AsyncBase_obj();
	__this->__construct(d);
	return __this;
}

::hx::ObjectPtr< AsyncBase_obj > AsyncBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::promhx::Deferred d) {
	AsyncBase_obj *__this = (AsyncBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AsyncBase_obj), true, "promhx.base.AsyncBase"));
	*(void **)__this = AsyncBase_obj::_hx_vtable;
	__this->__construct(d);
	return __this;
}

AsyncBase_obj::AsyncBase_obj()
{
}

void AsyncBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncBase);
	HX_MARK_MEMBER_NAME(_val,"_val");
	HX_MARK_MEMBER_NAME(_resolved,"_resolved");
	HX_MARK_MEMBER_NAME(_fulfilled,"_fulfilled");
	HX_MARK_MEMBER_NAME(_pending,"_pending");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_error,"_error");
	HX_MARK_MEMBER_NAME(_errored,"_errored");
	HX_MARK_MEMBER_NAME(_errorMap,"_errorMap");
	HX_MARK_MEMBER_NAME(_errorVal,"_errorVal");
	HX_MARK_MEMBER_NAME(_errorPending,"_errorPending");
	HX_MARK_END_CLASS();
}

void AsyncBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_val,"_val");
	HX_VISIT_MEMBER_NAME(_resolved,"_resolved");
	HX_VISIT_MEMBER_NAME(_fulfilled,"_fulfilled");
	HX_VISIT_MEMBER_NAME(_pending,"_pending");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_error,"_error");
	HX_VISIT_MEMBER_NAME(_errored,"_errored");
	HX_VISIT_MEMBER_NAME(_errorMap,"_errorMap");
	HX_VISIT_MEMBER_NAME(_errorVal,"_errorVal");
	HX_VISIT_MEMBER_NAME(_errorPending,"_errorPending");
}

::hx::Val AsyncBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_val") ) { return ::hx::Val( _val ); }
		if (HX_FIELD_EQ(inName,"then") ) { return ::hx::Val( then_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_error") ) { return ::hx::Val( _error ); }
		if (HX_FIELD_EQ(inName,"unlink") ) { return ::hx::Val( unlink_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return ::hx::Val( _update ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pending") ) { return ::hx::Val( _pending ); }
		if (HX_FIELD_EQ(inName,"_errored") ) { return ::hx::Val( _errored ); }
		if (HX_FIELD_EQ(inName,"_resolve") ) { return ::hx::Val( _resolve_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLinked") ) { return ::hx::Val( isLinked_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resolved") ) { return ::hx::Val( _resolved ); }
		if (HX_FIELD_EQ(inName,"_errorMap") ) { return ::hx::Val( _errorMap ); }
		if (HX_FIELD_EQ(inName,"_errorVal") ) { return ::hx::Val( _errorVal ); }
		if (HX_FIELD_EQ(inName,"errorThen") ) { return ::hx::Val( errorThen_dyn() ); }
		if (HX_FIELD_EQ(inName,"isErrored") ) { return ::hx::Val( isErrored_dyn() ); }
		if (HX_FIELD_EQ(inName,"isPending") ) { return ::hx::Val( isPending_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fulfilled") ) { return ::hx::Val( _fulfilled ); }
		if (HX_FIELD_EQ(inName,"catchError") ) { return ::hx::Val( catchError_dyn() ); }
		if (HX_FIELD_EQ(inName,"isResolved") ) { return ::hx::Val( isResolved_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isFulfilled") ) { return ::hx::Val( isFulfilled_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleError") ) { return ::hx::Val( handleError_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_handleError") ) { return ::hx::Val( _handleError_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_errorPending") ) { return ::hx::Val( _errorPending ); }
		if (HX_FIELD_EQ(inName,"handleResolve") ) { return ::hx::Val( handleResolve_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isErrorHandled") ) { return ::hx::Val( isErrorHandled_dyn() ); }
		if (HX_FIELD_EQ(inName,"isErrorPending") ) { return ::hx::Val( isErrorPending_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AsyncBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { outValue = link_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"linkAll") ) { outValue = linkAll_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pipeLink") ) { outValue = pipeLink_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allResolved") ) { outValue = allResolved_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allFulfilled") ) { outValue = allFulfilled_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"immediateLinkUpdate") ) { outValue = immediateLinkUpdate_dyn(); return true; }
	}
	return false;
}

::hx::Val AsyncBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_val") ) { _val=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_error") ) { _error=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pending") ) { _pending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_errored") ) { _errored=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resolved") ) { _resolved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_errorMap") ) { _errorMap=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_errorVal") ) { _errorVal=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fulfilled") ) { _fulfilled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_errorPending") ) { _errorPending=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_val",e2,23,25,3f));
	outFields->push(HX_("_resolved",57,73,46,54));
	outFields->push(HX_("_fulfilled",60,a1,1d,9c));
	outFields->push(HX_("_pending",d8,f1,a4,65));
	outFields->push(HX_("_update",a8,97,7c,f5));
	outFields->push(HX_("_error",09,13,11,6f));
	outFields->push(HX_("_errored",a8,ff,c2,23));
	outFields->push(HX_("_errorVal",58,4f,d1,26));
	outFields->push(HX_("_errorPending",4e,10,8b,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AsyncBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AsyncBase_obj,_val),HX_("_val",e2,23,25,3f)},
	{::hx::fsBool,(int)offsetof(AsyncBase_obj,_resolved),HX_("_resolved",57,73,46,54)},
	{::hx::fsBool,(int)offsetof(AsyncBase_obj,_fulfilled),HX_("_fulfilled",60,a1,1d,9c)},
	{::hx::fsBool,(int)offsetof(AsyncBase_obj,_pending),HX_("_pending",d8,f1,a4,65)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AsyncBase_obj,_update),HX_("_update",a8,97,7c,f5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AsyncBase_obj,_error),HX_("_error",09,13,11,6f)},
	{::hx::fsBool,(int)offsetof(AsyncBase_obj,_errored),HX_("_errored",a8,ff,c2,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AsyncBase_obj,_errorMap),HX_("_errorMap",13,7b,ca,26)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AsyncBase_obj,_errorVal),HX_("_errorVal",58,4f,d1,26)},
	{::hx::fsBool,(int)offsetof(AsyncBase_obj,_errorPending),HX_("_errorPending",4e,10,8b,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AsyncBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AsyncBase_obj_sMemberFields[] = {
	HX_("_val",e2,23,25,3f),
	HX_("_resolved",57,73,46,54),
	HX_("_fulfilled",60,a1,1d,9c),
	HX_("_pending",d8,f1,a4,65),
	HX_("_update",a8,97,7c,f5),
	HX_("_error",09,13,11,6f),
	HX_("_errored",a8,ff,c2,23),
	HX_("_errorMap",13,7b,ca,26),
	HX_("_errorVal",58,4f,d1,26),
	HX_("_errorPending",4e,10,8b,bf),
	HX_("catchError",8d,89,62,e5),
	HX_("errorThen",c5,7e,64,73),
	HX_("isResolved",02,8e,5f,87),
	HX_("isErrored",5d,23,09,ee),
	HX_("isErrorHandled",de,73,a7,ed),
	HX_("isErrorPending",79,5c,be,d3),
	HX_("isFulfilled",55,dc,fb,1e),
	HX_("isPending",8d,15,eb,2f),
	HX_("handleResolve",24,fc,d4,7f),
	HX_("_resolve",6d,6c,18,a1),
	HX_("handleError",00,77,73,25),
	HX_("_handleError",01,25,7d,8b),
	HX_("then",dd,02,fc,4c),
	HX_("unlink",d3,1e,88,65),
	HX_("isLinked",63,7e,0e,45),
	::String(null()) };

::hx::Class AsyncBase_obj::__mClass;

static ::String AsyncBase_obj_sStaticFields[] = {
	HX_("link",fa,17,b3,47),
	HX_("immediateLinkUpdate",f4,18,69,a6),
	HX_("linkAll",47,51,86,23),
	HX_("pipeLink",48,e7,5c,36),
	HX_("allResolved",39,ba,eb,d7),
	HX_("allFulfilled",3e,60,16,49),
	::String(null())
};

void AsyncBase_obj::__register()
{
	AsyncBase_obj _hx_dummy;
	AsyncBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("promhx.base.AsyncBase",ae,c2,b8,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncBase_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AsyncBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AsyncBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AsyncBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AsyncBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AsyncBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace promhx
} // end namespace base
