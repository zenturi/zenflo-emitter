#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_buddy_ShouldFunctions
#include <buddy/ShouldFunctions.h>
#endif
#ifndef INCLUDED_buddy_SuitesRunner
#include <buddy/SuitesRunner.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_444_new,"buddy.ShouldFunctions","new",0xe0fbb512,"buddy.ShouldFunctions.new","buddy/Should.hx",444,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_450_get_not,"buddy.ShouldFunctions","get_not",0xc085c75c,"buddy.ShouldFunctions.get_not","buddy/Should.hx",450,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_461_throwAnything,"buddy.ShouldFunctions","throwAnything",0x80de9bfa,"buddy.ShouldFunctions.throwAnything","buddy/Should.hx",461,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_480_throwValue,"buddy.ShouldFunctions","throwValue",0xf2641df9,"buddy.ShouldFunctions.throwValue","buddy/Should.hx",480,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_512_throwType,"buddy.ShouldFunctions","throwType",0xd4367d32,"buddy.ShouldFunctions.throwType","buddy/Should.hx",512,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_550_be,"buddy.ShouldFunctions","be",0xf8f90d51,"buddy.ShouldFunctions.be","buddy/Should.hx",550,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_557_quote,"buddy.ShouldFunctions","quote",0xa3e2186e,"buddy.ShouldFunctions.quote","buddy/Should.hx",557,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_564_test,"buddy.ShouldFunctions","test",0xff39ff60,"buddy.ShouldFunctions.test","buddy/Should.hx",564,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_e3c740a2a7752e8b_454_should,"buddy.ShouldFunctions","should",0x12753ec1,"buddy.ShouldFunctions.should","buddy/Should.hx",454,0x08252ac2)
namespace buddy{

void ShouldFunctions_obj::__construct( ::Dynamic value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_444_new)
HXLINE( 445)		this->value = value;
HXLINE( 446)		this->inverse = inverse;
            	}

Dynamic ShouldFunctions_obj::__CreateEmpty() { return new ShouldFunctions_obj; }

void *ShouldFunctions_obj::_hx_vtable = 0;

Dynamic ShouldFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldFunctions_obj > _hx_result = new ShouldFunctions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66f0d026;
}

 ::buddy::ShouldFunctions ShouldFunctions_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_450_get_not)
HXDLIN( 450)		return  ::buddy::ShouldFunctions_obj::__alloc( HX_CTX ,this->value,!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldFunctions_obj,get_not,return )

 ::Dynamic ShouldFunctions_obj::throwAnything( ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_461_throwAnything)
HXLINE( 462)		bool caught = false;
HXLINE( 463)		 ::Dynamic exception = null();
HXLINE( 465)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 465)			this->value();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 466)				{
HXLINE( 466)					null();
            				}
HXDLIN( 466)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 466)				{
HXLINE( 466)					exception = e;
HXDLIN( 466)					caught = true;
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 469)		::String _hx_tmp = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to throw anything, nothing was thrown",67,1e,a4,36));
HXLINE( 470)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to throw anything, ",c8,7d,8e,42));
HXLINE( 468)		this->test(caught,p,_hx_tmp,((_hx_tmp1 + this->quote(exception)) + HX_(" was thrown",bf,2a,fd,de)));
HXLINE( 473)		return exception;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShouldFunctions_obj,throwAnything,return )

 ::Dynamic ShouldFunctions_obj::throwValue( ::Dynamic v, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_480_throwValue)
HXLINE( 481)		 ::Dynamic exception = null();
HXLINE( 483)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 483)			this->value();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 484)				{
HXLINE( 484)					null();
            				}
HXDLIN( 484)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 484)				{
HXLINE( 485)					 ::Dynamic cause = null();
HXLINE( 496)					if (::hx::IsNull( cause )) {
HXLINE( 496)						exception = e;
            					}
            					else {
HXLINE( 496)						exception = cause;
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 499)		bool isCaught = ::hx::IsEq( exception,v );
HXLINE( 501)		::String _hx_tmp = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to throw ",1f,08,02,2d));
HXDLIN( 501)		::String _hx_tmp1 = (_hx_tmp + this->quote(v));
HXLINE( 502)		::String _hx_tmp2 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to throw ",d2,82,2b,62));
HXLINE( 500)		this->test(isCaught,p,_hx_tmp1,(_hx_tmp2 + this->quote(v)));
HXLINE( 505)		return exception;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldFunctions_obj,throwValue,return )

 ::Dynamic ShouldFunctions_obj::throwType(::hx::Class type, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_512_throwType)
HXLINE( 513)		 ::Dynamic exception = null();
HXLINE( 515)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 515)			this->value();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 516)				{
HXLINE( 516)					null();
            				}
