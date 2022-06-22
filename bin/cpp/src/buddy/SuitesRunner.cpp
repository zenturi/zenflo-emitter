#include <hxcpp.h>

#ifndef INCLUDED_AsyncTools
#include <AsyncTools.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_buddy_BuddySuite
#include <buddy/BuddySuite.h>
#endif
#ifndef INCLUDED_buddy_Failure
#include <buddy/Failure.h>
#endif
#ifndef INCLUDED_buddy_Spec
#include <buddy/Spec.h>
#endif
#ifndef INCLUDED_buddy_SpecStatus
#include <buddy/SpecStatus.h>
#endif
#ifndef INCLUDED_buddy_Step
#include <buddy/Step.h>
#endif
#ifndef INCLUDED_buddy_Suite
#include <buddy/Suite.h>
#endif
#ifndef INCLUDED_buddy_SuitesRunner
#include <buddy/SuitesRunner.h>
#endif
#ifndef INCLUDED_buddy_TestFunc
#include <buddy/TestFunc.h>
#endif
#ifndef INCLUDED_buddy_TestSpec
#include <buddy/TestSpec.h>
#endif
#ifndef INCLUDED_buddy_TestSuite
#include <buddy/TestSuite.h>
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
#ifndef INCLUDED_buddy_tests_SelfTest
#include <buddy/tests/SelfTest.h>
#endif
#ifndef INCLUDED_buddy_tools_AsyncTools
#include <buddy/tools/AsyncTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b996ee57a4401f6c_75_new,"buddy.SuitesRunner","new",0x95aeaa05,"buddy.SuitesRunner.new","buddy/SuitesRunner.hx",75,0x575b662a)
HX_DEFINE_STACK_FRAME(_hx_pos_b996ee57a4401f6c_47_new,"buddy.SuitesRunner","new",0x95aeaa05,"buddy.SuitesRunner.new","buddy/SuitesRunner.hx",47,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_89_run,"buddy.SuitesRunner","run",0x95b1c0f0,"buddy.SuitesRunner.run","buddy/SuitesRunner.hx",89,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_81_run,"buddy.SuitesRunner","run",0x95b1c0f0,"buddy.SuitesRunner.run","buddy/SuitesRunner.hx",81,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_107_runDescribes,"buddy.SuitesRunner","runDescribes",0x91c6daf8,"buddy.SuitesRunner.runDescribes","buddy/SuitesRunner.hx",107,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_126_runDescribes,"buddy.SuitesRunner","runDescribes",0x91c6daf8,"buddy.SuitesRunner.runDescribes","buddy/SuitesRunner.hx",126,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_143_runDescribes,"buddy.SuitesRunner","runDescribes",0x91c6daf8,"buddy.SuitesRunner.runDescribes","buddy/SuitesRunner.hx",143,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_141_runDescribes,"buddy.SuitesRunner","runDescribes",0x91c6daf8,"buddy.SuitesRunner.runDescribes","buddy/SuitesRunner.hx",141,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_144_runDescribes,"buddy.SuitesRunner","runDescribes",0x91c6daf8,"buddy.SuitesRunner.runDescribes","buddy/SuitesRunner.hx",144,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_102_runDescribes,"buddy.SuitesRunner","runDescribes",0x91c6daf8,"buddy.SuitesRunner.runDescribes","buddy/SuitesRunner.hx",102,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_156_failed,"buddy.SuitesRunner","failed",0x8341c138,"buddy.SuitesRunner.failed","buddy/SuitesRunner.hx",156,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_157_statusCode,"buddy.SuitesRunner","statusCode",0x70481a7a,"buddy.SuitesRunner.statusCode","buddy/SuitesRunner.hx",157,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_175_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",175,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_174_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",174,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_197_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",197,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_199_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",199,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_201_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",201,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_164_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",164,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_167_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",167,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_161_startRun,"buddy.SuitesRunner","startRun",0x712fa444,"buddy.SuitesRunner.startRun","buddy/SuitesRunner.hx",161,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_211_startIncludeMode,"buddy.SuitesRunner","startIncludeMode",0x06530fa4,"buddy.SuitesRunner.startIncludeMode","buddy/SuitesRunner.hx",211,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_209_startIncludeMode,"buddy.SuitesRunner","startIncludeMode",0x06530fa4,"buddy.SuitesRunner.startIncludeMode","buddy/SuitesRunner.hx",209,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_222_startIncludeMode,"buddy.SuitesRunner","startIncludeMode",0x06530fa4,"buddy.SuitesRunner.startIncludeMode","buddy/SuitesRunner.hx",222,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_207_startIncludeMode,"buddy.SuitesRunner","startIncludeMode",0x06530fa4,"buddy.SuitesRunner.startIncludeMode","buddy/SuitesRunner.hx",207,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_255_mapTestSuite,"buddy.SuitesRunner","mapTestSuite",0xe1ede885,"buddy.SuitesRunner.mapTestSuite","buddy/SuitesRunner.hx",255,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_273_mapTestSuite,"buddy.SuitesRunner","mapTestSuite",0xe1ede885,"buddy.SuitesRunner.mapTestSuite","buddy/SuitesRunner.hx",273,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_261_mapTestSuite,"buddy.SuitesRunner","mapTestSuite",0xe1ede885,"buddy.SuitesRunner.mapTestSuite","buddy/SuitesRunner.hx",261,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_247_mapTestSuite,"buddy.SuitesRunner","mapTestSuite",0xe1ede885,"buddy.SuitesRunner.mapTestSuite","buddy/SuitesRunner.hx",247,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_236_mapTestSuite,"buddy.SuitesRunner","mapTestSuite",0xe1ede885,"buddy.SuitesRunner.mapTestSuite","buddy/SuitesRunner.hx",236,0x575b662a)
static const int _hx_array_data_cb2e4393_32[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_307_runTestFuncs,"buddy.SuitesRunner","runTestFuncs",0x3f44afed,"buddy.SuitesRunner.runTestFuncs","buddy/SuitesRunner.hx",307,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_294_runTestFuncs,"buddy.SuitesRunner","runTestFuncs",0x3f44afed,"buddy.SuitesRunner.runTestFuncs","buddy/SuitesRunner.hx",294,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_312_flatten,"buddy.SuitesRunner","flatten",0x2654bbe9,"buddy.SuitesRunner.flatten","buddy/SuitesRunner.hx",312,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_315_isSync,"buddy.SuitesRunner","isSync",0x05097ae0,"buddy.SuitesRunner.isSync","buddy/SuitesRunner.hx",315,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_338_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",338,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_343_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",343,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_332_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",332,0x575b662a)
static const bool _hx_array_data_cb2e4393_47[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_349_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",349,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_385_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",385,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_406_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",406,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_415_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",415,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_391_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",391,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_432_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",432,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_489_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",489,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_497_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",497,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_502_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",502,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_517_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",517,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_518_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",518,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_529_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",529,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_509_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",509,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_374_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",374,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_473_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",473,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_477_mapTestSpec,"buddy.SuitesRunner","mapTestSpec",0x44baad0e,"buddy.SuitesRunner.mapTestSpec","buddy/SuitesRunner.hx",477,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_543_haveUnrecoverableError,"buddy.SuitesRunner","haveUnrecoverableError",0x6b23d306,"buddy.SuitesRunner.haveUnrecoverableError","buddy/SuitesRunner.hx",543,0x575b662a)
HX_LOCAL_STACK_FRAME(_hx_pos_b996ee57a4401f6c_66_posInfosToStack,"buddy.SuitesRunner","posInfosToStack",0x438d6ae1,"buddy.SuitesRunner.posInfosToStack","buddy/SuitesRunner.hx",66,0x575b662a)
namespace buddy{

void SuitesRunner_obj::__construct( ::Dynamic buddySuites,::Dynamic reporter){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run( ::buddy::BuddySuite suite){
            			HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_75_new)
HXLINE(  76)			 ::Dynamic metaData = ::haxe::rtti::Meta_obj::getType(::Type_obj::getClass(suite));
HXLINE(  77)			return ::Reflect_obj::hasField(metaData,HX_("includeMode",ab,31,8f,87));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_47_new)
HXLINE(  55)		this->allTestsPassed = false;
HXLINE(  53)		this->unrecoverableErrorStack = null();
HXLINE(  52)		this->unrecoverableError = null();
HXLINE(  72)		this->buddySuites = buddySuites;
HXLINE(  73)		::Dynamic _hx_tmp;
HXDLIN(  73)		if (::hx::IsNull( reporter )) {
HXLINE(  73)			_hx_tmp =  ::buddy::reporting::ConsoleReporter_obj::__alloc( HX_CTX ,null());
            		}
            		else {
HXLINE(  73)			_hx_tmp = reporter;
            		}
HXDLIN(  73)		this->reporter = _hx_tmp;
HXLINE(  74)		this->oldLog = ::haxe::Log_obj::trace;
HXLINE(  75)		this->includeMode = ::Lambda_obj::exists(buddySuites, ::Dynamic(new _hx_Closure_0()));
            	}

Dynamic SuitesRunner_obj::__CreateEmpty() { return new SuitesRunner_obj; }

void *SuitesRunner_obj::_hx_vtable = 0;

Dynamic SuitesRunner_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SuitesRunner_obj > _hx_result = new SuitesRunner_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SuitesRunner_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6e0ecab1;
}

 ::promhx::Promise SuitesRunner_obj::run(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::buddy::SuitesRunner,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic err){
            			HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_89_run)
HXLINE(  90)			if (::hx::IsNotNull( err )) {
HXLINE(  91)				_gthis->haveUnrecoverableError(err);
HXLINE(  92)				return;
            			}
HXLINE(  95)			if (_gthis->includeMode) {
HXLINE(  95)				_gthis->startIncludeMode();
            			}
HXLINE(  96)			_gthis->startRun();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_81_run)
HXDLIN(  81)		 ::buddy::SuitesRunner _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  86)		this->runCompleted =  ::promhx::Deferred_obj::__alloc( HX_CTX );
HXLINE(  87)		 ::promhx::Promise runCompletedPromise = this->runCompleted->promise();
HXLINE(  89)		this->runDescribes( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  99)		return runCompletedPromise;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuitesRunner_obj,run,return )

