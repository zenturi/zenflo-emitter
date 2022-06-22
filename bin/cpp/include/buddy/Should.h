#ifndef INCLUDED_buddy_Should
#define INCLUDED_buddy_Should

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,Should)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES Should_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Should_obj OBJ_;
		Should_obj();

	public:
		enum { _hx_ClassId = 0x4fa58375 };

		void __construct( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.Should")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.Should"); }
		static ::hx::ObjectPtr< Should_obj > __new( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< Should_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Should_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Should",53,1c,03,5b); }

		 ::Dynamic value;
		bool inverse;
		virtual void be( ::Dynamic expected, ::Dynamic p);
		::Dynamic be_dyn();

		void beType( ::Dynamic type, ::Dynamic p);
		::Dynamic beType_dyn();

		::String quote( ::Dynamic v);
		::Dynamic quote_dyn();

		void fail(::String error,::String errorInverted, ::Dynamic p);
		::Dynamic fail_dyn();

		void test(bool expr, ::Dynamic p,::String error,::String errorInverted);
		::Dynamic test_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_Should */ 
