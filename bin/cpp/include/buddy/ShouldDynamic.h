#ifndef INCLUDED_buddy_ShouldDynamic
#define INCLUDED_buddy_ShouldDynamic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldDynamic)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldDynamic_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldDynamic_obj OBJ_;
		ShouldDynamic_obj();

	public:
		enum { _hx_ClassId = 0x02ff6126 };

		void __construct( ::Dynamic value, ::Dynamic inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldDynamic")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldDynamic"); }
		static ::hx::ObjectPtr< ShouldDynamic_obj > __new( ::Dynamic value, ::Dynamic inverse);
		static ::hx::ObjectPtr< ShouldDynamic_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value, ::Dynamic inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldDynamic_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldDynamic",6c,2b,9a,6e); }

		static  ::buddy::ShouldDynamic should( ::Dynamic d);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldDynamic get_not();
		::Dynamic get_not_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldDynamic */ 
