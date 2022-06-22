#include <hxcpp.h>

#ifndef INCLUDED_buddy_internal_GenerateMain
#include <buddy/internal/GenerateMain.h>
#endif

namespace buddy{
namespace internal{

void GenerateMain_obj::__construct() { }

Dynamic GenerateMain_obj::__CreateEmpty() { return new GenerateMain_obj; }

void *GenerateMain_obj::_hx_vtable = 0;

Dynamic GenerateMain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenerateMain_obj > _hx_result = new GenerateMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GenerateMain_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f979f71;
}

bool GenerateMain_obj::testsRunning;


GenerateMain_obj::GenerateMain_obj()
{
}

bool GenerateMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"testsRunning") ) { outValue = ( testsRunning ); return true; }
	}
	return false;
}

bool GenerateMain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"testsRunning") ) { testsRunning=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GenerateMain_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GenerateMain_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &GenerateMain_obj::testsRunning,HX_("testsRunning",1e,44,b9,03)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GenerateMain_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenerateMain_obj::testsRunning,"testsRunning");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GenerateMain_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenerateMain_obj::testsRunning,"testsRunning");
};

#endif

::hx::Class GenerateMain_obj::__mClass;

static ::String GenerateMain_obj_sStaticFields[] = {
	HX_("testsRunning",1e,44,b9,03),
	::String(null())
};

void GenerateMain_obj::__register()
{
	GenerateMain_obj _hx_dummy;
	GenerateMain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.internal.GenerateMain",97,cc,ec,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GenerateMain_obj::__GetStatic;
	__mClass->mSetStaticField = &GenerateMain_obj::__SetStatic;
	__mClass->mMarkFunc = GenerateMain_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GenerateMain_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GenerateMain_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GenerateMain_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenerateMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenerateMain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
} // end namespace internal
