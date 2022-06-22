#ifndef INCLUDED_TestEvent
#define INCLUDED_TestEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_Buddy
#include <buddy/Buddy.h>
#endif
HX_DECLARE_CLASS0(TestEvent)
HX_DECLARE_CLASS1(buddy,Buddy)



class HXCPP_CLASS_ATTRIBUTES TestEvent_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TestEvent_obj OBJ_;
		TestEvent_obj();

	public:
		enum { _hx_ClassId = 0x52a42da4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="TestEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"TestEvent"); }

		inline static ::hx::ObjectPtr< TestEvent_obj > __new() {
			::hx::ObjectPtr< TestEvent_obj > __this = new TestEvent_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TestEvent_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TestEvent_obj *__this = (TestEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TestEvent_obj), false, "TestEvent"));
			*(void **)__this = TestEvent_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TestEvent_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TestEvent",48,e6,99,e0); }

		static void main();
		static ::Dynamic main_dyn();

};


#endif /* INCLUDED_TestEvent */ 
