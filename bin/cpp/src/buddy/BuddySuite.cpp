#include <hxcpp.h>

#ifndef INCLUDED_buddy_BuddySuite
#include <buddy/BuddySuite.h>
#endif
#ifndef INCLUDED_buddy_TestFunc
#include <buddy/TestFunc.h>
#endif
#ifndef INCLUDED_buddy_TestSpec
#include <buddy/TestSpec.h>
#endif
#ifndef INCLUDED_buddy_TestSuite
#include <buddy/TestSuite.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_153_new,"buddy.BuddySuite","new",0xfb81f84c,"buddy.BuddySuite.new","buddy/BuddySuite.hx",153,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_190_describe,"buddy.BuddySuite","describe",0x0c6a509f,"buddy.BuddySuite.describe","buddy/BuddySuite.hx",190,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_204_xdescribe,"buddy.BuddySuite","xdescribe",0x94c4c96f,"buddy.BuddySuite.xdescribe","buddy/BuddySuite.hx",204,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_212_before,"buddy.BuddySuite","before",0xb314e813,"buddy.BuddySuite.before","buddy/BuddySuite.hx",212,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_218_after,"buddy.BuddySuite","after",0xde9b6108,"buddy.BuddySuite.after","buddy/BuddySuite.hx",218,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_223_beforeEach,"buddy.BuddySuite","beforeEach",0xe22b97b4,"buddy.BuddySuite.beforeEach","buddy/BuddySuite.hx",223,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_228_beforeAll,"buddy.BuddySuite","beforeAll",0xd7acd6ce,"buddy.BuddySuite.beforeAll","buddy/BuddySuite.hx",228,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_233_afterEach,"buddy.BuddySuite","afterEach",0x6f7a2f29,"buddy.BuddySuite.afterEach","buddy/BuddySuite.hx",233,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_238_afterAll,"buddy.BuddySuite","afterAll",0x1772a4f9,"buddy.BuddySuite.afterAll","buddy/BuddySuite.hx",238,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_246_it,"buddy.BuddySuite","it",0x7884957f,"buddy.BuddySuite.it","buddy/BuddySuite.hx",246,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_257_xit,"buddy.BuddySuite","xit",0xfb89924f,"buddy.BuddySuite.xit","buddy/BuddySuite.hx",257,0x3b31e803)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1c7f74864a5ae9_158_boot,"buddy.BuddySuite","boot",0x0e504ac6,"buddy.BuddySuite.boot","buddy/BuddySuite.hx",158,0x3b31e803)
namespace buddy{

void BuddySuite_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_153_new)
HXLINE( 182)		this->timeoutMs = 5000;
HXLINE( 175)		this->suite = (this->currentSuite =  ::buddy::TestSuite_obj::__alloc( HX_CTX ,HX_("",00,00,00,00)));
HXLINE( 176)		this->describeQueue = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic BuddySuite_obj::__CreateEmpty() { return new BuddySuite_obj; }

void *BuddySuite_obj::_hx_vtable = 0;

Dynamic BuddySuite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BuddySuite_obj > _hx_result = new BuddySuite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BuddySuite_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f5bf134;
}

void BuddySuite_obj::describe(::String description, ::buddy::TestFunc spec,::hx::Null< bool >  __o__hasInclude){
            		bool _hasInclude = __o__hasInclude.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_190_describe)
HXLINE( 191)		 ::buddy::TestSuite suite =  ::buddy::TestSuite_obj::__alloc( HX_CTX ,description);
HXLINE( 193)		this->currentSuite->specs->add(::buddy::TestSpec_obj::Describe(suite,_hasInclude));
HXLINE( 195)		this->describeQueue->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("suite",b8,be,ba,84),suite)
            			->setFixed(1,HX_("spec",3b,de,58,4c),spec)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(BuddySuite_obj,describe,(void))

void BuddySuite_obj::xdescribe(::String description, ::buddy::TestFunc spec,::hx::Null< bool >  __o__hasInclude){
            		bool _hasInclude = __o__hasInclude.Default(false);
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_204_xdescribe)
            	}


HX_DEFINE_DYNAMIC_FUNC3(BuddySuite_obj,xdescribe,(void))

void BuddySuite_obj::before( ::buddy::TestFunc init){
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_212_before)
HXDLIN( 212)		this->beforeEach(init);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuddySuite_obj,before,(void))

