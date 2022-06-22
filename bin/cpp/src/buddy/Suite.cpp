#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_buddy_Spec
#include <buddy/Spec.h>
#endif
#ifndef INCLUDED_buddy_SpecStatus
#include <buddy/SpecStatus.h>
#endif
#ifndef INCLUDED_buddy_Step
#include <buddy/Step.h>
#endif
#ifndef INCLUDED_buddy_Suite
#include <buddy/Suite.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f89f6d7d58ca2838_39_new,"buddy.Suite","new",0xa43f5222,"buddy.Suite.new","buddy/BuddySuite.hx",39,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_f89f6d7d58ca2838_48_get_specs,"buddy.Suite","get_specs",0x7f593171,"buddy.Suite.get_specs","buddy/BuddySuite.hx",48,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_f89f6d7d58ca2838_58_get_suites,"buddy.Suite","get_suites",0xd264ad02,"buddy.Suite.get_suites","buddy/BuddySuite.hx",58,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_f89f6d7d58ca2838_68_get_time,"buddy.Suite","get_time",0xafb46694,"buddy.Suite.get_time","buddy/BuddySuite.hx",68,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_f89f6d7d58ca2838_81_passed,"buddy.Suite","passed",0x13e856ee,"buddy.Suite.passed","buddy/BuddySuite.hx",81,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_f89f6d7d58ca2838_82_passed,"buddy.Suite","passed",0x13e856ee,"buddy.Suite.passed","buddy/BuddySuite.hx",82,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_f89f6d7d58ca2838_80_passed,"buddy.Suite","passed",0x13e856ee,"buddy.Suite.passed","buddy/BuddySuite.hx",80,0x3b31e803)
namespace buddy{

void Suite_obj::__construct(::String description){
            	HX_STACKFRAME(&_hx_pos_f89f6d7d58ca2838_39_new)
HXLINE(  45)		this->stack = ::Array_obj< ::Dynamic>::__new();
HXLINE(  43)		this->steps = ::Array_obj< ::Dynamic>::__new();
HXLINE(  86)		if (::hx::IsNull( description )) {
HXLINE(  86)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Suite requires a description.",bb,87,be,df)));
            		}
HXLINE(  87)		this->description = description;
            	}

Dynamic Suite_obj::__CreateEmpty() { return new Suite_obj; }

void *Suite_obj::_hx_vtable = 0;

Dynamic Suite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Suite_obj > _hx_result = new Suite_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Suite_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a841a52;
}

::Array< ::Dynamic> Suite_obj::get_specs(){
            	HX_STACKFRAME(&_hx_pos_f89f6d7d58ca2838_48_get_specs)
HXLINE(  49)		::Array< ::Dynamic> output = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			::Array< ::Dynamic> _g1 = this->steps;
HXDLIN(  50)			while((_g < _g1->length)){
HXLINE(  50)				 ::buddy::Step step = _g1->__get(_g).StaticCast<  ::buddy::Step >();
HXDLIN(  50)				_g = (_g + 1);
HXDLIN(  50)				if ((step->_hx_getIndex() == 1)) {
HXLINE(  51)					 ::buddy::Spec s = step->_hx_getObject(0).StaticCast<  ::buddy::Spec >();
HXDLIN(  51)					output->push(s);
            				}
            			}
            		}
HXLINE(  54)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Suite_obj,get_specs,return )

::Array< ::Dynamic> Suite_obj::get_suites(){
            	HX_STACKFRAME(&_hx_pos_f89f6d7d58ca2838_58_get_suites)
HXLINE(  59)		::Array< ::Dynamic> output = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			::Array< ::Dynamic> _g1 = this->steps;
HXDLIN(  60)			while((_g < _g1->length)){
HXLINE(  60)				 ::buddy::Step step = _g1->__get(_g).StaticCast<  ::buddy::Step >();
HXDLIN(  60)				_g = (_g + 1);
HXDLIN(  60)				if ((step->_hx_getIndex() == 0)) {
HXLINE(  61)					 ::buddy::Suite s = step->_hx_getObject(0).StaticCast<  ::buddy::Suite >();
HXDLIN(  61)					output->push(s);
            				}
            			}
            		}
HXLINE(  64)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Suite_obj,get_suites,return )

