#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldInt64
#include <buddy/ShouldInt64.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82664ef785c8b624_129_new,"buddy.ShouldInt64","new",0x0a9aab24,"buddy.ShouldInt64.new","buddy/Should.hx",129,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82664ef785c8b624_133_get_not,"buddy.ShouldInt64","get_not",0x010e2e6e,"buddy.ShouldInt64.get_not","buddy/Should.hx",133,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82664ef785c8b624_138_be,"buddy.ShouldInt64","be",0xedadff7f,"buddy.ShouldInt64.be","buddy/Should.hx",138,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82664ef785c8b624_148_beLessThan,"buddy.ShouldInt64","beLessThan",0xccee31f9,"buddy.ShouldInt64.beLessThan","buddy/Should.hx",148,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82664ef785c8b624_156_beLessThanOrEqualTo,"buddy.ShouldInt64","beLessThanOrEqualTo",0x01971633,"buddy.ShouldInt64.beLessThanOrEqualTo","buddy/Should.hx",156,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82664ef785c8b624_164_beGreaterThan,"buddy.ShouldInt64","beGreaterThan",0xed191c3c,"buddy.ShouldInt64.beGreaterThan","buddy/Should.hx",164,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82664ef785c8b624_172_beGreaterThanOrEqualTo,"buddy.ShouldInt64","beGreaterThanOrEqualTo",0xf13c4b90,"buddy.ShouldInt64.beGreaterThanOrEqualTo","buddy/Should.hx",172,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_82664ef785c8b624_124_should,"buddy.ShouldInt64","should",0xe5f9dfef,"buddy.ShouldInt64.should","buddy/Should.hx",124,0x08252ac2)
namespace buddy{

void ShouldInt64_obj::__construct( cpp::Int64Struct value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_82664ef785c8b624_129_new)
HXDLIN( 129)		super::__construct(value,inverse);
            	}

Dynamic ShouldInt64_obj::__CreateEmpty() { return new ShouldInt64_obj; }

void *ShouldInt64_obj::_hx_vtable = 0;

Dynamic ShouldInt64_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldInt64_obj > _hx_result = new ShouldInt64_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldInt64_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4c9acfd4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4c9acfd4;
	} else {
		return inClassId==(int)0x4fa58375;
	}
}

 ::buddy::ShouldInt64 ShouldInt64_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_82664ef785c8b624_133_get_not)
HXDLIN( 133)		return  ::buddy::ShouldInt64_obj::__alloc( HX_CTX ,( ( cpp::Int64Struct)(this->value) ),!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldInt64_obj,get_not,return )

void ShouldInt64_obj::be( ::Dynamic _tmp_expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_82664ef785c8b624_138_be)
HXLINE( 139)		 cpp::Int64Struct expected = ( ( cpp::Int64Struct)(_tmp_expected) );
HXDLIN( 139)		bool result = (_hx_int64_compare(expected,( ( cpp::Int64Struct)(this->value) )) == 0);
HXLINE( 141)		::String _hx_tmp = ((HX_("Expected ",88,5a,cb,8b) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 141)		::String _hx_tmp1 = (_hx_tmp + this->quote(this->value));
HXLINE( 140)		this->test(result,p,_hx_tmp1,((HX_("Didn't expect ",a3,d2,1a,8a) + this->quote(expected)) + HX_(" but was equal to that",ca,85,b5,ee)));
            	}


void ShouldInt64_obj::beLessThan( cpp::Int64Struct expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_82664ef785c8b624_148_beLessThan)
HXDLIN( 148)		bool _hx_tmp = (_hx_int64_compare(( ( cpp::Int64Struct)(this->value) ),expected) < 0);
HXLINE( 149)		::String _hx_tmp1 = ((HX_("Expected less than ",20,72,ce,92) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 149)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 150)		::String _hx_tmp3 = ((HX_("Expected not less than ",0d,a8,c2,73) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 148)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt64_obj,beLessThan,(void))

void ShouldInt64_obj::beLessThanOrEqualTo( cpp::Int64Struct expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_82664ef785c8b624_156_beLessThanOrEqualTo)
HXDLIN( 156)		bool _hx_tmp = (_hx_int64_compare(( ( cpp::Int64Struct)(this->value) ),expected) <= 0);
HXLINE( 157)		::String _hx_tmp1 = ((HX_("Expected less than or equal to ",bc,5c,52,75) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 157)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 158)		::String _hx_tmp3 = ((HX_("Expected not less than or equal to ",29,42,76,61) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 156)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt64_obj,beLessThanOrEqualTo,(void))

void ShouldInt64_obj::beGreaterThan( cpp::Int64Struct expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_82664ef785c8b624_164_beGreaterThan)
HXDLIN( 164)		bool _hx_tmp = (_hx_int64_compare(( ( cpp::Int64Struct)(this->value) ),expected) > 0);
HXLINE( 165)		::String _hx_tmp1 = ((HX_("Expected greater than ",71,3a,2a,9e) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 165)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 166)		::String _hx_tmp3 = ((HX_("Expected not greater than ",a4,b6,ac,72) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 164)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt64_obj,beGreaterThan,(void))

void ShouldInt64_obj::beGreaterThanOrEqualTo( cpp::Int64Struct expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_82664ef785c8b624_172_beGreaterThanOrEqualTo)
HXDLIN( 172)		bool _hx_tmp = (_hx_int64_compare(( ( cpp::Int64Struct)(this->value) ),expected) >= 0);
HXLINE( 173)		::String _hx_tmp1 = ((HX_("Expected greater than or equal to ",8d,da,21,11) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 173)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 174)		::String _hx_tmp3 = ((HX_("Expected not greater than or equal to ",40,57,c7,c2) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 172)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt64_obj,beGreaterThanOrEqualTo,(void))

 ::buddy::ShouldInt64 ShouldInt64_obj::should( cpp::Int64Struct i){
            	HX_GC_STACKFRAME(&_hx_pos_82664ef785c8b624_124_should)
HXDLIN( 124)		return  ::buddy::ShouldInt64_obj::__alloc( HX_CTX ,i,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldInt64_obj,should,return )


::hx::ObjectPtr< ShouldInt64_obj > ShouldInt64_obj::__new( cpp::Int64Struct value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldInt64_obj > __this = new ShouldInt64_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldInt64_obj > ShouldInt64_obj::__alloc(::hx::Ctx *_hx_ctx, cpp::Int64Struct value,::hx::Null< bool >  __o_inverse) {
	ShouldInt64_obj *__this = (ShouldInt64_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldInt64_obj), true, "buddy.ShouldInt64"));
	*(void **)__this = ShouldInt64_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldInt64_obj::ShouldInt64_obj()
{
}

::hx::Val ShouldInt64_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"be") ) { return ::hx::Val( be_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
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

bool ShouldInt64_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldInt64_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldInt64_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldInt64_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldInt64_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	HX_("be",c3,55,00,00),
	HX_("beLessThan",3d,6c,a6,a2),
	HX_("beLessThanOrEqualTo",6f,73,cf,a7),
	HX_("beGreaterThan",78,a4,b3,fd),
	HX_("beGreaterThanOrEqualTo",d4,db,84,9e),
	::String(null()) };

::hx::Class ShouldInt64_obj::__mClass;

static ::String ShouldInt64_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldInt64_obj::__register()
{
	ShouldInt64_obj _hx_dummy;
	ShouldInt64_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldInt64",32,89,dd,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldInt64_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldInt64_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldInt64_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldInt64_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldInt64_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldInt64_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
