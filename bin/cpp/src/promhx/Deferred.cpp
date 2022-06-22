#include <hxcpp.h>

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_PublicStream
#include <promhx/PublicStream.h>
#endif
#ifndef INCLUDED_promhx_Stream
#include <promhx/Stream.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69f44335cf1ad923_7_new,"promhx.Deferred","new",0x84e3bc2f,"promhx.Deferred.new","promhx/Deferred.hx",7,0x3c9a8bc0)
HX_LOCAL_STACK_FRAME(_hx_pos_69f44335cf1ad923_12_resolve,"promhx.Deferred","resolve",0x39b3923b,"promhx.Deferred.resolve","promhx/Deferred.hx",12,0x3c9a8bc0)
HX_LOCAL_STACK_FRAME(_hx_pos_69f44335cf1ad923_14_throwError,"promhx.Deferred","throwError",0x38c330d3,"promhx.Deferred.throwError","promhx/Deferred.hx",14,0x3c9a8bc0)
HX_LOCAL_STACK_FRAME(_hx_pos_69f44335cf1ad923_20_promise,"promhx.Deferred","promise",0xca3d4cea,"promhx.Deferred.promise","promhx/Deferred.hx",20,0x3c9a8bc0)
HX_LOCAL_STACK_FRAME(_hx_pos_69f44335cf1ad923_27_stream,"promhx.Deferred","stream",0x6df53411,"promhx.Deferred.stream","promhx/Deferred.hx",27,0x3c9a8bc0)
HX_LOCAL_STACK_FRAME(_hx_pos_69f44335cf1ad923_34_publicStream,"promhx.Deferred","publicStream",0xddd2105a,"promhx.Deferred.publicStream","promhx/Deferred.hx",34,0x3c9a8bc0)
namespace promhx{

void Deferred_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_69f44335cf1ad923_7_new)
HXDLIN(   7)		super::__construct(null());
            	}

Dynamic Deferred_obj::__CreateEmpty() { return new Deferred_obj; }

void *Deferred_obj::_hx_vtable = 0;

Dynamic Deferred_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Deferred_obj > _hx_result = new Deferred_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Deferred_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12b0cfec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12b0cfec;
	} else {
		return inClassId==(int)0x7f9f1bf3;
	}
}

void Deferred_obj::resolve( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_69f44335cf1ad923_12_resolve)
HXDLIN(  12)		this->handleResolve(val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Deferred_obj,resolve,(void))

void Deferred_obj::throwError( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_69f44335cf1ad923_14_throwError)
HXDLIN(  14)		this->handleError(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Deferred_obj,throwError,(void))

 ::promhx::Promise Deferred_obj::promise(){
            	HX_GC_STACKFRAME(&_hx_pos_69f44335cf1ad923_20_promise)
HXDLIN(  20)		return  ::promhx::Promise_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Deferred_obj,promise,return )

 ::promhx::Stream Deferred_obj::stream(){
            	HX_GC_STACKFRAME(&_hx_pos_69f44335cf1ad923_27_stream)
HXDLIN(  27)		return  ::promhx::Stream_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Deferred_obj,stream,return )

 ::promhx::PublicStream Deferred_obj::publicStream(){
            	HX_GC_STACKFRAME(&_hx_pos_69f44335cf1ad923_34_publicStream)
HXDLIN(  34)		return  ::promhx::PublicStream_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Deferred_obj,publicStream,return )


::hx::ObjectPtr< Deferred_obj > Deferred_obj::__new() {
	::hx::ObjectPtr< Deferred_obj > __this = new Deferred_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Deferred_obj > Deferred_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Deferred_obj *__this = (Deferred_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Deferred_obj), true, "promhx.Deferred"));
	*(void **)__this = Deferred_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Deferred_obj::Deferred_obj()
{
}

::hx::Val Deferred_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { return ::hx::Val( stream_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		if (HX_FIELD_EQ(inName,"promise") ) { return ::hx::Val( promise_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"throwError") ) { return ::hx::Val( throwError_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"publicStream") ) { return ::hx::Val( publicStream_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Deferred_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Deferred_obj_sStaticStorageInfo = 0;
#endif

static ::String Deferred_obj_sMemberFields[] = {
	HX_("resolve",ec,12,60,67),
	HX_("throwError",c2,74,e5,ee),
	HX_("promise",9b,cd,e9,f7),
	HX_("stream",80,14,2d,11),
	HX_("publicStream",09,6e,00,14),
	::String(null()) };

::hx::Class Deferred_obj::__mClass;

void Deferred_obj::__register()
{
	Deferred_obj _hx_dummy;
	Deferred_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("promhx.Deferred",bd,78,d0,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Deferred_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Deferred_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Deferred_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Deferred_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace promhx
