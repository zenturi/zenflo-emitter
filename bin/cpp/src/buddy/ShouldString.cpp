#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldString
#include <buddy/ShouldString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fbcee6c7753ab775_376_new,"buddy.ShouldString","new",0x5ff118de,"buddy.ShouldString.new","buddy/Should.hx",376,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_fbcee6c7753ab775_380_get_not,"buddy.ShouldString","get_not",0x7f270128,"buddy.ShouldString.get_not","buddy/Should.hx",380,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_fbcee6c7753ab775_385_contain,"buddy.ShouldString","contain",0x71d2df52,"buddy.ShouldString.contain","buddy/Should.hx",385,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_fbcee6c7753ab775_398_startWith,"buddy.ShouldString","startWith",0xfc3faa86,"buddy.ShouldString.startWith","buddy/Should.hx",398,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_fbcee6c7753ab775_411_endWith,"buddy.ShouldString","endWith",0x897b8eff,"buddy.ShouldString.endWith","buddy/Should.hx",411,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_fbcee6c7753ab775_424_match,"buddy.ShouldString","match",0x7b022d43,"buddy.ShouldString.match","buddy/Should.hx",424,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_fbcee6c7753ab775_371_should,"buddy.ShouldString","should",0x91974275,"buddy.ShouldString.should","buddy/Should.hx",371,0x08252ac2)
namespace buddy{

void ShouldString_obj::__construct(::String value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_fbcee6c7753ab775_376_new)
HXDLIN( 376)		super::__construct(value,inverse);
            	}

Dynamic ShouldString_obj::__CreateEmpty() { return new ShouldString_obj; }

void *ShouldString_obj::_hx_vtable = 0;

Dynamic ShouldString_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldString_obj > _hx_result = new ShouldString_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldString_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2da8990a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2da8990a;
	} else {
		return inClassId==(int)0x4fa58375;
	}
}

 ::buddy::ShouldString ShouldString_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_fbcee6c7753ab775_380_get_not)
HXDLIN( 380)		return  ::buddy::ShouldString_obj::__alloc( HX_CTX ,( (::String)(this->value) ),!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldString_obj,get_not,return )

void ShouldString_obj::contain(::String substring, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_fbcee6c7753ab775_385_contain)
HXLINE( 386)		if (::hx::IsNull( this->value )) {
HXLINE( 387)			::String _hx_tmp = ((HX_("Expected string to contain ",ca,fb,37,49) + this->quote(substring)) + HX_(" but string was null",0e,5b,47,af));
HXLINE( 386)			this->fail(_hx_tmp,((HX_("Expected string not to contain ",bd,a9,d4,da) + this->quote(substring)) + HX_(" but string was null",0e,5b,47,af)),p);
HXDLIN( 386)			return;
            		}
HXLINE( 391)		bool _hx_tmp = (( (::String)(this->value) ).indexOf(substring,null()) >= 0);
HXLINE( 392)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to contain ",f1,c0,a8,87));
HXDLIN( 392)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(substring));
HXLINE( 393)		::String _hx_tmp3 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to contain ",64,8e,2c,76));
HXLINE( 391)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(substring)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldString_obj,contain,(void))

void ShouldString_obj::startWith(::String substring, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_fbcee6c7753ab775_398_startWith)
HXLINE( 399)		if (::hx::IsNull( this->value )) {
HXLINE( 400)			::String _hx_tmp = ((HX_("Expected string to start with ",de,75,2e,6d) + this->quote(substring)) + HX_(" but string was null",0e,5b,47,af));
HXLINE( 399)			this->fail(_hx_tmp,((HX_("Expected string not to start with ",cb,c1,9a,bf) + this->quote(substring)) + HX_(" but string was null",0e,5b,47,af)),p);
HXDLIN( 399)			return;
            		}
HXLINE( 404)		bool _hx_tmp = ::StringTools_obj::startsWith(( (::String)(this->value) ),substring);
HXLINE( 405)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to start with ",17,23,8e,25));
HXDLIN( 405)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(substring));
HXLINE( 406)		::String _hx_tmp3 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to start with ",84,ff,ab,b7));
HXLINE( 404)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(substring)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldString_obj,startWith,(void))

void ShouldString_obj::endWith(::String substring, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_fbcee6c7753ab775_411_endWith)
HXLINE( 412)		if (::hx::IsNull( this->value )) {
HXLINE( 413)			::String _hx_tmp = ((HX_("Expected string to end with ",97,51,79,a9) + this->quote(substring)) + HX_(" but string was null",0e,5b,47,af));
HXLINE( 412)			this->fail(_hx_tmp,((HX_("Expected string not to end with ",44,d8,f4,80) + this->quote(substring)) + HX_(" but string was null",0e,5b,47,af)),p);
HXDLIN( 412)			return;
            		}
HXLINE( 417)		bool _hx_tmp = ::StringTools_obj::endsWith(( (::String)(this->value) ),substring);
HXLINE( 418)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to end with ",90,0e,b5,0d));
HXDLIN( 418)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(substring));
HXLINE( 419)		::String _hx_tmp3 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to end with ",bd,05,85,d2));
HXLINE( 417)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(substring)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldString_obj,endWith,(void))

void ShouldString_obj::match( ::EReg regexp, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_fbcee6c7753ab775_424_match)
HXLINE( 425)		if (::hx::IsNull( this->value )) {
HXLINE( 425)			this->fail(HX_("Expected string to match regular expression but string was null",63,ac,8e,60),HX_("Expected string not to match regular expression but string was null",d6,7b,eb,89),p);
HXDLIN( 425)			return;
            		}
HXLINE( 430)		bool _hx_tmp = regexp->match(( (::String)(this->value) ));
HXLINE( 431)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to match regular expression",fc,cb,26,cf));
HXLINE( 430)		this->test(_hx_tmp,p,_hx_tmp1,((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to match regular expression",6f,ef,5b,46)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldString_obj,match,(void))

 ::buddy::ShouldString ShouldString_obj::should(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_fbcee6c7753ab775_371_should)
HXDLIN( 371)		return  ::buddy::ShouldString_obj::__alloc( HX_CTX ,str,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldString_obj,should,return )


::hx::ObjectPtr< ShouldString_obj > ShouldString_obj::__new(::String value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldString_obj > __this = new ShouldString_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldString_obj > ShouldString_obj::__alloc(::hx::Ctx *_hx_ctx,::String value,::hx::Null< bool >  __o_inverse) {
	ShouldString_obj *__this = (ShouldString_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldString_obj), true, "buddy.ShouldString"));
	*(void **)__this = ShouldString_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldString_obj::ShouldString_obj()
{
}

::hx::Val ShouldString_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return ::hx::Val( match_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
		if (HX_FIELD_EQ(inName,"contain") ) { return ::hx::Val( contain_dyn() ); }
		if (HX_FIELD_EQ(inName,"endWith") ) { return ::hx::Val( endWith_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startWith") ) { return ::hx::Val( startWith_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShouldString_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldString_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldString_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldString_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	HX_("contain",d4,7f,74,19),
	HX_("startWith",88,ef,eb,07),
	HX_("endWith",81,2f,1d,31),
	HX_("match",45,49,23,03),
	::String(null()) };

::hx::Class ShouldString_obj::__mClass;

static ::String ShouldString_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldString_obj::__register()
{
	ShouldString_obj _hx_dummy;
	ShouldString_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldString",ec,11,c8,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldString_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldString_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldString_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldString_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldString_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldString_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
