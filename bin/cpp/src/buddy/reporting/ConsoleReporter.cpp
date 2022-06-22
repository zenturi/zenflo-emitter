#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_buddy_Spec
#include <buddy/Spec.h>
#endif
#ifndef INCLUDED_buddy_SpecStatus
#include <buddy/SpecStatus.h>
#endif
#ifndef INCLUDED_buddy_reporting_ConsoleReporter
#include <buddy/reporting/ConsoleReporter.h>
#endif
#ifndef INCLUDED_buddy_reporting_Reporter
#include <buddy/reporting/Reporter.h>
#endif
#ifndef INCLUDED_buddy_reporting_TraceReporter
#include <buddy/reporting/TraceReporter.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8638deebd003aaa7_23_new,"buddy.reporting.ConsoleReporter","new",0x4957f042,"buddy.reporting.ConsoleReporter.new","buddy/reporting/ConsoleReporter.hx",23,0x5e24b130)
HX_LOCAL_STACK_FRAME(_hx_pos_8638deebd003aaa7_44_start,"buddy.reporting.ConsoleReporter","start",0x2e40d0c4,"buddy.reporting.ConsoleReporter.start","buddy/reporting/ConsoleReporter.hx",44,0x5e24b130)
HX_LOCAL_STACK_FRAME(_hx_pos_8638deebd003aaa7_48_progress,"buddy.reporting.ConsoleReporter","progress",0x7b7e048b,"buddy.reporting.ConsoleReporter.progress","buddy/reporting/ConsoleReporter.hx",48,0x5e24b130)
HX_LOCAL_STACK_FRAME(_hx_pos_8638deebd003aaa7_63_done,"buddy.reporting.ConsoleReporter","done",0xdd05b660,"buddy.reporting.ConsoleReporter.done","buddy/reporting/ConsoleReporter.hx",63,0x5e24b130)
HX_LOCAL_STACK_FRAME(_hx_pos_8638deebd003aaa7_85_print,"buddy.reporting.ConsoleReporter","print",0x72c0b48f,"buddy.reporting.ConsoleReporter.print","buddy/reporting/ConsoleReporter.hx",85,0x5e24b130)
HX_LOCAL_STACK_FRAME(_hx_pos_8638deebd003aaa7_97_println,"buddy.reporting.ConsoleReporter","println",0x2bc294d1,"buddy.reporting.ConsoleReporter.println","buddy/reporting/ConsoleReporter.hx",97,0x5e24b130)
namespace buddy{
namespace reporting{

void ConsoleReporter_obj::__construct(::hx::Null< bool >  __o_colors){
            		bool colors = __o_colors.Default(false);
            	HX_STACKFRAME(&_hx_pos_8638deebd003aaa7_23_new)
HXLINE(  25)		this->progressString = HX_("",00,00,00,00);
HXLINE(  28)		super::__construct(colors);
            	}

Dynamic ConsoleReporter_obj::__CreateEmpty() { return new ConsoleReporter_obj; }

void *ConsoleReporter_obj::_hx_vtable = 0;

Dynamic ConsoleReporter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConsoleReporter_obj > _hx_result = new ConsoleReporter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ConsoleReporter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4460327e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4460327e;
	} else {
		return inClassId==(int)0x54124f50;
	}
}

 ::promhx::Promise ConsoleReporter_obj::start(){
            	HX_STACKFRAME(&_hx_pos_8638deebd003aaa7_44_start)
HXDLIN(  44)		return this->resolveImmediately(true);
            	}


 ::promhx::Promise ConsoleReporter_obj::progress( ::buddy::Spec spec){
            	HX_STACKFRAME(&_hx_pos_8638deebd003aaa7_48_progress)
HXLINE(  49)		::String status;
HXDLIN(  49)		switch((int)(spec->status->_hx_getIndex())){
            			case (int)0: {
HXLINE(  49)				status = (this->strCol(33) + HX_("?",3f,00,00,00));
            			}
            			break;
            			case (int)1: {
HXLINE(  49)				status = (this->strCol(32) + HX_(".",2e,00,00,00));
            			}
            			break;
            			case (int)2: {
HXLINE(  49)				status = (this->strCol(33) + HX_("P",50,00,00,00));
            			}
            			break;
            			case (int)3: {
HXLINE(  49)				status = (this->strCol(31) + HX_("X",58,00,00,00));
            			}
            			break;
            		}
HXLINE(  56)		 ::buddy::reporting::ConsoleReporter _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  56)		_hx_tmp->progressString = (_hx_tmp->progressString + status);
HXLINE(  57)		this->print((status + this->strCol(39)));
HXLINE(  59)		return this->resolveImmediately(spec);
            	}


 ::promhx::Promise ConsoleReporter_obj::done( ::Dynamic suites,bool status){
            	HX_STACKFRAME(&_hx_pos_8638deebd003aaa7_63_done)
HXLINE(  68)		 ::promhx::Promise output = this->super::done(suites,status);
HXLINE(  80)		return output;
            	}


void ConsoleReporter_obj::print(::String s){
            	HX_STACKFRAME(&_hx_pos_8638deebd003aaa7_85_print)
HXDLIN(  85)		::Sys_obj::print(s);
            	}


void ConsoleReporter_obj::println(::String s){
            	HX_STACKFRAME(&_hx_pos_8638deebd003aaa7_97_println)
HXDLIN(  97)		::Sys_obj::println(s);
            	}



::hx::ObjectPtr< ConsoleReporter_obj > ConsoleReporter_obj::__new(::hx::Null< bool >  __o_colors) {
	::hx::ObjectPtr< ConsoleReporter_obj > __this = new ConsoleReporter_obj();
	__this->__construct(__o_colors);
	return __this;
}

::hx::ObjectPtr< ConsoleReporter_obj > ConsoleReporter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_colors) {
	ConsoleReporter_obj *__this = (ConsoleReporter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConsoleReporter_obj), true, "buddy.reporting.ConsoleReporter"));
	*(void **)__this = ConsoleReporter_obj::_hx_vtable;
	__this->__construct(__o_colors);
	return __this;
}

ConsoleReporter_obj::ConsoleReporter_obj()
{
}

void ConsoleReporter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleReporter);
	HX_MARK_MEMBER_NAME(progressString,"progressString");
	HX_MARK_END_CLASS();
}

void ConsoleReporter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(progressString,"progressString");
}

::hx::Val ConsoleReporter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return ::hx::Val( done_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"print") ) { return ::hx::Val( print_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { return ::hx::Val( println_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"progressString") ) { return ::hx::Val( progressString ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ConsoleReporter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"progressString") ) { progressString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleReporter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("progressString",5e,14,04,17));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConsoleReporter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ConsoleReporter_obj,progressString),HX_("progressString",5e,14,04,17)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ConsoleReporter_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleReporter_obj_sMemberFields[] = {
	HX_("progressString",5e,14,04,17),
	HX_("start",62,74,0b,84),
	HX_("progress",ad,f7,2a,86),
	HX_("done",82,f0,6d,42),
	HX_("print",2d,58,8b,c8),
	HX_("println",ef,db,33,84),
	::String(null()) };

::hx::Class ConsoleReporter_obj::__mClass;

void ConsoleReporter_obj::__register()
{
	ConsoleReporter_obj _hx_dummy;
	ConsoleReporter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.reporting.ConsoleReporter",50,67,ce,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConsoleReporter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConsoleReporter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleReporter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleReporter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
} // end namespace reporting
