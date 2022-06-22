#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_21_enqueue,"promhx.base.EventLoop","enqueue",0x80ee21f9,"promhx.base.EventLoop.enqueue","promhx/base/EventLoop.hx",21,0x2999339f)
HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_25_set_nextLoop,"promhx.base.EventLoop","set_nextLoop",0xe6204163,"promhx.base.EventLoop.set_nextLoop","promhx/base/EventLoop.hx",25,0x2999339f)
HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_35_queueEmpty,"promhx.base.EventLoop","queueEmpty",0x3890026b,"promhx.base.EventLoop.queueEmpty","promhx/base/EventLoop.hx",35,0x2999339f)
HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_43_finish,"promhx.base.EventLoop","finish",0x786ef002,"promhx.base.EventLoop.finish","promhx/base/EventLoop.hx",43,0x2999339f)
HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_55_clear,"promhx.base.EventLoop","clear",0x59838cbe,"promhx.base.EventLoop.clear","promhx/base/EventLoop.hx",55,0x2999339f)
HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_58_f,"promhx.base.EventLoop","f",0xed6c6f17,"promhx.base.EventLoop.f","promhx/base/EventLoop.hx",58,0x2999339f)
HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_65_continueOnNextLoop,"promhx.base.EventLoop","continueOnNextLoop",0x5bda26ac,"promhx.base.EventLoop.continueOnNextLoop","promhx/base/EventLoop.hx",65,0x2999339f)
HX_LOCAL_STACK_FRAME(_hx_pos_6766e99af356dbea_6_boot,"promhx.base.EventLoop","boot",0xa9a69a21,"promhx.base.EventLoop.boot","promhx/base/EventLoop.hx",6,0x2999339f)
namespace promhx{
namespace base{

void EventLoop_obj::__construct() { }

Dynamic EventLoop_obj::__CreateEmpty() { return new EventLoop_obj; }

void *EventLoop_obj::_hx_vtable = 0;

Dynamic EventLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventLoop_obj > _hx_result = new EventLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0caee939;
}

 ::haxe::ds::List EventLoop_obj::queue;

 ::Dynamic EventLoop_obj::nextLoop;

void EventLoop_obj::enqueue( ::Dynamic eqf){
            	HX_STACKFRAME(&_hx_pos_6766e99af356dbea_21_enqueue)
HXLINE(  22)		::promhx::base::EventLoop_obj::queue->add(eqf);
HXLINE(  23)		::promhx::base::EventLoop_obj::continueOnNextLoop();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,enqueue,(void))

 ::Dynamic EventLoop_obj::set_nextLoop( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_6766e99af356dbea_25_set_nextLoop)
HXLINE(  26)		if (::hx::IsNotNull( ::promhx::base::EventLoop_obj::nextLoop )) {
HXLINE(  26)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("nextLoop has already been set",45,f1,73,2b)));
            		}
            		else {
HXLINE(  27)			::promhx::base::EventLoop_obj::nextLoop = f;
            		}
HXLINE(  28)		return ::promhx::base::EventLoop_obj::nextLoop;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,set_nextLoop,return )

bool EventLoop_obj::queueEmpty(){
            	HX_STACKFRAME(&_hx_pos_6766e99af356dbea_35_queueEmpty)
HXDLIN(  35)		return ::promhx::base::EventLoop_obj::queue->isEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,queueEmpty,return )

bool EventLoop_obj::finish(::hx::Null< int >  __o_max_iterations){
            		int max_iterations = __o_max_iterations.Default(1000);
            	HX_STACKFRAME(&_hx_pos_6766e99af356dbea_43_finish)
HXLINE(  44)		 ::Dynamic fn = null();
HXLINE(  45)		while(true){
HXLINE(  45)			bool _hx_tmp;
HXDLIN(  45)			max_iterations = (max_iterations - 1);
HXDLIN(  45)			if (((max_iterations + 1) > 0)) {
HXLINE(  45)				fn = ::promhx::base::EventLoop_obj::queue->pop();
HXDLIN(  45)				_hx_tmp = ::hx::IsNotNull( fn );
            			}
            			else {
HXLINE(  45)				_hx_tmp = false;
            			}
HXDLIN(  45)			if (!(_hx_tmp)) {
HXLINE(  45)				goto _hx_goto_3;
            			}
HXLINE(  46)			fn();
            		}
            		_hx_goto_3:;
HXLINE(  48)		return ::promhx::base::EventLoop_obj::queue->isEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,finish,return )

