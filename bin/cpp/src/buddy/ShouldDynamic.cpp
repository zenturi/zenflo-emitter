#include <hxcpp.h>

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldDynamic
#include <buddy/ShouldDynamic.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f0db5b9b031dcfe3_28_new,"buddy.ShouldDynamic","new",0xaf2ea0f6,"buddy.ShouldDynamic.new","buddy/Should.hx",28,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_f0db5b9b031dcfe3_36_get_not,"buddy.ShouldDynamic","get_not",0x01667540,"buddy.ShouldDynamic.get_not","buddy/Should.hx",36,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_f0db5b9b031dcfe3_32_should,"buddy.ShouldDynamic","should",0x9b5bd95d,"buddy.ShouldDynamic.should","buddy/Should.hx",32,0x08252ac2)
namespace buddy{

void ShouldDynamic_obj::__construct( ::Dynamic value, ::Dynamic inverse){
            	HX_STACKFRAME(&_hx_pos_f0db5b9b031dcfe3_28_new)
HXDLIN(  28)		super::__construct(value,inverse);
            	}

Dynamic ShouldDynamic_obj::__CreateEmpty() { return new ShouldDynamic_obj; }

void *ShouldDynamic_obj::_hx_vtable = 0;

Dynamic ShouldDynamic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldDynamic_obj > _hx_result = new ShouldDynamic_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldDynamic_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02ff6126) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02ff6126;
	} else {
		return inClassId==(int)0x4fa58375;
	}
}

 ::buddy::ShouldDynamic ShouldDynamic_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_f0db5b9b031dcfe3_36_get_not)
HXDLIN(  36)		return  ::buddy::ShouldDynamic_obj::__alloc( HX_CTX ,this->value,!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldDynamic_obj,get_not,return )

 ::buddy::ShouldDynamic ShouldDynamic_obj::should( ::Dynamic d){
            	HX_GC_STACKFRAME(&_hx_pos_f0db5b9b031dcfe3_32_should)
HXDLIN(  32)		return  ::buddy::ShouldDynamic_obj::__alloc( HX_CTX ,d,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldDynamic_obj,should,return )


::hx::ObjectPtr< ShouldDynamic_obj > ShouldDynamic_obj::__new( ::Dynamic value, ::Dynamic inverse) {
	::hx::ObjectPtr< ShouldDynamic_obj > __this = new ShouldDynamic_obj();
	__this->__construct(value,inverse);
	return __this;
}

::hx::ObjectPtr< ShouldDynamic_obj > ShouldDynamic_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value, ::Dynamic inverse) {
	ShouldDynamic_obj *__this = (ShouldDynamic_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldDynamic_obj), true, "buddy.ShouldDynamic"));
	*(void **)__this = ShouldDynamic_obj::_hx_vtable;
	__this->__construct(value,inverse);
	return __this;
}

ShouldDynamic_obj::ShouldDynamic_obj()
{
}

::hx::Val ShouldDynamic_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShouldDynamic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldDynamic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldDynamic_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldDynamic_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldDynamic_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	::String(null()) };

::hx::Class ShouldDynamic_obj::__mClass;

static ::String ShouldDynamic_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldDynamic_obj::__register()
{
	ShouldDynamic_obj _hx_dummy;
	ShouldDynamic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldDynamic",04,ae,69,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldDynamic_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldDynamic_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldDynamic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldDynamic_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldDynamic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldDynamic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
