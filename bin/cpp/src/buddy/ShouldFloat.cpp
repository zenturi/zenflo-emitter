#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldFloat
#include <buddy/ShouldFloat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_04a62d46c87fee23_188_new,"buddy.ShouldFloat","new",0x5a73de53,"buddy.ShouldFloat.new","buddy/Should.hx",188,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_04a62d46c87fee23_192_get_not,"buddy.ShouldFloat","get_not",0x30d2251d,"buddy.ShouldFloat.get_not","buddy/Should.hx",192,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_04a62d46c87fee23_198_beLessThan,"buddy.ShouldFloat","beLessThan",0xa73452aa,"buddy.ShouldFloat.beLessThan","buddy/Should.hx",198,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_04a62d46c87fee23_206_beLessThanOrEqualTo,"buddy.ShouldFloat","beLessThanOrEqualTo",0xf109d762,"buddy.ShouldFloat.beLessThanOrEqualTo","buddy/Should.hx",206,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_04a62d46c87fee23_214_beGreaterThan,"buddy.ShouldFloat","beGreaterThan",0xde65c02b,"buddy.ShouldFloat.beGreaterThan","buddy/Should.hx",214,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_04a62d46c87fee23_222_beGreaterThanOrEqualTo,"buddy.ShouldFloat","beGreaterThanOrEqualTo",0x664931c1,"buddy.ShouldFloat.beGreaterThanOrEqualTo","buddy/Should.hx",222,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_04a62d46c87fee23_229_beCloseTo,"buddy.ShouldFloat","beCloseTo",0x59cca603,"buddy.ShouldFloat.beCloseTo","buddy/Should.hx",229,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_04a62d46c87fee23_183_should,"buddy.ShouldFloat","should",0x18b39420,"buddy.ShouldFloat.should","buddy/Should.hx",183,0x08252ac2)
namespace buddy{

void ShouldFloat_obj::__construct( ::Dynamic value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_04a62d46c87fee23_188_new)
HXDLIN( 188)		super::__construct(value,inverse);
            	}

Dynamic ShouldFloat_obj::__CreateEmpty() { return new ShouldFloat_obj; }

void *ShouldFloat_obj::_hx_vtable = 0;

Dynamic ShouldFloat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldFloat_obj > _hx_result = new ShouldFloat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldFloat_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4fa58375) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4fa58375;
	} else {
		return inClassId==(int)0x5ef9144b;
	}
}

 ::buddy::ShouldFloat ShouldFloat_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_04a62d46c87fee23_192_get_not)
HXDLIN( 192)		return  ::buddy::ShouldFloat_obj::__alloc( HX_CTX ,this->value,!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldFloat_obj,get_not,return )

void ShouldFloat_obj::beLessThan(Float expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_04a62d46c87fee23_198_beLessThan)
HXDLIN( 198)		bool _hx_tmp = ::hx::IsLess( this->value,expected );
HXLINE( 199)		::String _hx_tmp1 = ((HX_("Expected less than ",20,72,ce,92) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 199)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 200)		::String _hx_tmp3 = ((HX_("Expected not less than ",0d,a8,c2,73) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 198)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldFloat_obj,beLessThan,(void))

void ShouldFloat_obj::beLessThanOrEqualTo(Float expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_04a62d46c87fee23_206_beLessThanOrEqualTo)
HXDLIN( 206)		bool _hx_tmp = ::hx::IsLessEq( this->value,expected );
HXLINE( 207)		::String _hx_tmp1 = ((HX_("Expected less than or equal to ",bc,5c,52,75) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 207)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 208)		::String _hx_tmp3 = ((HX_("Expected not less than or equal to ",29,42,76,61) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 206)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldFloat_obj,beLessThanOrEqualTo,(void))

