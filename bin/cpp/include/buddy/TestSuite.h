#ifndef INCLUDED_buddy_TestSuite
#define INCLUDED_buddy_TestSuite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,TestSuite)
HX_DECLARE_CLASS2(haxe,ds,List)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES TestSuite_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TestSuite_obj OBJ_;
		TestSuite_obj();

	public:
		enum { _hx_ClassId = 0x3e852da0 };

		void __construct(::String description);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.TestSuite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.TestSuite"); }
		static ::hx::ObjectPtr< TestSuite_obj > __new(::String description);
		static ::hx::ObjectPtr< TestSuite_obj > __alloc(::hx::Ctx *_hx_ctx,::String description);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TestSuite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TestSuite",e6,dc,8f,ef); }

		::String description;
		 ::haxe::ds::List beforeAll;
		 ::haxe::ds::List beforeEach;
		 ::haxe::ds::List specs;
		 ::haxe::ds::List afterEach;
		 ::haxe::ds::List afterAll;
};

} // end namespace buddy

#endif /* INCLUDED_buddy_TestSuite */ 
