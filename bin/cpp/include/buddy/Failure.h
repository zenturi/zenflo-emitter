#ifndef INCLUDED_buddy_Failure
#define INCLUDED_buddy_Failure

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,Failure)
HX_DECLARE_CLASS1(haxe,StackItem)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES Failure_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Failure_obj OBJ_;
		Failure_obj();

	public:
		enum { _hx_ClassId = 0x2501772c };

		void __construct( ::Dynamic error,::Array< ::Dynamic> stack);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.Failure")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.Failure"); }
		static ::hx::ObjectPtr< Failure_obj > __new( ::Dynamic error,::Array< ::Dynamic> stack);
		static ::hx::ObjectPtr< Failure_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic error,::Array< ::Dynamic> stack);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Failure_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Failure",2a,98,4b,e4); }

		 ::Dynamic error;
		::Array< ::Dynamic> stack;
};

} // end namespace buddy

#endif /* INCLUDED_buddy_Failure */ 
