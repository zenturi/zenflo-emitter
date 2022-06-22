#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_signals_BaseSignal
#include <signals/BaseSignal.h>
#endif
#ifndef INCLUDED_signals_Signal1
#include <signals/Signal1.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e009eb6acb3def00_12_new,"signals.Signal1","new",0x2ffe4238,"signals.Signal1.new","signals/Signal1.hx",12,0x5b335779)
HX_LOCAL_STACK_FRAME(_hx_pos_e009eb6acb3def00_17_dispatch,"signals.Signal1","dispatch",0x9755ade2,"signals.Signal1.dispatch","signals/Signal1.hx",17,0x5b335779)
HX_LOCAL_STACK_FRAME(_hx_pos_e009eb6acb3def00_25_dispatchCallback,"signals.Signal1","dispatchCallback",0x2a21b5c7,"signals.Signal1.dispatchCallback","signals/Signal1.hx",25,0x5b335779)
HX_LOCAL_STACK_FRAME(_hx_pos_e009eb6acb3def00_29_dispatchCallback1,"signals.Signal1","dispatchCallback1",0xb35d588a,"signals.Signal1.dispatchCallback1","signals/Signal1.hx",29,0x5b335779)
HX_LOCAL_STACK_FRAME(_hx_pos_e009eb6acb3def00_33_dispatchCallback2,"signals.Signal1","dispatchCallback2",0xb35d588b,"signals.Signal1.dispatchCallback2","signals/Signal1.hx",33,0x5b335779)
HX_LOCAL_STACK_FRAME(_hx_pos_e009eb6acb3def00_37_dispatchCallback3,"signals.Signal1","dispatchCallback3",0xb35d588c,"signals.Signal1.dispatchCallback3","signals/Signal1.hx",37,0x5b335779)
namespace signals{

void Signal1_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e009eb6acb3def00_12_new)
HXLINE(  13)		super::__construct(null());
HXLINE(  14)		this->valence = 1;
            	}

Dynamic Signal1_obj::__CreateEmpty() { return new Signal1_obj; }

void *Signal1_obj::_hx_vtable = 0;

Dynamic Signal1_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Signal1_obj > _hx_result = new Signal1_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Signal1_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0f646b04) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0f646b04;
	} else {
		return inClassId==(int)0x2f50063e;
	}
}

void Signal1_obj::dispatch( ::Dynamic value1){
            	HX_STACKFRAME(&_hx_pos_e009eb6acb3def00_17_dispatch)
HXLINE(  18)		if (this->requiresSort) {
HXLINE(  18)			this->callbacks->sort(this->sortCallbacks_dyn());
HXDLIN(  18)			this->requiresSort = false;
            		}
HXLINE(  19)		this->value = value1;
HXLINE(  20)		{
HXLINE(  20)			int i = 0;
HXDLIN(  20)			while((i < this->callbacks->length)){
HXLINE(  20)				 ::Dynamic callbackData = this->callbacks->__get(i);
HXDLIN(  20)				bool _hx_tmp;
HXDLIN(  20)				if (::hx::IsGreaterEq( callbackData->__Field(HX_("repeat",5b,97,7c,06),::hx::paccDynamic),0 )) {
HXLINE(  20)					_hx_tmp = ::hx::IsLessEq( callbackData->__Field(HX_("callCount",51,9f,a2,d6),::hx::paccDynamic),callbackData->__Field(HX_("repeat",5b,97,7c,06),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  20)					_hx_tmp = true;
            				}
HXDLIN(  20)				if (_hx_tmp) {
HXLINE(  20)					this->toTrigger->push(callbackData);
            				}
            				else {
HXLINE(  20)					callbackData->__SetField(HX_("remove",44,9c,88,04),true,::hx::paccDynamic);
            				}
HXDLIN(  20)				::hx::FieldRef((callbackData).mPtr,HX_("callCount",51,9f,a2,d6))++;
HXDLIN(  20)				i = (i + 1);
            			}
HXDLIN(  20)			int j = (this->callbacks->length - 1);
HXDLIN(  20)			while((j >= 0)){
HXLINE(  20)				 ::Dynamic callbackData = this->callbacks->__get(j);
HXDLIN(  20)				if (::hx::IsEq( callbackData->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic),true )) {
HXLINE(  20)					this->callbacks->removeRange(j,1);
            				}
HXDLIN(  20)				j = (j - 1);
            			}
HXDLIN(  20)			{
HXLINE(  20)				int _g = 0;
HXDLIN(  20)				int _g1 = this->toTrigger->length;
HXDLIN(  20)				while((_g < _g1)){
HXLINE(  20)					_g = (_g + 1);
HXDLIN(  20)					int l = (_g - 1);
HXDLIN(  20)					if (::hx::IsNotNull( this->toTrigger->__get(l) )) {
HXLINE(  20)						this->toTrigger->__get(l)->__Field(HX_("dispatchMethod",3b,01,ba,44),::hx::paccDynamic)( ::Dynamic(this->toTrigger->__get(l)->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic)));
            					}
            				}
            			}
HXDLIN(  20)			this->toTrigger = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  21)		this->value = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Signal1_obj,dispatch,(void))

void Signal1_obj::dispatchCallback( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_e009eb6acb3def00_25_dispatchCallback)
HXDLIN(  25)		callback();
            	}


void Signal1_obj::dispatchCallback1( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_e009eb6acb3def00_29_dispatchCallback1)
HXDLIN(  29)		callback(this->value);
            	}


void Signal1_obj::dispatchCallback2( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_e009eb6acb3def00_33_dispatchCallback2)
HXDLIN(  33)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Use Signal 2",b3,6f,f6,52)));
            	}


void Signal1_obj::dispatchCallback3( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_e009eb6acb3def00_37_dispatchCallback3)
HXDLIN(  37)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Use Signal 3",b4,6f,f6,52)));
            	}



::hx::ObjectPtr< Signal1_obj > Signal1_obj::__new() {
	::hx::ObjectPtr< Signal1_obj > __this = new Signal1_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Signal1_obj > Signal1_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Signal1_obj *__this = (Signal1_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Signal1_obj), true, "signals.Signal1"));
	*(void **)__this = Signal1_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Signal1_obj::Signal1_obj()
{
}

void Signal1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Signal1);
	HX_MARK_MEMBER_NAME(value,"value");
	 ::signals::BaseSignal_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Signal1_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::signals::BaseSignal_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Signal1_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dispatchCallback") ) { return ::hx::Val( dispatchCallback_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dispatchCallback1") ) { return ::hx::Val( dispatchCallback1_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchCallback2") ) { return ::hx::Val( dispatchCallback2_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchCallback3") ) { return ::hx::Val( dispatchCallback3_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Signal1_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Signal1_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Signal1_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Signal1_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Signal1_obj_sStaticStorageInfo = 0;
#endif

static ::String Signal1_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("dispatch",ba,ce,63,1e),
	HX_("dispatchCallback",9f,6e,00,98),
	HX_("dispatchCallback1",b2,5c,60,68),
	HX_("dispatchCallback2",b3,5c,60,68),
	HX_("dispatchCallback3",b4,5c,60,68),
	::String(null()) };

::hx::Class Signal1_obj::__mClass;

void Signal1_obj::__register()
{
	Signal1_obj _hx_dummy;
	Signal1_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("signals.Signal1",46,06,3b,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Signal1_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Signal1_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Signal1_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Signal1_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace signals
