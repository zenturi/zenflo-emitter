#include <hxcpp.h>

#ifndef INCLUDED_buddy_TestFunc
#include <buddy/TestFunc.h>
#endif
#ifndef INCLUDED_buddy_TestSpec
#include <buddy/TestSpec.h>
#endif
#ifndef INCLUDED_buddy_TestSuite
#include <buddy/TestSuite.h>
#endif
namespace buddy{

::buddy::TestSpec TestSpec_obj::Describe( ::buddy::TestSuite suite,bool included)
{
	return ::hx::CreateEnum< TestSpec_obj >(HX_("Describe",2b,6c,be,e0),0,2)->_hx_init(0,suite)->_hx_init(1,included);
}

::buddy::TestSpec TestSpec_obj::It(::String description, ::buddy::TestFunc test,bool included, ::Dynamic pos,Float time)
{
	return ::hx::CreateEnum< TestSpec_obj >(HX_("It",0b,40,00,00),1,5)->_hx_init(0,description)->_hx_init(1,test)->_hx_init(2,included)->_hx_init(3,pos)->_hx_init(4,time);
}

bool TestSpec_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Describe",2b,6c,be,e0)) { outValue = TestSpec_obj::Describe_dyn(); return true; }
	if (inName==HX_("It",0b,40,00,00)) { outValue = TestSpec_obj::It_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TestSpec_obj)

int TestSpec_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Describe",2b,6c,be,e0)) return 0;
	if (inName==HX_("It",0b,40,00,00)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TestSpec_obj,Describe,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(TestSpec_obj,It,return)

int TestSpec_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Describe",2b,6c,be,e0)) return 2;
	if (inName==HX_("It",0b,40,00,00)) return 5;
	return super::__FindArgCount(inName);
}

::hx::Val TestSpec_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Describe",2b,6c,be,e0)) return Describe_dyn();
	if (inName==HX_("It",0b,40,00,00)) return It_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String TestSpec_obj_sStaticFields[] = {
	HX_("Describe",2b,6c,be,e0),
	HX_("It",0b,40,00,00),
	::String(null())
};

::hx::Class TestSpec_obj::__mClass;

Dynamic __Create_TestSpec_obj() { return new TestSpec_obj; }

void TestSpec_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("buddy.TestSpec",35,a4,cc,60), ::hx::TCanCast< TestSpec_obj >,TestSpec_obj_sStaticFields,0,
	&__Create_TestSpec_obj, &__Create,
	&super::__SGetClass(), &CreateTestSpec_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TestSpec_obj::__GetStatic;
}

void TestSpec_obj::__boot()
{
}


} // end namespace buddy
