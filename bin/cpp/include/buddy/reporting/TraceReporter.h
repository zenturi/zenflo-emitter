#ifndef INCLUDED_buddy_reporting_TraceReporter
#define INCLUDED_buddy_reporting_TraceReporter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_reporting_Reporter
#include <buddy/reporting/Reporter.h>
#endif
HX_DECLARE_CLASS1(buddy,Spec)
HX_DECLARE_CLASS2(buddy,reporting,Reporter)
HX_DECLARE_CLASS2(buddy,reporting,TraceReporter)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace buddy{
namespace reporting{


class HXCPP_CLASS_ATTRIBUTES TraceReporter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TraceReporter_obj OBJ_;
		TraceReporter_obj();

	public:
		enum { _hx_ClassId = 0x4460327e };

		void __construct(::hx::Null< bool >  __o_colors);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="buddy.reporting.TraceReporter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"buddy.reporting.TraceReporter"); }
		static ::hx::ObjectPtr< TraceReporter_obj > __new(::hx::Null< bool >  __o_colors);
		static ::hx::ObjectPtr< TraceReporter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_colors);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TraceReporter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TraceReporter",a6,51,ff,4b); }

		bool colors;
		virtual  ::promhx::Promise start();
		::Dynamic start_dyn();

		virtual  ::promhx::Promise progress( ::buddy::Spec spec);
		::Dynamic progress_dyn();

		virtual  ::promhx::Promise done( ::Dynamic suites,bool status);
		::Dynamic done_dyn();

		virtual void print(::String s);
		::Dynamic print_dyn();

		virtual void println(::String s);
		::Dynamic println_dyn();

		::String strCol(int color);
		::Dynamic strCol_dyn();

		 ::promhx::Promise resolveImmediately( ::Dynamic o);
		::Dynamic resolveImmediately_dyn();

};

} // end namespace buddy
} // end namespace reporting

#endif /* INCLUDED_buddy_reporting_TraceReporter */ 
