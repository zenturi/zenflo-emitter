#include <hxcpp.h>

#ifndef INCLUDED_buddy_Buddy
#include <buddy/Buddy.h>
#endif

namespace buddy{


::hx::Class Buddy_obj::__mClass;

void Buddy_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.Buddy",7e,a3,53,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x87cf11e0 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
