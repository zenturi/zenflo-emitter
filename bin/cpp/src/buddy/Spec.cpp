#include <hxcpp.h>

#ifndef INCLUDED_buddy_Failure
#include <buddy/Failure.h>
#endif
#ifndef INCLUDED_buddy_Spec
#include <buddy/Spec.h>
#endif
#ifndef INCLUDED_buddy_SpecStatus
#include <buddy/SpecStatus.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_63ae5e7b006ec0f6_92_new,"buddy.Spec","new",0x75c0f935,"buddy.Spec.new","buddy/BuddySuite.hx",92,0x3b31e803)
namespace buddy{

void Spec_obj::__construct(::String description,::String fileName){
            	HX_STACKFRAME(&_hx_pos_63ae5e7b006ec0f6_92_new)
HXLINE(  99)		this->time = ((Float)0);
HXLINE(  98)		this->fileName = HX_("",00,00,00,00);
HXLINE(  97)		this->traces = ::Array_obj< ::String >::__new();
HXLINE(  96)		this->failures = ::Array_obj< ::Dynamic>::__new();
HXLINE(  95)		this->status = ::buddy::SpecStatus_obj::Unknown_dyn();
HXLINE( 102)		if (::hx::IsNull( description )) {
HXLINE( 102)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Spec must have a description.",57,be,2f,6d)));
            		}
HXLINE( 103)		this->description = description;
HXLINE( 104)		this->fileName = fileName;
            	}

Dynamic Spec_obj::__CreateEmpty() { return new Spec_obj; }

void *Spec_obj::_hx_vtable = 0;

Dynamic Spec_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Spec_obj > _hx_result = new Spec_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Spec_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cf273e1;
}


::hx::ObjectPtr< Spec_obj > Spec_obj::__new(::String description,::String fileName) {
	::hx::ObjectPtr< Spec_obj > __this = new Spec_obj();
	__this->__construct(description,fileName);
	return __this;
}

::hx::ObjectPtr< Spec_obj > Spec_obj::__alloc(::hx::Ctx *_hx_ctx,::String description,::String fileName) {
	Spec_obj *__this = (Spec_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Spec_obj), true, "buddy.Spec"));
	*(void **)__this = Spec_obj::_hx_vtable;
	__this->__construct(description,fileName);
	return __this;
}

Spec_obj::Spec_obj()
{
}

void Spec_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spec);
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(failures,"failures");
	HX_MARK_MEMBER_NAME(traces,"traces");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_END_CLASS();
}

void Spec_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(failures,"failures");
	HX_VISIT_MEMBER_NAME(traces,"traces");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
	HX_VISIT_MEMBER_NAME(time,"time");
}

::hx::Val Spec_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		if (HX_FIELD_EQ(inName,"traces") ) { return ::hx::Val( traces ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"failures") ) { return ::hx::Val( failures ); }
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Spec_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast<  ::buddy::SpecStatus >(); return inValue; }
		if (HX_FIELD_EQ(inName,"traces") ) { traces=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"failures") ) { failures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spec_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("failures",e9,d0,27,04));
	outFields->push(HX_("traces",4e,26,7d,45));
	outFields->push(HX_("fileName",e7,5a,43,62));
	outFields->push(HX_("time",0d,cc,fc,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Spec_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Spec_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsObject /*  ::buddy::SpecStatus */ ,(int)offsetof(Spec_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Spec_obj,failures),HX_("failures",e9,d0,27,04)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Spec_obj,traces),HX_("traces",4e,26,7d,45)},
	{::hx::fsString,(int)offsetof(Spec_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{::hx::fsFloat,(int)offsetof(Spec_obj,time),HX_("time",0d,cc,fc,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Spec_obj_sStaticStorageInfo = 0;
#endif

static ::String Spec_obj_sMemberFields[] = {
	HX_("description",fc,08,1d,5f),
	HX_("status",32,e7,fb,05),
	HX_("failures",e9,d0,27,04),
	HX_("traces",4e,26,7d,45),
	HX_("fileName",e7,5a,43,62),
	HX_("time",0d,cc,fc,4c),
	::String(null()) };

::hx::Class Spec_obj::__mClass;

void Spec_obj::__register()
{
	Spec_obj _hx_dummy;
	Spec_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.Spec",c3,3a,bd,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Spec_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Spec_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Spec_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Spec_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
