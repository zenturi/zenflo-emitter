#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_signals_BaseSignal
#include <signals/BaseSignal.h>
#endif
#ifndef INCLUDED_signals_Signal1
#include <signals/Signal1.h>
#endif
#ifndef INCLUDED_zenflo_lib_EventEmitter
#include <zenflo/lib/EventEmitter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad689bea036b6bf9_15_new,"zenflo.lib.EventEmitter","new",0x62254757,"zenflo.lib.EventEmitter.new","zenflo/lib/EventEmitter.hx",15,0x777dfdb7)
HX_LOCAL_STACK_FRAME(_hx_pos_ad689bea036b6bf9_24_createName,"zenflo.lib.EventEmitter","createName",0xb6229950,"zenflo.lib.EventEmitter.createName","zenflo/lib/EventEmitter.hx",24,0x777dfdb7)
HX_LOCAL_STACK_FRAME(_hx_pos_ad689bea036b6bf9_27_emit,"zenflo.lib.EventEmitter","emit",0x788c3f7c,"zenflo.lib.EventEmitter.emit","zenflo/lib/EventEmitter.hx",27,0x777dfdb7)
HX_LOCAL_STACK_FRAME(_hx_pos_ad689bea036b6bf9_36_on,"zenflo.lib.EventEmitter","on",0x49e93608,"zenflo.lib.EventEmitter.on","zenflo/lib/EventEmitter.hx",36,0x777dfdb7)
HX_LOCAL_STACK_FRAME(_hx_pos_ad689bea036b6bf9_51_once,"zenflo.lib.EventEmitter","once",0x7f291eaa,"zenflo.lib.EventEmitter.once","zenflo/lib/EventEmitter.hx",51,0x777dfdb7)
HX_LOCAL_STACK_FRAME(_hx_pos_ad689bea036b6bf9_54_removeAllListeners,"zenflo.lib.EventEmitter","removeAllListeners",0xfc1ad56b,"zenflo.lib.EventEmitter.removeAllListeners","zenflo/lib/EventEmitter.hx",54,0x777dfdb7)
HX_LOCAL_STACK_FRAME(_hx_pos_ad689bea036b6bf9_63_removeListener,"zenflo.lib.EventEmitter","removeListener",0x6c914b41,"zenflo.lib.EventEmitter.removeListener","zenflo/lib/EventEmitter.hx",63,0x777dfdb7)
HX_LOCAL_STACK_FRAME(_hx_pos_ad689bea036b6bf9_72_hasSubject,"zenflo.lib.EventEmitter","hasSubject",0x0ed14f5b,"zenflo.lib.EventEmitter.hasSubject","zenflo/lib/EventEmitter.hx",72,0x777dfdb7)
namespace zenflo{
namespace lib{

void EventEmitter_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ad689bea036b6bf9_15_new)
HXLINE(  19)		this->listeners =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  17)		this->subjects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic EventEmitter_obj::__CreateEmpty() { return new EventEmitter_obj; }

void *EventEmitter_obj::_hx_vtable = 0;

Dynamic EventEmitter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventEmitter_obj > _hx_result = new EventEmitter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventEmitter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x176922b3;
}

::String EventEmitter_obj::createName(::String name){
            	HX_STACKFRAME(&_hx_pos_ad689bea036b6bf9_24_createName)
HXDLIN(  24)		return (HX_("$ ",7c,1f,00,00) + name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventEmitter_obj,createName,return )

void EventEmitter_obj::emit(::String name,::cpp::VirtualArray data){
            	HX_STACKFRAME(&_hx_pos_ad689bea036b6bf9_27_emit)
HXLINE(  28)		::String fnName = this->createName(name);
HXLINE(  29)		if (this->subjects->exists(fnName)) {
HXLINE(  30)			::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  30)			{
HXLINE(  30)				int _g1_current = 0;
HXDLIN(  30)				::cpp::VirtualArray _g1_args = data;
HXDLIN(  30)				while((_g1_current < _g1_args->get_length())){
HXLINE(  30)					_g1_current = (_g1_current + 1);
HXDLIN(  30)					 ::Dynamic v = _g1_args->__get((_g1_current - 1));
HXDLIN(  30)					_g->push(v);
            				}
            			}
HXDLIN(  30)			::cpp::VirtualArray x = _g;
HXLINE(  31)			 ::signals::Signal1 fs = ( ( ::signals::Signal1)(this->subjects->get(fnName)) );
HXLINE(  32)			fs->dispatch(x);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventEmitter_obj,emit,(void))

void EventEmitter_obj::on(::String name, ::Dynamic handler,::hx::Null< bool >  __o_once){
            		bool once = __o_once.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_ad689bea036b6bf9_36_on)
HXLINE(  37)		::String fnName = this->createName(name);
HXLINE(  38)		if (!(this->subjects->exists(fnName))) {
HXLINE(  39)			::Dynamic this1 = this->subjects;
HXDLIN(  39)			( ( ::haxe::ds::StringMap)(this1) )->set(fnName, ::signals::Signal1_obj::__alloc( HX_CTX ));
            		}
HXLINE(  42)		 ::signals::Signal1 fs = ( ( ::signals::Signal1)(this->subjects->get(fnName)) );
HXLINE(  43)		fs->add(handler,once,null(),null());
HXLINE(  44)		if (!(this->listeners->exists(fnName))) {
HXLINE(  45)			this->listeners->set(fnName,::Array_obj< ::Dynamic>::__new(0));
            		}
HXLINE(  47)		( (::Array< ::Dynamic>)(this->listeners->get(fnName)) )->unshift(handler);
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventEmitter_obj,on,(void))

