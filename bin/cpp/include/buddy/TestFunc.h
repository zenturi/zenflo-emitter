#ifndef INCLUDED_buddy_TestFunc
#define INCLUDED_buddy_TestFunc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,TestFunc)
namespace buddy{


class TestFunc_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TestFunc_obj OBJ_;

	public:
		TestFunc_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("buddy.TestFunc",3e,b1,38,58); }
		::String __ToString() const { return HX_("TestFunc.",98,0e,5e,73) + _hx_tag; }

		static ::buddy::TestFunc Async( ::Dynamic f);
		static ::Dynamic Async_dyn();
		static ::buddy::TestFunc Sync( ::Dynamic f);
		static ::Dynamic Sync_dyn();
};

} // end namespace buddy

#endif /* INCLUDED_buddy_TestFunc */ 
