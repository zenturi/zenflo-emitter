#ifndef INCLUDED_buddy_Suite
#define INCLUDED_buddy_Suite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,Spec)
HX_DECLARE_CLASS1(buddy,Step)
HX_DECLARE_CLASS1(buddy,Suite)
HX_DECLARE_CLASS1(haxe,StackItem)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES Suite_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Suite_obj OBJ_;
		Suite_obj();

	public:
		enum { _hx_ClassId = 0x3a841a52 };

		void __construct(::String description);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.Suite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.Suite"); }
		static ::hx::ObjectPtr< Suite_obj > __new(::String description);
		static ::hx::ObjectPtr< Suite_obj > __alloc(::hx::Ctx *_hx_ctx,::String description);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Suite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Suite",98,2e,e8,17); }

		::String description;
		::Array< ::Dynamic> steps;
		 ::Dynamic error;
		::Array< ::Dynamic> stack;
		::Array< ::Dynamic> get_specs();
		::Dynamic get_specs_dyn();

		::Array< ::Dynamic> get_suites();
		::Dynamic get_suites_dyn();

		Float get_time();
		::Dynamic get_time_dyn();

		bool passed();
		::Dynamic passed_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_Suite */ 