void SuitesRunner_obj::runDescribes( ::Dynamic cb){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,syncQueue,::Array< ::Dynamic>,asyncQueue) HXARGC(1)
            		void _hx_run( ::buddy::BuddySuite suite){
            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_107_runDescribes)
HXLINE( 107)			while(!(::Lambda_obj::empty(suite->describeQueue))){
HXLINE( 108)				 ::Dynamic current = suite->describeQueue->pop();
HXLINE( 110)				{
HXLINE( 110)					 ::buddy::TestFunc _g = current->__Field(HX_("spec",3b,de,58,4c),::hx::paccDynamic);
HXDLIN( 110)					switch((int)(_g->_hx_getIndex())){
            						case (int)0: {
HXLINE( 111)							 ::Dynamic f = _g->_hx_getObject(0);
HXDLIN( 111)							asyncQueue->__get(0).StaticCast< ::Array< ::Dynamic> >()->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("run",4b,e7,56,00),f)
            								->setFixed(1,HX_("buddySuite",d2,af,04,14),suite)
            								->setFixed(2,HX_("testSuite",06,fd,bc,4d), ::Dynamic(current->__Field(HX_("suite",b8,be,ba,84),::hx::paccDynamic)))));
            						}
            						break;
            						case (int)1: {
HXLINE( 117)							 ::Dynamic f = _g->_hx_getObject(0);
HXDLIN( 117)							syncQueue->__get(0).StaticCast< ::Array< ::Dynamic> >()->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("run",4b,e7,56,00),f)
            								->setFixed(1,HX_("buddySuite",d2,af,04,14),suite)
            								->setFixed(2,HX_("testSuite",06,fd,bc,4d), ::Dynamic(current->__Field(HX_("suite",b8,be,ba,84),::hx::paccDynamic)))));
            						}
            						break;
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_4, ::buddy::SuitesRunner,_gthis,::Array< ::Dynamic>,processBuddySuites,::Array< ::Dynamic>,syncQueue, ::Dynamic,processSuiteDescribes,::Array< ::Dynamic>,asyncQueue, ::Dynamic,cb) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_126_runDescribes)
HXLINE( 128)			{
HXLINE( 128)				 ::Dynamic buddySuite = _gthis->buddySuites->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 128)				while(( (bool)(buddySuite->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 128)					 ::buddy::BuddySuite buddySuite1 = ( ( ::buddy::BuddySuite)(buddySuite->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 128)					processSuiteDescribes(buddySuite1);
            				}
            			}
HXLINE( 130)			if ((syncQueue->__get(0).StaticCast< ::Array< ::Dynamic> >()->length > 0)) {
HXLINE( 131)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 131)					int _g = 0;
HXDLIN( 131)					while((_g < syncQueue->__get(0).StaticCast< ::Array< ::Dynamic> >()->length)){
HXLINE( 131)						 ::Dynamic test = syncQueue->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(_g);
HXDLIN( 131)						_g = (_g + 1);
HXLINE( 132)						( ( ::buddy::BuddySuite)(test->__Field(HX_("buddySuite",d2,af,04,14),::hx::paccDynamic)) )->currentSuite = ( ( ::buddy::TestSuite)(test->__Field(HX_("testSuite",06,fd,bc,4d),::hx::paccDynamic)) );
HXLINE( 133)						test->__Field(HX_("run",4b,e7,56,00),::hx::paccDynamic)();
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 134)						{
HXLINE( 134)							null();
            						}
HXDLIN( 134)						 ::Dynamic err = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 135)						cb(err);
HXDLIN( 135)						return;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 138)				syncQueue[0] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 139)				processBuddySuites->__get(0)();
            			}
            			else {
HXLINE( 140)				if ((asyncQueue->__get(0).StaticCast< ::Array< ::Dynamic> >()->length > 0)) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(2)
            					void _hx_run( ::Dynamic test, ::Dynamic cb){
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,cb) HXARGC(0)
            						void _hx_run(){
            							HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_143_runDescribes)
HXLINE( 143)							cb(null());
            						}
            						HX_END_LOCAL_FUNC0((void))

            						HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_141_runDescribes)
HXLINE( 142)						( ( ::buddy::BuddySuite)(test->__Field(HX_("buddySuite",d2,af,04,14),::hx::paccDynamic)) )->currentSuite = ( ( ::buddy::TestSuite)(test->__Field(HX_("testSuite",06,fd,bc,4d),::hx::paccDynamic)) );
HXLINE( 143)						test->__Field(HX_("run",4b,e7,56,00),::hx::paccDynamic)( ::Dynamic(new _hx_Closure_1(cb)));
            					}
            					HX_END_LOCAL_FUNC2((void))

            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3,::Array< ::Dynamic>,processBuddySuites,::Array< ::Dynamic>,asyncQueue, ::Dynamic,cb) HXARGC(1)
            					void _hx_run( ::Dynamic err){
            						HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_144_runDescribes)
HXLINE( 145)						if (::hx::IsNotNull( err )) {
HXLINE( 145)							cb(err);
HXDLIN( 145)							return;
            						}
HXLINE( 146)						asyncQueue[0] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 147)						processBuddySuites->__get(0)();
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 141)					::AsyncTools_obj::aEachSeries(asyncQueue->__get(0).StaticCast< ::Array< ::Dynamic> >(), ::Dynamic(new _hx_Closure_2()), ::Dynamic(new _hx_Closure_3(processBuddySuites,asyncQueue,cb)));
            				}
            				else {
HXLINE( 150)					cb(null());
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_102_runDescribes)
HXDLIN( 102)		 ::buddy::SuitesRunner _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 103)		::Array< ::Dynamic> asyncQueue = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::Dynamic>::__new());
HXLINE( 104)		::Array< ::Dynamic> syncQueue = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::Dynamic>::__new());
HXLINE( 106)		 ::Dynamic processSuiteDescribes =  ::Dynamic(new _hx_Closure_0(syncQueue,asyncQueue));
HXLINE( 126)		::Array< ::Dynamic> processBuddySuites = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 126)		processBuddySuites[0] =  ::Dynamic(new _hx_Closure_4(_gthis,processBuddySuites,syncQueue,processSuiteDescribes,asyncQueue,cb));
HXLINE( 153)		processBuddySuites->__get(0)();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuitesRunner_obj,runDescribes,(void))

