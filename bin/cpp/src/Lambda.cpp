#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_45_array,"Lambda","array",0x9c8b0512,"Lambda.array","/usr/local/lib/haxe/std/Lambda.hx",45,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_125_exists,"Lambda","exists",0x65091043,"Lambda.exists","/usr/local/lib/haxe/std/Lambda.hx",125,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_157_iter,"Lambda","iter",0x9d877fbf,"Lambda.iter","/usr/local/lib/haxe/std/Lambda.hx",157,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_168_filter,"Lambda","filter",0x2a5e121f,"Lambda.filter","/usr/local/lib/haxe/std/Lambda.hx",168,0xf61dfe9a)
HX_LOCAL_STACK_FRAME(_hx_pos_a2b9229e56451ffa_225_empty,"Lambda","empty",0xe6d5d206,"Lambda.empty","/usr/local/lib/haxe/std/Lambda.hx",225,0xf61dfe9a)

void Lambda_obj::__construct() { }

Dynamic Lambda_obj::__CreateEmpty() { return new Lambda_obj; }

void *Lambda_obj::_hx_vtable = 0;

Dynamic Lambda_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lambda_obj > _hx_result = new Lambda_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lambda_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cec6e4b;
}

::cpp::VirtualArray Lambda_obj::array( ::Dynamic it){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_45_array)
HXLINE(  46)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE(  47)		{
HXLINE(  47)			 ::Dynamic i = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  47)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  47)				 ::Dynamic i1 = i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  48)				a->push(i1);
            			}
            		}
HXLINE(  49)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,array,return )

bool Lambda_obj::exists( ::Dynamic it, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_125_exists)
HXLINE( 126)		{
HXLINE( 126)			 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 126)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 126)				 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 127)				if (( (bool)(f(x1)) )) {
HXLINE( 128)					return true;
            				}
            			}
            		}
HXLINE( 129)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,exists,return )

void Lambda_obj::iter( ::Dynamic it, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_157_iter)
HXDLIN( 157)		 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 157)		while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 157)			 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 158)			f(x1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,iter,(void))

::cpp::VirtualArray Lambda_obj::filter( ::Dynamic it, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_168_filter)
HXDLIN( 168)		::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 168)		{
HXDLIN( 168)			 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 168)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 168)				 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 168)				if (( (bool)(f(x1)) )) {
HXDLIN( 168)					_g->push(x1);
            				}
            			}
            		}
HXDLIN( 168)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,filter,return )

bool Lambda_obj::empty( ::Dynamic it){
            	HX_STACKFRAME(&_hx_pos_a2b9229e56451ffa_225_empty)
HXDLIN( 225)		return !(( (bool)(it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,empty,return )


Lambda_obj::Lambda_obj()
{
}

bool Lambda_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = empty_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"filter") ) { outValue = filter_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lambda_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Lambda_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Lambda_obj::__mClass;

static ::String Lambda_obj_sStaticFields[] = {
	HX_("array",99,6d,8f,25),
	HX_("exists",dc,1d,e0,bf),
	HX_("iter",18,c5,bf,45),
	HX_("filter",b8,1f,35,85),
	HX_("empty",8d,3a,da,6f),
	::String(null())
};

void Lambda_obj::__register()
{
	Lambda_obj _hx_dummy;
	Lambda_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Lambda",27,a7,54,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lambda_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lambda_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lambda_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lambda_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lambda_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

