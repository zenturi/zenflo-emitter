#include <hxcpp.h>

#ifndef INCLUDED_buddy_Spec
#include <buddy/Spec.h>
#endif
#ifndef INCLUDED_buddy_Step
#include <buddy/Step.h>
#endif
#ifndef INCLUDED_buddy_Suite
#include <buddy/Suite.h>
#endif
namespace buddy{

::buddy::Step Step_obj::TSpec( ::buddy::Spec s)
{
	return ::hx::CreateEnum< Step_obj >(HX_("TSpec",af,c4,da,94),1,1)->_hx_init(0,s);
}

::buddy::Step Step_obj::TSuite( ::buddy::Suite s)
{
	return ::hx::CreateEnum< Step_obj >(HX_("TSuite",c4,7d,e2,ad),0,1)->_hx_init(0,s);
}

bool Step_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TSpec",af,c4,da,94)) { outValue = Step_obj::TSpec_dyn(); return true; }
	if (inName==HX_("TSuite",c4,7d,e2,ad)) { outValue = Step_obj::TSuite_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Step_obj)

int Step_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TSpec",af,c4,da,94)) return 1;
	if (inName==HX_("TSuite",c4,7d,e2,ad)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Step_obj,TSpec,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Step_obj,TSuite,return)

int Step_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TSpec",af,c4,da,94)) return 1;
	if (inName==HX_("TSuite",c4,7d,e2,ad)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Step_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TSpec",af,c4,da,94)) return TSpec_dyn();
	if (inName==HX_("TSuite",c4,7d,e2,ad)) return TSuite_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Step_obj_sStaticFields[] = {
	HX_("TSuite",c4,7d,e2,ad),
	HX_("TSpec",af,c4,da,94),
	::String(null())
};

::hx::Class Step_obj::__mClass;

Dynamic __Create_Step_obj() { return new Step_obj; }

void Step_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("buddy.Step",d4,43,c0,af), ::hx::TCanCast< Step_obj >,Step_obj_sStaticFields,0,
	&__Create_Step_obj, &__Create,
	&super::__SGetClass(), &CreateStep_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Step_obj::__GetStatic;
}

void Step_obj::__boot()
{
}


} // end namespace buddy
