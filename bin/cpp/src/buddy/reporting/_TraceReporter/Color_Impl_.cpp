#include <hxcpp.h>

#ifndef INCLUDED_buddy_reporting__TraceReporter_Color_Impl_
#include <buddy/reporting/_TraceReporter/Color_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_be02814f718dce84_21_ansiCode,"buddy.reporting._TraceReporter.Color_Impl_","ansiCode",0xa85f99fa,"buddy.reporting._TraceReporter.Color_Impl_.ansiCode","buddy/reporting/TraceReporter.hx",21,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_be02814f718dce84_15_boot,"buddy.reporting._TraceReporter.Color_Impl_","boot",0x496a979c,"buddy.reporting._TraceReporter.Color_Impl_.boot","buddy/reporting/TraceReporter.hx",15,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_be02814f718dce84_16_boot,"buddy.reporting._TraceReporter.Color_Impl_","boot",0x496a979c,"buddy.reporting._TraceReporter.Color_Impl_.boot","buddy/reporting/TraceReporter.hx",16,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_be02814f718dce84_17_boot,"buddy.reporting._TraceReporter.Color_Impl_","boot",0x496a979c,"buddy.reporting._TraceReporter.Color_Impl_.boot","buddy/reporting/TraceReporter.hx",17,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_be02814f718dce84_18_boot,"buddy.reporting._TraceReporter.Color_Impl_","boot",0x496a979c,"buddy.reporting._TraceReporter.Color_Impl_.boot","buddy/reporting/TraceReporter.hx",18,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_be02814f718dce84_19_boot,"buddy.reporting._TraceReporter.Color_Impl_","boot",0x496a979c,"buddy.reporting._TraceReporter.Color_Impl_.boot","buddy/reporting/TraceReporter.hx",19,0x6310aa42)
namespace buddy{
namespace reporting{
namespace _TraceReporter{

void Color_Impl__obj::__construct() { }

Dynamic Color_Impl__obj::__CreateEmpty() { return new Color_Impl__obj; }

void *Color_Impl__obj::_hx_vtable = 0;

Dynamic Color_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Color_Impl__obj > _hx_result = new Color_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Color_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d633bf4;
}

int Color_Impl__obj::Default;

int Color_Impl__obj::Red;

int Color_Impl__obj::Yellow;

int Color_Impl__obj::Green;

int Color_Impl__obj::White;

::String Color_Impl__obj::ansiCode(int this1){
            	HX_STACKFRAME(&_hx_pos_be02814f718dce84_21_ansiCode)
HXDLIN(  21)		return (HX_("\x1b""",1b,00,00,00) + ((HX_("[",5b,00,00,00) + this1) + HX_("m",6d,00,00,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,ansiCode,return )


Color_Impl__obj::Color_Impl__obj()
{
}

bool Color_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ansiCode") ) { outValue = ansiCode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Color_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Color_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Color_Impl__obj::Default,HX_("Default",a1,00,15,69)},
	{::hx::fsInt,(void *) &Color_Impl__obj::Red,HX_("Red",31,91,3e,00)},
	{::hx::fsInt,(void *) &Color_Impl__obj::Yellow,HX_("Yellow",94,13,f1,04)},
	{::hx::fsInt,(void *) &Color_Impl__obj::Green,HX_("Green",a3,7e,1a,2d)},
	{::hx::fsInt,(void *) &Color_Impl__obj::White,HX_("White",89,ba,ea,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Color_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Default,"Default");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Red,"Red");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Yellow,"Yellow");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Green,"Green");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::White,"White");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Color_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Default,"Default");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Red,"Red");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Yellow,"Yellow");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Green,"Green");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::White,"White");
};

#endif

::hx::Class Color_Impl__obj::__mClass;

static ::String Color_Impl__obj_sStaticFields[] = {
	HX_("Default",a1,00,15,69),
	HX_("Red",31,91,3e,00),
	HX_("Yellow",94,13,f1,04),
	HX_("Green",a3,7e,1a,2d),
	HX_("White",89,ba,ea,5c),
	HX_("ansiCode",90,89,11,27),
	::String(null())
};

void Color_Impl__obj::__register()
{
	Color_Impl__obj _hx_dummy;
	Color_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.reporting._TraceReporter.Color_Impl_",44,05,f2,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Color_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Color_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Color_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Color_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Color_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Color_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Color_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_be02814f718dce84_15_boot)
HXDLIN(  15)		Default = 39;
            	}
{
            	HX_STACKFRAME(&_hx_pos_be02814f718dce84_16_boot)
HXDLIN(  16)		Red = 31;
            	}
{
            	HX_STACKFRAME(&_hx_pos_be02814f718dce84_17_boot)
HXDLIN(  17)		Yellow = 33;
            	}
{
            	HX_STACKFRAME(&_hx_pos_be02814f718dce84_18_boot)
HXDLIN(  18)		Green = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_be02814f718dce84_19_boot)
HXDLIN(  19)		White = 37;
            	}
}

} // end namespace buddy
} // end namespace reporting
} // end namespace _TraceReporter
