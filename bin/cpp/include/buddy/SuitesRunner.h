#ifndef INCLUDED_buddy_SuitesRunner
#define INCLUDED_buddy_SuitesRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,BuddySuite)
HX_DECLARE_CLASS1(buddy,Step)
HX_DECLARE_CLASS1(buddy,Suite)
HX_DECLARE_CLASS1(buddy,SuitesRunner)
HX_DECLARE_CLASS1(buddy,TestFunc)
HX_DECLARE_CLASS1(buddy,TestSpec)
HX_DECLARE_CLASS1(buddy,TestSuite)
HX_DECLARE_CLASS2(buddy,reporting,Reporter)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace buddy{


class HXCPP_CLASS_ATTRIBUTES SuitesRunner_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SuitesRunner_obj OBJ_;
		SuitesRunner_obj();

	public:
		enum { _hx_ClassId = 0x6e0ecab1 };

		void __construct( ::Dynamic buddySuites,::Dynamic reporter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.SuitesRunner")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.SuitesRunner"); }
		static ::hx::ObjectPtr< SuitesRunner_obj > __new( ::Dynamic buddySuites,::Dynamic reporter);
		static ::hx::ObjectPtr< SuitesRunner_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic buddySuites,::Dynamic reporter);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SuitesRunner_obj();

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
		::String __ToString() const { return HX_("SuitesRunner",2b,6b,e0,59); }

		static  ::Dynamic currentTest;
		static Dynamic currentTest_dyn() { return currentTest;}
		static ::Array< ::Dynamic> posInfosToStack( ::Dynamic p);
		static ::Dynamic posInfosToStack_dyn();

		 ::Dynamic unrecoverableError;
		::Array< ::Dynamic> unrecoverableErrorStack;
		bool allTestsPassed;
		 ::Dynamic buddySuites;
		::Dynamic reporter;
		 ::promhx::Deferred runCompleted;
		bool includeMode;
		 ::Dynamic oldLog;
		Dynamic oldLog_dyn() { return oldLog;}
		 ::promhx::Promise run();
		::Dynamic run_dyn();

		void runDescribes( ::Dynamic cb);
		::Dynamic runDescribes_dyn();

		bool failed();
		::Dynamic failed_dyn();

		int statusCode();
		::Dynamic statusCode_dyn();

		void startRun();
		::Dynamic startRun_dyn();

		void startIncludeMode();
		::Dynamic startIncludeMode_dyn();

		 ::Dynamic mapTestSuite( ::buddy::BuddySuite buddySuite, ::buddy::TestSuite testSuite,::Array< ::Dynamic> beforeEachStack,::Array< ::Dynamic> afterEachStack, ::Dynamic done);
		::Dynamic mapTestSuite_dyn();

		void runTestFuncs( ::Dynamic funcs, ::Dynamic done);
		::Dynamic runTestFuncs_dyn();

		::cpp::VirtualArray flatten(::Array< ::Dynamic> arr);
		::Dynamic flatten_dyn();

		bool isSync( ::Dynamic funcs);
		::Dynamic isSync_dyn();

		 ::Dynamic mapTestSpec( ::buddy::BuddySuite buddySuite, ::buddy::TestSuite testSuite,::Array< ::Dynamic> beforeEachStack,::Array< ::Dynamic> afterEachStack, ::buddy::TestSpec testSpec, ::Dynamic done);
		::Dynamic mapTestSpec_dyn();

		void haveUnrecoverableError( ::Dynamic err);
		::Dynamic haveUnrecoverableError_dyn();

};

} // end namespace buddy

#endif /* INCLUDED_buddy_SuitesRunner */ 