bool SuitesRunner_obj::failed(){
            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_156_failed)
HXDLIN( 156)		return !(this->allTestsPassed);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuitesRunner_obj,failed,return )

int SuitesRunner_obj::statusCode(){
            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_157_statusCode)
HXDLIN( 157)		if (this->failed()) {
HXDLIN( 157)			return 1;
            		}
            		else {
HXDLIN( 157)			return 0;
            		}
HXDLIN( 157)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuitesRunner_obj,statusCode,return )

void SuitesRunner_obj::startRun(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::buddy::SuitesRunner,_gthis) HXARGC(1)
            		void _hx_run(bool go){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,afterEachStack, ::buddy::SuitesRunner,_gthis,::Array< ::Dynamic>,beforeEachStack) HXARGC(2)
            			void _hx_run( ::buddy::BuddySuite buddySuite, ::Dynamic done){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,done) HXARGC(2)
            				void _hx_run( ::Dynamic err, ::buddy::Suite suite){
            					HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_175_startRun)
HXLINE( 176)					bool suiteDone;
HXDLIN( 176)					if (::hx::IsNull( err )) {
HXLINE( 176)						suiteDone = ::hx::IsNull( suite );
            					}
            					else {
HXLINE( 176)						suiteDone = false;
            					}
HXDLIN( 176)					if (suiteDone) {
HXLINE( 176)						return;
            					}
HXLINE( 178)					if (::hx::IsNotNull( err )) {
HXLINE( 179)						suite->error = err;
HXLINE( 180)						suite->stack = ::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(null());
            					}
HXLINE( 182)					done(err,suite);
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_174_startRun)
HXLINE( 175)				 ::Dynamic suiteDone =  ::Dynamic(new _hx_Closure_1(done));
HXLINE( 185)				 ::Dynamic syncSuite = _gthis->mapTestSuite(buddySuite,buddySuite->suite,beforeEachStack,afterEachStack,suiteDone);
HXLINE( 192)				if (::hx::IsNotNull( syncSuite )) {
HXLINE( 193)					suiteDone( ::Dynamic(syncSuite->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)), ::Dynamic(syncSuite->__Field(HX_("suite",b8,be,ba,84),::hx::paccDynamic)));
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::buddy::SuitesRunner,_gthis) HXARGC(2)
            			void _hx_run( ::Dynamic err,::Array< ::Dynamic> suites){
            				HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_197_startRun)
HXLINE( 197)				if (::hx::IsNotNull( err )) {
HXLINE( 197)					_gthis->haveUnrecoverableError(err);
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            					bool _hx_run( ::buddy::Suite suite){
            						HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_199_startRun)
HXLINE( 199)						return !(suite->passed());
            					}
            					HX_END_LOCAL_FUNC1(return)

            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::buddy::SuitesRunner,_gthis) HXARGC(1)
            					void _hx_run( ::Dynamic _){
            						HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_201_startRun)
HXLINE( 201)						_gthis->runCompleted->resolve(_gthis);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 199)					_gthis->allTestsPassed = !(::Lambda_obj::exists(suites, ::Dynamic(new _hx_Closure_3())));
HXLINE( 200)					 ::promhx::Promise r = ::buddy::reporting::Reporter_obj::done(_gthis->reporter,suites,_gthis->allTestsPassed);
HXLINE( 201)					Dynamic( r->then( ::Dynamic(new _hx_Closure_4(_gthis)))).StaticCast<  ::promhx::Promise >();
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_164_startRun)
HXLINE( 165)			if (!(go)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::buddy::SuitesRunner,_gthis) HXARGC(1)
            				void _hx_run( ::Dynamic _){
            					HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_167_startRun)
HXLINE( 167)					_gthis->runCompleted->resolve(_gthis);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 166)				 ::promhx::Promise r = ::buddy::reporting::Reporter_obj::done(_gthis->reporter,::Array_obj< ::Dynamic>::__new(0),false);
HXLINE( 167)				Dynamic( r->then( ::Dynamic(new _hx_Closure_0(_gthis)))).StaticCast<  ::promhx::Promise >();
HXLINE( 168)				return;
            			}
HXLINE( 171)			::Array< ::Dynamic> beforeEachStack = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::Dynamic>::__new(0));
HXLINE( 172)			::Array< ::Dynamic> afterEachStack = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::Dynamic>::__new(0));
HXLINE( 174)			::AsyncTools_obj::aMapSeries(_gthis->buddySuites, ::Dynamic(new _hx_Closure_2(afterEachStack,_gthis,beforeEachStack)), ::Dynamic(new _hx_Closure_5(_gthis)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_161_startRun)
HXDLIN( 161)		 ::buddy::SuitesRunner _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 163)		 ::promhx::Promise r = ::buddy::reporting::Reporter_obj::start(this->reporter);
HXLINE( 164)		Dynamic( r->then( ::Dynamic(new _hx_Closure_6(_gthis)))).StaticCast<  ::promhx::Promise >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuitesRunner_obj,startRun,(void))

void SuitesRunner_obj::startIncludeMode(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,traverse) HXARGC(1)
            		bool _hx_run( ::buddy::TestSuite suite){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,traverse) HXARGC(1)
            			bool _hx_run( ::buddy::TestSpec spec){
            				HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_211_startIncludeMode)
HXLINE( 211)				switch((int)(spec->_hx_getIndex())){
            					case (int)0: {
HXLINE( 212)						 ::buddy::TestSuite suite = spec->_hx_getObject(0).StaticCast<  ::buddy::TestSuite >();
HXDLIN( 212)						bool included = spec->_hx_getBool(1);
HXLINE( 213)						if (included) {
HXLINE( 213)							return true;
            						}
            						else {
HXLINE( 214)							return ( (bool)(traverse->__get(0)(suite)) );
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 215)						 ::buddy::TestFunc _g = spec->_hx_getObject(1).StaticCast<  ::buddy::TestFunc >();
HXDLIN( 215)						 ::Dynamic _g1 = spec->_hx_getObject(3);
HXDLIN( 215)						Float _g2 = spec->_hx_getFloat(4);
HXDLIN( 215)						::String desc = spec->_hx_getString(0);
HXDLIN( 215)						bool included = spec->_hx_getBool(2);
HXLINE( 216)						return included;
            					}
            					break;
            				}
HXLINE( 211)				return false;
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_209_startIncludeMode)
HXLINE( 210)			suite->specs = suite->specs->filter( ::Dynamic(new _hx_Closure_0(traverse)));
HXLINE( 219)			return (suite->specs->length > 0);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,traverse) HXARGC(1)
            		bool _hx_run( ::buddy::BuddySuite buddySuite){
            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_222_startIncludeMode)
HXLINE( 223)			 ::Dynamic suiteMeta = ::haxe::rtti::Meta_obj::getType(::Type_obj::getClass(buddySuite));
HXLINE( 224)			if (::Reflect_obj::hasField(suiteMeta,HX_("include",28,fe,f6,51))) {
HXLINE( 224)				return true;
            			}
