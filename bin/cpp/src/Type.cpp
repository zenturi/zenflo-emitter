#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6ebc4c1d0351a436_36_getClass,"Type","getClass",0xc4e49bd6,"Type.getClass","/usr/local/lib/haxe/std/cpp/_std/Type.hx",36,0xb5f2d6e2)
HX_LOCAL_STACK_FRAME(_hx_pos_6ebc4c1d0351a436_61_getClassName,"Type","getClassName",0x8e66dd41,"Type.getClassName","/usr/local/lib/haxe/std/cpp/_std/Type.hx",61,0xb5f2d6e2)
HX_LOCAL_STACK_FRAME(_hx_pos_6ebc4c1d0351a436_158_enumParameters,"Type","enumParameters",0xf9e1b41f,"Type.enumParameters","/usr/local/lib/haxe/std/cpp/_std/Type.hx",158,0xb5f2d6e2)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c3514fe;
}

::hx::Class Type_obj::getClass( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_6ebc4c1d0351a436_36_getClass)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (::hx::IsNotNull( o )) {
HXLINE(  37)			_hx_tmp = !(::Reflect_obj::isObject(o));
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  38)			return null();
            		}
HXLINE(  39)		 ::Dynamic c = o->__GetClass();
HXLINE(  40)		::String _hx_switch_0 = ( (::String)(c->toString()) );
            		if (  (_hx_switch_0==HX_("Class",18,e8,85,db)) ){
HXLINE(  44)			return null();
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("__Anon",8c,1a,43,da)) ){
HXLINE(  42)			return null();
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  46)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

::String Type_obj::getClassName(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_6ebc4c1d0351a436_61_getClassName)
HXLINE(  62)		if (::hx::IsNull( c )) {
HXLINE(  63)			return null();
            		}
HXLINE(  64)		return c->mName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

::cpp::VirtualArray Type_obj::enumParameters( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_6ebc4c1d0351a436_158_enumParameters)
HXLINE( 159)		 hx::EnumBase value = ( ( hx::EnumBase)(e) );
HXLINE( 160)		return value->_hx_getParameters();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,enumParameters,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumParameters") ) { outValue = enumParameters_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_("getClass",c2,87,2f,a8),
	HX_("getClassName",2d,2f,94,eb),
	HX_("enumParameters",0b,59,78,fa),
	::String(null())
};

void Type_obj::__register()
{
	Type_obj _hx_dummy;
	Type_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Type",da,1e,e2,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Type_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

