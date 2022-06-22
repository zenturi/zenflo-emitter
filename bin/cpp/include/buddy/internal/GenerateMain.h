#ifndef INCLUDED_buddy_internal_GenerateMain
#define INCLUDED_buddy_internal_GenerateMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(buddy,internal,GenerateMain)

namespace buddy{
namespace internal{


class HXCPP_CLASS_ATTRIBUTES GenerateMain_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GenerateMain_obj OBJ_;
		GenerateMain_obj();

	public:
		enum { _hx_ClassId = 0x7f979f71 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="buddy.internal.GenerateMain")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"buddy.internal.GenerateMain"); }

		inline static ::hx::ObjectPtr< GenerateMain_obj > __new() {
			::hx::ObjectPtr< GenerateMain_obj > __this = new GenerateMain_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GenerateMain_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GenerateMain_obj *__this = (GenerateMain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenerateMain_obj), false, "buddy.internal.GenerateMain"));
			*(void **)__this = GenerateMain_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GenerateMain_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GenerateMain",2e,4e,3c,e3); }

		static bool testsRunning;
};

} // end namespace buddy
} // end namespace internal

#endif /* INCLUDED_buddy_internal_GenerateMain */ 
