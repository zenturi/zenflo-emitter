#include <hxcpp.h>

#ifndef INCLUDED_buddy_TestFunc
#include <buddy/TestFunc.h>
#endif
namespace buddy{

::buddy::TestFunc TestFunc_obj::Async( ::Dynamic f)
{
	return ::hx::CreateEnum< TestFunc_obj >(HX_("Async",1c,6f,6b,b9),0,1)->_hx_init(0,f);
}

::buddy::TestFunc TestFunc_obj::Sync( ::Dynamic f)
{
	return ::hx::CreateEnum< TestFunc_obj >(HX_("Sync",7b,e6,38,37),1,1)->_hx_init(0,f);
}

bool TestFunc_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Async",1c,6f,6b,b9)) { outValue = TestFunc_obj::Async_dyn(); return true; }
	if (inName==HX_("Sync",7b,e6,38,37)) { outValue = TestFunc_obj::Sync_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TestFunc_obj)

int TestFunc_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Async",1c,6f,6b,b9)) return 0;
	if (inName==HX_("Sync",7b,e6,38,37)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TestFunc_obj,Async,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TestFunc_obj,Sync,return)

int TestFunc_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Async",1c,6f,6b,b9)) return 1;
	if (inName==HX_("Sync",7b,e6,38,37)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val TestFunc_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Async",1c,6f,6b,b9)) return Async_dyn();
	if (inName==HX_("Sync",7b,e6,38,37)) return Sync_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String TestFunc_obj_sStaticFields[] = {
	HX_("Async",1c,6f,6b,b9),
	HX_("Sync",7b,e6,38,37),
	::String(null())
};

::hx::Class TestFunc_obj::__mClass;

Dynamic __Create_TestFunc_obj() { return new TestFunc_obj; }

void TestFunc_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("buddy.TestFunc",3e,b1,38,58), ::hx::TCanCast< TestFunc_obj >,TestFunc_obj_sStaticFields,0,
	&__Create_TestFunc_obj, &__Create,
	&super::__SGetClass(), &CreateTestFunc_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TestFunc_obj::__GetStatic;
}

void TestFunc_obj::__boot()
{
}


} // end namespace buddy
