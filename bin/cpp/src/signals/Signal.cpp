#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_signals_BaseSignal
#include <signals/BaseSignal.h>
#endif
#ifndef INCLUDED_signals_Signal
#include <signals/Signal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a9aa243fbac7a1c_25_new,"signals.Signal","new",0xd889d5fd,"signals.Signal.new","signals/Signal.hx",25,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9aa243fbac7a1c_28_dispatch,"signals.Signal","dispatch",0x51434ffd,"signals.Signal.dispatch","signals/Signal.hx",28,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9aa243fbac7a1c_34_dispatchCallback,"signals.Signal","dispatchCallback",0x1cf76ae2,"signals.Signal.dispatchCallback","signals/Signal.hx",34,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9aa243fbac7a1c_38_dispatchCallback1,"signals.Signal","dispatchCallback1",0x3b861b0f,"signals.Signal.dispatchCallback1","signals/Signal.hx",38,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9aa243fbac7a1c_42_dispatchCallback2,"signals.Signal","dispatchCallback2",0x3b861b10,"signals.Signal.dispatchCallback2","signals/Signal.hx",42,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9aa243fbac7a1c_46_dispatchCallback3,"signals.Signal","dispatchCallback3",0x3b861b11,"signals.Signal.dispatchCallback3","signals/Signal.hx",46,0x2c062ff2)
namespace signals{

void Signal_obj::__construct( ::Dynamic __o_fireOnAdd){
            		 ::Dynamic fireOnAdd = __o_fireOnAdd;
            		if (::hx::IsNull(__o_fireOnAdd)) fireOnAdd = false;
            	HX_STACKFRAME(&_hx_pos_8a9aa243fbac7a1c_25_new)
HXDLIN(  25)		super::__construct(fireOnAdd);
            	}

Dynamic Signal_obj::__CreateEmpty() { return new Signal_obj; }

void *Signal_obj::_hx_vtable = 0;

Dynamic Signal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Signal_obj > _hx_result = new Signal_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Signal_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0f646b04) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0f646b04;
	} else {
		return inClassId==(int)0x128c89af;
	}
}

void Signal_obj::dispatch(){
            	HX_STACKFRAME(&_hx_pos_8a9aa243fbac7a1c_28_dispatch)
HXLINE(  29)		if (this->requiresSort) {
HXLINE(  29)			this->callbacks->sort(this->sortCallbacks_dyn());
HXDLIN(  29)			this->requiresSort = false;
            		}
HXLINE(  30)		{
HXLINE(  30)			int i = 0;
HXDLIN(  30)			while((i < this->callbacks->length)){
HXLINE(  30)				 ::Dynamic callbackData = this->callbacks->__get(i);
HXDLIN(  30)				bool _hx_tmp;
HXDLIN(  30)				if (::hx::IsGreaterEq( callbackData->__Field(HX_("repeat",5b,97,7c,06),::hx::paccDynamic),0 )) {
HXLINE(  30)					_hx_tmp = ::hx::IsLessEq( callbackData->__Field(HX_("callCount",51,9f,a2,d6),::hx::paccDynamic),callbackData->__Field(HX_("repeat",5b,97,7c,06),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  30)					_hx_tmp = true;
            				}
HXDLIN(  30)				if (_hx_tmp) {
HXLINE(  30)					this->toTrigger->push(callbackData);
            				}
            				else {
HXLINE(  30)					callbackData->__SetField(HX_("remove",44,9c,88,04),true,::hx::paccDynamic);
            				}
HXDLIN(  30)				::hx::FieldRef((callbackData).mPtr,HX_("callCount",51,9f,a2,d6))++;
HXDLIN(  30)				i = (i + 1);
            			}
HXDLIN(  30)			int j = (this->callbacks->length - 1);
HXDLIN(  30)			while((j >= 0)){
HXLINE(  30)				 ::Dynamic callbackData = this->callbacks->__get(j);
HXDLIN(  30)				if (::hx::IsEq( callbackData->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic),true )) {
HXLINE(  30)					this->callbacks->removeRange(j,1);
            				}
HXDLIN(  30)				j = (j - 1);
            			}
HXDLIN(  30)			{
HXLINE(  30)				int _g = 0;
HXDLIN(  30)				int _g1 = this->toTrigger->length;
HXDLIN(  30)				while((_g < _g1)){
HXLINE(  30)					_g = (_g + 1);
HXDLIN(  30)					int l = (_g - 1);
HXDLIN(  30)					if (::hx::IsNotNull( this->toTrigger->__get(l) )) {
HXLINE(  30)						this->toTrigger->__get(l)->__Field(HX_("dispatchMethod",3b,01,ba,44),::hx::paccDynamic)( ::Dynamic(this->toTrigger->__get(l)->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic)));
            					}
            				}
            			}
HXDLIN(  30)			this->toTrigger = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,dispatch,(void))

void Signal_obj::dispatchCallback( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_8a9aa243fbac7a1c_34_dispatchCallback)
HXDLIN(  34)		callback();
            	}


void Signal_obj::dispatchCallback1( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_8a9aa243fbac7a1c_38_dispatchCallback1)
HXDLIN(  38)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Use Signal 1",b2,6f,f6,52)));
            	}


void Signal_obj::dispatchCallback2( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_8a9aa243fbac7a1c_42_dispatchCallback2)
HXDLIN(  42)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Use Signal 2",b3,6f,f6,52)));
            	}


void Signal_obj::dispatchCallback3( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_8a9aa243fbac7a1c_46_dispatchCallback3)
HXDLIN(  46)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Use Signal 3",b4,6f,f6,52)));
            	}



::hx::ObjectPtr< Signal_obj > Signal_obj::__new( ::Dynamic __o_fireOnAdd) {
	::hx::ObjectPtr< Signal_obj > __this = new Signal_obj();
	__this->__construct(__o_fireOnAdd);
	return __this;
}

::hx::ObjectPtr< Signal_obj > Signal_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_fireOnAdd) {
	Signal_obj *__this = (Signal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Signal_obj), true, "signals.Signal"));
	*(void **)__this = Signal_obj::_hx_vtable;
	__this->__construct(__o_fireOnAdd);
	return __this;
}

Signal_obj::Signal_obj()
{
}

::hx::Val Signal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Signal_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Signal_obj_sStaticStorageInfo = 0;
#endif

static ::String Signal_obj_sMemberFields[] = {
	HX_("dispatch",ba,ce,63,1e),
	HX_("dispatchCallback",9f,6e,00,98),
	HX_("dispatchCallback1",b2,5c,60,68),
	HX_("dispatchCallback2",b3,5c,60,68),
	HX_("dispatchCallback3",b4,5c,60,68),
	::String(null()) };

::hx::Class Signal_obj::__mClass;

void Signal_obj::__register()
{
	Signal_obj _hx_dummy;
	Signal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("signals.Signal",8b,13,16,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Signal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Signal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Signal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Signal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace signals
