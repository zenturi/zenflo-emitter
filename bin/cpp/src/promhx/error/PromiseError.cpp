#include <hxcpp.h>

#ifndef INCLUDED_promhx_error_PromiseError
#include <promhx/error/PromiseError.h>
#endif
namespace promhx{
namespace error{

::promhx::error::PromiseError PromiseError_obj::AlreadyResolved(::String message)
{
	return ::hx::CreateEnum< PromiseError_obj >(HX_("AlreadyResolved",90,2f,1b,81),0,1)->_hx_init(0,message);
}

::promhx::error::PromiseError PromiseError_obj::DownstreamNotFullfilled(::String message)
{
	return ::hx::CreateEnum< PromiseError_obj >(HX_("DownstreamNotFullfilled",82,7f,e1,ee),1,1)->_hx_init(0,message);
}

bool PromiseError_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AlreadyResolved",90,2f,1b,81)) { outValue = PromiseError_obj::AlreadyResolved_dyn(); return true; }
	if (inName==HX_("DownstreamNotFullfilled",82,7f,e1,ee)) { outValue = PromiseError_obj::DownstreamNotFullfilled_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PromiseError_obj)

int PromiseError_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AlreadyResolved",90,2f,1b,81)) return 0;
	if (inName==HX_("DownstreamNotFullfilled",82,7f,e1,ee)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PromiseError_obj,AlreadyResolved,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PromiseError_obj,DownstreamNotFullfilled,return)

int PromiseError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AlreadyResolved",90,2f,1b,81)) return 1;
	if (inName==HX_("DownstreamNotFullfilled",82,7f,e1,ee)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val PromiseError_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AlreadyResolved",90,2f,1b,81)) return AlreadyResolved_dyn();
	if (inName==HX_("DownstreamNotFullfilled",82,7f,e1,ee)) return DownstreamNotFullfilled_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String PromiseError_obj_sStaticFields[] = {
	HX_("AlreadyResolved",90,2f,1b,81),
	HX_("DownstreamNotFullfilled",82,7f,e1,ee),
	::String(null())
};

::hx::Class PromiseError_obj::__mClass;

Dynamic __Create_PromiseError_obj() { return new PromiseError_obj; }

void PromiseError_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("promhx.error.PromiseError",b1,53,45,2b), ::hx::TCanCast< PromiseError_obj >,PromiseError_obj_sStaticFields,0,
	&__Create_PromiseError_obj, &__Create,
	&super::__SGetClass(), &CreatePromiseError_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PromiseError_obj::__GetStatic;
}

void PromiseError_obj::__boot()
{
}


} // end namespace promhx
} // end namespace error