Float Suite_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_f89f6d7d58ca2838_68_get_time)
HXLINE(  69)		Float total = ((Float)0.0);
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			::Array< ::Dynamic> _g1 = this->steps;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				 ::buddy::Step step = _g1->__get(_g).StaticCast<  ::buddy::Step >();
HXDLIN(  70)				_g = (_g + 1);
HXDLIN(  70)				switch((int)(step->_hx_getIndex())){
            					case (int)0: {
HXLINE(  71)						 ::buddy::Suite s = step->_hx_getObject(0).StaticCast<  ::buddy::Suite >();
HXDLIN(  71)						total = (total + s->get_time());
            					}
            					break;
            					case (int)1: {
HXLINE(  72)						 ::buddy::Spec s = step->_hx_getObject(0).StaticCast<  ::buddy::Spec >();
HXDLIN(  72)						total = (total + s->time);
            					}
            					break;
            				}
            			}
            		}
HXLINE(  74)		return total;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Suite_obj,get_time,return )

bool Suite_obj::passed(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run( ::buddy::Spec spec){
            			HX_STACKFRAME(&_hx_pos_f89f6d7d58ca2838_81_passed)
HXLINE(  81)			return ::hx::IsPointerEq( spec->status,::buddy::SpecStatus_obj::Failed_dyn() );
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		bool _hx_run( ::buddy::Suite suite){
            			HX_STACKFRAME(&_hx_pos_f89f6d7d58ca2838_82_passed)
HXLINE(  82)			return !(suite->passed());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_f89f6d7d58ca2838_80_passed)
HXLINE(  81)		if (::Lambda_obj::exists(this->get_specs(), ::Dynamic(new _hx_Closure_0()))) {
HXLINE(  81)			return false;
            		}
HXLINE(  82)		return !(::Lambda_obj::exists(this->get_suites(), ::Dynamic(new _hx_Closure_1())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Suite_obj,passed,return )


::hx::ObjectPtr< Suite_obj > Suite_obj::__new(::String description) {
	::hx::ObjectPtr< Suite_obj > __this = new Suite_obj();
	__this->__construct(description);
	return __this;
}

::hx::ObjectPtr< Suite_obj > Suite_obj::__alloc(::hx::Ctx *_hx_ctx,::String description) {
	Suite_obj *__this = (Suite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Suite_obj), true, "buddy.Suite"));
	*(void **)__this = Suite_obj::_hx_vtable;
	__this->__construct(description);
	return __this;
}

Suite_obj::Suite_obj()
{
}

void Suite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Suite);
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(steps,"steps");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_END_CLASS();
}

void Suite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(steps,"steps");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(stack,"stack");
}

::hx::Val Suite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_time() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"steps") ) { return ::hx::Val( steps ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"stack") ) { return ::hx::Val( stack ); }
		if (HX_FIELD_EQ(inName,"specs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specs() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"suites") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_suites() ); }
		if (HX_FIELD_EQ(inName,"passed") ) { return ::hx::Val( passed_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_specs") ) { return ::hx::Val( get_specs_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_suites") ) { return ::hx::Val( get_suites_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Suite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"steps") ) { steps=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Suite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("steps",a7,7b,0e,84));
	outFields->push(HX_("error",c8,cb,29,73));
	outFields->push(HX_("stack",48,67,0b,84));
	outFields->push(HX_("specs",d8,95,69,81));
	outFields->push(HX_("suites",bb,22,ac,9e));
	outFields->push(HX_("time",0d,cc,fc,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Suite_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Suite_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Suite_obj,steps),HX_("steps",a7,7b,0e,84)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Suite_obj,error),HX_("error",c8,cb,29,73)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Suite_obj,stack),HX_("stack",48,67,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Suite_obj_sStaticStorageInfo = 0;
#endif

static ::String Suite_obj_sMemberFields[] = {
	HX_("description",fc,08,1d,5f),
	HX_("steps",a7,7b,0e,84),
	HX_("error",c8,cb,29,73),
	HX_("stack",48,67,0b,84),
	HX_("get_specs",2f,f2,12,c5),
	HX_("get_suites",84,92,33,8f),
	HX_("get_time",96,87,b7,cc),
	HX_("passed",70,d3,31,ee),
	::String(null()) };

::hx::Class Suite_obj::__mClass;

void Suite_obj::__register()
{
	Suite_obj _hx_dummy;
	Suite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.Suite",30,59,27,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Suite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Suite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Suite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Suite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
