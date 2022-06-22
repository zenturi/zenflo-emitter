#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_buddy_Should
#include <buddy/Should.h>
#endif
#ifndef INCLUDED_buddy_ShouldIterable
#include <buddy/ShouldIterable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_729b03ac345226d1_303_new,"buddy.ShouldIterable","new",0xe5f2afff,"buddy.ShouldIterable.new","buddy/Should.hx",303,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_729b03ac345226d1_307_get_not,"buddy.ShouldIterable","get_not",0x1b793cc9,"buddy.ShouldIterable.get_not","buddy/Should.hx",307,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_729b03ac345226d1_313_contain,"buddy.ShouldIterable","contain",0x0e251af3,"buddy.ShouldIterable.contain","buddy/Should.hx",313,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_729b03ac345226d1_323_containAll,"buddy.ShouldIterable","containAll",0x6757afee,"buddy.ShouldIterable.containAll","buddy/Should.hx",323,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_729b03ac345226d1_329_containAll,"buddy.ShouldIterable","containAll",0x6757afee,"buddy.ShouldIterable.containAll","buddy/Should.hx",329,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_729b03ac345226d1_346_containExactly,"buddy.ShouldIterable","containExactly",0xe6b79059,"buddy.ShouldIterable.containExactly","buddy/Should.hx",346,0x08252ac2)
HX_LOCAL_STACK_FRAME(_hx_pos_729b03ac345226d1_298_should,"buddy.ShouldIterable","should",0xe73e15f4,"buddy.ShouldIterable.should","buddy/Should.hx",298,0x08252ac2)
namespace buddy{

void ShouldIterable_obj::__construct( ::Dynamic value,::hx::Null< bool >  __o_inverse){
            		bool inverse = __o_inverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_729b03ac345226d1_303_new)
HXDLIN( 303)		super::__construct(value,inverse);
            	}

Dynamic ShouldIterable_obj::__CreateEmpty() { return new ShouldIterable_obj; }

void *ShouldIterable_obj::_hx_vtable = 0;

Dynamic ShouldIterable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShouldIterable_obj > _hx_result = new ShouldIterable_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShouldIterable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x132c4f2b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x132c4f2b;
	} else {
		return inClassId==(int)0x4fa58375;
	}
}

 ::buddy::ShouldIterable ShouldIterable_obj::get_not(){
            	HX_GC_STACKFRAME(&_hx_pos_729b03ac345226d1_307_get_not)
HXDLIN( 307)		return  ::buddy::ShouldIterable_obj::__alloc( HX_CTX ,this->value,!(this->inverse));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShouldIterable_obj,get_not,return )

void ShouldIterable_obj::contain( ::Dynamic o, ::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,o) HXARGC(1)
            		bool _hx_run( ::Dynamic el){
            			HX_STACKFRAME(&_hx_pos_729b03ac345226d1_313_contain)
HXDLIN( 313)			return ::hx::IsEq( el,o );
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_729b03ac345226d1_313_contain)
HXDLIN( 313)		bool _hx_tmp = ::Lambda_obj::exists(this->value, ::Dynamic(new _hx_Closure_0(o)));
HXLINE( 314)		::String _hx_tmp1 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to contain ",f1,c0,a8,87));
HXDLIN( 314)		::String _hx_tmp2 = (_hx_tmp1 + this->quote(o));
HXLINE( 315)		::String _hx_tmp3 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to contain ",64,8e,2c,76));
HXLINE( 313)		this->test(_hx_tmp,p,_hx_tmp2,(_hx_tmp3 + this->quote(o)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldIterable_obj,contain,(void))

void ShouldIterable_obj::containAll( ::Dynamic values, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_729b03ac345226d1_323_containAll)
HXLINE( 324)		bool expr = true;
HXLINE( 327)		{
HXLINE( 327)			 ::Dynamic a = values->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 327)			while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,a1) HXARGC(1)
            				bool _hx_run( ::Dynamic v){
            					HX_STACKFRAME(&_hx_pos_729b03ac345226d1_329_containAll)
HXLINE( 329)					return ::hx::IsEq( v,a1 );
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 327)				 ::Dynamic a1 = a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 329)				if (!(::Lambda_obj::exists(this->value, ::Dynamic(new _hx_Closure_0(a1))))) {
HXLINE( 331)					expr = false;
HXLINE( 332)					goto _hx_goto_4;
            				}
            			}
            			_hx_goto_4:;
            		}
