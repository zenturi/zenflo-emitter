#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldDate
#include <buddy/ShouldDate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b9110d2021d6e36b_252_new,"buddy.ShouldDate","new",0xbf294bfb,"buddy.ShouldDate.new","buddy/Should.hx",252,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_256_get_not,"buddy.ShouldDate","get_not",0xfc9386c5,"buddy.ShouldDate.get_not","buddy/Should.hx",256,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_262_beOn,"buddy.ShouldDate","beOn",0x7d0a7dc7,"buddy.ShouldDate.beOn","buddy/Should.hx",262,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_270_beBefore,"buddy.ShouldDate","beBefore",0x57cbe527,"buddy.ShouldDate.beBefore","buddy/Should.hx",270,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_278_beAfter,"buddy.ShouldDate","beAfter",0xd3dda274,"buddy.ShouldDate.beAfter","buddy/Should.hx",278,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_285_beOnStr,"buddy.ShouldDate","beOnStr",0xe8aa792a,"buddy.ShouldDate.beOnStr","buddy/Should.hx",285,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_288_beBeforeStr,"buddy.ShouldDate","beBeforeStr",0xd0f7edca,"buddy.ShouldDate.beBeforeStr","buddy/Should.hx",288,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_291_beAfterStr,"buddy.ShouldDate","beAfterStr",0x95bfbe9d,"buddy.ShouldDate.beAfterStr","buddy/Should.hx",291,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9110d2021d6e36b_247_should,"buddy.ShouldDate","should",0x4e6c1f78,"buddy.ShouldDate.should","buddy/Should.hx",247,0x08252ac2)
namespace buddy{

void ShouldDate_obj::__construct( ::Date value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_b9110d2021d6e36b_252_new)
HXDLIN( 252)		super::__construct(value,inverse);
            	}

Dynamic ShouldDate_obj::__CreateEmpty() { return new ShouldDate_obj; }

void *ShouldDate_obj::_hx_vtable = 0;

Dynamic ShouldDate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldDate_obj > _hx_result = new ShouldDate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldDate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4fa58375) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4fa58375;
	} else {
		return inClassId==(int)0x7f7868c7;
	}
}

 ::buddy::ShouldDate ShouldDate_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_b9110d2021d6e36b_256_get_not)
HXDLIN( 256)		return  ::buddy::ShouldDate_obj::__alloc( HX_CTX ,( ( ::Date)(this->value) ),!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldDate_obj,get_not,return )

void ShouldDate_obj::beOn( ::Date expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b9110d2021d6e36b_262_beOn)
HXDLIN( 262)		Float _hx_tmp = ( ( ::Date)(this->value) )->getTime();
HXDLIN( 262)		bool _hx_tmp1 = (_hx_tmp == expected->getTime());
HXLINE( 263)		::String _hx_tmp2 = ((HX_("Expected date equal to ",ef,c3,88,c1) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 263)		::String _hx_tmp3 = (_hx_tmp2 + this->quote(this->value));
HXLINE( 262)		this->test(_hx_tmp1,p,_hx_tmp3,(HX_("Expected date not equal to ",a2,91,cf,3e) + this->quote(expected)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldDate_obj,beOn,(void))

void ShouldDate_obj::beBefore( ::Date expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b9110d2021d6e36b_270_beBefore)
HXDLIN( 270)		Float _hx_tmp = ( ( ::Date)(this->value) )->getTime();
HXDLIN( 270)		bool _hx_tmp1 = (_hx_tmp < expected->getTime());
HXLINE( 271)		::String _hx_tmp2 = ((HX_("Expected date before ",57,19,dd,a0) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 271)		::String _hx_tmp3 = (_hx_tmp2 + this->quote(this->value));
HXLINE( 272)		::String _hx_tmp4 = ((HX_("Expected date not before ",4a,04,1d,5e) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 270)		this->test(_hx_tmp1,p,_hx_tmp3,(_hx_tmp4 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldDate_obj,beBefore,(void))

void ShouldDate_obj::beAfter( ::Date expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b9110d2021d6e36b_278_beAfter)
HXDLIN( 278)		Float _hx_tmp = ( ( ::Date)(this->value) )->getTime();
HXDLIN( 278)		bool _hx_tmp1 = (_hx_tmp > expected->getTime());
HXLINE( 279)		::String _hx_tmp2 = ((HX_("Expected date after ",ae,d8,da,d8) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 279)		::String _hx_tmp3 = (_hx_tmp2 + this->quote(this->value));
HXLINE( 280)		::String _hx_tmp4 = ((HX_("Expected date not after ",1b,cd,d0,d2) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 278)		this->test(_hx_tmp1,p,_hx_tmp3,(_hx_tmp4 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldDate_obj,beAfter,(void))

void ShouldDate_obj::beOnStr(::String expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b9110d2021d6e36b_285_beOnStr)
HXDLIN( 285)		this->beOn(::Date_obj::fromString(expected),p);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldDate_obj,beOnStr,(void))

void ShouldDate_obj::beBeforeStr(::String expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b9110d2021d6e36b_288_beBeforeStr)
HXDLIN( 288)		this->beBefore(::Date_obj::fromString(expected),p);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldDate_obj,beBeforeStr,(void))

void ShouldDate_obj::beAfterStr(::String expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b9110d2021d6e36b_291_beAfterStr)
HXDLIN( 291)		this->beAfter(::Date_obj::fromString(expected),p);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldDate_obj,beAfterStr,(void))

 ::buddy::ShouldDate ShouldDate_obj::should( ::Date i){
            	HX_GC_STACKFRAME(&_hx_pos_b9110d2021d6e36b_247_should)
HXDLIN( 247)		return  ::buddy::ShouldDate_obj::__alloc( HX_CTX ,i,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldDate_obj,should,return )


::hx::ObjectPtr< ShouldDate_obj > ShouldDate_obj::__new( ::Date value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldDate_obj > __this = new ShouldDate_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldDate_obj > ShouldDate_obj::__alloc(::hx::Ctx *_hx_ctx, ::Date value,::hx::Null< bool >  __o_inverse) {
	ShouldDate_obj *__this = (ShouldDate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldDate_obj), true, "buddy.ShouldDate"));
	*(void **)__this = ShouldDate_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldDate_obj::ShouldDate_obj()
{
}

::hx::Val ShouldDate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"beOn") ) { return ::hx::Val( beOn_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
		if (HX_FIELD_EQ(inName,"beAfter") ) { return ::hx::Val( beAfter_dyn() ); }
		if (HX_FIELD_EQ(inName,"beOnStr") ) { return ::hx::Val( beOnStr_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"beBefore") ) { return ::hx::Val( beBefore_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beAfterStr") ) { return ::hx::Val( beAfterStr_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beBeforeStr") ) { return ::hx::Val( beBeforeStr_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShouldDate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldDate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldDate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldDate_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldDate_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	HX_("beOn",c2,d1,13,41),
	HX_("beBefore",a2,52,0e,1c),
	HX_("beAfter",59,bd,12,fe),
	HX_("beOnStr",0f,94,df,12),
	HX_("beBeforeStr",2f,df,84,ff),
	HX_("beAfterStr",d8,c0,94,c1),
	::String(null()) };

::hx::Class ShouldDate_obj::__mClass;

static ::String ShouldDate_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldDate_obj::__register()
{
	ShouldDate_obj _hx_dummy;
	ShouldDate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldDate",89,32,07,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldDate_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldDate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldDate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldDate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldDate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldDate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
