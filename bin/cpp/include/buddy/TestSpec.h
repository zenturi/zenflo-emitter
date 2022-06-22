#ifndef INCLUDED_buddy_TestSpec
#define INCLUDED_buddy_TestSpec

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,TestFunc)
HX_DECLARE_CLASS1(buddy,TestSpec)
HX_DECLARE_CLASS1(buddy,TestSuite)
namespace buddy{


class TestSpec_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TestSpec_obj OBJ_;

	public:
		TestSpec_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("buddy.TestSpec",35,a4,cc,60); }
		::String __ToString() const { return HX_("TestSpec.",c1,b3,3e,ec) + _hx_tag; }

		static ::buddy::TestSpec Describe( ::buddy::TestSuite suite,bool included);
		static ::Dynamic Describe_dyn();
		static ::buddy::TestSpec It(::String description, ::buddy::TestFunc test,bool included, ::Dynamic pos,Float time);
		static ::Dynamic It_dyn();
};

} // end namespace buddy

#endif /* INCLUDED_buddy_TestSpec */ 
