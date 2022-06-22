#ifndef INCLUDED_promhx_base_EventLoop
#define INCLUDED_promhx_base_EventLoop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS2(promhx,base,EventLoop)

namespace promhx{
namespace base{


class HXCPP_CLASS_ATTRIBUTES EventLoop_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventLoop_obj OBJ_;
		EventLoop_obj();

	public:
		enum { _hx_ClassId = 0x0caee939 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="promhx.base.EventLoop")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"promhx.base.EventLoop"); }

		inline static ::hx::ObjectPtr< EventLoop_obj > __new() {
			::hx::ObjectPtr< EventLoop_obj > __this = new EventLoop_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EventLoop_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EventLoop_obj *__this = (EventLoop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventLoop_obj), false, "promhx.base.EventLoop"));
			*(void **)__this = EventLoop_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventLoop_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventLoop",7e,8f,97,98); }

		static void __boot();
		static  ::haxe::ds::List queue;
		static  ::Dynamic nextLoop;
		static Dynamic nextLoop_dyn() { return nextLoop;}
		static void enqueue( ::Dynamic eqf);
		static ::Dynamic enqueue_dyn();

		static  ::Dynamic set_nextLoop( ::Dynamic f);
		static ::Dynamic set_nextLoop_dyn();

		static bool queueEmpty();
		static ::Dynamic queueEmpty_dyn();

		static bool finish(::hx::Null< int >  max_iterations);
		static ::Dynamic finish_dyn();

		static void clear();
		static ::Dynamic clear_dyn();

		static void f();
		static ::Dynamic f_dyn();

		static void continueOnNextLoop();
		static ::Dynamic continueOnNextLoop_dyn();

};

} // end namespace promhx
} // end namespace base

#endif /* INCLUDED_promhx_base_EventLoop */ 
