#include <hxcpp.h>

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_60229cd06399e630_7_new,"promhx.PublicStream","new",0x66598f19,"promhx.PublicStream.new","promhx/PublicStream.hx",7,0x819ebf96)
HX_LOCAL_STACK_FRAME(_hx_pos_60229cd06399e630_9_resolve,"promhx.PublicStream","resolve",0x5b3e2225,"promhx.PublicStream.resolve","promhx/PublicStream.hx",9,0x819ebf96)
HX_LOCAL_STACK_FRAME(_hx_pos_60229cd06399e630_10_throwError,"promhx.PublicStream","throwError",0x49a7ef29,"promhx.PublicStream.throwError","promhx/PublicStream.hx",10,0x819ebf96)
HX_LOCAL_STACK_FRAME(_hx_pos_60229cd06399e630_11_update,"promhx.PublicStream","update",0x02f300f0,"promhx.PublicStream.update","promhx/PublicStream.hx",11,0x819ebf96)
HX_LOCAL_STACK_FRAME(_hx_pos_60229cd06399e630_12_publicstream,"promhx.PublicStream","publicstream",0x4b8f1c10,"promhx.PublicStream.publicstream","promhx/PublicStream.hx",12,0x819ebf96)
namespace promhx{

void PublicStream_obj::__construct( ::promhx::Deferred def){
            	HX_STACKFRAME(&_hx_pos_60229cd06399e630_7_new)
HXDLIN(   7)		super::__construct(def);
            	}

Dynamic PublicStream_obj::__CreateEmpty() { return new PublicStream_obj; }

void *PublicStream_obj::_hx_vtable = 0;

Dynamic PublicStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PublicStream_obj > _hx_result = new PublicStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PublicStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12b0cfec) {
		if (inClassId<=(int)0x0809be59) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0809be59;
		} else {
			return inClassId==(int)0x12b0cfec;
		}
	} else {
		return inClassId==(int)0x24a248d0;
	}
}

void PublicStream_obj::resolve( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_60229cd06399e630_9_resolve)
HXDLIN(   9)		this->handleResolve(val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,resolve,(void))

void PublicStream_obj::throwError( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_60229cd06399e630_10_throwError)
HXDLIN(  10)		this->handleError(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,throwError,(void))

void PublicStream_obj::update( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_60229cd06399e630_11_update)
HXDLIN(  11)		this->handleResolve(val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,update,(void))

 ::promhx::PublicStream PublicStream_obj::publicstream( ::Dynamic val){
            	HX_GC_STACKFRAME(&_hx_pos_60229cd06399e630_12_publicstream)
HXLINE(  13)		 ::promhx::PublicStream ps =  ::promhx::PublicStream_obj::__alloc( HX_CTX ,null());
HXLINE(  14)		ps->handleResolve(val);
HXLINE(  15)		return ps;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,publicstream,return )


::hx::ObjectPtr< PublicStream_obj > PublicStream_obj::__new( ::promhx::Deferred def) {
	::hx::ObjectPtr< PublicStream_obj > __this = new PublicStream_obj();
	__this->__construct(def);
	return __this;
}

::hx::ObjectPtr< PublicStream_obj > PublicStream_obj::__alloc(::hx::Ctx *_hx_ctx, ::promhx::Deferred def) {
	PublicStream_obj *__this = (PublicStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PublicStream_obj), true, "promhx.PublicStream"));
	*(void **)__this = PublicStream_obj::_hx_vtable;
	__this->__construct(def);
	return __this;
}

PublicStream_obj::PublicStream_obj()
{
}

::hx::Val PublicStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"throwError") ) { return ::hx::Val( throwError_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PublicStream_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"publicstream") ) { outValue = publicstream_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PublicStream_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PublicStream_obj_sStaticStorageInfo = 0;
#endif

static ::String PublicStream_obj_sMemberFields[] = {
	HX_("resolve",ec,12,60,67),
	HX_("throwError",c2,74,e5,ee),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PublicStream_obj::__mClass;

static ::String PublicStream_obj_sStaticFields[] = {
	HX_("publicstream",e9,f9,6b,df),
	::String(null())
};

void PublicStream_obj::__register()
{
	PublicStream_obj _hx_dummy;
	PublicStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("promhx.PublicStream",a7,0e,94,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PublicStream_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PublicStream_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PublicStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PublicStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PublicStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PublicStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace promhx
