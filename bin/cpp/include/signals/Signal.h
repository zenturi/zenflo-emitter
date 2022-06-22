#ifndef INCLUDED_signals_Signal
#define INCLUDED_signals_Signal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_signals_BaseSignal
#include <signals/BaseSignal.h>
#endif
HX_DECLARE_CLASS1(signals,BaseSignal)
HX_DECLARE_CLASS1(signals,Signal)

namespace signals{


class HXCPP_CLASS_ATTRIBUTES Signal_obj : public  ::signals::BaseSignal_obj
{
	public:
		typedef  ::signals::BaseSignal_obj super;
		typedef Signal_obj OBJ_;
		Signal_obj();

	public:
		enum { _hx_ClassId = 0x128c89af };

		void __construct( ::Dynamic __o_fireOnAdd);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="signals.Signal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"signals.Signal"); }
		static ::hx::ObjectPtr< Signal_obj > __new( ::Dynamic __o_fireOnAdd);
		static ::hx::ObjectPtr< Signal_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_fireOnAdd);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Signal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Signal",88,a2,1a,e9); }

		void dispatch();
		::Dynamic dispatch_dyn();

		void dispatchCallback( ::Dynamic callback);

		void dispatchCallback1( ::Dynamic callback);

		void dispatchCallback2( ::Dynamic callback);

		void dispatchCallback3( ::Dynamic callback);

};

} // end namespace signals

#endif /* INCLUDED_signals_Signal */ 
