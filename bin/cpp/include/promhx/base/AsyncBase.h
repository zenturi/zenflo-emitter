#ifndef INCLUDED_promhx_base_AsyncBase
#define INCLUDED_promhx_base_AsyncBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace promhx{
namespace base{


class HXCPP_CLASS_ATTRIBUTES AsyncBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AsyncBase_obj OBJ_;
		AsyncBase_obj();

	public:
		enum { _hx_ClassId = 0x12b0cfec };

		void __construct( ::promhx::Deferred d);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="promhx.base.AsyncBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"promhx.base.AsyncBase"); }
		static ::hx::ObjectPtr< AsyncBase_obj > __new( ::promhx::Deferred d);
		static ::hx::ObjectPtr< AsyncBase_obj > __alloc(::hx::Ctx *_hx_ctx, ::promhx::Deferred d);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AsyncBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AsyncBase",4d,41,71,10); }

		static void link( ::promhx::base::AsyncBase current, ::promhx::base::AsyncBase next, ::Dynamic f);
		static ::Dynamic link_dyn();

		static void immediateLinkUpdate( ::promhx::base::AsyncBase current, ::promhx::base::AsyncBase next, ::Dynamic f);
		static ::Dynamic immediateLinkUpdate_dyn();

		static void linkAll( ::Dynamic all, ::promhx::base::AsyncBase next);
		static ::Dynamic linkAll_dyn();

		static void pipeLink( ::promhx::base::AsyncBase current, ::promhx::base::AsyncBase ret, ::Dynamic f);
		static ::Dynamic pipeLink_dyn();

		static bool allResolved( ::Dynamic as);
		static ::Dynamic allResolved_dyn();

		static bool allFulfilled( ::Dynamic as);
		static ::Dynamic allFulfilled_dyn();

		 ::Dynamic _val;
		bool _resolved;
		bool _fulfilled;
		bool _pending;
		::Array< ::Dynamic> _update;
		::Array< ::Dynamic> _error;
		bool _errored;
		 ::Dynamic _errorMap;
		Dynamic _errorMap_dyn() { return _errorMap;}
		 ::Dynamic _errorVal;
		bool _errorPending;
		 ::promhx::base::AsyncBase catchError( ::Dynamic f);
		::Dynamic catchError_dyn();

		 ::promhx::base::AsyncBase errorThen( ::Dynamic f);
		::Dynamic errorThen_dyn();

		bool isResolved();
		::Dynamic isResolved_dyn();

		bool isErrored();
		::Dynamic isErrored_dyn();

		bool isErrorHandled();
		::Dynamic isErrorHandled_dyn();

		bool isErrorPending();
		::Dynamic isErrorPending_dyn();

		bool isFulfilled();
		::Dynamic isFulfilled_dyn();

		bool isPending();
		::Dynamic isPending_dyn();

		virtual void handleResolve( ::Dynamic val);
		::Dynamic handleResolve_dyn();

		void _resolve( ::Dynamic val);
		::Dynamic _resolve_dyn();

		virtual void handleError( ::Dynamic error);
		::Dynamic handleError_dyn();

		void _handleError( ::Dynamic error);
		::Dynamic _handleError_dyn();

		virtual  ::promhx::base::AsyncBase then( ::Dynamic f);
		::Dynamic then_dyn();

		virtual void unlink( ::promhx::base::AsyncBase to);
		::Dynamic unlink_dyn();

		bool isLinked( ::promhx::base::AsyncBase to);
		::Dynamic isLinked_dyn();

};

} // end namespace promhx
} // end namespace base

#endif /* INCLUDED_promhx_base_AsyncBase */ 
