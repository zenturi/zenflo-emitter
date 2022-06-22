#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7b3988d9963d5a21_30_hasField,"Reflect","hasField",0xef8c2571,"Reflect.hasField","/usr/local/lib/haxe/std/cpp/_std/Reflect.hx",30,0x1c2422c3)
HX_LOCAL_STACK_FRAME(_hx_pos_7b3988d9963d5a21_49_setProperty,"Reflect","setProperty",0x6d99a846,"Reflect.setProperty","/usr/local/lib/haxe/std/cpp/_std/Reflect.hx",49,0x1c2422c3)
HX_LOCAL_STACK_FRAME(_hx_pos_7b3988d9963d5a21_93_isObject,"Reflect","isObject",0xd04960ba,"Reflect.isObject","/usr/local/lib/haxe/std/cpp/_std/Reflect.hx",93,0x1c2422c3)

void Reflect_obj::__construct() { }

Dynamic Reflect_obj::__CreateEmpty() { return new Reflect_obj; }

void *Reflect_obj::_hx_vtable = 0;

Dynamic Reflect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reflect_obj > _hx_result = new Reflect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Reflect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x769a515d;
}

bool Reflect_obj::hasField( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_7b3988d9963d5a21_30_hasField)
HXDLIN(  30)		return (::hx::IsNotNull( o ) && ( (bool)(o->__HasField(field)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

void Reflect_obj::setProperty( ::Dynamic o,::String field, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_7b3988d9963d5a21_49_setProperty)
HXDLIN(  49)		if (::hx::IsNotNull( o )) {
HXLINE(  50)			o->__SetField(field,value,::hx::paccAlways);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setProperty,(void))

bool Reflect_obj::isObject( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_7b3988d9963d5a21_93_isObject)
HXLINE(  94)		if (::hx::IsNull( v )) {
HXLINE(  95)			return false;
            		}
HXLINE(  96)		int t = ( (int)(v->__GetType()) );
HXLINE(  97)		return ((((t == 4) || (t == 8)) || (t == 3)) || (t == 5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )


Reflect_obj::Reflect_obj()
{
}

bool Reflect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { outValue = hasField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isObject") ) { outValue = isObject_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProperty") ) { outValue = setProperty_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Reflect_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Reflect_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Reflect_obj::__mClass;

static ::String Reflect_obj_sStaticFields[] = {
	HX_("hasField",00,df,eb,8c),
	HX_("setProperty",17,12,99,dc),
	HX_("isObject",49,1a,a9,6d),
	::String(null())
};

void Reflect_obj::__register()
{
	Reflect_obj _hx_dummy;
	Reflect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Reflect",1d,ac,7a,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reflect_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reflect_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Reflect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reflect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reflect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

