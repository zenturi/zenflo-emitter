#ifndef INCLUDED_buddy_ShouldString
#define INCLUDED_buddy_ShouldString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldString)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldString_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldString_obj OBJ_;
		ShouldString_obj();

	public:
		enum { _hx_ClassId = 0x2da8990a };

		void __construct(::String value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldString")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldString"); }
		static ::hx::ObjectPtr< ShouldString_obj > __new(::String value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldString_obj > __alloc(::hx::Ctx *_hx_ctx,::String value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldString_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldString",84,39,7a,19); }

		static  ::buddy::ShouldString should(::String str);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldString get_not();
		::Dynamic get_not_dyn();

		void contain(::String substring, ::Dynamic p);
		::Dynamic contain_dyn();

		void startWith(::String substring, ::Dynamic p);
		::Dynamic startWith_dyn();

		void endWith(::String substring, ::Dynamic p);
		::Dynamic endWith_dyn();

		void match( ::EReg regexp, ::Dynamic p);
		::Dynamic match_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldString */ 
