#ifndef INCLUDED_promhx_Deferred
#define INCLUDED_promhx_Deferred

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS1(promhx,PublicStream)
HX_DECLARE_CLASS1(promhx,Stream)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace promhx{


class HXCPP_CLASS_ATTRIBUTES Deferred_obj : public  ::promhx::base::AsyncBase_obj
{
	public:
		typedef  ::promhx::base::AsyncBase_obj super;
		typedef Deferred_obj OBJ_;
		Deferred_obj();

	public:
		enum { _hx_ClassId = 0x7f9f1bf3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="promhx.Deferred")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"promhx.Deferred"); }
		static ::hx::ObjectPtr< Deferred_obj > __new();
		static ::hx::ObjectPtr< Deferred_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Deferred_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Deferred",3f,bb,ee,d4); }

		void resolve( ::Dynamic val);
		::Dynamic resolve_dyn();

		void throwError( ::Dynamic e);
		::Dynamic throwError_dyn();

		 ::promhx::Promise promise();
		::Dynamic promise_dyn();

		 ::promhx::Stream stream();
		::Dynamic stream_dyn();

		 ::promhx::PublicStream publicStream();
		::Dynamic publicStream_dyn();

};

} // end namespace promhx

#endif /* INCLUDED_promhx_Deferred */ 