HXLINE( 226)			return ( (bool)(traverse->__get(0)(buddySuite->suite)) );
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_207_startIncludeMode)
HXLINE( 209)		::Array< ::Dynamic> traverse = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 209)		traverse[0] =  ::Dynamic(new _hx_Closure_1(traverse));
HXLINE( 222)		this->buddySuites = ::Lambda_obj::filter(this->buddySuites, ::Dynamic(new _hx_Closure_2(traverse)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuitesRunner_obj,startIncludeMode,(void))

 ::Dynamic SuitesRunner_obj::mapTestSuite( ::buddy::BuddySuite buddySuite, ::buddy::TestSuite testSuite,::Array< ::Dynamic> beforeEachStack,::Array< ::Dynamic> afterEachStack, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S10(::hx::LocalFunc,_hx_Closure_3, ::buddy::BuddySuite,buddySuite,::Array< ::Dynamic>,afterEachStack, ::buddy::SuitesRunner,_gthis,::Array< bool >,allSync1,::Array< ::Dynamic>,beforeEachStack,::Array< int >,syncResultCount, ::Dynamic,done, ::buddy::Suite,currentSuite, ::buddy::TestSuite,testSuite,::Array< ::Dynamic>,result) HXARGC(1)
            		void _hx_run( ::Dynamic err){
            			HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,afterEachStack, ::buddy::BuddySuite,buddySuite, ::buddy::SuitesRunner,_gthis,::Array< int >,syncResultCount,::Array< ::Dynamic>,beforeEachStack, ::buddy::TestSuite,testSuite) HXARGC(2)
            			void _hx_run( ::buddy::TestSpec testSpec, ::Dynamic cb){
            				HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_255_mapTestSuite)
HXLINE( 256)				 ::Dynamic result2 = _gthis->mapTestSpec(buddySuite,testSuite,beforeEachStack,afterEachStack,testSpec,cb);
HXLINE( 257)				if (::hx::IsNotNull( result2 )) {
HXLINE( 258)					syncResultCount[0]++;
HXLINE( 259)					cb( ::Dynamic(result2->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)), ::Dynamic(result2->__Field(HX_("step",4c,e7,5b,4c),::hx::paccDynamic)));
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_BEGIN_LOCAL_FUNC_S9(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,afterEachStack, ::buddy::SuitesRunner,_gthis,::Array< ::Dynamic>,beforeEachStack,::Array< int >,syncResultCount,::Array< bool >,allSync1, ::Dynamic,done, ::buddy::Suite,currentSuite, ::buddy::TestSuite,testSuite,::Array< ::Dynamic>,result) HXARGC(2)
            			void _hx_run( ::Dynamic err,::Array< ::Dynamic> testSteps){
            				HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,afterEachStack,::Array< ::Dynamic>,beforeEachStack,::Array< bool >,allSync1,::Array< ::Dynamic>,testSteps, ::Dynamic,done, ::buddy::Suite,currentSuite,::Array< ::Dynamic>,result) HXARGC(1)
            				void _hx_run( ::Dynamic err){
            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_273_mapTestSuite)
HXLINE( 274)					if (::hx::IsNotNull( err )) {
HXLINE( 275)						if (allSync1->__get(0)) {
HXLINE( 275)							result[0] =  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("suite",b8,be,ba,84),currentSuite)
            								->setFixed(1,HX_("error",c8,cb,29,73),err));
            						}
            						else {
HXLINE( 276)							done(err,currentSuite);
            						}
HXLINE( 277)						return;
            					}
HXLINE( 280)					currentSuite->steps = testSteps;
HXLINE( 281)					beforeEachStack->pop();
HXLINE( 282)					afterEachStack->shift();
HXLINE( 284)					if (allSync1->__get(0)) {
HXLINE( 284)						result[0] =  ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("suite",b8,be,ba,84),currentSuite)
            							->setFixed(1,HX_("error",c8,cb,29,73),null()));
            					}
            					else {
HXLINE( 285)						done(null(),currentSuite);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_261_mapTestSuite)
HXLINE( 264)				bool _hx_tmp;
HXDLIN( 264)				if (allSync1->__get(0)) {
HXLINE( 264)					_hx_tmp = (testSteps->length == syncResultCount->__get(0));
            				}
            				else {
HXLINE( 264)					_hx_tmp = false;
            				}
HXDLIN( 264)				allSync1[0] = _hx_tmp;
HXLINE( 266)				if (::hx::IsNotNull( err )) {
HXLINE( 267)					if (allSync1->__get(0)) {
HXLINE( 267)						result[0] =  ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("suite",b8,be,ba,84),currentSuite)
            							->setFixed(1,HX_("error",c8,cb,29,73),err));
            					}
            					else {
HXLINE( 268)						done(err,currentSuite);
            					}
HXLINE( 269)					return;
            				}
HXLINE( 273)				_gthis->runTestFuncs(testSuite->afterAll, ::Dynamic(new _hx_Closure_1(afterEachStack,beforeEachStack,allSync1,testSteps,done,currentSuite,result)));
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_247_mapTestSuite)
HXLINE( 248)			if (::hx::IsNotNull( err )) {
HXLINE( 249)				if (_gthis->isSync(testSuite->beforeAll)) {
HXLINE( 249)					result[0] =  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("suite",b8,be,ba,84),currentSuite)
            						->setFixed(1,HX_("error",c8,cb,29,73),err));
            				}
            				else {
HXLINE( 250)					done(err,currentSuite);
            				}
HXLINE( 251)				return;
            			}
HXLINE( 255)			::AsyncTools_obj::aMapSeries(testSuite->specs, ::Dynamic(new _hx_Closure_0(afterEachStack,buddySuite,_gthis,syncResultCount,beforeEachStack,testSuite)), ::Dynamic(new _hx_Closure_2(afterEachStack,_gthis,beforeEachStack,syncResultCount,allSync1,done,currentSuite,testSuite,result)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_236_mapTestSuite)
HXDLIN( 236)		 ::buddy::SuitesRunner _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 237)		 ::buddy::Suite currentSuite = (::buddy::tests::SelfTest_obj::lastSuite =  ::buddy::Suite_obj::__alloc( HX_CTX ,testSuite->description));
HXLINE( 239)		::Array< ::Dynamic> beforeEachStack1 = beforeEachStack;
HXDLIN( 239)		beforeEachStack1->push(::Lambda_obj::array(testSuite->beforeEach));
HXLINE( 240)		::Array< ::Dynamic> afterEachStack1 = afterEachStack;
HXDLIN( 240)		afterEachStack1->unshift(::Lambda_obj::array(testSuite->afterEach));
HXLINE( 242)		bool allSync;
HXDLIN( 242)		if (this->isSync(testSuite->beforeAll)) {
HXLINE( 242)			allSync = this->isSync(testSuite->afterAll);
            		}
            		else {
HXLINE( 242)			allSync = false;
            		}
HXDLIN( 242)		::Array< bool > allSync1 = ::Array_obj< bool >::__new(1)->init(0,allSync);
HXLINE( 243)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 244)		::Array< int > syncResultCount = ::Array_obj< int >::fromData( _hx_array_data_cb2e4393_32,1);
HXLINE( 247)		this->runTestFuncs(testSuite->beforeAll, ::Dynamic(new _hx_Closure_3(buddySuite,afterEachStack,_gthis,allSync1,beforeEachStack,syncResultCount,done,currentSuite,testSuite,result)));
HXLINE( 290)		if (::hx::IsNotNull( result->__get(0) )) {
HXLINE( 290)			done(null(),null());
            		}
HXLINE( 291)		return result->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC5(SuitesRunner_obj,mapTestSuite,return )

void SuitesRunner_obj::runTestFuncs( ::Dynamic funcs, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic done){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,done) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_307_runTestFuncs)
HXLINE( 307)				done(null());
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_307_runTestFuncs)
HXLINE( 307)			f( ::Dynamic(new _hx_Closure_0(done)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_294_runTestFuncs)
HXLINE( 295)		::Array< ::Dynamic> syncQ = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 296)		::Array< ::Dynamic> asyncQ = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 298)		{
HXLINE( 298)			 ::Dynamic func = funcs->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 298)			while(( (bool)(func->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 298)				 ::buddy::TestFunc func1 = func->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 298)				switch((int)(func1->_hx_getIndex())){
            					case (int)0: {
HXLINE( 299)						 ::Dynamic f = func1->_hx_getObject(0);
HXDLIN( 299)						asyncQ->push(f);
            					}
            					break;
            					case (int)1: {
HXLINE( 300)						 ::Dynamic f = func1->_hx_getObject(0);
HXDLIN( 300)						syncQ->push(f);
            					}
            					break;
            				}
            			}
            		}
