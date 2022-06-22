#ifndef INCLUDED_buddy_tests_SelfTest
#define INCLUDED_buddy_tests_SelfTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,Spec)
HX_DECLARE_CLASS1(buddy,SpecStatus)
HX_DECLARE_CLASS1(buddy,Suite)
HX_DECLARE_CLASS2(buddy,tests,SelfTest)

namespace buddy{
namespace tests{


class HXCPP_CLASS_ATTRIBUTES SelfTest_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SelfTest_obj OBJ_;
		SelfTest_obj();

	public:
		enum { _hx_ClassId = 0x25110039 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="buddy.tests.SelfTest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"buddy.tests.SelfTest"); }

		inline static ::hx::ObjectPtr< SelfTest_obj > __new() {
			::hx::ObjectPtr< SelfTest_obj > __this = new SelfTest_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SelfTest_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SelfTest_obj *__this = (SelfTest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelfTest_obj), false, "buddy.tests.SelfTest"));
			*(void **)__this = SelfTest_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelfTest_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SelfTest",1e,f2,8f,14); }

		static void __boot();
		static  ::buddy::Spec lastSpec;
		static  ::buddy::Suite lastSuite;
		static void passLastSpecIf(bool expr,::String failReason);
		static ::Dynamic passLastSpecIf_dyn();

		static void setLastSpec( ::buddy::SpecStatus status);
		static ::Dynamic setLastSpec_dyn();

};

} // end namespace buddy
} // end namespace tests

#endif /* INCLUDED_buddy_tests_SelfTest */ 
