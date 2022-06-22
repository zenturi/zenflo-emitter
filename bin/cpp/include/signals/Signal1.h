#ifndef INCLUDED_signals_Signal1
#define INCLUDED_signals_Signal1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_signals_BaseSignal
#include <signals/BaseSignal.h>
#endif
HX_DECLARE_CLASS1(signals,BaseSignal)
HX_DECLARE_CLASS1(signals,Signal1)

namespace signals{


class HXCPP_CLASS_ATTRIBUTES Signal1_obj : public  ::signals::BaseSignal_obj
{
	public:
		typedef  ::signals::BaseSignal_obj super;
		typedef Signal1_obj OBJ_;
		Signal1_obj();

	public:
		enum { _hx_ClassId = 0x2f50063e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="signals.Signal1")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"signals.Signal1"); }
		static ::hx::ObjectPtr< Signal1_obj > __new();
		static ::hx::ObjectPtr< Signal1_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Signal1_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Signal1",a9,94,33,0e); }

		 ::Dynamic value;
		void dispatch( ::Dynamic value1);
		::Dynamic dispatch_dyn();

		void dispatchCallback( ::Dynamic callback);

		void dispatchCallback1( ::Dynamic callback);

		void dispatchCallback2( ::Dynamic callback);

		void dispatchCallback3( ::Dynamic callback);

};

} // end namespace signals

#endif /* INCLUDED_signals_Signal1 */ 
