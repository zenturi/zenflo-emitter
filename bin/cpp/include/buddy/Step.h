#ifndef INCLUDED_buddy_Step
#define INCLUDED_buddy_Step

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,Spec)
HX_DECLARE_CLASS1(buddy,Step)
HX_DECLARE_CLASS1(buddy,Suite)
namespace buddy{


class Step_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Step_obj OBJ_;

	public:
		Step_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("buddy.Step",d4,43,c0,af); }
		::String __ToString() const { return HX_("Step.",42,eb,3b,17) + _hx_tag; }

		static ::buddy::Step TSpec( ::buddy::Spec s);
		static ::Dynamic TSpec_dyn();
		static ::buddy::Step TSuite( ::buddy::Suite s);
		static ::Dynamic TSuite_dyn();
};

} // end namespace buddy

#endif /* INCLUDED_buddy_Step */ 
