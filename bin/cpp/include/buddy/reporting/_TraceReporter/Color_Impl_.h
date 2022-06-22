#ifndef INCLUDED_buddy_reporting__TraceReporter_Color_Impl_
#define INCLUDED_buddy_reporting__TraceReporter_Color_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(buddy,reporting,_TraceReporter,Color_Impl_)

namespace buddy{
namespace reporting{
namespace _TraceReporter{


class HXCPP_CLASS_ATTRIBUTES Color_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Color_Impl__obj OBJ_;
		Color_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6d633bf4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="buddy.reporting._TraceReporter.Color_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"buddy.reporting._TraceReporter.Color_Impl_"); }

		inline static ::hx::ObjectPtr< Color_Impl__obj > __new() {
			::hx::ObjectPtr< Color_Impl__obj > __this = new Color_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Color_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Color_Impl__obj *__this = (Color_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Color_Impl__obj), false, "buddy.reporting._TraceReporter.Color_Impl_"));
			*(void **)__this = Color_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Color_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Color_Impl_",23,f2,4f,b6); }

		static void __boot();
		static int Default;
		static int Red;
		static int Yellow;
		static int Green;
		static int White;
		static ::String ansiCode(int this1);
		static ::Dynamic ansiCode_dyn();

};

} // end namespace buddy
} // end namespace reporting
} // end namespace _TraceReporter

#endif /* INCLUDED_buddy_reporting__TraceReporter_Color_Impl_ */ 