void ShouldFloat_obj::beGreaterThan(Float expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_04a62d46c87fee23_214_beGreaterThan)
HXDLIN( 214)		bool _hx_tmp = ::hx::IsGreater( this->value,expected );
HXLINE( 215)		::String _hx_tmp1 = ((HX_("Expected greater than ",71,3a,2a,9e) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 215)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 216)		::String _hx_tmp3 = ((HX_("Expected not greater than ",a4,b6,ac,72) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 214)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldFloat_obj,beGreaterThan,(void))

void ShouldFloat_obj::beGreaterThanOrEqualTo(Float expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_04a62d46c87fee23_222_beGreaterThanOrEqualTo)
HXDLIN( 222)		bool _hx_tmp = ::hx::IsGreaterEq( this->value,expected );
HXLINE( 223)		::String _hx_tmp1 = ((HX_("Expected greater than or equal to ",8d,da,21,11) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 223)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 224)		::String _hx_tmp3 = ((HX_("Expected not greater than or equal to ",40,57,c7,c2) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 222)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldFloat_obj,beGreaterThanOrEqualTo,(void))

void ShouldFloat_obj::beCloseTo(Float expected, ::Dynamic __o_precision, ::Dynamic p){
            		 ::Dynamic precision = __o_precision;
            		if (::hx::IsNull(__o_precision)) precision = 2;
            	HX_STACKFRAME(&_hx_pos_04a62d46c87fee23_229_beCloseTo)
HXLINE( 232)		Float diff = ::Math_obj::abs((expected - ( (Float)(this->value) )));
HXLINE( 233)		Float threshold = (::Math_obj::pow(( (Float)(10) ),-(precision)) / ( (Float)(2) ));
HXLINE( 234)		bool expr = (diff < threshold);
HXLINE( 237)		::String _hx_tmp = ((HX_("Expected close to ",55,a2,fd,6c) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 237)		::String _hx_tmp1 = (_hx_tmp + this->quote(this->value));
HXLINE( 238)		::String _hx_tmp2 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to be close to ",d8,31,0f,d2));
HXLINE( 236)		this->test(expr,p,_hx_tmp1,(_hx_tmp2 + this->quote(expected)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShouldFloat_obj,beCloseTo,(void))

 ::buddy::ShouldFloat ShouldFloat_obj::should( ::Dynamic i){
            	HX_GC_STACKFRAME(&_hx_pos_04a62d46c87fee23_183_should)
HXDLIN( 183)		return  ::buddy::ShouldFloat_obj::__alloc( HX_CTX ,i,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldFloat_obj,should,return )


::hx::ObjectPtr< ShouldFloat_obj > ShouldFloat_obj::__new( ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldFloat_obj > __this = new ShouldFloat_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldFloat_obj > ShouldFloat_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	ShouldFloat_obj *__this = (ShouldFloat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldFloat_obj), true, "buddy.ShouldFloat"));
	*(void **)__this = ShouldFloat_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldFloat_obj::ShouldFloat_obj()
{
}

::hx::Val ShouldFloat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beCloseTo") ) { return ::hx::Val( beCloseTo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beLessThan") ) { return ::hx::Val( beLessThan_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"beGreaterThan") ) { return ::hx::Val( beGreaterThan_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"beLessThanOrEqualTo") ) { return ::hx::Val( beLessThanOrEqualTo_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"beGreaterThanOrEqualTo") ) { return ::hx::Val( beGreaterThanOrEqualTo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShouldFloat_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldFloat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldFloat_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldFloat_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldFloat_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	HX_("beLessThan",3d,6c,a6,a2),
	HX_("beLessThanOrEqualTo",6f,73,cf,a7),
	HX_("beGreaterThan",78,a4,b3,fd),
	HX_("beGreaterThanOrEqualTo",d4,db,84,9e),
	HX_("beCloseTo",d0,1f,c5,97),
	::String(null()) };

::hx::Class ShouldFloat_obj::__mClass;

static ::String ShouldFloat_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldFloat_obj::__register()
{
	ShouldFloat_obj _hx_dummy;
	ShouldFloat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldFloat",e1,b8,53,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldFloat_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldFloat_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldFloat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldFloat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldFloat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldFloat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
