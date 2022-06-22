#ifndef INCLUDED_buddy_ShouldEnum
#define INCLUDED_buddy_ShouldEnum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldEnum)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldEnum_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldEnum_obj OBJ_;
		ShouldEnum_obj();

	public:
		enum { _hx_ClassId = 0x7f7bcbb6 };

		void __construct( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldEnum")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldEnum"); }
		static ::hx::ObjectPtr< ShouldEnum_obj > __new( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldEnum_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldEnum_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldEnum",f4,d8,f2,c8); }

		static  ::buddy::ShouldEnum should( ::Dynamic e);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldEnum get_not();
		::Dynamic get_not_dyn();

		void be( ::Dynamic _tmp_expected, ::Dynamic p);

		void equal( ::Dynamic expected, ::Dynamic p);
		::Dynamic equal_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldEnum */ 