void BuddySuite_obj::after( ::buddy::TestFunc init){
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_218_after)
HXDLIN( 218)		this->afterEach(init);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuddySuite_obj,after,(void))

void BuddySuite_obj::beforeEach( ::buddy::TestFunc init){
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_223_beforeEach)
HXDLIN( 223)		this->currentSuite->beforeEach->add(init);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuddySuite_obj,beforeEach,(void))

void BuddySuite_obj::beforeAll( ::buddy::TestFunc init){
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_228_beforeAll)
HXDLIN( 228)		this->currentSuite->beforeAll->add(init);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuddySuite_obj,beforeAll,(void))

void BuddySuite_obj::afterEach( ::buddy::TestFunc init){
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_233_afterEach)
HXDLIN( 233)		this->currentSuite->afterEach->add(init);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuddySuite_obj,afterEach,(void))

void BuddySuite_obj::afterAll( ::buddy::TestFunc init){
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_238_afterAll)
HXDLIN( 238)		this->currentSuite->afterAll->add(init);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BuddySuite_obj,afterAll,(void))

void BuddySuite_obj::it(::String desc, ::buddy::TestFunc spec,::hx::Null< bool >  __o__hasInclude, ::Dynamic pos,::hx::Null< Float >  __o_time){
            		bool _hasInclude = __o__hasInclude.Default(false);
            		Float time = __o_time.Default(0);
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_246_it)
HXLINE( 247)		if (::hx::IsInstanceEq( this->currentSuite,this->suite )) {
HXLINE( 247)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot use 'it' outside of a describe block.",9e,69,40,0d)));
            		}
HXLINE( 248)		this->currentSuite->specs->add(::buddy::TestSpec_obj::It(desc,spec,_hasInclude,pos,time));
            	}


HX_DEFINE_DYNAMIC_FUNC5(BuddySuite_obj,it,(void))

void BuddySuite_obj::xit(::String desc, ::buddy::TestFunc spec,::hx::Null< bool >  __o__hasInclude, ::Dynamic pos,::hx::Null< Float >  __o_time){
            		bool _hasInclude = __o__hasInclude.Default(false);
            		Float time = __o_time.Default(0);
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_257_xit)
HXLINE( 258)		if (::hx::IsInstanceEq( this->currentSuite,this->suite )) {
HXLINE( 258)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot use 'it' outside of a describe block.",9e,69,40,0d)));
            		}
HXLINE( 259)		this->currentSuite->specs->add(::buddy::TestSpec_obj::It(desc,null(),_hasInclude,pos,time));
            	}


HX_DEFINE_DYNAMIC_FUNC5(BuddySuite_obj,xit,(void))

bool BuddySuite_obj::useDefaultTrace;


::hx::ObjectPtr< BuddySuite_obj > BuddySuite_obj::__new() {
	::hx::ObjectPtr< BuddySuite_obj > __this = new BuddySuite_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BuddySuite_obj > BuddySuite_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BuddySuite_obj *__this = (BuddySuite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BuddySuite_obj), true, "buddy.BuddySuite"));
	*(void **)__this = BuddySuite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BuddySuite_obj::BuddySuite_obj()
{
}

void BuddySuite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BuddySuite);
	HX_MARK_MEMBER_NAME(suite,"suite");
	HX_MARK_MEMBER_NAME(currentSuite,"currentSuite");
	HX_MARK_MEMBER_NAME(describeQueue,"describeQueue");
	HX_MARK_MEMBER_NAME(timeoutMs,"timeoutMs");
	HX_MARK_MEMBER_NAME(fail,"fail");
	HX_MARK_MEMBER_NAME(pending,"pending");
	HX_MARK_END_CLASS();
}

void BuddySuite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(suite,"suite");
	HX_VISIT_MEMBER_NAME(currentSuite,"currentSuite");
	HX_VISIT_MEMBER_NAME(describeQueue,"describeQueue");
	HX_VISIT_MEMBER_NAME(timeoutMs,"timeoutMs");
	HX_VISIT_MEMBER_NAME(fail,"fail");
	HX_VISIT_MEMBER_NAME(pending,"pending");
}