HXDLIN( 516)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 516)				{
HXLINE( 517)					 ::Dynamic cause = null();
HXLINE( 528)					if (::hx::IsNull( cause )) {
HXLINE( 528)						exception = e;
            					}
            					else {
HXLINE( 528)						exception = cause;
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 531)		::String typeName = ::Type_obj::getClassName(type);
HXLINE( 533)		::String exceptionName;
HXDLIN( 533)		if (::hx::IsNull( exception )) {
HXLINE( 533)			exceptionName = null();
            		}
            		else {
HXLINE( 533)			exceptionName = ::Type_obj::getClassName(::Type_obj::getClass(exception));
            		}
HXLINE( 534)		if (::hx::IsNull( exceptionName )) {
HXLINE( 534)			exceptionName = HX_("no exception",b0,a7,9a,73);
            		}
HXLINE( 536)		bool isCaught = ::Std_obj::isOfType(exception,type);
HXLINE( 538)		::String _hx_tmp = ((((((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to throw type ",a7,97,7c,c6)) + typeName) + HX_(", ",74,26,00,00)) + exceptionName) + HX_(" was thrown instead",21,9a,40,55));
HXLINE( 537)		this->test(isCaught,p,_hx_tmp,(((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to throw type ",14,74,9a,58)) + typeName));
HXLINE( 542)		return exception;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldFunctions_obj,throwType,return )

void ShouldFunctions_obj::be( ::Dynamic expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_550_be)
HXDLIN( 550)		bool _hx_tmp = ::hx::IsEq( this->value,expected );
HXLINE( 551)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 551)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(this->value));
HXLINE( 550)		this->test(_hx_tmp,p,_hx_tmp2,((HX_("Didn't expect ",a3,d2,1a,8a) + this->quote(expected)) + HX_(" but was equal to that",ca,85,b5,ee)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldFunctions_obj,be,(void))

::String ShouldFunctions_obj::quote( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_557_quote)
HXLINE( 558)		if (::Std_obj::isOfType(v,::hx::ClassOf< ::String >())) {
HXLINE( 558)			return ((HX_("\"",22,00,00,00) + ::Std_obj::string(v)) + HX_("\"",22,00,00,00));
            		}
HXLINE( 559)		if (::Std_obj::isOfType(v,::hx::ClassOf< ::haxe::ds::List >())) {
HXLINE( 559)			return ::Std_obj::string(::Lambda_obj::array(v));
            		}
HXLINE( 560)		return ::Std_obj::string(v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShouldFunctions_obj,quote,return )

void ShouldFunctions_obj::test(bool expr, ::Dynamic p,::String error,::String errorInverted){
            	HX_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_564_test)
HXLINE( 565)		if (::hx::IsNull( ::buddy::SuitesRunner_obj::currentTest )) {
HXLINE( 565)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("SuitesRunner.currentTest was null",96,d8,50,b3)));
            		}
HXLINE( 567)		if (!(this->inverse)) {
HXLINE( 568)			::Array< ::Dynamic> _hx_tmp = ::buddy::SuitesRunner_obj::posInfosToStack(p);
HXDLIN( 568)			::buddy::SuitesRunner_obj::currentTest(expr,error,_hx_tmp);
            		}
            		else {
HXLINE( 570)			::Array< ::Dynamic> _hx_tmp = ::buddy::SuitesRunner_obj::posInfosToStack(p);
HXDLIN( 570)			::buddy::SuitesRunner_obj::currentTest(!(expr),errorInverted,_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(ShouldFunctions_obj,test,(void))

 ::buddy::ShouldFunctions ShouldFunctions_obj::should( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_e3c740a2a7752e8b_454_should)
HXDLIN( 454)		return  ::buddy::ShouldFunctions_obj::__alloc( HX_CTX ,value,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldFunctions_obj,should,return )


::hx::ObjectPtr< ShouldFunctions_obj > ShouldFunctions_obj::__new( ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldFunctions_obj > __this = new ShouldFunctions_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldFunctions_obj > ShouldFunctions_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	ShouldFunctions_obj *__this = (ShouldFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldFunctions_obj), true, "buddy.ShouldFunctions"));
	*(void **)__this = ShouldFunctions_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldFunctions_obj::ShouldFunctions_obj()
{
}

void ShouldFunctions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShouldFunctions);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(inverse,"inverse");
	HX_MARK_END_CLASS();
}

void ShouldFunctions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(inverse,"inverse");
}

::hx::Val ShouldFunctions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"be") ) { return ::hx::Val( be_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return ::hx::Val( test_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"quote") ) { return ::hx::Val( quote_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return ::hx::Val( inverse ); }
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"throwType") ) { return ::hx::Val( throwType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"throwValue") ) { return ::hx::Val( throwValue_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"throwAnything") ) { return ::hx::Val( throwAnything_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShouldFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

::hx::Val ShouldFunctions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { inverse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShouldFunctions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("inverse",b0,4b,f1,3d));
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShouldFunctions_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShouldFunctions_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsBool,(int)offsetof(ShouldFunctions_obj,inverse),HX_("inverse",b0,4b,f1,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShouldFunctions_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldFunctions_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("inverse",b0,4b,f1,3d),
	HX_("get_not",aa,a1,c8,26),
	HX_("throwAnything",c8,24,4b,f7),
	HX_("throwValue",6b,28,74,ad),
	HX_("throwType",00,07,9f,74),
	HX_("be",c3,55,00,00),
	HX_("quote",3c,23,f2,5d),
	HX_("test",52,c8,f9,4c),
	::String(null()) };

::hx::Class ShouldFunctions_obj::__mClass;

static ::String ShouldFunctions_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldFunctions_obj::__register()
{
	ShouldFunctions_obj _hx_dummy;
	ShouldFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldFunctions",20,84,5b,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldFunctions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
