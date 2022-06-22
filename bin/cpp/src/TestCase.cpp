#include <hxcpp.h>

#ifndef INCLUDED_TestCase
#include <TestCase.h>
#endif
#ifndef INCLUDED_buddy_BuddySuite
#include <buddy/BuddySuite.h>
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldDynamic
#include <buddy/ShouldDynamic.h>
#endif
#ifndef INCLUDED_buddy_ShouldFloat
#include <buddy/ShouldFloat.h>
#endif
#ifndef INCLUDED_buddy_TestFunc
#include <buddy/TestFunc.h>
#endif
#ifndef INCLUDED_zenflo_lib_EventEmitter
#include <zenflo/lib/EventEmitter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_583693ae3f9226e7_16_new,"TestCase","new",0x5c7c4a34,"TestCase.new","TestEvent.hx",16,0xfbd47976)
HX_DEFINE_STACK_FRAME(_hx_pos_583693ae3f9226e7_14_new,"TestCase","new",0x5c7c4a34,"TestCase.new","TestEvent.hx",14,0xfbd47976)
static const int _hx_array_data_1e9e6042_2[] = {
	(int)0,
};
HX_DEFINE_STACK_FRAME(_hx_pos_583693ae3f9226e7_37_new,"TestCase","new",0x5c7c4a34,"TestCase.new","TestEvent.hx",37,0xfbd47976)
HX_DEFINE_STACK_FRAME(_hx_pos_583693ae3f9226e7_36_new,"TestCase","new",0x5c7c4a34,"TestCase.new","TestEvent.hx",36,0xfbd47976)
HX_DEFINE_STACK_FRAME(_hx_pos_583693ae3f9226e7_12_new,"TestCase","new",0x5c7c4a34,"TestCase.new","TestEvent.hx",12,0xfbd47976)
HX_DEFINE_STACK_FRAME(_hx_pos_583693ae3f9226e7_11_new,"TestCase","new",0x5c7c4a34,"TestCase.new","TestEvent.hx",11,0xfbd47976)

void TestCase_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::TestCase,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::zenflo::lib::EventEmitter,eventEmitter) HXARGC(1)
            			void _hx_run( ::Dynamic done){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< int >,count, ::Dynamic,done) HXARGC(1)
            				void _hx_run(::cpp::VirtualArray values){
            					HX_GC_STACKFRAME(&_hx_pos_583693ae3f9226e7_16_new)
HXLINE(  17)					 ::Dynamic start = values->__get(0);
HXLINE(  18)					 ::Dynamic end = values->__get(1);
HXLINE(  19)					if ((count->__get(0) == 0)) {
HXLINE(  20)						::buddy::ShouldDynamic_obj::should(start)->be(1,::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),20,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)));
            					}
HXLINE(  22)					if ((count->__get(0) == 1)) {
HXLINE(  23)						::buddy::ShouldDynamic_obj::should(start)->be(2,::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),23,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)));
            					}
HXLINE(  25)					::buddy::ShouldDynamic_obj::should(end)->be(100,::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),25,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)));
HXLINE(  26)					count[0]++;
HXLINE(  27)					if ((count->__get(0) != 2)) {
HXLINE(  28)						return;
            					}
