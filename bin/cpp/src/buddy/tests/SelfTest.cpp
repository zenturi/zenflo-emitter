#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_buddy_Suite
#include <buddy/Suite.h>
#endif
#ifndef INCLUDED_buddy_tests_SelfTest
#include <buddy/tests/SelfTest.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c208eaa34716b77b_16_passLastSpecIf,"buddy.tests.SelfTest","passLastSpecIf",0x7a9b657a,"buddy.tests.SelfTest.passLastSpecIf","buddy/tests/SelfTest.hx",16,0xe51b0269)
HX_LOCAL_STACK_FRAME(_hx_pos_c208eaa34716b77b_26_setLastSpec,"buddy.tests.SelfTest","setLastSpec",0x2e86c338,"buddy.tests.SelfTest.setLastSpec","buddy/tests/SelfTest.hx",26,0xe51b0269)
HX_LOCAL_STACK_FRAME(_hx_pos_c208eaa34716b77b_12_boot,"buddy.tests.SelfTest","boot",0x769f7bcd,"buddy.tests.SelfTest.boot","buddy/tests/SelfTest.hx",12,0xe51b0269)
HX_LOCAL_STACK_FRAME(_hx_pos_c208eaa34716b77b_13_boot,"buddy.tests.SelfTest","boot",0x769f7bcd,"buddy.tests.SelfTest.boot","buddy/tests/SelfTest.hx",13,0xe51b0269)
namespace buddy{
namespace tests{

void SelfTest_obj::__construct() { }

Dynamic SelfTest_obj::__CreateEmpty() { return new SelfTest_obj; }

void *SelfTest_obj::_hx_vtable = 0;

Dynamic SelfTest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelfTest_obj > _hx_result = new SelfTest_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SelfTest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25110039;
}

 ::buddy::Spec SelfTest_obj::lastSpec;

 ::buddy::Suite SelfTest_obj::lastSuite;

void SelfTest_obj::passLastSpecIf(bool expr,::String failReason){
            	HX_GC_STACKFRAME(&_hx_pos_c208eaa34716b77b_16_passLastSpecIf)
HXDLIN(  16)		if (expr) {
HXLINE(  17)			::buddy::tests::SelfTest_obj::setLastSpec(::buddy::SpecStatus_obj::Passed_dyn());
            		}
            		else {
HXLINE(  20)			::buddy::tests::SelfTest_obj::setLastSpec(::buddy::SpecStatus_obj::Failed_dyn());
HXLINE(  21)			::Array< ::Dynamic> _hx_tmp = ::buddy::tests::SelfTest_obj::lastSpec->failures;
HXDLIN(  21)			_hx_tmp->push( ::buddy::Failure_obj::__alloc( HX_CTX ,failReason,::Array_obj< ::Dynamic>::__new(0)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SelfTest_obj,passLastSpecIf,(void))

void SelfTest_obj::setLastSpec( ::buddy::SpecStatus status){
            	HX_STACKFRAME(&_hx_pos_c208eaa34716b77b_26_setLastSpec)
HXDLIN(  26)		::Reflect_obj::setProperty(::buddy::tests::SelfTest_obj::lastSpec,HX_("status",32,e7,fb,05),status);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SelfTest_obj,setLastSpec,(void))


SelfTest_obj::SelfTest_obj()
{
}

bool SelfTest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lastSpec") ) { outValue = ( lastSpec ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastSuite") ) { outValue = ( lastSuite ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setLastSpec") ) { outValue = setLastSpec_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"passLastSpecIf") ) { outValue = passLastSpecIf_dyn(); return true; }
	}
	return false;
}

bool SelfTest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lastSpec") ) { lastSpec=ioValue.Cast<  ::buddy::Spec >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastSuite") ) { lastSuite=ioValue.Cast<  ::buddy::Suite >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelfTest_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SelfTest_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::buddy::Spec */ ,(void *) &SelfTest_obj::lastSpec,HX_("lastSpec",b1,f7,a1,df)},
	{::hx::fsObject /*  ::buddy::Suite */ ,(void *) &SelfTest_obj::lastSuite,HX_("lastSuite",82,ec,67,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SelfTest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SelfTest_obj::lastSpec,"lastSpec");
	HX_MARK_MEMBER_NAME(SelfTest_obj::lastSuite,"lastSuite");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SelfTest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SelfTest_obj::lastSpec,"lastSpec");
	HX_VISIT_MEMBER_NAME(SelfTest_obj::lastSuite,"lastSuite");
};

#endif

::hx::Class SelfTest_obj::__mClass;

static ::String SelfTest_obj_sStaticFields[] = {
	HX_("lastSpec",b1,f7,a1,df),
	HX_("lastSuite",82,ec,67,d1),
	HX_("passLastSpecIf",1f,be,31,83),
	HX_("setLastSpec",73,c1,02,10),
	::String(null())
};

void SelfTest_obj::__register()
{
	SelfTest_obj _hx_dummy;
	SelfTest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.tests.SelfTest",b3,8e,69,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SelfTest_obj::__GetStatic;
	__mClass->mSetStaticField = &SelfTest_obj::__SetStatic;
	__mClass->mMarkFunc = SelfTest_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SelfTest_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SelfTest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SelfTest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelfTest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelfTest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SelfTest_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c208eaa34716b77b_12_boot)
HXDLIN(  12)		lastSpec =  ::buddy::Spec_obj::__alloc( HX_CTX ,HX_("No spec",5a,aa,52,c6),HX_("No filename",66,f6,a5,79));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c208eaa34716b77b_13_boot)
HXDLIN(  13)		lastSuite =  ::buddy::Suite_obj::__alloc( HX_CTX ,HX_("No suite",b9,8d,53,c5));
            	}
}

} // end namespace buddy
} // end namespace tests
