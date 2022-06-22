#ifndef INCLUDED_buddy_ShouldFunctions
#define INCLUDED_buddy_ShouldFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,ShouldFunctions)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES ShouldFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShouldFunctions_obj OBJ_;
		ShouldFunctions_obj();

	public:
		enum { _hx_ClassId = 0x66f0d026 };

		void __construct( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.ShouldFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.ShouldFunctions"); }
		static ::hx::ObjectPtr< ShouldFunctions_obj > __new( ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static ::hx::ObjectPtr< ShouldFunctions_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShouldFunctions_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShouldFunctions",88,2b,b4,7f); }

		static  ::buddy::ShouldFunctions should( ::Dynamic value);
		static ::Dynamic should_dyn();

		 ::Dynamic value;
		Dynamic value_dyn() { return value;}
		bool inverse;
		 ::buddy::ShouldFunctions get_not();
		::Dynamic get_not_dyn();

		 ::Dynamic throwAnything( ::Dynamic p);
		::Dynamic throwAnything_dyn();

		 ::Dynamic throwValue( ::Dynamic v, ::Dynamic p);
		::Dynamic throwValue_dyn();

		 ::Dynamic throwType(::hx::Class type, ::Dynamic p);
		::Dynamic throwType_dyn();

		void be( ::Dynamic expected, ::Dynamic p);
		::Dynamic be_dyn();

		::String quote( ::Dynamic v);
		::Dynamic quote_dyn();

		void test(bool expr, ::Dynamic p,::String error,::String errorInverted);
		::Dynamic test_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_ShouldFunctions */ 
