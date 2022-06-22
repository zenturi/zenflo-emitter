#ifndef INCLUDED_zenflo_lib_EventEmitter
#define INCLUDED_zenflo_lib_EventEmitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(zenflo,lib,EventEmitter)

namespace zenflo{
namespace lib{


class HXCPP_CLASS_ATTRIBUTES EventEmitter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventEmitter_obj OBJ_;
		EventEmitter_obj();

	public:
		enum { _hx_ClassId = 0x176922b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zenflo.lib.EventEmitter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"zenflo.lib.EventEmitter"); }
		static ::hx::ObjectPtr< EventEmitter_obj > __new();
		static ::hx::ObjectPtr< EventEmitter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventEmitter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventEmitter",94,78,5d,17); }

		 ::haxe::ds::StringMap subjects;
		 ::haxe::ds::StringMap listeners;
		::String createName(::String name);
		::Dynamic createName_dyn();

		void emit(::String name,::cpp::VirtualArray data);
		::Dynamic emit_dyn();

		void on(::String name, ::Dynamic handler,::hx::Null< bool >  once);
		::Dynamic on_dyn();

		void once(::String name, ::Dynamic handler);
		::Dynamic once_dyn();

		void removeAllListeners();
		::Dynamic removeAllListeners_dyn();

		void removeListener(::String name, ::Dynamic handler);
		::Dynamic removeListener_dyn();

		bool hasSubject(::String name);
		::Dynamic hasSubject_dyn();

};

} // end namespace zenflo
} // end namespace lib

#endif /* INCLUDED_zenflo_lib_EventEmitter */ 
