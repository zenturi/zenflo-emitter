#ifndef INCLUDED_buddy_ShouldDate
#define INCLUDED_buddy_ShouldDate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldDate)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldDate_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldDate_obj OBJ_;
		ShouldDate_obj();

	public:
		enum { _hx_ClassId = 0x7f7868c7 };

		void __construct( ::Date value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldDate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldDate"); }
		static ::hx::ObjectPtr< ShouldDate_obj > __new( ::Date value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldDate_obj > __alloc(::hx::Ctx *_hx_ctx, ::Date value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldDate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldDate",21,c4,3f,c8); }

		static  ::buddy::ShouldDate should( ::Date i);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldDate get_not();
		::Dynamic get_not_dyn();

		void beOn( ::Date expected, ::Dynamic p);
		::Dynamic beOn_dyn();

		void beBefore( ::Date expected, ::Dynamic p);
		::Dynamic beBefore_dyn();

		void beAfter( ::Date expected, ::Dynamic p);
		::Dynamic beAfter_dyn();

		void beOnStr(::String expected, ::Dynamic p);
		::Dynamic beOnStr_dyn();

		void beBeforeStr(::String expected, ::Dynamic p);
		::Dynamic beBeforeStr_dyn();

		void beAfterStr(::String expected, ::Dynamic p);
		::Dynamic beAfterStr_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldDate */ 
