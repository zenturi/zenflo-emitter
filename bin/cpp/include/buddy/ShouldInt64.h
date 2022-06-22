#ifndef INCLUDED_buddy_ShouldInt64
#define INCLUDED_buddy_ShouldInt64

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS1(buddy,Should)
HX_DECLARE_CLASS1(buddy,ShouldInt64)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldInt64_obj : public  ::buddy::Should_obj
{
	public:
		typedef  ::buddy::Should_obj super;
		typedef ShouldInt64_obj OBJ_;
		ShouldInt64_obj();

	public:
		enum { _hx_ClassId = 0x4c9acfd4 };

		void __construct( cpp::Int64Struct value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldInt64")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldInt64"); }
		static ::hx::ObjectPtr< ShouldInt64_obj > __new( cpp::Int64Struct value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldInt64_obj > __alloc(::hx::Ctx *_hx_ctx, cpp::Int64Struct value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldInt64_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldInt64",9a,5c,24,59); }

		static  ::buddy::ShouldInt64 should( cpp::Int64Struct i);
		static ::Dynamic should_dyn();

		 ::buddy::ShouldInt64 get_not();
		::Dynamic get_not_dyn();

		void be( ::Dynamic _tmp_expected, ::Dynamic p);

		void beLessThan( cpp::Int64Struct expected, ::Dynamic p);
		::Dynamic beLessThan_dyn();

		void beLessThanOrEqualTo( cpp::Int64Struct expected, ::Dynamic p);
		::Dynamic beLessThanOrEqualTo_dyn();

		void beGreaterThan( cpp::Int64Struct expected, ::Dynamic p);
		::Dynamic beGreaterThan_dyn();

		void beGreaterThanOrEqualTo( cpp::Int64Struct expected, ::Dynamic p);
		::Dynamic beGreaterThanOrEqualTo_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldInt64 */ 
