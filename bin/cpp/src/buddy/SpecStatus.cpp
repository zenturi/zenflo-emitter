#include <hxcpp.h>

#ifndef INCLUDED_buddy_SpecStatus
#include <buddy/SpecStatus.h>
#endif
namespace buddy{

::buddy::SpecStatus SpecStatus_obj::Failed;

::buddy::SpecStatus SpecStatus_obj::Passed;

::buddy::SpecStatus SpecStatus_obj::Pending;

::buddy::SpecStatus SpecStatus_obj::Unknown;

bool SpecStatus_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Failed",dd,39,93,1c)) { outValue = SpecStatus_obj::Failed; return true; }
	if (inName==HX_("Passed",90,47,c6,22)) { outValue = SpecStatus_obj::Passed; return true; }
	if (inName==HX_("Pending",37,c0,3d,f9)) { outValue = SpecStatus_obj::Pending; return true; }
	if (inName==HX_("Unknown",6a,4b,cc,ae)) { outValue = SpecStatus_obj::Unknown; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SpecStatus_obj)

int SpecStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Failed",dd,39,93,1c)) return 3;
	if (inName==HX_("Passed",90,47,c6,22)) return 1;
	if (inName==HX_("Pending",37,c0,3d,f9)) return 2;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 0;
	return super::__FindIndex(inName);
}

int SpecStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Failed",dd,39,93,1c)) return 0;
	if (inName==HX_("Passed",90,47,c6,22)) return 0;
	if (inName==HX_("Pending",37,c0,3d,f9)) return 0;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SpecStatus_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Failed",dd,39,93,1c)) return Failed;
	if (inName==HX_("Passed",90,47,c6,22)) return Passed;
	if (inName==HX_("Pending",37,c0,3d,f9)) return Pending;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return Unknown;
	return super::__Field(inName,inCallProp);
}

static ::String SpecStatus_obj_sStaticFields[] = {
	HX_("Unknown",6a,4b,cc,ae),
	HX_("Passed",90,47,c6,22),
	HX_("Pending",37,c0,3d,f9),
	HX_("Failed",dd,39,93,1c),
	::String(null())
};

::hx::Class SpecStatus_obj::__mClass;

Dynamic __Create_SpecStatus_obj() { return new SpecStatus_obj; }

void SpecStatus_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("buddy.SpecStatus",55,8a,ce,5f), ::hx::TCanCast< SpecStatus_obj >,SpecStatus_obj_sStaticFields,0,
	&__Create_SpecStatus_obj, &__Create,
	&super::__SGetClass(), &CreateSpecStatus_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SpecStatus_obj::__GetStatic;
}

void SpecStatus_obj::__boot()
{
Failed = ::hx::CreateConstEnum< SpecStatus_obj >(HX_("Failed",dd,39,93,1c),3);
Passed = ::hx::CreateConstEnum< SpecStatus_obj >(HX_("Passed",90,47,c6,22),1);
Pending = ::hx::CreateConstEnum< SpecStatus_obj >(HX_("Pending",37,c0,3d,f9),2);
Unknown = ::hx::CreateConstEnum< SpecStatus_obj >(HX_("Unknown",6a,4b,cc,ae),0);
}


} // end namespace buddy
