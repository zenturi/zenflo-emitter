#include <hxcpp.h>

#ifndef INCLUDED_buddy_Spec
#include <buddy/Spec.h>
#endif
#ifndef INCLUDED_buddy_reporting_Reporter
#include <buddy/reporting/Reporter.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif

namespace buddy{
namespace reporting{


static ::String Reporter_obj_sMemberFields[] = {
	HX_("start",62,74,0b,84),
	HX_("progress",ad,f7,2a,86),
	HX_("done",82,f0,6d,42),
	::String(null()) };

::hx::Class Reporter_obj::__mClass;

void Reporter_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.reporting.Reporter",69,9c,f1,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Reporter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x70bc11a9 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
} // end namespace reporting
