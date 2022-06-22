#ifndef INCLUDED_buddy_Spec
#define INCLUDED_buddy_Spec

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,Failure)
HX_DECLARE_CLASS1(buddy,Spec)
HX_DECLARE_CLASS1(buddy,SpecStatus)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES Spec_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Spec_obj OBJ_;
		Spec_obj();

	public:
		enum { _hx_ClassId = 0x1cf273e1 };

		void __construct(::String description,::String fileName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.Spec")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.Spec"); }
		static ::hx::ObjectPtr< Spec_obj > __new(::String description,::String fileName);
		static ::hx::ObjectPtr< Spec_obj > __alloc(::hx::Ctx *_hx_ctx,::String description,::String fileName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Spec_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Spec",5b,0a,32,37); }

		::String description;
		 ::buddy::SpecStatus status;
		::Array< ::Dynamic> failures;
		::Array< ::String > traces;
		::String fileName;
		Float time;
};

} // end namespace buddy

#endif /* INCLUDED_buddy_Spec */ 
