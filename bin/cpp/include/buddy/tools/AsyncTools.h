#ifndef INCLUDED_buddy_tools_AsyncTools
#define INCLUDED_buddy_tools_AsyncTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(buddy,tools,AsyncTools)
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace buddy{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES AsyncTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AsyncTools_obj OBJ_;
		AsyncTools_obj();

	public:
		enum { _hx_ClassId = 0x1519d974 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="buddy.tools.AsyncTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"buddy.tools.AsyncTools"); }

		inline static ::hx::ObjectPtr< AsyncTools_obj > __new() {
			::hx::ObjectPtr< AsyncTools_obj > __this = new AsyncTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AsyncTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AsyncTools_obj *__this = (AsyncTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AsyncTools_obj), false, "buddy.tools.AsyncTools"));
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

		static  ::promhx::Promise iterateAsyncBool( ::Dynamic it, ::Dynamic action);
		static ::Dynamic iterateAsyncBool_dyn();

		static  ::promhx::Promise iterateAsync( ::Dynamic it, ::Dynamic action, ::Dynamic resolveWith);
		static ::Dynamic iterateAsync_dyn();

		static  ::promhx::Promise wait(int ms);
		static ::Dynamic wait_dyn();

		static void next( ::Dynamic it, ::Dynamic action, ::promhx::Deferred def, ::Dynamic resolveWith);
		static ::Dynamic next_dyn();

};

} // end namespace buddy
} // end namespace tools

#endif /* INCLUDED_buddy_tools_AsyncTools */ 
