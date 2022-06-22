#ifndef INCLUDED_TestCase
#define INCLUDED_TestCase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_BuddySuite
#include <buddy/BuddySuite.h>
#endif
HX_DECLARE_CLASS0(TestCase)
HX_DECLARE_CLASS1(buddy,BuddySuite)



class HXCPP_CLASS_ATTRIBUTES TestCase_obj : public  ::buddy::BuddySuite_obj
{
	public:
		typedef  ::buddy::BuddySuite_obj super;
		typedef TestCase_obj OBJ_;
		TestCase_obj();

	public:
		enum { _hx_ClassId = 0x7a2f5302 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TestCase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TestCase"); }
		static ::hx::ObjectPtr< TestCase_obj > __new();
		static ::hx::ObjectPtr< TestCase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TestCase_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TestCase",42,60,9e,1e); }

};


#endif /* INCLUDED_TestCase */ 
