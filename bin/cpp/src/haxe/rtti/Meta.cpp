#include <hxcpp.h>

#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c18a37b9dae291ad_40_getType,"haxe.rtti.Meta","getType",0x674af2b6,"haxe.rtti.Meta.getType","/usr/local/lib/haxe/std/haxe/rtti/Meta.hx",40,0x880d6bcd)
HX_LOCAL_STACK_FRAME(_hx_pos_c18a37b9dae291ad_74_getMeta,"haxe.rtti.Meta","getMeta",0x629b4ac1,"haxe.rtti.Meta.getMeta","/usr/local/lib/haxe/std/haxe/rtti/Meta.hx",74,0x880d6bcd)
namespace haxe{
namespace rtti{

void Meta_obj::__construct() { }

Dynamic Meta_obj::__CreateEmpty() { return new Meta_obj; }

void *Meta_obj::_hx_vtable = 0;

Dynamic Meta_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Meta_obj > _hx_result = new Meta_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Meta_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b971542;
}

 ::Dynamic Meta_obj::getType( ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_c18a37b9dae291ad_40_getType)
HXLINE(  41)		 ::Dynamic meta = ::haxe::rtti::Meta_obj::getMeta(t);
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if (::hx::IsNotNull( meta )) {
HXLINE(  42)			_hx_tmp = ::hx::IsNull( meta->__Field(HX_("obj",f7,8f,54,00),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  42)			return  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
            		else {
HXLINE(  42)			return  ::Dynamic(meta->__Field(HX_("obj",f7,8f,54,00),::hx::paccDynamic));
            		}
HXDLIN(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getType,return )

 ::Dynamic Meta_obj::getMeta( ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_c18a37b9dae291ad_74_getMeta)
HXDLIN(  74)		return t->__Field(HX_("__meta__",45,04,85,b1),::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getMeta,return )


Meta_obj::Meta_obj()
{
}

bool Meta_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { outValue = getType_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getMeta") ) { outValue = getMeta_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Meta_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Meta_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Meta_obj::__mClass;

static ::String Meta_obj_sStaticFields[] = {
	HX_("getType",70,a2,8b,1f),
	HX_("getMeta",7b,fa,db,1a),
	::String(null())
};

void Meta_obj::__register()
{
	Meta_obj _hx_dummy;
	Meta_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.rtti.Meta",b4,fa,66,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Meta_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Meta_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Meta_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Meta_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Meta_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace rtti
