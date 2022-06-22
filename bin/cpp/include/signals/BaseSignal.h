#ifndef INCLUDED_signals_BaseSignal
#define INCLUDED_signals_BaseSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(signals,BaseSignal)

namespace signals{


class HXCPP_CLASS_ATTRIBUTES BaseSignal_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BaseSignal_obj OBJ_;
		BaseSignal_obj();

	public:
		enum { _hx_ClassId = 0x0f646b04 };

		void __construct( ::Dynamic __o_fireOnAdd);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="signals.BaseSignal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"signals.BaseSignal"); }
		static ::hx::ObjectPtr< BaseSignal_obj > __new( ::Dynamic __o_fireOnAdd);
		static ::hx::ObjectPtr< BaseSignal_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_fireOnAdd);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseSignal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseSignal",79,71,67,83); }

		int numListeners;
		bool hasListeners;
		bool _fireOnAdd;
		 ::Dynamic currentCallback;
		::Array< ::Dynamic> callbacks;
		::Array< ::Dynamic> toTrigger;
		bool requiresSort;
		int valence;
		void sortPriority();
		::Dynamic sortPriority_dyn();

		void dispatchCallbacks();
		::Dynamic dispatchCallbacks_dyn();

		virtual void dispatchCallback( ::Dynamic callback);
		::Dynamic dispatchCallback_dyn();

		virtual void dispatchCallback1( ::Dynamic callback);
		::Dynamic dispatchCallback1_dyn();

		virtual void dispatchCallback2( ::Dynamic callback);
		::Dynamic dispatchCallback2_dyn();

		virtual void dispatchCallback3( ::Dynamic callback);
		::Dynamic dispatchCallback3_dyn();

		int sortCallbacks( ::Dynamic s1, ::Dynamic s2);
		::Dynamic sortCallbacks_dyn();

		int get_numListeners();
		::Dynamic get_numListeners_dyn();

		bool get_hasListeners();
		::Dynamic get_hasListeners_dyn();

		 ::signals::BaseSignal add( ::Dynamic callback, ::Dynamic fireOnce, ::Dynamic priority, ::Dynamic fireOnAdd);
		::Dynamic add_dyn();

		int getNumParams( ::Dynamic callback);
		::Dynamic getNumParams_dyn();

		 ::signals::BaseSignal priority(int value);
		::Dynamic priority_dyn();

		 ::signals::BaseSignal repeat(::hx::Null< int >  value);
		::Dynamic repeat_dyn();

		void fireOnAdd();
		::Dynamic fireOnAdd_dyn();

		void remove( ::Dynamic callback);
		::Dynamic remove_dyn();

};

} // end namespace signals

#endif /* INCLUDED_signals_BaseSignal */ 
