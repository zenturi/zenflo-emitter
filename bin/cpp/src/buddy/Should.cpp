#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d179fc585a985883_582_new,"buddy.Should","new",0x9786512d,"buddy.Should.new","buddy/Should.hx",582,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_d179fc585a985883_591_be,"buddy.Should","be",0x47daad96,"buddy.Should.be","buddy/Should.hx",591,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_d179fc585a985883_608_beType,"buddy.Should","beType",0x25324f70,"buddy.Should.beType","buddy/Should.hx",608,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_d179fc585a985883_615_quote,"buddy.Should","quote",0x07603149,"buddy.Should.quote","buddy/Should.hx",615,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_d179fc585a985883_623_fail,"buddy.Should","fail",0xf8b3ec71,"buddy.Should.fail","buddy/Should.hx",623,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_d179fc585a985883_627_test,"buddy.Should","test",0x01f7fae5,"buddy.Should.test","buddy/Should.hx",627,0x08252ac2)
namespace buddy{

void Should_obj::__construct( ::Dynamic value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_d179fc585a985883_582_new)
HXLINE( 583)		this->value = value;
HXLINE( 584)		this->inverse = inverse;
            	}

Dynamic Should_obj::__CreateEmpty() { return new Should_obj; }

void *Should_obj::_hx_vtable = 0;

Dynamic Should_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Should_obj > _hx_result = new Should_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Should_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fa58375;
}

void Should_obj::be( ::Dynamic expected, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_d179fc585a985883_591_be)
HXLINE( 598)		bool result = ::hx::IsEq( this->value,expected );
HXLINE( 601)		::String _hx_tmp = ((HX_("Expected ",88,5a,cb,8b) + this->quote(expected)) + HX_(", was ",4b,d3,78,53));
HXDLIN( 601)		::String _hx_tmp1 = (_hx_tmp + this->quote(this->value));
HXLINE( 600)		this->test(result,p,_hx_tmp1,((HX_("Didn't expect ",a3,d2,1a,8a) + this->quote(expected)) + HX_(" but was equal to that",ca,85,b5,ee)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Should_obj,be,(void))

void Should_obj::beType( ::Dynamic type, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_d179fc585a985883_608_beType)
HXDLIN( 608)		bool _hx_tmp = ::Std_obj::isOfType(this->value,type);
HXLINE( 609)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to be type ",2e,ed,ab,8e));
HXDLIN( 609)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(type));
HXLINE( 610)		::String _hx_tmp3 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to be type ",a1,ba,2f,7d));
HXLINE( 608)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(type)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Should_obj,beType,(void))

::String Should_obj::quote( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_d179fc585a985883_615_quote)
HXLINE( 616)		if (::Std_obj::isOfType(v,::hx::ClassOf< ::String >())) {
HXLINE( 616)			return ((HX_("\"",22,00,00,00) + ::Std_obj::string(v)) + HX_("\"",22,00,00,00));
            		}
HXLINE( 617)		if (::Std_obj::isOfType(v,::hx::ClassOf< ::haxe::ds::List >())) {
HXLINE( 617)			return ::Std_obj::string(::Lambda_obj::array(v));
            		}
HXLINE( 618)		return ::Std_obj::string(v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Should_obj,quote,return )

void Should_obj::fail(::String error,::String errorInverted, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_d179fc585a985883_623_fail)
HXDLIN( 623)		::String _hx_tmp;
HXDLIN( 623)		if (this->inverse) {
HXDLIN( 623)			_hx_tmp = errorInverted;
            		}
            		else {
HXDLIN( 623)			_hx_tmp = error;
            		}
HXDLIN( 623)		::Array< ::Dynamic> _hx_tmp1 = ::buddy::SuitesRunner_obj::posInfosToStack(p);
HXDLIN( 623)		::buddy::SuitesRunner_obj::currentTest(false,_hx_tmp,_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Should_obj,fail,(void))

void Should_obj::test(bool expr, ::Dynamic p,::String error,::String errorInverted){
            	HX_STACKFRAME(&_hx_pos_d179fc585a985883_627_test)
HXLINE( 628)		if (::hx::IsNull( ::buddy::SuitesRunner_obj::currentTest )) {
HXLINE( 628)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("SuitesRunner.currentTest was null",96,d8,50,b3)));
            		}
HXLINE( 630)		if (!(this->inverse)) {
HXLINE( 631)			::Array< ::Dynamic> _hx_tmp = ::buddy::SuitesRunner_obj::posInfosToStack(p);
HXDLIN( 631)			::buddy::SuitesRunner_obj::currentTest(expr,error,_hx_tmp);
            		}
            		else {
HXLINE( 633)			::Array< ::Dynamic> _hx_tmp = ::buddy::SuitesRunner_obj::posInfosToStack(p);
HXDLIN( 633)			::buddy::SuitesRunner_obj::currentTest(!(expr),errorInverted,_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Should_obj,test,(void))


::hx::ObjectPtr< Should_obj > Should_obj::__new( ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< Should_obj > __this = new Should_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< Should_obj > Should_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	Should_obj *__this = (Should_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Should_obj), true, "buddy.Should"));
	*(void **)__this = Should_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

Should_obj::Should_obj()
{
}

void Should_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Should);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(inverse,"inverse");
	HX_MARK_END_CLASS();
}

void Should_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(inverse,"inverse");
}

::hx::Val Should_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"be") ) { return ::hx::Val( be_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fail") ) { return ::hx::Val( fail_dyn() ); }
		if (HX_FIELD_EQ(inName,"test") ) { return ::hx::Val( test_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"quote") ) { return ::hx::Val( quote_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"beType") ) { return ::hx::Val( beType_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return ::hx::Val( inverse ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Should_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void Should_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("inverse",b0,4b,f1,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Should_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Should_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsBool,(int)offsetof(Should_obj,inverse),HX_("inverse",b0,4b,f1,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Should_obj_sStaticStorageInfo = 0;
#endif

static ::String Should_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("inverse",b0,4b,f1,3d),
	HX_("be",c3,55,00,00),
	HX_("beType",1d,12,54,8e),
	HX_("quote",3c,23,f2,5d),
	HX_("fail",de,b9,b5,43),
	HX_("test",52,c8,f9,4c),
	::String(null()) };

::hx::Class Should_obj::__mClass;

void Should_obj::__register()
{
	Should_obj _hx_dummy;
	Should_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.Should",bb,36,09,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Should_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Should_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Should_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Should_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
