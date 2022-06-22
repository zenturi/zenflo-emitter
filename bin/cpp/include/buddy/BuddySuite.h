#ifndef INCLUDED_buddy_BuddySuite
#define INCLUDED_buddy_BuddySuite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,BuddySuite)
HX_DECLARE_CLASS1(buddy,TestFunc)
HX_DECLARE_CLASS1(buddy,TestSuite)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES BuddySuite_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BuddySuite_obj OBJ_;
		BuddySuite_obj();

	public:
		enum { _hx_ClassId = 0x7f5bf134 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.BuddySuite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.BuddySuite"); }
		static ::hx::ObjectPtr< BuddySuite_obj > __new();
		static ::hx::ObjectPtr< BuddySuite_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BuddySuite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BuddySuite",f2,b3,b5,0a); }

		static void __boot();
		static bool useDefaultTrace;
		 ::buddy::TestSuite suite;
		 ::buddy::TestSuite currentSuite;
		::Array< ::Dynamic> describeQueue;
		int timeoutMs;
		void describe(::String description, ::buddy::TestFunc spec,::hx::Null< bool >  _hasInclude);
		::Dynamic describe_dyn();

		void xdescribe(::String description, ::buddy::TestFunc spec,::hx::Null< bool >  _hasInclude);
		::Dynamic xdescribe_dyn();

		void before( ::buddy::TestFunc init);
		::Dynamic before_dyn();

		void after( ::buddy::TestFunc init);
		::Dynamic after_dyn();

		void beforeEach( ::buddy::TestFunc init);
		::Dynamic beforeEach_dyn();

		void beforeAll( ::buddy::TestFunc init);
		::Dynamic beforeAll_dyn();

		void afterEach( ::buddy::TestFunc init);
		::Dynamic afterEach_dyn();

		void afterAll( ::buddy::TestFunc init);
		::Dynamic afterAll_dyn();

		void it(::String desc, ::buddy::TestFunc spec,::hx::Null< bool >  _hasInclude, ::Dynamic pos,::hx::Null< Float >  time);
		::Dynamic it_dyn();

		void xit(::String desc, ::buddy::TestFunc spec,::hx::Null< bool >  _hasInclude, ::Dynamic pos,::hx::Null< Float >  time);
		::Dynamic xit_dyn();

		 ::Dynamic fail;
		Dynamic fail_dyn() { return fail;}
		 ::Dynamic pending;
		Dynamic pending_dyn() { return pending;}
};

} // end namespace buddy

#endif /* INCLUDED_buddy_BuddySuite */ 
