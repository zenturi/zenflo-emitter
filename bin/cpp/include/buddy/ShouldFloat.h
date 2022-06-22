#ifndef INCLUDED_buddy_ShouldFloat
#define INCLUDED_buddy_ShouldFloat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldFloat)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldFloat_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldFloat_obj OBJ_;
		ShouldFloat_obj();

	public:
		enum { _hx_ClassId = 0x5ef9144b };

		void __construct( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldFloat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldFloat"); }
		static ::hx::ObjectPtr< ShouldFloat_obj > __new( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldFloat_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldFloat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldFloat",49,8c,9a,9d); }

		static  ::buddy::ShouldFloat should( ::Dynamic i);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldFloat get_not();
		::Dynamic get_not_dyn();

		void beLessThan(Float expected, ::Dynamic p);
		::Dynamic beLessThan_dyn();

		void beLessThanOrEqualTo(Float expected, ::Dynamic p);
		::Dynamic beLessThanOrEqualTo_dyn();

		void beGreaterThan(Float expected, ::Dynamic p);
		::Dynamic beGreaterThan_dyn();

		void beGreaterThanOrEqualTo(Float expected, ::Dynamic p);
		::Dynamic beGreaterThanOrEqualTo_dyn();

		void beCloseTo(Float expected, ::Dynamic precision, ::Dynamic p);
		::Dynamic beCloseTo_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldFloat */ 
