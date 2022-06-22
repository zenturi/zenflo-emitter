#ifndef INCLUDED_buddy_ShouldIterable
#define INCLUDED_buddy_ShouldIterable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldIterable)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldIterable_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldIterable_obj OBJ_;
		ShouldIterable_obj();

	public:
		enum { _hx_ClassId = 0x132c4f2b };

		void __construct( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldIterable")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldIterable"); }
		static ::hx::ObjectPtr< ShouldIterable_obj > __new( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldIterable_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldIterable_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldIterable",25,82,02,cf); }

		static  ::buddy::ShouldIterable should( ::Dynamic value);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldIterable get_not();
		::Dynamic get_not_dyn();

		void contain( ::Dynamic o, ::Dynamic p);
		::Dynamic contain_dyn();

		void containAll( ::Dynamic values, ::Dynamic p);
		::Dynamic containAll_dyn();

		void containExactly( ::Dynamic values, ::Dynamic p);
		::Dynamic containExactly_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldIterable */ 