::hx::Val BuddySuite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"it") ) { return ::hx::Val( it_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xit") ) { return ::hx::Val( xit_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fail") ) { return ::hx::Val( fail ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"suite") ) { return ::hx::Val( suite ); }
		if (HX_FIELD_EQ(inName,"after") ) { return ::hx::Val( after_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"before") ) { return ::hx::Val( before_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { return ::hx::Val( pending ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"describe") ) { return ::hx::Val( describe_dyn() ); }
		if (HX_FIELD_EQ(inName,"afterAll") ) { return ::hx::Val( afterAll_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeoutMs") ) { return ::hx::Val( timeoutMs ); }
		if (HX_FIELD_EQ(inName,"xdescribe") ) { return ::hx::Val( xdescribe_dyn() ); }
		if (HX_FIELD_EQ(inName,"beforeAll") ) { return ::hx::Val( beforeAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"afterEach") ) { return ::hx::Val( afterEach_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beforeEach") ) { return ::hx::Val( beforeEach_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentSuite") ) { return ::hx::Val( currentSuite ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"describeQueue") ) { return ::hx::Val( describeQueue ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BuddySuite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"useDefaultTrace") ) { outValue = ( useDefaultTrace ); return true; }
	}
	return false;
}

::hx::Val BuddySuite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fail") ) { fail=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"suite") ) { suite=inValue.Cast<  ::buddy::TestSuite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeoutMs") ) { timeoutMs=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentSuite") ) { currentSuite=inValue.Cast<  ::buddy::TestSuite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"describeQueue") ) { describeQueue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BuddySuite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"useDefaultTrace") ) { useDefaultTrace=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void BuddySuite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("suite",b8,be,ba,84));
	outFields->push(HX_("currentSuite",bf,a3,c6,cb));
	outFields->push(HX_("describeQueue",86,45,fa,13));
	outFields->push(HX_("timeoutMs",67,08,ec,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BuddySuite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::buddy::TestSuite */ ,(int)offsetof(BuddySuite_obj,suite),HX_("suite",b8,be,ba,84)},
	{::hx::fsObject /*  ::buddy::TestSuite */ ,(int)offsetof(BuddySuite_obj,currentSuite),HX_("currentSuite",bf,a3,c6,cb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BuddySuite_obj,describeQueue),HX_("describeQueue",86,45,fa,13)},
	{::hx::fsInt,(int)offsetof(BuddySuite_obj,timeoutMs),HX_("timeoutMs",67,08,ec,58)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BuddySuite_obj,fail),HX_("fail",de,b9,b5,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BuddySuite_obj,pending),HX_("pending",57,98,ec,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BuddySuite_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &BuddySuite_obj::useDefaultTrace,HX_("useDefaultTrace",eb,10,5b,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BuddySuite_obj_sMemberFields[] = {
	HX_("suite",b8,be,ba,84),
	HX_("currentSuite",bf,a3,c6,cb),
	HX_("describeQueue",86,45,fa,13),
	HX_("timeoutMs",67,08,ec,58),
	HX_("describe",0b,b0,0c,07),
	HX_("xdescribe",83,e8,35,e8),
	HX_("before",7f,54,32,9a),
	HX_("after",1c,66,a2,1d),
	HX_("beforeEach",20,aa,b5,91),
	HX_("beforeAll",e2,f5,1d,2b),
	HX_("afterEach",3d,4e,eb,c2),
	HX_("afterAll",65,04,15,12),
	HX_("it",eb,5b,00,00),
	HX_("xit",63,6a,5b,00),
	HX_("fail",de,b9,b5,43),
	HX_("pending",57,98,ec,2b),
	::String(null()) };

static void BuddySuite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BuddySuite_obj::useDefaultTrace,"useDefaultTrace");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BuddySuite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BuddySuite_obj::useDefaultTrace,"useDefaultTrace");
};

#endif

::hx::Class BuddySuite_obj::__mClass;

static ::String BuddySuite_obj_sStaticFields[] = {
	HX_("useDefaultTrace",eb,10,5b,a3),
	::String(null())
};

void BuddySuite_obj::__register()
{
	BuddySuite_obj _hx_dummy;
	BuddySuite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.BuddySuite",5a,22,7d,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BuddySuite_obj::__GetStatic;
	__mClass->mSetStaticField = &BuddySuite_obj::__SetStatic;
	__mClass->mMarkFunc = BuddySuite_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BuddySuite_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BuddySuite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BuddySuite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BuddySuite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BuddySuite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BuddySuite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BuddySuite_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4e1c7f74864a5ae9_158_boot)
HXDLIN( 158)		useDefaultTrace = false;
            	}
}

} // end namespace buddy
