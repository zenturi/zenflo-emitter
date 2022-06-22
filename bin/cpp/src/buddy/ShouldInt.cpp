#include <hxcpp.h>

#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldInt
#include <buddy/ShouldInt.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_12d755b6e869346d_79_new,"buddy.ShouldInt","new",0xde1a5fe6,"buddy.ShouldInt.new","buddy/Should.hx",79,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_12d755b6e869346d_83_get_not,"buddy.ShouldInt","get_not",0xd4346c30,"buddy.ShouldInt.get_not","buddy/Should.hx",83,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_12d755b6e869346d_89_beLessThan,"buddy.ShouldInt","beLessThan",0xc7c77977,"buddy.ShouldInt.beLessThan","buddy/Should.hx",89,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_12d755b6e869346d_97_beLessThanOrEqualTo,"buddy.ShouldInt","beLessThanOrEqualTo",0xaf83eef5,"buddy.ShouldInt.beLessThanOrEqualTo","buddy/Should.hx",97,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_12d755b6e869346d_105_beGreaterThan,"buddy.ShouldInt","beGreaterThan",0xc14f177e,"buddy.ShouldInt.beGreaterThan","buddy/Should.hx",105,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_12d755b6e869346d_113_beGreaterThanOrEqualTo,"buddy.ShouldInt","beGreaterThanOrEqualTo",0x0521d80e,"buddy.ShouldInt.beGreaterThanOrEqualTo","buddy/Should.hx",113,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_12d755b6e869346d_74_should,"buddy.ShouldInt","should",0x867e106d,"buddy.ShouldInt.should","buddy/Should.hx",74,0x08252ac2)
namespace buddy{

void ShouldInt_obj::__construct( ::Dynamic value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_12d755b6e869346d_79_new)
HXDLIN(  79)		super::__construct(value,inverse);
            	}

Dynamic ShouldInt_obj::__CreateEmpty() { return new ShouldInt_obj; }

void *ShouldInt_obj::_hx_vtable = 0;

Dynamic ShouldInt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldInt_obj > _hx_result = new ShouldInt_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldInt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x30e02f16) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x30e02f16;
	} else {
		return inClassId==(int)0x4fa58375;
	}
}

 ::buddy::ShouldInt ShouldInt_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_12d755b6e869346d_83_get_not)
HXDLIN(  83)		return  ::buddy::ShouldInt_obj::__alloc( HX_CTX ,this->value,!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldInt_obj,get_not,return )

void ShouldInt_obj::beLessThan(int expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_12d755b6e869346d_89_beLessThan)
HXDLIN(  89)		bool _hx_tmp = ::hx::IsLess( this->value,expected );
HXLINE(  90)		::String _hx_tmp1 = ((HX_("Expected less than ",20,72,ce,92) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN(  90)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE(  91)		::String _hx_tmp3 = ((HX_("Expected not less than ",0d,a8,c2,73) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE(  89)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt_obj,beLessThan,(void))

void ShouldInt_obj::beLessThanOrEqualTo(int expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_12d755b6e869346d_97_beLessThanOrEqualTo)
HXDLIN(  97)		bool _hx_tmp = ::hx::IsLessEq( this->value,expected );
HXLINE(  98)		::String _hx_tmp1 = ((HX_("Expected less than or equal to ",bc,5c,52,75) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN(  98)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE(  99)		::String _hx_tmp3 = ((HX_("Expected not less than or equal to ",29,42,76,61) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE(  97)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt_obj,beLessThanOrEqualTo,(void))

void ShouldInt_obj::beGreaterThan(int expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_12d755b6e869346d_105_beGreaterThan)
HXDLIN( 105)		bool _hx_tmp = ::hx::IsGreater( this->value,expected );
HXLINE( 106)		::String _hx_tmp1 = ((HX_("Expected greater than ",71,3a,2a,9e) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 106)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 107)		::String _hx_tmp3 = ((HX_("Expected not greater than ",a4,b6,ac,72) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 105)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt_obj,beGreaterThan,(void))

void ShouldInt_obj::beGreaterThanOrEqualTo(int expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_12d755b6e869346d_113_beGreaterThanOrEqualTo)
HXDLIN( 113)		bool _hx_tmp = ::hx::IsGreaterEq( this->value,expected );
HXLINE( 114)		::String _hx_tmp1 = ((HX_("Expected greater than or equal to ",8d,da,21,11) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 114)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 115)		::String _hx_tmp3 = ((HX_("Expected not greater than or equal to ",40,57,c7,c2) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXLINE( 113)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(this->value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldInt_obj,beGreaterThanOrEqualTo,(void))

 ::buddy::ShouldInt ShouldInt_obj::should( ::Dynamic i){
            	HX_GC_STACKFRAME(&_hx_pos_12d755b6e869346d_74_should)
HXDLIN(  74)		return  ::buddy::ShouldInt_obj::__alloc( HX_CTX ,i,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldInt_obj,should,return )


::hx::ObjectPtr< ShouldInt_obj > ShouldInt_obj::__new( ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldInt_obj > __this = new ShouldInt_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldInt_obj > ShouldInt_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	ShouldInt_obj *__this = (ShouldInt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldInt_obj), true, "buddy.ShouldInt"));
	*(void **)__this = ShouldInt_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldInt_obj::ShouldInt_obj()
{
}

::hx::Val ShouldInt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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

bool ShouldInt_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldInt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldInt_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldInt_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldInt_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	HX_("beLessThan",3d,6c,a6,a2),
	HX_("beLessThanOrEqualTo",6f,73,cf,a7),
	HX_("beGreaterThan",78,a4,b3,fd),
	HX_("beGreaterThanOrEqualTo",d4,db,84,9e),
	::String(null()) };

::hx::Class ShouldInt_obj::__mClass;

static ::String ShouldInt_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldInt_obj::__register()
{
	ShouldInt_obj _hx_dummy;
	ShouldInt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldInt",f4,34,ef,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldInt_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldInt_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldInt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldInt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldInt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldInt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