HXLINE( 303)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 303)			int _g = 0;
HXDLIN( 303)			while((_g < syncQ->length)){
HXLINE( 303)				 ::Dynamic f = syncQ->__get(_g);
HXDLIN( 303)				_g = (_g + 1);
HXDLIN( 303)				f();
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 304)				{
HXLINE( 304)					null();
            				}
HXDLIN( 304)				 ::Dynamic err = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 304)				done(err);
HXDLIN( 304)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 306)		::AsyncTools_obj::aEachSeries(asyncQ, ::Dynamic(new _hx_Closure_1()),done);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SuitesRunner_obj,runTestFuncs,(void))

::cpp::VirtualArray SuitesRunner_obj::flatten(::Array< ::Dynamic> arr){
            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_312_flatten)
HXDLIN( 312)		::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 312)		{
HXDLIN( 312)			int _g1 = 0;
HXDLIN( 312)			while((_g1 < arr->length)){
HXDLIN( 312)				::cpp::VirtualArray a = ::cpp::VirtualArray( arr->__get(_g1));
HXDLIN( 312)				_g1 = (_g1 + 1);
HXDLIN( 312)				{
HXDLIN( 312)					int _g2 = 0;
HXDLIN( 312)					while((_g2 < a->get_length())){
HXDLIN( 312)						 ::Dynamic b = a->__get(_g2);
HXDLIN( 312)						_g2 = (_g2 + 1);
HXDLIN( 312)						_g->push(b);
            					}
            				}
            			}
            		}
HXDLIN( 312)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuitesRunner_obj,flatten,return )

bool SuitesRunner_obj::isSync( ::Dynamic funcs){
            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_315_isSync)
HXLINE( 316)		{
HXLINE( 316)			 ::Dynamic f = funcs->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 316)			while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 316)				 ::buddy::TestFunc f1 = f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 316)				if ((f1->_hx_getIndex() == 0)) {
HXLINE( 317)					 ::Dynamic _g = f1->_hx_getObject(0);
HXDLIN( 317)					return false;
            				}
            			}
            		}
HXLINE( 320)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuitesRunner_obj,isSync,return )

 ::Dynamic SuitesRunner_obj::mapTestSpec( ::buddy::BuddySuite buddySuite, ::buddy::TestSuite testSuite,::Array< ::Dynamic> beforeEachStack,::Array< ::Dynamic> afterEachStack, ::buddy::TestSpec testSpec, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::buddy::BuddySuite,buddySuite,::Array< ::Dynamic>,oldFail,::Array< bool >,hasCompleted, ::Dynamic,done) HXARGC(2)
            		void _hx_run( ::Dynamic __o_err, ::Dynamic p){
            		 ::Dynamic err = __o_err;
            		if (::hx::IsNull(__o_err)) err = HX_("Exception",2f,f0,6c,eb);
            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_338_mapTestSpec)
HXLINE( 338)			bool _hx_tmp;
HXDLIN( 338)			if (!(hasCompleted->__get(0))) {
HXLINE( 338)				_hx_tmp = ::hx::IsEq( oldFail->__get(0),buddySuite->fail );
            			}
            			else {
HXLINE( 338)				_hx_tmp = false;
            			}
HXDLIN( 338)			if (_hx_tmp) {
HXLINE( 339)				done(err,null());
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,done) HXARGC(2)
            		void _hx_run(::String message, ::Dynamic p){
            			HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_343_mapTestSpec)
HXLINE( 343)			done(HX_("Cannot call pending here.",90,7d,90,48),null());
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_332_mapTestSpec)
HXDLIN( 332)		 ::buddy::SuitesRunner _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 333)		::Array< bool > hasCompleted = ::Array_obj< bool >::fromData( _hx_array_data_cb2e4393_47,1);
HXLINE( 334)		::Array< ::Dynamic> oldFail = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 336)		oldFail[0] = (buddySuite->fail =  ::Dynamic(new _hx_Closure_0(buddySuite,oldFail,hasCompleted,done)));
HXLINE( 342)		 ::Dynamic oldPending = (buddySuite->pending =  ::Dynamic(new _hx_Closure_1(done)));
HXLINE( 346)		switch((int)(testSpec->_hx_getIndex())){
            			case (int)0: {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,done) HXARGC(2)
            				void _hx_run( ::Dynamic err, ::buddy::Suite newSuite){
            					HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_349_mapTestSpec)
HXLINE( 350)					bool result;
HXDLIN( 350)					if (::hx::IsNull( err )) {
HXLINE( 350)						result = ::hx::IsNull( newSuite );
            					}
            					else {
HXLINE( 350)						result = false;
            					}
HXDLIN( 350)					if (result) {
HXLINE( 350)						return;
            					}
HXLINE( 351)					if (::hx::IsNotNull( err )) {
HXLINE( 351)						done(err,null());
            					}
            					else {
HXLINE( 352)						done(null(),::buddy::Step_obj::TSuite(newSuite));
            					}
            				}
            				HX_END_LOCAL_FUNC2((void))

HXLINE( 347)				bool _g = testSpec->_hx_getBool(1);
HXDLIN( 347)				 ::buddy::TestSuite testSuite = testSpec->_hx_getObject(0).StaticCast<  ::buddy::TestSuite >();
HXLINE( 349)				 ::Dynamic result = this->mapTestSuite(buddySuite,testSuite,beforeEachStack,afterEachStack, ::Dynamic(new _hx_Closure_2(done)));
HXLINE( 354)				if (::hx::IsNotNull( result )) {
HXLINE( 354)					return  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("step",4c,e7,5b,4c),::buddy::Step_obj::TSuite( ::Dynamic(result->__Field(HX_("suite",b8,be,ba,84),::hx::paccDynamic))))
            						->setFixed(1,HX_("error",c8,cb,29,73), ::Dynamic(result->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic))));
            				}
            				else {
HXLINE( 355)					return null();
            				}
            			}
            			break;
            			case (int)1: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4, ::buddy::Spec,spec,::Array< bool >,hasCompleted) HXARGC(2)
            				void _hx_run( ::Dynamic error,::Array< ::Dynamic> stack){
            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_385_mapTestSpec)
HXLINE( 386)					if (hasCompleted->__get(0)) {
HXLINE( 386)						return;
            					}
HXLINE( 387)					spec->status = ::buddy::SpecStatus_obj::Failed_dyn();
HXLINE( 388)					::Array< ::Dynamic> spec1 = spec->failures;
HXDLIN( 388)					spec1->push( ::buddy::Failure_obj::__alloc( HX_CTX ,error,stack));
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_BEGIN_LOCAL_FUNC_S9(::hx::LocalFunc,_hx_Closure_7, ::buddy::BuddySuite,buddySuite, ::buddy::SuitesRunner,_gthis,::Array< ::Dynamic>,oldFail,::Array< ::Dynamic>,afterEach, ::Dynamic,oldPending, ::buddy::Spec,spec,::Array< bool >,hasCompleted, ::Dynamic,done,bool,returnSync) HXARGC(1)
            				 ::Dynamic _hx_run( ::buddy::SpecStatus status){
            					HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_6, ::buddy::SuitesRunner,_gthis,::Array< ::Dynamic>,syncResult, ::buddy::Spec,spec, ::Dynamic,done,bool,returnSync) HXARGC(1)
            					void _hx_run( ::Dynamic err){
            						HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_406_mapTestSpec)
HXLINE( 406)						if (returnSync) {
HXLINE( 407)							 ::buddy::Step specCompleted;
HXDLIN( 407)							if (::hx::IsNull( err )) {
HXLINE( 407)								specCompleted = ::buddy::Step_obj::TSpec(spec);
            							}
            							else {
HXLINE( 407)								specCompleted = null();
            							}
HXDLIN( 407)							syncResult[0] =  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("step",4c,e7,5b,4c),specCompleted)
            								->setFixed(1,HX_("error",c8,cb,29,73),err));
