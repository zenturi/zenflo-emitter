#include <hxcpp.h>

#ifndef INCLUDED_buddy_TestSuite
#include <buddy/TestSuite.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5d6c032668443981_134_new,"buddy.TestSuite","new",0xca626b70,"buddy.TestSuite.new","buddy/BuddySuite.hx",134,0x3b31e803)
namespace buddy{

void TestSuite_obj::__construct(::String description){
            	HX_GC_STACKFRAME(&_hx_pos_5d6c032668443981_134_new)
HXLINE( 144)		this->afterAll =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 143)		this->afterEach =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 141)		this->specs =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 139)		this->beforeEach =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 138)		this->beforeAll =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 147)		if (::hx::IsNull( description )) {
HXLINE( 147)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TestSuite must have a description. Can be empty.",da,52,b5,e3)));
            		}
HXLINE( 148)		this->description = description;
            	}

Dynamic TestSuite_obj::__CreateEmpty() { return new TestSuite_obj; }

void *TestSuite_obj::_hx_vtable = 0;

Dynamic TestSuite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TestSuite_obj > _hx_result = new TestSuite_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TestSuite_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e852da0;
}


::hx::ObjectPtr< TestSuite_obj > TestSuite_obj::__new(::String description) {
	::hx::ObjectPtr< TestSuite_obj > __this = new TestSuite_obj();
	__this->__construct(description);
	return __this;
}

::hx::ObjectPtr< TestSuite_obj > TestSuite_obj::__alloc(::hx::Ctx *_hx_ctx,::String description) {
	TestSuite_obj *__this = (TestSuite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TestSuite_obj), true, "buddy.TestSuite"));
	*(void **)__this = TestSuite_obj::_hx_vtable;
	__this->__construct(description);
	return __this;
}

TestSuite_obj::TestSuite_obj()
{
}

void TestSuite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestSuite);
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(beforeAll,"beforeAll");
	HX_MARK_MEMBER_NAME(beforeEach,"beforeEach");
	HX_MARK_MEMBER_NAME(specs,"specs");
	HX_MARK_MEMBER_NAME(afterEach,"afterEach");
	HX_MARK_MEMBER_NAME(afterAll,"afterAll");
	HX_MARK_END_CLASS();
}

void TestSuite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(beforeAll,"beforeAll");
	HX_VISIT_MEMBER_NAME(beforeEach,"beforeEach");
	HX_VISIT_MEMBER_NAME(specs,"specs");
	HX_VISIT_MEMBER_NAME(afterEach,"afterEach");
	HX_VISIT_MEMBER_NAME(afterAll,"afterAll");
}

::hx::Val TestSuite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"specs") ) { return ::hx::Val( specs ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"afterAll") ) { return ::hx::Val( afterAll ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beforeAll") ) { return ::hx::Val( beforeAll ); }
		if (HX_FIELD_EQ(inName,"afterEach") ) { return ::hx::Val( afterEach ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beforeEach") ) { return ::hx::Val( beforeEach ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TestSuite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"specs") ) { specs=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"afterAll") ) { afterAll=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beforeAll") ) { beforeAll=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"afterEach") ) { afterEach=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beforeEach") ) { beforeEach=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestSuite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("beforeAll",e2,f5,1d,2b));
	outFields->push(HX_("beforeEach",20,aa,b5,91));
	outFields->push(HX_("specs",d8,95,69,81));
	outFields->push(HX_("afterEach",3d,4e,eb,c2));
	outFields->push(HX_("afterAll",65,04,15,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TestSuite_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TestSuite_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(TestSuite_obj,beforeAll),HX_("beforeAll",e2,f5,1d,2b)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(TestSuite_obj,beforeEach),HX_("beforeEach",20,aa,b5,91)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(TestSuite_obj,specs),HX_("specs",d8,95,69,81)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(TestSuite_obj,afterEach),HX_("afterEach",3d,4e,eb,c2)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(TestSuite_obj,afterAll),HX_("afterAll",65,04,15,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TestSuite_obj_sStaticStorageInfo = 0;
#endif

static ::String TestSuite_obj_sMemberFields[] = {
	HX_("description",fc,08,1d,5f),
	HX_("beforeAll",e2,f5,1d,2b),
	HX_("beforeEach",20,aa,b5,91),
	HX_("specs",d8,95,69,81),
	HX_("afterEach",3d,4e,eb,c2),
	HX_("afterAll",65,04,15,12),
	::String(null()) };

::hx::Class TestSuite_obj::__mClass;

void TestSuite_obj::__register()
{
	TestSuite_obj _hx_dummy;
	TestSuite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.TestSuite",7e,33,94,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TestSuite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TestSuite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TestSuite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TestSuite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
