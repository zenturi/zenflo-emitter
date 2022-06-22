#ifndef INCLUDED_haxe_rtti_Meta
#define INCLUDED_haxe_rtti_Meta

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,rtti,Meta)

namespace haxe{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES Meta_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Meta_obj OBJ_;
		Meta_obj();

	public:
		enum { _hx_ClassId = 0x0b971542 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.rtti.Meta")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.rtti.Meta"); }

		inline static ::hx::ObjectPtr< Meta_obj > __new() {
			::hx::ObjectPtr< Meta_obj > __this = new Meta_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Meta_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Meta_obj *__this = (Meta_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Meta_obj), false, "haxe.rtti.Meta"));
			*(void **)__this = Meta_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Meta_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Meta",e5,76,32,33); }

		static  ::Dynamic getType( ::Dynamic t);
		static ::Dynamic getType_dyn();

		static  ::Dynamic getMeta( ::Dynamic t);
		static ::Dynamic getMeta_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_Meta */ 
