#ifndef INCLUDED_buddy_SpecStatus
#define INCLUDED_buddy_SpecStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,SpecStatus)
namespace buddy{


class SpecStatus_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SpecStatus_obj OBJ_;

	public:
		SpecStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("buddy.SpecStatus",55,8a,ce,5f); }
		::String __ToString() const { return HX_("SpecStatus.",a1,53,31,44) + _hx_tag; }

		static ::buddy::SpecStatus Failed;
		static inline ::buddy::SpecStatus Failed_dyn() { return Failed; }
		static ::buddy::SpecStatus Passed;
		static inline ::buddy::SpecStatus Passed_dyn() { return Passed; }
		static ::buddy::SpecStatus Pending;
		static inline ::buddy::SpecStatus Pending_dyn() { return Pending; }
		static ::buddy::SpecStatus Unknown;
		static inline ::buddy::SpecStatus Unknown_dyn() { return Unknown; }
};

} // end namespace buddy

#endif /* INCLUDED_buddy_SpecStatus */ 
