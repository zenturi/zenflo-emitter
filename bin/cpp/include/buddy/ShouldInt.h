#ifndef INCLUDED_buddy_ShouldInt
#define INCLUDED_buddy_ShouldInt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldInt)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldInt_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldInt_obj OBJ_;
		ShouldInt_obj();

	public:
		enum { _hx_ClassId = 0x30e02f16 };

		void __construct( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldInt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldInt"); }
		static ::hx::ObjectPtr< ShouldInt_obj > __new( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldInt_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldInt_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldInt",5c,de,ea,e1); }

		static  ::buddy::ShouldInt should( ::Dynamic i);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldInt get_not();
		::Dynamic get_not_dyn();

		void beLessThan(int expected, ::Dynamic p);
		::Dynamic beLessThan_dyn();

		void beLessThanOrEqualTo(int expected, ::Dynamic p);
		::Dynamic beLessThanOrEqualTo_dyn();

		void beGreaterThan(int expected, ::Dynamic p);
		::Dynamic beGreaterThan_dyn();

		void beGreaterThanOrEqualTo(int expected, ::Dynamic p);
		::Dynamic beGreaterThanOrEqualTo_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldInt */ 
