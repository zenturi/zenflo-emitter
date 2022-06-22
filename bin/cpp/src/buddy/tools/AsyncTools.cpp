#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_buddy_tools_AsyncTools
#include <buddy/tools/AsyncTools.h>
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
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_82ebcb15510556a8_35_iterateAsyncBool,"buddy.tools.AsyncTools","iterateAsyncBool",0xba7391e0,"buddy.tools.AsyncTools.iterateAsyncBool","buddy/tools/AsyncTools.hx",35,0xf866bdc2)
HX_LOCAL_STACK_FRAME(_hx_pos_82ebcb15510556a8_39_iterateAsync,"buddy.tools.AsyncTools","iterateAsync",0x3d9cde96,"buddy.tools.AsyncTools.iterateAsync","buddy/tools/AsyncTools.hx",39,0xf866bdc2)
HX_LOCAL_STACK_FRAME(_hx_pos_82ebcb15510556a8_50_wait,"buddy.tools.AsyncTools","wait",0xec3dda29,"buddy.tools.AsyncTools.wait","buddy/tools/AsyncTools.hx",50,0xf866bdc2)
HX_LOCAL_STACK_FRAME(_hx_pos_82ebcb15510556a8_73_wait,"buddy.tools.AsyncTools","wait",0xec3dda29,"buddy.tools.AsyncTools.wait","buddy/tools/AsyncTools.hx",73,0xf866bdc2)
HX_LOCAL_STACK_FRAME(_hx_pos_82ebcb15510556a8_47_wait,"buddy.tools.AsyncTools","wait",0xec3dda29,"buddy.tools.AsyncTools.wait","buddy/tools/AsyncTools.hx",47,0xf866bdc2)
HX_LOCAL_STACK_FRAME(_hx_pos_82ebcb15510556a8_86_next,"buddy.tools.AsyncTools","next",0xe64e04a7,"buddy.tools.AsyncTools.next","buddy/tools/AsyncTools.hx",86,0xf866bdc2)
HX_LOCAL_STACK_FRAME(_hx_pos_82ebcb15510556a8_93_next,"buddy.tools.AsyncTools","next",0xe64e04a7,"buddy.tools.AsyncTools.next","buddy/tools/AsyncTools.hx",93,0xf866bdc2)
namespace buddy{
namespace tools{

void AsyncTools_obj::__construct() { }

Dynamic AsyncTools_obj::__CreateEmpty() { return new AsyncTools_obj; }

void *AsyncTools_obj::_hx_vtable = 0;

Dynamic AsyncTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AsyncTools_obj > _hx_result = new AsyncTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AsyncTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1519d974;
}

 ::promhx::Promise AsyncTools_obj::iterateAsyncBool( ::Dynamic it, ::Dynamic action){
            	HX_STACKFRAME(&_hx_pos_82ebcb15510556a8_35_iterateAsyncBool)
HXDLIN(  35)		return ::buddy::tools::AsyncTools_obj::iterateAsync(it,action,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AsyncTools_obj,iterateAsyncBool,return )

 ::promhx::Promise AsyncTools_obj::iterateAsync( ::Dynamic it, ::Dynamic action, ::Dynamic resolveWith){
            	HX_GC_STACKFRAME(&_hx_pos_82ebcb15510556a8_39_iterateAsync)
HXLINE(  40)		 ::promhx::Deferred finished =  ::promhx::Deferred_obj::__alloc( HX_CTX );
HXLINE(  41)		 ::promhx::Promise pr = finished->promise();
HXLINE(  42)		::buddy::tools::AsyncTools_obj::next(it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)(),action,finished,resolveWith);
HXLINE(  43)		return pr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncTools_obj,iterateAsync,return )

 ::promhx::Promise AsyncTools_obj::wait(int ms){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::promhx::Deferred,def, ::promhx::Promise,pr) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_82ebcb15510556a8_50_wait)
HXLINE(  50)			if (!(pr->_fulfilled)) {
HXLINE(  50)				def->resolve(true);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,int,ms, ::Dynamic,done) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_82ebcb15510556a8_73_wait)
HXLINE(  74)			::Sys_obj::sleep((( (Float)(ms) ) / ( (Float)(1000) )));
HXLINE(  75)			done();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_82ebcb15510556a8_47_wait)
HXLINE(  48)		 ::promhx::Deferred def =  ::promhx::Deferred_obj::__alloc( HX_CTX );
HXLINE(  49)		 ::promhx::Promise pr = def->promise();
HXLINE(  50)		 ::Dynamic done =  ::Dynamic(new _hx_Closure_0(def,pr));
HXLINE(  73)		::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_1(ms,done)),false);
HXLINE(  81)		return pr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AsyncTools_obj,wait,return )

void AsyncTools_obj::next( ::Dynamic it, ::Dynamic action, ::promhx::Deferred def, ::Dynamic resolveWith){
            	HX_STACKFRAME(&_hx_pos_82ebcb15510556a8_86_next)
HXDLIN(  86)		if (!(( (bool)(it->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ))) {
HXLINE(  87)			def->resolve(resolveWith);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,action, ::Dynamic,it, ::promhx::Deferred,def, ::Dynamic,resolveWith) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_82ebcb15510556a8_93_next)
HXLINE(  93)				::buddy::tools::AsyncTools_obj::next(it,action,def,resolveWith);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  90)			 ::Dynamic n = it->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  92)			 ::promhx::Promise r = ( ( ::promhx::Promise)(action(n)) );
HXLINE(  93)			Dynamic( r->then( ::Dynamic(new _hx_Closure_0(action,it,def,resolveWith)))).StaticCast<  ::promhx::Promise >();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AsyncTools_obj,next,(void))


AsyncTools_obj::AsyncTools_obj()
{
}

bool AsyncTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wait") ) { outValue = wait_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iterateAsync") ) { outValue = iterateAsync_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"iterateAsyncBool") ) { outValue = iterateAsyncBool_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AsyncTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AsyncTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AsyncTools_obj::__mClass;

static ::String AsyncTools_obj_sStaticFields[] = {
	HX_("iterateAsyncBool",2c,54,0d,4f),
	HX_("iterateAsync",e2,8a,7c,c8),
	HX_("wait",75,5a,f2,4e),
	HX_("next",f3,84,02,49),
	::String(null())
};

void AsyncTools_obj::__register()
{
	AsyncTools_obj _hx_dummy;
	AsyncTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.tools.AsyncTools",3a,fd,20,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AsyncTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AsyncTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AsyncTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AsyncTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
} // end namespace tools