HXLINE( 408)							::buddy::reporting::Reporter_obj::progress(_gthis->reporter,spec);
            						}
            						else {
HXLINE( 410)							if (::hx::IsNotNull( err )) {
HXLINE( 410)								done(err,null());
            							}
            							else {
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_5, ::buddy::Spec,spec, ::Dynamic,done) HXARGC(1)
            								void _hx_run( ::buddy::Spec _){
            									HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_415_mapTestSpec)
HXLINE( 415)									done(null(),::buddy::Step_obj::TSpec(spec));
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 413)								 ::promhx::Promise r = ::buddy::reporting::Reporter_obj::progress(_gthis->reporter,spec);
HXLINE( 414)								Dynamic( r->then( ::Dynamic(new _hx_Closure_5(spec,done)))).StaticCast<  ::promhx::Promise >();
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_391_mapTestSpec)
HXLINE( 392)					if (hasCompleted->__get(0)) {
HXLINE( 392)						return null();
            					}
HXLINE( 393)					hasCompleted[0] = true;
HXLINE( 395)					if (::hx::IsPointerEq( spec->status,::buddy::SpecStatus_obj::Unknown_dyn() )) {
HXLINE( 395)						spec->status = status;
            					}
HXLINE( 398)					if (!(::buddy::BuddySuite_obj::useDefaultTrace)) {
HXLINE( 398)						::haxe::Log_obj::trace = _gthis->oldLog;
            					}
HXLINE( 399)					buddySuite->fail = oldFail->__get(0);
HXLINE( 400)					buddySuite->pending = oldPending;
HXLINE( 402)					::Array< ::Dynamic> syncResult = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 405)					_gthis->runTestFuncs(afterEach, ::Dynamic(new _hx_Closure_6(_gthis,syncResult,spec,done,returnSync)));
HXLINE( 421)					return syncResult->__get(0);
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::Dynamic,reportFailure) HXARGC(3)
            				void _hx_run(bool testStatus, ::Dynamic error,::Array< ::Dynamic> stack){
            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_432_mapTestSpec)
HXLINE( 432)					if ((testStatus != true)) {
HXLINE( 432)						reportFailure(error,stack);
            					}
            				}
            				HX_END_LOCAL_FUNC3((void))

            				HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_11,::Array< ::Dynamic>,_syncResult, ::buddy::Spec,spec,Float,_startTime,bool,returnSync) HXARGC(1)
            				void _hx_run( ::Dynamic status){
            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_489_mapTestSpec)
HXLINE( 490)					bool setSyncResult;
HXDLIN( 490)					if (returnSync) {
HXLINE( 490)						setSyncResult = ::hx::IsNotNull( _syncResult->__get(0) );
            					}
            					else {
HXLINE( 490)						setSyncResult = true;
            					}
HXDLIN( 490)					if (setSyncResult) {
HXLINE( 490)						return;
            					}
HXLINE( 491)					_syncResult[0] = status;
HXLINE( 493)					Float setSyncResult1 =  ::__time_stamp();
HXDLIN( 493)					spec->time = (setSyncResult1 - _startTime);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_12, ::Dynamic,specCompleted, ::Dynamic,reportFailure, ::Dynamic,setSyncResult) HXARGC(2)
            				void _hx_run( ::Dynamic __o_err, ::Dynamic p){
            		 ::Dynamic err = __o_err;
            		if (::hx::IsNull(__o_err)) err = HX_("Manually",73,e6,61,8f);
            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_497_mapTestSpec)
HXLINE( 498)					 ::Dynamic reportFailure1 = reportFailure;
HXDLIN( 498)					reportFailure1(err,::buddy::SuitesRunner_obj::posInfosToStack(p));
HXLINE( 499)					 ::Dynamic setSyncResult1 = setSyncResult;
HXDLIN( 499)					setSyncResult1(specCompleted(::buddy::SpecStatus_obj::Failed_dyn()));
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_13, ::Dynamic,specCompleted, ::buddy::Spec,spec, ::Dynamic,setSyncResult) HXARGC(2)
            				void _hx_run(::String message, ::Dynamic p){
            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_502_mapTestSpec)
HXLINE( 503)					::String msg;
HXDLIN( 503)					if (::hx::IsNotNull( message )) {
HXLINE( 503)						msg = (HX_(": ",a6,32,00,00) + message);
            					}
            					else {
HXLINE( 503)						msg = HX_("",00,00,00,00);
            					}
HXDLIN( 503)					::String msg1 = ( (::String)((((p->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic) + HX_(":",3a,00,00,00)) + p->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic)) + msg)) );
HXLINE( 504)					spec->traces->push(msg1);
HXLINE( 505)					 ::Dynamic setSyncResult1 = setSyncResult;
HXDLIN( 505)					setSyncResult1(specCompleted(::buddy::SpecStatus_obj::Pending_dyn()));
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_17, ::Dynamic,specCompleted, ::buddy::TestFunc,test, ::Dynamic,reportFailure, ::Dynamic,setSyncResult, ::Dynamic,done,bool,returnSync) HXARGC(1)
            				void _hx_run( ::Dynamic err){
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_15) HXARGC(2)
            					void _hx_run( ::buddy::TestFunc func, ::Dynamic done){
            						HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_517_mapTestSpec)
HXLINE( 517)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 517)							switch((int)(func->_hx_getIndex())){
            								case (int)0: {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_14, ::Dynamic,done) HXARGC(0)
            									void _hx_run(){
            										HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_518_mapTestSpec)
HXLINE( 518)										done(null());
            									}
            									HX_END_LOCAL_FUNC0((void))

HXLINE( 518)									 ::Dynamic f = func->_hx_getObject(0);
HXDLIN( 518)									f( ::Dynamic(new _hx_Closure_14(done)));
            								}
            								break;
            								case (int)1: {
HXLINE( 519)									 ::Dynamic f = func->_hx_getObject(0);
HXDLIN( 519)									{
HXLINE( 519)										f();
HXDLIN( 519)										done(null());
            									}
            								}
            								break;
            							}
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 520)								{
HXLINE( 520)									null();
            								}
HXDLIN( 520)								 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 521)								done(e);
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC2((void))

            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_16, ::Dynamic,specCompleted, ::Dynamic,reportFailure, ::Dynamic,setSyncResult) HXARGC(1)
            					void _hx_run( ::Dynamic err){
            						HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_529_mapTestSpec)
HXLINE( 529)						if (::hx::IsNotNull( err )) {
HXLINE( 530)							 ::Dynamic reportFailure1 = reportFailure;
HXDLIN( 530)							reportFailure1(err,::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(null()));
HXLINE( 531)							 ::Dynamic setSyncResult1 = setSyncResult;
HXDLIN( 531)							setSyncResult1(specCompleted(::buddy::SpecStatus_obj::Failed_dyn()));
            						}
            						else {
HXLINE( 534)							 ::Dynamic setSyncResult1 = setSyncResult;
HXDLIN( 534)							setSyncResult1(specCompleted(::buddy::SpecStatus_obj::Passed_dyn()));
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_509_mapTestSpec)
HXLINE( 510)					if (::hx::IsNotNull( err )) {
HXLINE( 511)						if (returnSync) {
HXLINE( 511)							setSyncResult( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("step",4c,e7,5b,4c),null())
            								->setFixed(1,HX_("error",c8,cb,29,73),err)));
            						}
            						else {
HXLINE( 512)							done(err,null());
            						}
HXLINE( 513)						return;
            					}
HXLINE( 516)					 ::Dynamic runTestFunc =  ::Dynamic(new _hx_Closure_15());
HXLINE( 525)					runTestFunc(test, ::Dynamic(new _hx_Closure_16(specCompleted,reportFailure,setSyncResult)));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 357)				bool _g = testSpec->_hx_getBool(2);
HXDLIN( 357)				::String desc = testSpec->_hx_getString(0);
HXDLIN( 357)				 ::buddy::TestFunc test = testSpec->_hx_getObject(1).StaticCast<  ::buddy::TestFunc >();
HXDLIN( 357)				 ::Dynamic pos = testSpec->_hx_getObject(3);
HXDLIN( 357)				Float time = testSpec->_hx_getFloat(4);
HXLINE( 360)				 ::buddy::Spec spec = (::buddy::tests::SelfTest_obj::lastSpec =  ::buddy::Spec_obj::__alloc( HX_CTX ,desc,( (::String)(pos->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)) )));
HXLINE( 362)				::Array< ::Dynamic> beforeEach = this->flatten(beforeEachStack);
HXLINE( 363)				::Array< ::Dynamic> afterEach = this->flatten(afterEachStack);
HXLINE( 365)				bool eachIsSync;
HXDLIN( 365)				if (this->isSync(beforeEach)) {
HXLINE( 365)					eachIsSync = this->isSync(afterEach);
            				}
            				else {
HXLINE( 365)					eachIsSync = false;
            				}
