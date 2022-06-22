#ifndef INCLUDED_buddy_reporting_ConsoleReporter
#define INCLUDED_buddy_reporting_ConsoleReporter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_buddy_reporting_TraceReporter
#include <buddy/reporting/TraceReporter.h>
#endif
HX_DECLARE_CLASS1(buddy,Spec)
HX_DECLARE_CLASS2(buddy,reporting,ConsoleReporter)
HX_DECLARE_CLASS2(buddy,reporting,Reporter)
HX_DECLARE_CLASS2(buddy,reporting,TraceReporter)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace buddy{
namespace reporting{


class HXCPP_CLASS_ATTRIBUTES ConsoleReporter_obj : public  ::buddy::reporting::TraceReporter_obj
{
	public:
		typedef  ::buddy::reporting::TraceReporter_obj super;
		typedef ConsoleReporter_obj OBJ_;
		ConsoleReporter_obj();

	public:
		enum { _hx_ClassId = 0x54124f50 };

		void __construct(::hx::Null< bool >  __o_colors);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="buddy.reporting.ConsoleReporter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"buddy.reporting.ConsoleReporter"); }
		static ::hx::ObjectPtr< ConsoleReporter_obj > __new(::hx::Null< bool >  __o_colors);
		static ::hx::ObjectPtr< ConsoleReporter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_colors);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConsoleReporter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConsoleReporter",78,88,15,d9); }

		::String progressString;
		 ::promhx::Promise start();

		 ::promhx::Promise progress( ::buddy::Spec spec);

		 ::promhx::Promise done( ::Dynamic suites,bool status);

		void print(::String s);

		void println(::String s);

};

} // end namespace buddy
} // end namespace reporting

#endif /* INCLUDED_buddy_reporting_ConsoleReporter */ 