HXLINE( 337)		::String _hx_tmp = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to contain all of ",d9,b3,5b,20));
HXDLIN( 337)		::String _hx_tmp1 = (_hx_tmp + this->quote(values));
HXLINE( 338)		::String _hx_tmp2 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to contain all of ",c6,ca,44,6f));
HXLINE( 336)		this->test(expr,p,_hx_tmp1,(_hx_tmp2 + this->quote(values)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldIterable_obj,containAll,(void))

void ShouldIterable_obj::containExactly( ::Dynamic values, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_729b03ac345226d1_346_containExactly)
HXLINE( 347)		 ::Dynamic a = this->value->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXLINE( 348)		 ::Dynamic b = values->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXLINE( 349)		bool expr = true;
HXLINE( 351)		while(true){
HXLINE( 351)			bool _hx_tmp;
HXDLIN( 351)			if (!(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ))) {
HXLINE( 351)				_hx_tmp = ( (bool)(b->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) );
            			}
            			else {
HXLINE( 351)				_hx_tmp = true;
            			}
HXDLIN( 351)			if (!(_hx_tmp)) {
HXLINE( 351)				goto _hx_goto_7;
            			}
HXLINE( 353)			 ::Dynamic _hx_tmp1 = a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 353)			if (::hx::IsNotEq( _hx_tmp1,b->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)() )) {
HXLINE( 355)				expr = false;
HXLINE( 356)				goto _hx_goto_7;
            			}
            		}
            		_hx_goto_7:;
HXLINE( 361)		::String _hx_tmp = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" to contain exactly ",85,d5,eb,38));
HXDLIN( 361)		::String _hx_tmp1 = (_hx_tmp + this->quote(values));
HXLINE( 362)		::String _hx_tmp2 = ((HX_("Expected ",88,5a,cb,8b) + this->quote(this->value)) + HX_(" not to contain exactly ",f8,cd,f6,f5));
HXLINE( 360)		this->test(expr,p,_hx_tmp1,(_hx_tmp2 + this->quote(values)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShouldIterable_obj,containExactly,(void))

 ::buddy::ShouldIterable ShouldIterable_obj::should( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_729b03ac345226d1_298_should)
HXDLIN( 298)		return  ::buddy::ShouldIterable_obj::__alloc( HX_CTX ,value,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShouldIterable_obj,should,return )


::hx::ObjectPtr< ShouldIterable_obj > ShouldIterable_obj::__new( ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	::hx::ObjectPtr< ShouldIterable_obj > __this = new ShouldIterable_obj();
	__this->__construct(value,__o_inverse);
	return __this;
}

::hx::ObjectPtr< ShouldIterable_obj > ShouldIterable_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::hx::Null< bool >  __o_inverse) {
	ShouldIterable_obj *__this = (ShouldIterable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShouldIterable_obj), true, "buddy.ShouldIterable"));
	*(void **)__this = ShouldIterable_obj::_hx_vtable;
	__this->__construct(value,__o_inverse);
	return __this;
}

ShouldIterable_obj::ShouldIterable_obj()
{
}

::hx::Val ShouldIterable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_not() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_not") ) { return ::hx::Val( get_not_dyn() ); }
		if (HX_FIELD_EQ(inName,"contain") ) { return ::hx::Val( contain_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"containAll") ) { return ::hx::Val( containAll_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"containExactly") ) { return ::hx::Val( containExactly_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShouldIterable_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"should") ) { outValue = should_dyn(); return true; }
	}
	return false;
}

void ShouldIterable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("not",13,d9,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShouldIterable_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShouldIterable_obj_sStaticStorageInfo = 0;
#endif

static ::String ShouldIterable_obj_sMemberFields[] = {
	HX_("get_not",aa,a1,c8,26),
	HX_("contain",d4,7f,74,19),
	HX_("containAll",ad,cd,77,c5),
	HX_("containExactly",98,f9,32,6d),
	::String(null()) };

::hx::Class ShouldIterable_obj::__mClass;

static ::String ShouldIterable_obj_sStaticFields[] = {
	HX_("should",33,a8,6e,26),
	::String(null())
};

void ShouldIterable_obj::__register()
{
	ShouldIterable_obj _hx_dummy;
	ShouldIterable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.ShouldIterable",8d,44,c5,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShouldIterable_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShouldIterable_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShouldIterable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShouldIterable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShouldIterable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShouldIterable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
