#ifndef INCLUDED_promhx_Promise
#define INCLUDED_promhx_Promise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace promhx{


class HXCPP_CLASS_ATTRIBUTES Promise_obj : public  ::promhx::base::AsyncBase_obj
{
	public:
		typedef  ::promhx::base::AsyncBase_obj super;
		typedef Promise_obj OBJ_;
		Promise_obj();

	public:
		enum { _hx_ClassId = 0x1a0bae67 };

		void __construct( ::promhx::Deferred d);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="promhx.Promise")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"promhx.Promise"); }
		static ::hx::ObjectPtr< Promise_obj > __new( ::promhx::Deferred d);
		static ::hx::ObjectPtr< Promise_obj > __alloc(::hx::Ctx *_hx_ctx, ::promhx::Deferred d);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Promise_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Promise",7b,f5,3a,c5); }

		static  ::promhx::Promise whenAll( ::Dynamic itb);
		static ::Dynamic whenAll_dyn();

		static  ::promhx::Promise promise( ::Dynamic _val);
		static ::Dynamic promise_dyn();

		bool _rejected;
		bool isRejected();
		::Dynamic isRejected_dyn();

		void reject( ::Dynamic e);
		::Dynamic reject_dyn();

		void handleResolve( ::Dynamic val);

		 ::promhx::base::AsyncBase then( ::Dynamic f);

		void unlink( ::promhx::base::AsyncBase to);

		void handleError( ::Dynamic error);

		 ::promhx::Promise pipe( ::Dynamic f);
		::Dynamic pipe_dyn();

		 ::promhx::Promise errorPipe( ::Dynamic f);
		::Dynamic errorPipe_dyn();

};

} // end namespace promhx

#endif /* INCLUDED_promhx_Promise */ 
