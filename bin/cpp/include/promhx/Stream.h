#ifndef INCLUDED_promhx_Stream
#define INCLUDED_promhx_Stream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS1(promhx,Stream)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace promhx{


class HXCPP_CLASS_ATTRIBUTES Stream_obj : public  ::promhx::base::AsyncBase_obj
{
	public:
		typedef  ::promhx::base::AsyncBase_obj super;
		typedef Stream_obj OBJ_;
		Stream_obj();

	public:
		enum { _hx_ClassId = 0x24a248d0 };

		void __construct( ::promhx::Deferred d);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="promhx.Stream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"promhx.Stream"); }
		static ::hx::ObjectPtr< Stream_obj > __new( ::promhx::Deferred d);
		static ::hx::ObjectPtr< Stream_obj > __alloc(::hx::Ctx *_hx_ctx, ::promhx::Deferred d);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stream",a0,88,c1,45); }

		static  ::promhx::Stream foreach( ::Dynamic itb);
		static ::Dynamic foreach_dyn();

		static  ::promhx::Stream wheneverAll( ::Dynamic itb);
		static ::Dynamic wheneverAll_dyn();

		static  ::promhx::Stream concatAll( ::Dynamic itb);
		static ::Dynamic concatAll_dyn();

		static  ::promhx::Stream mergeAll( ::Dynamic itb);
		static ::Dynamic mergeAll_dyn();

		static  ::promhx::Stream stream( ::Dynamic _val);
		static ::Dynamic stream_dyn();

		 ::promhx::Deferred deferred;
		bool _pause;
		bool _end;
		 ::promhx::Promise _end_promise;
		 ::promhx::base::AsyncBase then( ::Dynamic f);

		bool detachStream( ::promhx::Stream str);
		::Dynamic detachStream_dyn();

		 ::promhx::Promise first();
		::Dynamic first_dyn();

		void handleResolve( ::Dynamic val);

		void pause( ::Dynamic set);
		::Dynamic pause_dyn();

		 ::promhx::Stream pipe( ::Dynamic f);
		::Dynamic pipe_dyn();

		 ::promhx::Stream errorPipe( ::Dynamic f);
		::Dynamic errorPipe_dyn();

		void handleEnd();
		::Dynamic handleEnd_dyn();

		 ::promhx::Stream end();
		::Dynamic end_dyn();

		 ::promhx::Promise endThen( ::Dynamic f);
		::Dynamic endThen_dyn();

		 ::promhx::Stream filter( ::Dynamic f);
		::Dynamic filter_dyn();

		 ::promhx::Stream concat( ::promhx::Stream s);
		::Dynamic concat_dyn();

		 ::promhx::Stream merge( ::promhx::Stream s);
		::Dynamic merge_dyn();

};

} // end namespace promhx

#endif /* INCLUDED_promhx_Stream */ 