HXLINE( 367)				bool returnSync;
HXDLIN( 367)				if (::hx::IsNull( test )) {
HXLINE( 367)					returnSync = eachIsSync;
            				}
            				else {
HXLINE( 367)					switch((int)(test->_hx_getIndex())){
            						case (int)0: {
HXLINE( 369)							 ::Dynamic _g = test->_hx_getObject(0);
HXLINE( 367)							returnSync = false;
            						}
            						break;
            						case (int)1: {
HXLINE( 368)							 ::Dynamic _g = test->_hx_getObject(0);
HXLINE( 367)							returnSync = eachIsSync;
            						}
            						break;
            					}
            				}
HXLINE( 373)				if (!(::buddy::BuddySuite_obj::useDefaultTrace)) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::buddy::Spec,spec) HXARGC(2)
            					void _hx_run( ::Dynamic v, ::Dynamic pos){
            						HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_374_mapTestSpec)
HXLINE( 374)						if (::hx::IsNull( pos )) {
HXLINE( 375)							::Array< ::String > spec1 = spec->traces;
HXDLIN( 375)							spec1->push(::Std_obj::string(v));
            						}
            						else {
HXLINE( 377)							::String output;
HXDLIN( 377)							if (::hx::IsNotNull( pos->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic) )) {
HXLINE( 378)								::String output1 = (::Std_obj::string(v) + HX_(",",2c,00,00,00));
HXDLIN( 378)								::cpp::VirtualArray _this = ( (::cpp::VirtualArray)(pos->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic)) );
HXDLIN( 378)								::Array< ::String > result = ::Array_obj< ::String >::__new(_this->get_length());
HXDLIN( 378)								{
HXLINE( 378)									int _g = 0;
HXDLIN( 378)									int _g1 = _this->get_length();
HXDLIN( 378)									while((_g < _g1)){
HXLINE( 378)										_g = (_g + 1);
HXDLIN( 378)										int i = (_g - 1);
HXDLIN( 378)										{
HXLINE( 378)											::String inValue = ::Std_obj::string(_hx_array_unsafe_get(_this,i));
HXDLIN( 378)											result->__unsafe_set(i,inValue);
            										}
            									}
            								}
HXLINE( 377)								output = (output1 + result->join(HX_(",",2c,00,00,00)));
            							}
            							else {
HXLINE( 377)								output = ::Std_obj::string(v);
            							}
HXLINE( 381)							spec->traces->push( ::Dynamic(((((pos->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic) + HX_(":",3a,00,00,00)) + pos->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic)) + HX_(": ",a6,32,00,00)) + output)));
            						}
            					}
            					HX_END_LOCAL_FUNC2((void))

HXLINE( 373)					::haxe::Log_obj::trace =  ::Dynamic(new _hx_Closure_3(spec));
            				}
HXLINE( 385)				 ::Dynamic reportFailure =  ::Dynamic(new _hx_Closure_4(spec,hasCompleted));
HXLINE( 391)				 ::Dynamic specCompleted =  ::Dynamic(new _hx_Closure_7(buddySuite,_gthis,oldFail,afterEach,oldPending,spec,hasCompleted,done,returnSync));
HXLINE( 425)				if (::hx::IsNull( test )) {
HXLINE( 426)					return specCompleted(::buddy::SpecStatus_obj::Pending_dyn());
            				}
HXLINE( 431)				::buddy::SuitesRunner_obj::currentTest =  ::Dynamic(new _hx_Closure_8(reportFailure));
HXLINE( 470)				bool _hx_tmp;
HXDLIN( 470)				if (!(returnSync)) {
HXLINE( 470)					_hx_tmp = (buddySuite->timeoutMs > 0);
            				}
            				else {
HXLINE( 470)					_hx_tmp = false;
            				}
HXDLIN( 470)				if (_hx_tmp) {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_9, ::Dynamic,specCompleted, ::Dynamic,reportFailure) HXARGC(1)
            					void _hx_run( ::Dynamic e){
            						HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_473_mapTestSpec)
HXLINE( 474)						 ::Dynamic reportFailure1 = reportFailure;
HXDLIN( 474)						reportFailure1(e,::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(null()));
HXLINE( 475)						specCompleted(::buddy::SpecStatus_obj::Failed_dyn());
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_10, ::buddy::BuddySuite,buddySuite, ::Dynamic,specCompleted, ::Dynamic,reportFailure) HXARGC(1)
            					void _hx_run(bool _){
            						HX_GC_STACKFRAME(&_hx_pos_b996ee57a4401f6c_477_mapTestSpec)
HXLINE( 478)						reportFailure(((HX_("Timeout after ",43,4a,b5,09) + buddySuite->timeoutMs) + HX_(" ms",86,a7,18,00)),::Array_obj< ::Dynamic>::__new(0));
HXLINE( 479)						specCompleted(::buddy::SpecStatus_obj::Failed_dyn());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 472)					 ::promhx::Promise r = ::buddy::tools::AsyncTools_obj::wait(buddySuite->timeoutMs);
HXLINE( 473)					r->catchError( ::Dynamic(new _hx_Closure_9(specCompleted,reportFailure)));
HXLINE( 477)					Dynamic( r->then( ::Dynamic(new _hx_Closure_10(buddySuite,specCompleted,reportFailure)))).StaticCast<  ::promhx::Promise >();
            				}
HXLINE( 486)				::Array< ::Dynamic> _syncResult = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 487)				Float _startTime =  ::__time_stamp();
HXLINE( 489)				 ::Dynamic setSyncResult =  ::Dynamic(new _hx_Closure_11(_syncResult,spec,_startTime,returnSync));
HXLINE( 497)				buddySuite->fail =  ::Dynamic(new _hx_Closure_12(specCompleted,reportFailure,setSyncResult));
HXLINE( 502)				buddySuite->pending =  ::Dynamic(new _hx_Closure_13(specCompleted,spec,setSyncResult));
HXLINE( 509)				this->runTestFuncs(beforeEach, ::Dynamic(new _hx_Closure_17(specCompleted,test,reportFailure,setSyncResult,done,returnSync)));
HXLINE( 539)				return _syncResult->__get(0);
            			}
            			break;
            		}
HXLINE( 346)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC6(SuitesRunner_obj,mapTestSpec,return )

void SuitesRunner_obj::haveUnrecoverableError( ::Dynamic err){
            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_543_haveUnrecoverableError)
HXLINE( 544)		this->unrecoverableError = err;
HXLINE( 545)		this->unrecoverableErrorStack = ::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(null());
HXLINE( 546)		this->runCompleted->resolve(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuitesRunner_obj,haveUnrecoverableError,(void))

 ::Dynamic SuitesRunner_obj::currentTest;

::Array< ::Dynamic> SuitesRunner_obj::posInfosToStack( ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b996ee57a4401f6c_66_posInfosToStack)
HXDLIN(  66)		if (::hx::IsNull( p )) {
HXLINE(  67)			return ::Array_obj< ::Dynamic>::__new(1)->init(0,::haxe::StackItem_obj::FilePos(null(),HX_("",00,00,00,00),0,null()));
            		}
            		else {
HXLINE(  68)			return ::Array_obj< ::Dynamic>::__new(1)->init(0,::haxe::StackItem_obj::FilePos(null(), ::Dynamic(p->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)), ::Dynamic(p->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic)),null()));
            		}
HXLINE(  66)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuitesRunner_obj,posInfosToStack,return )


