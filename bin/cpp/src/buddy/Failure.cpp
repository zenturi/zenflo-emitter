#include <hxcpp.h>

#ifndef INCLUDED_buddy_Failure
#include <buddy/Failure.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_058b53ff016036be_114_new,"buddy.Failure","new",0xcc40c2b4,"buddy.Failure.new","buddy/BuddySuite.hx",114,0x3b31e803)
namespace buddy{

void Failure_obj::__construct( ::Dynamic error,::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_058b53ff016036be_114_new)
HXLINE( 115)		if (::hx::IsNull( error )) {
HXLINE( 115)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Failure must have an error.",c2,27,49,9f)));
            		}
HXLINE( 116)		this->error = error;
HXLINE( 117)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 117)		if (::hx::IsNull( stack )) {
HXLINE( 117)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 117)			_hx_tmp = stack;
            		}
HXDLIN( 117)		this->stack = _hx_tmp;
            	}

Dynamic Failure_obj::__CreateEmpty() { return new Failure_obj; }

void *Failure_obj::_hx_vtable = 0;

Dynamic Failure_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Failure_obj > _hx_result = new Failure_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Failure_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2501772c;
}


::hx::ObjectPtr< Failure_obj > Failure_obj::__new( ::Dynamic error,::Array< ::Dynamic> stack) {
	::hx::ObjectPtr< Failure_obj > __this = new Failure_obj();
	__this->__construct(error,stack);
	return __this;
}

::hx::ObjectPtr< Failure_obj > Failure_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic error,::Array< ::Dynamic> stack) {
	Failure_obj *__this = (Failure_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Failure_obj), true, "buddy.Failure"));
	*(void **)__this = Failure_obj::_hx_vtable;
	__this->__construct(error,stack);
	return __this;
}

Failure_obj::Failure_obj()
{
}

void Failure_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Failure);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_END_CLASS();
}

void Failure_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(stack,"stack");
}

::hx::Val Failure_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"stack") ) { return ::hx::Val( stack ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Failure_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Failure_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	outFields->push(HX_("stack",48,67,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Failure_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Failure_obj,error),HX_("error",c8,cb,29,73)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Failure_obj,stack),HX_("stack",48,67,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Failure_obj_sStaticStorageInfo = 0;
#endif

static ::String Failure_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("stack",48,67,0b,84),
	::String(null()) };

::hx::Class Failure_obj::__mClass;

void Failure_obj::__register()
{
	Failure_obj _hx_dummy;
	Failure_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.Failure",c2,98,9c,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Failure_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Failure_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Failure_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Failure_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