HXLINE(  30)					::buddy::ShouldFloat_obj::should(count->__get(0))->be(2,::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),30,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)));
HXLINE(  31)					done();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_583693ae3f9226e7_14_new)
HXLINE(  15)				::Array< int > count = ::Array_obj< int >::fromData( _hx_array_data_1e9e6042_2,1);
HXLINE(  16)				eventEmitter->on(HX_("start",62,74,0b,84), ::Dynamic(new _hx_Closure_0(count,done)),null());
HXLINE(  33)				::cpp::VirtualArray this1 = ::cpp::VirtualArray_obj::__new(2)->init(0,1)->init(1,100);
HXDLIN(  33)				eventEmitter->emit(HX_("start",62,74,0b,84),this1);
HXLINE(  34)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(2)->init(0,2)->init(1,100);
HXDLIN(  34)				eventEmitter->emit(HX_("start",62,74,0b,84),this2);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::zenflo::lib::EventEmitter,eventEmitter) HXARGC(1)
            			void _hx_run( ::Dynamic done){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,done) HXARGC(1)
            				void _hx_run(::cpp::VirtualArray values){
            					HX_GC_STACKFRAME(&_hx_pos_583693ae3f9226e7_37_new)
HXLINE(  38)					 ::Dynamic start = values->__get(0);
HXLINE(  39)					 ::Dynamic end = values->__get(1);
HXLINE(  40)					::buddy::ShouldDynamic_obj::should(start)->be(1,::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),40,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)));
HXLINE(  41)					::buddy::ShouldDynamic_obj::should(end)->be(100,::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),41,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)));
HXLINE(  42)					done();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_583693ae3f9226e7_36_new)
HXLINE(  37)				eventEmitter->once(HX_("start",62,74,0b,84), ::Dynamic(new _hx_Closure_2(done)));
HXLINE(  44)				::cpp::VirtualArray this1 = ::cpp::VirtualArray_obj::__new(2)->init(0,1)->init(1,100);
HXDLIN(  44)				eventEmitter->emit(HX_("start",62,74,0b,84),this1);
HXLINE(  45)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(2)->init(0,2)->init(1,100);
HXDLIN(  45)				eventEmitter->emit(HX_("start",62,74,0b,84),this2);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_583693ae3f9226e7_12_new)
HXLINE(  13)			 ::zenflo::lib::EventEmitter eventEmitter =  ::zenflo::lib::EventEmitter_obj::__alloc( HX_CTX );
HXLINE( 311)			 ::buddy::TestFunc _hx_tmp = ::buddy::TestFunc_obj::Async( ::Dynamic(new _hx_Closure_1(eventEmitter)));
HXLINE(  14)			_gthis->it(HX_("should emit only twice",b4,52,39,40),_hx_tmp,null(),::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),14,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)),null());
HXLINE( 311)			 ::buddy::TestFunc _hx_tmp1 = ::buddy::TestFunc_obj::Async( ::Dynamic(new _hx_Closure_3(eventEmitter)));
HXLINE(  36)			_gthis->it(HX_("should emit only once",f5,c1,68,c2),_hx_tmp1,null(),::hx::SourceInfo(HX_("spec/TestEvent.hx",0a,1d,12,d3),36,HX_("TestCase",42,60,9e,1e),HX_("new",60,d0,53,00)),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_583693ae3f9226e7_11_new)
HXDLIN(  11)		 ::TestCase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 423)		super::__construct();
HXLINE(  12)		this->describe(HX_("Event emitter test",2a,38,82,be),::buddy::TestFunc_obj::Sync( ::Dynamic(new _hx_Closure_4(_gthis))),null());
            	}

Dynamic TestCase_obj::__CreateEmpty() { return new TestCase_obj; }

void *TestCase_obj::_hx_vtable = 0;

Dynamic TestCase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TestCase_obj > _hx_result = new TestCase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TestCase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7a2f5302) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7a2f5302;
	} else {
		return inClassId==(int)0x7f5bf134;
	}
}


::hx::ObjectPtr< TestCase_obj > TestCase_obj::__new() {
	::hx::ObjectPtr< TestCase_obj > __this = new TestCase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TestCase_obj > TestCase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TestCase_obj *__this = (TestCase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TestCase_obj), true, "TestCase"));
	*(void **)__this = TestCase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TestCase_obj::TestCase_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TestCase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TestCase_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TestCase_obj::__mClass;

void TestCase_obj::__register()
{
	TestCase_obj _hx_dummy;
	TestCase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TestCase",42,60,9e,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TestCase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TestCase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TestCase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