void EventEmitter_obj::once(::String name, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_ad689bea036b6bf9_51_once)
HXDLIN(  51)		this->on(name,handler,true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventEmitter_obj,once,(void))

void EventEmitter_obj::removeAllListeners(){
            	HX_STACKFRAME(&_hx_pos_ad689bea036b6bf9_54_removeAllListeners)
HXLINE(  55)		{
HXLINE(  55)			::Dynamic map = this->listeners;
HXDLIN(  55)			::Dynamic _g_map = map;
HXDLIN(  55)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN(  55)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  55)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  55)				::Array< ::Dynamic> _g1_value = ( (::Array< ::Dynamic>)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN(  55)				::String _g1_key = key;
HXDLIN(  55)				::String k = _g1_key;
HXDLIN(  55)				::Array< ::Dynamic> v = _g1_value;
HXDLIN(  55)				{
HXLINE(  56)					 ::signals::Signal1 fs = ( ( ::signals::Signal1)(this->subjects->get(k)) );
HXLINE(  57)					if (::hx::IsNotNull( fs )) {
HXLINE(  58)						fs->remove(true);
            					}
            				}
            			}
            		}
HXLINE(  60)		this->subjects->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventEmitter_obj,removeAllListeners,(void))

void EventEmitter_obj::removeListener(::String name, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_ad689bea036b6bf9_63_removeListener)
HXLINE(  64)		::String fnName = this->createName(name);
HXLINE(  65)		if (this->subjects->exists(fnName)) {
HXLINE(  66)			 ::signals::Signal1 fs = ( ( ::signals::Signal1)(this->subjects->get(fnName)) );
HXLINE(  67)			if (::hx::IsNotNull( fs )) {
HXLINE(  68)				fs->remove(handler);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventEmitter_obj,removeListener,(void))

bool EventEmitter_obj::hasSubject(::String name){
            	HX_STACKFRAME(&_hx_pos_ad689bea036b6bf9_72_hasSubject)
HXLINE(  73)		::String fnName = this->createName(name);
HXLINE(  74)		return this->subjects->exists(fnName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventEmitter_obj,hasSubject,return )


::hx::ObjectPtr< EventEmitter_obj > EventEmitter_obj::__new() {
	::hx::ObjectPtr< EventEmitter_obj > __this = new EventEmitter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EventEmitter_obj > EventEmitter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EventEmitter_obj *__this = (EventEmitter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventEmitter_obj), true, "zenflo.lib.EventEmitter"));
	*(void **)__this = EventEmitter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventEmitter_obj::EventEmitter_obj()
{
}

void EventEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventEmitter);
	HX_MARK_MEMBER_NAME(subjects,"subjects");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_END_CLASS();
}

void EventEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(subjects,"subjects");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
}

::hx::Val EventEmitter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return ::hx::Val( on_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		if (HX_FIELD_EQ(inName,"once") ) { return ::hx::Val( once_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subjects") ) { return ::hx::Val( subjects ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return ::hx::Val( listeners ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createName") ) { return ::hx::Val( createName_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasSubject") ) { return ::hx::Val( hasSubject_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeListener") ) { return ::hx::Val( removeListener_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeAllListeners") ) { return ::hx::Val( removeAllListeners_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventEmitter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"subjects") ) { subjects=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("subjects",47,75,79,2d));
	outFields->push(HX_("listeners",7f,65,8e,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventEmitter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(EventEmitter_obj,subjects),HX_("subjects",47,75,79,2d)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(EventEmitter_obj,listeners),HX_("listeners",7f,65,8e,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventEmitter_obj_sStaticStorageInfo = 0;
#endif

static ::String EventEmitter_obj_sMemberFields[] = {
	HX_("subjects",47,75,79,2d),
	HX_("listeners",7f,65,8e,f3),
	HX_("createName",67,33,8d,5b),
	HX_("emit",53,9e,15,43),
	HX_("on",1f,61,00,00),
	HX_("once",81,7d,b2,49),
	HX_("removeAllListeners",82,de,5f,48),
	HX_("removeListener",d8,3c,88,02),
	HX_("hasSubject",72,e9,3b,b4),
	::String(null()) };

::hx::Class EventEmitter_obj::__mClass;

void EventEmitter_obj::__register()
{
	EventEmitter_obj _hx_dummy;
	EventEmitter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("zenflo.lib.EventEmitter",e5,4f,53,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventEmitter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventEmitter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventEmitter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventEmitter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace zenflo
} // end namespace lib
