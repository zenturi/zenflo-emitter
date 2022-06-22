#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldEnum
#include <buddy/ShouldEnum.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82afcebac161748d_48_new,"buddy.ShouldEnum","new",0x1682c64e,"buddy.ShouldEnum.new","buddy/Should.hx",48,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82afcebac161748d_52_get_not,"buddy.ShouldEnum","get_not",0x21742698,"buddy.ShouldEnum.get_not","buddy/Should.hx",52,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82afcebac161748d_58_be,"buddy.ShouldEnum","be",0xf49ef795,"buddy.ShouldEnum.be","buddy/Should.hx",58,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82afcebac161748d_63_equal,"buddy.ShouldEnum","equal",0xaacd9d22,"buddy.ShouldEnum.equal","buddy/Should.hx",63,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82afcebac161748d_43_should,"buddy.ShouldEnum","should",0x2f979b05,"buddy.ShouldEnum.should","buddy/Should.hx",43,0x08252ac2)
namespace buddy{

void ShouldEnum_obj::__construct( ::Dynamic value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_82afcebac161748d_48_new)
HXDLIN(  48)		super::__construct(value,inverse);
            	}

Dynamic ShouldEnum_obj::__CreateEmpty() { return new ShouldEnum_obj; }

void *ShouldEnum_obj::_hx_vtable = 0;

Dynamic ShouldEnum_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldEnum_obj > _hx_result = new ShouldEnum_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldEnum_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4fa58375) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4fa58375;
	} else {
		return inClassId==(int)0x7f7bcbb6;
	}
}

 ::buddy::ShouldEnum ShouldEnum_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_82afcebac161748d_52_get_not)
HXDLIN(  52)		return  ::buddy::ShouldEnum_obj::__alloc( HX_CTX ,this->value,!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldEnum_obj,get_not,return )

void ShouldEnum_obj::be( ::Dynamic _tmp_expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_82afcebac161748d_58_be)
HXDLIN(  58)		 ::Dynamic expected = _tmp_expected;
HXDLIN(  58)		this->equal(expected,p);
            	}


void ShouldEnum_obj::equal( ::Dynamic expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_82afcebac161748d_63_equal)
HXDLIN(  63)		bool _hx_tmp = __hxcpp_enum_eq(this->value,expected);
HXLINE(  64)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN(  64)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE(  63)		this->test(_hx_tmp,p,_hx_tmp2,((HX_("Didn't expect ",a3,d2,1a,8a) + this->quote(this->value)) + HX_(" but was equal to that",ca,85,b5,ee)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldEnum_obj,equal,(void))

 ::buddy::ShouldEnum ShouldEnum_obj::should( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_82afcebac161748d_43_should)
HXDLIN(  43)		return  ::buddy::ShouldEnum_obj::__alloc( HX_CTX ,e,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldEnum_obj,should,return )


::hx::ObjectPtr< ShouldEnum_obj > ShouldEnum_obj::__new( ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldEnum_obj > __this = new ShouldEnum_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldEnum_obj > ShouldEnum_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	ShouldEnum_obj *__this = (ShouldEnum_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldEnum_obj), true, "buddy.ShouldEnum"));
	*(void **)__this = ShouldEnum_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldEnum_obj::ShouldEnum_obj()
{
}

::hx::Val ShouldEnum_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"be") ) { return ::hx::Val( be_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { return ::hx::Val( equal_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShouldEnum_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldEnum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldEnum_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldEnum_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldEnum_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	HX_("be",c3,55,00,00),
	HX_("equal",b4,cf,82,72),
	::String(null()) };

::hx::Class ShouldEnum_obj::__mClass;

static ::String ShouldEnum_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldEnum_obj::__register()
{
	ShouldEnum_obj _hx_dummy;
	ShouldEnum_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldEnum",5c,47,ba,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldEnum_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldEnum_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldEnum_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldEnum_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldEnum_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldEnum_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