void EventLoop_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_6766e99af356dbea_55_clear)
HXDLIN(  55)		::promhx::base::EventLoop_obj::queue =  ::haxe::ds::List_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,clear,(void))

void EventLoop_obj::f(){
            	HX_STACKFRAME(&_hx_pos_6766e99af356dbea_58_f)
HXLINE(  59)		 ::Dynamic fn = ::promhx::base::EventLoop_obj::queue->pop();
HXLINE(  60)		if (::hx::IsNotNull( fn )) {
HXLINE(  60)			fn();
            		}
HXLINE(  61)		if (!(::promhx::base::EventLoop_obj::queue->isEmpty())) {
HXLINE(  61)			::promhx::base::EventLoop_obj::continueOnNextLoop();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,f,(void))

void EventLoop_obj::continueOnNextLoop(){
            	HX_STACKFRAME(&_hx_pos_6766e99af356dbea_65_continueOnNextLoop)
HXDLIN(  65)		if (::hx::IsNotNull( ::promhx::base::EventLoop_obj::nextLoop )) {
HXDLIN(  65)			::promhx::base::EventLoop_obj::nextLoop(::promhx::base::EventLoop_obj::f_dyn());
            		}
            		else {
HXLINE(  77)			::promhx::base::EventLoop_obj::f();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,continueOnNextLoop,(void))


EventLoop_obj::EventLoop_obj()
{
}

bool EventLoop_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { outValue = f_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = ( queue ); return true; }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { outValue = finish_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enqueue") ) { outValue = enqueue_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextLoop") ) { outValue = ( nextLoop ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"queueEmpty") ) { outValue = queueEmpty_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_nextLoop") ) { outValue = set_nextLoop_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"continueOnNextLoop") ) { outValue = continueOnNextLoop_dyn(); return true; }
	}
	return false;
}

bool EventLoop_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=ioValue.Cast<  ::haxe::ds::List >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextLoop") ) { nextLoop=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EventLoop_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo EventLoop_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::List */ ,(void *) &EventLoop_obj::queue,HX_("queue",91,8d,ea,5d)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &EventLoop_obj::nextLoop,HX_("nextLoop",f7,4c,84,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void EventLoop_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventLoop_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(EventLoop_obj::nextLoop,"nextLoop");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventLoop_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventLoop_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(EventLoop_obj::nextLoop,"nextLoop");
};

#endif

::hx::Class EventLoop_obj::__mClass;

static ::String EventLoop_obj_sStaticFields[] = {
	HX_("queue",91,8d,ea,5d),
	HX_("nextLoop",f7,4c,84,f3),
	HX_("enqueue",88,18,24,c1),
	HX_("set_nextLoop",74,24,97,bd),
	HX_("queueEmpty",3c,4f,7d,40),
	HX_("finish",53,40,7f,86),
	HX_("clear",8d,71,5b,48),
	HX_("f",66,00,00,00),
	HX_("continueOnNextLoop",7d,2c,0a,7b),
	::String(null())
};

void EventLoop_obj::__register()
{
	EventLoop_obj _hx_dummy;
	EventLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("promhx.base.EventLoop",df,10,df,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventLoop_obj::__GetStatic;
	__mClass->mSetStaticField = &EventLoop_obj::__SetStatic;
	__mClass->mMarkFunc = EventLoop_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EventLoop_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EventLoop_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventLoop_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EventLoop_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_6766e99af356dbea_6_boot)
HXDLIN(   6)		queue =  ::haxe::ds::List_obj::__alloc( HX_CTX );
            	}
}

} // end namespace promhx
} // end namespace base
