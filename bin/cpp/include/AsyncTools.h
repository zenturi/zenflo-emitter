#ifndef INCLUDED_AsyncTools
#define INCLUDED_AsyncTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AsyncTools)



class HXCPP_CLASS_ATTRIBUTES AsyncTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AsyncTools_obj OBJ_;
		AsyncTools_obj();

	public:
		enum { _hx_ClassId = 0x10107683 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="AsyncTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"AsyncTools"); }

		inline static ::hx::ObjectPtr< AsyncTools_obj > __new() {
			::hx::ObjectPtr< AsyncTools_obj > __this = new AsyncTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AsyncTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AsyncTools_obj *__this = (AsyncTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AsyncTools_obj), false, "AsyncTools"));
			*(void **)__this = AsyncTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AsyncTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AsyncTools",5f,4d,1c,b9); }

		static void aMapLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aMapLimit_dyn();

		static void aMap( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aMap_dyn();

		static void aMapSeries( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aMapSeries_dyn();

		static void aEachLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aEachLimit_dyn();

		static void aEach( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aEach_dyn();

		static void aEachSeries( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aEachSeries_dyn();

		static void aFilterLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aFilterLimit_dyn();

		static void aFilter( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aFilter_dyn();

		static void aFilterSeries( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aFilterSeries_dyn();

		static void aForEachOfMapLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done);
		static ::Dynamic aForEachOfMapLimit_dyn();

};


#endif /* INCLUDED_AsyncTools */ 