::hx::ObjectPtr< SuitesRunner_obj > SuitesRunner_obj::__new( ::Dynamic buddySuites,::Dynamic reporter) {
	::hx::ObjectPtr< SuitesRunner_obj > __this = new SuitesRunner_obj();
	__this->__construct(buddySuites,reporter);
	return __this;
}

::hx::ObjectPtr< SuitesRunner_obj > SuitesRunner_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic buddySuites,::Dynamic reporter) {
	SuitesRunner_obj *__this = (SuitesRunner_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SuitesRunner_obj), true, "buddy.SuitesRunner"));
	*(void **)__this = SuitesRunner_obj::_hx_vtable;
	__this->__construct(buddySuites,reporter);
	return __this;
}

SuitesRunner_obj::SuitesRunner_obj()
{
}

void SuitesRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SuitesRunner);
	HX_MARK_MEMBER_NAME(unrecoverableError,"unrecoverableError");
	HX_MARK_MEMBER_NAME(unrecoverableErrorStack,"unrecoverableErrorStack");
	HX_MARK_MEMBER_NAME(allTestsPassed,"allTestsPassed");
	HX_MARK_MEMBER_NAME(buddySuites,"buddySuites");
	HX_MARK_MEMBER_NAME(reporter,"reporter");
	HX_MARK_MEMBER_NAME(runCompleted,"runCompleted");
	HX_MARK_MEMBER_NAME(includeMode,"includeMode");
	HX_MARK_MEMBER_NAME(oldLog,"oldLog");
	HX_MARK_END_CLASS();
}

void SuitesRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(unrecoverableError,"unrecoverableError");
	HX_VISIT_MEMBER_NAME(unrecoverableErrorStack,"unrecoverableErrorStack");
	HX_VISIT_MEMBER_NAME(allTestsPassed,"allTestsPassed");
	HX_VISIT_MEMBER_NAME(buddySuites,"buddySuites");
	HX_VISIT_MEMBER_NAME(reporter,"reporter");
	HX_VISIT_MEMBER_NAME(runCompleted,"runCompleted");
	HX_VISIT_MEMBER_NAME(includeMode,"includeMode");
	HX_VISIT_MEMBER_NAME(oldLog,"oldLog");
}

::hx::Val SuitesRunner_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"oldLog") ) { return ::hx::Val( oldLog ); }
		if (HX_FIELD_EQ(inName,"failed") ) { return ::hx::Val( failed_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSync") ) { return ::hx::Val( isSync_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatten") ) { return ::hx::Val( flatten_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"reporter") ) { return ::hx::Val( reporter ); }
		if (HX_FIELD_EQ(inName,"startRun") ) { return ::hx::Val( startRun_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"statusCode") ) { return ::hx::Val( statusCode_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buddySuites") ) { return ::hx::Val( buddySuites ); }
		if (HX_FIELD_EQ(inName,"includeMode") ) { return ::hx::Val( includeMode ); }
		if (HX_FIELD_EQ(inName,"mapTestSpec") ) { return ::hx::Val( mapTestSpec_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"runCompleted") ) { return ::hx::Val( runCompleted ); }
		if (HX_FIELD_EQ(inName,"runDescribes") ) { return ::hx::Val( runDescribes_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapTestSuite") ) { return ::hx::Val( mapTestSuite_dyn() ); }
		if (HX_FIELD_EQ(inName,"runTestFuncs") ) { return ::hx::Val( runTestFuncs_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allTestsPassed") ) { return ::hx::Val( allTestsPassed ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startIncludeMode") ) { return ::hx::Val( startIncludeMode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unrecoverableError") ) { return ::hx::Val( unrecoverableError ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"haveUnrecoverableError") ) { return ::hx::Val( haveUnrecoverableError_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"unrecoverableErrorStack") ) { return ::hx::Val( unrecoverableErrorStack ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SuitesRunner_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"currentTest") ) { outValue = ( currentTest ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"posInfosToStack") ) { outValue = posInfosToStack_dyn(); return true; }
	}
	return false;
}

::hx::Val SuitesRunner_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"oldLog") ) { oldLog=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"reporter") ) { reporter=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buddySuites") ) { buddySuites=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includeMode") ) { includeMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"runCompleted") ) { runCompleted=inValue.Cast<  ::promhx::Deferred >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allTestsPassed") ) { allTestsPassed=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unrecoverableError") ) { unrecoverableError=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"unrecoverableErrorStack") ) { unrecoverableErrorStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SuitesRunner_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"currentTest") ) { currentTest=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void SuitesRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("unrecoverableError",03,e1,05,3c));
	outFields->push(HX_("unrecoverableErrorStack",45,6b,55,a8));
	outFields->push(HX_("allTestsPassed",90,c6,38,92));
	outFields->push(HX_("buddySuites",61,28,15,70));
	outFields->push(HX_("reporter",21,2a,94,dd));
	outFields->push(HX_("runCompleted",c0,d8,f0,bd));
	outFields->push(HX_("includeMode",ab,31,8f,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SuitesRunner_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SuitesRunner_obj,unrecoverableError),HX_("unrecoverableError",03,e1,05,3c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SuitesRunner_obj,unrecoverableErrorStack),HX_("unrecoverableErrorStack",45,6b,55,a8)},
	{::hx::fsBool,(int)offsetof(SuitesRunner_obj,allTestsPassed),HX_("allTestsPassed",90,c6,38,92)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SuitesRunner_obj,buddySuites),HX_("buddySuites",61,28,15,70)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SuitesRunner_obj,reporter),HX_("reporter",21,2a,94,dd)},
	{::hx::fsObject /*  ::promhx::Deferred */ ,(int)offsetof(SuitesRunner_obj,runCompleted),HX_("runCompleted",c0,d8,f0,bd)},
	{::hx::fsBool,(int)offsetof(SuitesRunner_obj,includeMode),HX_("includeMode",ab,31,8f,87)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SuitesRunner_obj,oldLog),HX_("oldLog",1d,16,37,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SuitesRunner_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SuitesRunner_obj::currentTest,HX_("currentTest",2b,a1,8b,85)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SuitesRunner_obj_sMemberFields[] = {
	HX_("unrecoverableError",03,e1,05,3c),
	HX_("unrecoverableErrorStack",45,6b,55,a8),
	HX_("allTestsPassed",90,c6,38,92),
	HX_("buddySuites",61,28,15,70),
	HX_("reporter",21,2a,94,dd),
	HX_("runCompleted",c0,d8,f0,bd),
	HX_("includeMode",ab,31,8f,87),
	HX_("oldLog",1d,16,37,d3),
	HX_("run",4b,e7,56,00),
	HX_("runDescribes",3d,91,c5,92),
	HX_("failed",bd,c5,fe,e7),
	HX_("statusCode",7f,45,22,a6),
	HX_("startRun",09,94,9a,42),
	HX_("startIncludeMode",69,cc,8a,06),
	HX_("mapTestSuite",ca,9e,ec,e2),
	HX_("runTestFuncs",32,66,43,40),
	HX_("flatten",c4,ab,fb,e6),
	HX_("isSync",65,7f,c6,69),
	HX_("mapTestSpec",69,26,c6,2d),
	HX_("haveUnrecoverableError",8b,f1,d4,b1),
	::String(null()) };

static void SuitesRunner_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuitesRunner_obj::currentTest,"currentTest");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SuitesRunner_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SuitesRunner_obj::currentTest,"currentTest");
};

#endif

::hx::Class SuitesRunner_obj::__mClass;

static ::String SuitesRunner_obj_sStaticFields[] = {
	HX_("currentTest",2b,a1,8b,85),
	HX_("posInfosToStack",bc,2d,c0,ef),
	::String(null())
};

void SuitesRunner_obj::__register()
{
	SuitesRunner_obj _hx_dummy;
	SuitesRunner_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.SuitesRunner",93,43,2e,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SuitesRunner_obj::__GetStatic;
	__mClass->mSetStaticField = &SuitesRunner_obj::__SetStatic;
	__mClass->mMarkFunc = SuitesRunner_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SuitesRunner_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SuitesRunner_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SuitesRunner_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SuitesRunner_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SuitesRunner_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SuitesRunner_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
