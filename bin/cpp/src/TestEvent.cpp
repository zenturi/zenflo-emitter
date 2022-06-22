#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TestCase
#include <TestCase.h>
#endif
#ifndef INCLUDED_TestEvent
#include <TestEvent.h>
#endif
#ifndef INCLUDED_buddy_Buddy
#include <buddy/Buddy.h>
#endif
#ifndef INCLUDED_buddy_BuddySuite
#include <buddy/BuddySuite.h>
#endif
#ifndef INCLUDED_buddy_SuitesRunner
#include <buddy/SuitesRunner.h>
#endif
#ifndef INCLUDED_buddy_reporting_ConsoleReporter
#include <buddy/reporting/ConsoleReporter.h>
#endif
#ifndef INCLUDED_buddy_reporting_Reporter
#include <buddy/reporting/Reporter.h>
#endif
#ifndef INCLUDED_buddy_reporting_TraceReporter
#include <buddy/reporting/TraceReporter.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_df100f4e94530687_200_main,"TestEvent","main",0xf83b3c1f,"TestEvent.main","buddy/internal/GenerateMain.hx",200,0xc54492a7)
HX_LOCAL_STACK_FRAME(_hx_pos_df100f4e94530687_225_main,"TestEvent","main",0xf83b3c1f,"TestEvent.main","buddy/internal/GenerateMain.hx",225,0xc54492a7)
HX_LOCAL_STACK_FRAME(_hx_pos_df100f4e94530687_222_main,"TestEvent","main",0xf83b3c1f,"TestEvent.main","buddy/internal/GenerateMain.hx",222,0xc54492a7)
HX_LOCAL_STACK_FRAME(_hx_pos_df100f4e94530687_251_main,"TestEvent","main",0xf83b3c1f,"TestEvent.main","buddy/internal/GenerateMain.hx",251,0xc54492a7)
HX_LOCAL_STACK_FRAME(_hx_pos_3dbfcc5e344b1eb9_8_main,"TestEvent","main",0xf83b3c1f,"TestEvent.main","TestEvent.hx",8,0xfbd47976)
static const bool _hx_array_data_e099e648_7[] = {
	0,
};

void TestEvent_obj::__construct() { }

Dynamic TestEvent_obj::__CreateEmpty() { return new TestEvent_obj; }

void *TestEvent_obj::_hx_vtable = 0;

Dynamic TestEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TestEvent_obj > _hx_result = new TestEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TestEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52a42da4;
}

static ::buddy::Buddy_obj _hx_TestEvent__hx_buddy_Buddy= {
};

void *TestEvent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87cf11e0: return &_hx_TestEvent__hx_buddy_Buddy;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void TestEvent_obj::main(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::buddy::SuitesRunner,runner1, ::Dynamic,oldTrace) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_df100f4e94530687_200_main)
HXLINE( 201)			::haxe::Log_obj::trace = oldTrace;
HXLINE( 203)			 ::Dynamic pos = ::hx::SourceInfo(HX_("Buddy",e6,78,14,4e),0,HX_("",00,00,00,00),HX_("",00,00,00,00));
HXLINE( 210)			::haxe::Log_obj::trace(runner1->unrecoverableError,pos);
HXLINE( 212)			::Array< ::Dynamic> stack = runner1->unrecoverableErrorStack;
HXLINE( 213)			bool outputError;
HXDLIN( 213)			if (::hx::IsNotNull( stack )) {
HXLINE( 213)				outputError = (stack->length == 0);
            			}
            			else {
HXLINE( 213)				outputError = true;
            			}
HXDLIN( 213)			if (outputError) {
HXLINE( 213)				return;
            			}
HXLINE( 215)			{
HXLINE( 215)				int _g = 0;
HXDLIN( 215)				while((_g < stack->length)){
HXLINE( 215)					 ::haxe::StackItem s = stack->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN( 215)					_g = (_g + 1);
HXDLIN( 215)					if ((s->_hx_getIndex() == 2)) {
HXLINE( 216)						 ::haxe::StackItem _g = s->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 216)						 ::Dynamic _g1 = s->_hx_getObject(3);
HXLINE(   1)						{
HXLINE( 216)							::String file = s->_hx_getString(1);
HXDLIN( 216)							int line = s->_hx_getInt(2);
HXLINE(   1)							if ((line > 0)) {
HXLINE( 217)								::haxe::Log_obj::trace(((file + HX_(":",3a,00,00,00)) + line),pos);
            							}
            						}
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::buddy::SuitesRunner,runner1, ::Dynamic,outputError) HXARGC(1)
            		void _hx_run( ::Dynamic done){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::buddy::SuitesRunner,runner1, ::Dynamic,outputError, ::Dynamic,done) HXARGC(1)
            			void _hx_run( ::buddy::SuitesRunner _){
            				HX_GC_STACKFRAME(&_hx_pos_df100f4e94530687_225_main)
HXLINE( 226)				if (::hx::IsNotNull( runner1->unrecoverableError )) {
HXLINE( 226)					outputError();
            				}
HXLINE( 227)				done();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_df100f4e94530687_222_main)
HXLINE( 224)			 ::promhx::Promise r = runner1->run();
HXLINE( 225)			Dynamic( r->then( ::Dynamic(new _hx_Closure_1(runner1,outputError,done)))).StaticCast<  ::promhx::Promise >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3,::Array< bool >,testsDone) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_df100f4e94530687_251_main)
HXLINE( 251)			testsDone[0] = true;
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_3dbfcc5e344b1eb9_8_main)
HXLINE( 196)		::Array< bool > testsDone = ::Array_obj< bool >::fromData( _hx_array_data_e099e648_7,1);
HXLINE(   8)		::Array< ::Dynamic> runner = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::TestCase_obj::__alloc( HX_CTX ));
HXLINE( 197)		 ::buddy::SuitesRunner runner1 =  ::buddy::SuitesRunner_obj::__alloc( HX_CTX ,runner, ::buddy::reporting::ConsoleReporter_obj::__alloc( HX_CTX ,null()));
HXLINE( 198)		 ::Dynamic oldTrace = ::haxe::Log_obj::trace;
HXLINE( 200)		 ::Dynamic outputError =  ::Dynamic(new _hx_Closure_0(runner1,oldTrace));
HXLINE( 222)		 ::Dynamic startRun =  ::Dynamic(new _hx_Closure_2(runner1,outputError));
HXLINE( 251)		startRun( ::Dynamic(new _hx_Closure_3(testsDone)));
HXLINE( 252)		while(!(testsDone->__get(0))){
HXLINE( 252)			::Sys_obj::sleep(((Float)0.1));
            		}
HXLINE( 253)		::Sys_obj::exit(runner1->statusCode());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TestEvent_obj,main,(void))


TestEvent_obj::TestEvent_obj()
{
}

bool TestEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TestEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TestEvent_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TestEvent_obj::__mClass;

static ::String TestEvent_obj_sStaticFields[] = {
	HX_("main",39,38,56,48),
	::String(null())
};

void TestEvent_obj::__register()
{
	TestEvent_obj _hx_dummy;
	TestEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TestEvent",48,e6,99,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TestEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TestEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TestEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TestEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TestEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

