#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_signals_BaseSignal
#include <signals/BaseSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a87166716eb3cfd_51_new,"signals.BaseSignal","new",0xb7d46eee,"signals.BaseSignal.new","signals/Signal.hx",51,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_84_sortPriority,"signals.BaseSignal","sortPriority",0x2cb60c94,"signals.BaseSignal.sortPriority","signals/Signal.hx",84,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_90_dispatchCallbacks,"signals.BaseSignal","dispatchCallbacks",0x300c1802,"signals.BaseSignal.dispatchCallbacks","signals/Signal.hx",90,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_122_dispatchCallback,"signals.BaseSignal","dispatchCallback",0x26194f51,"signals.BaseSignal.dispatchCallback","signals/Signal.hx",122,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_126_dispatchCallback1,"signals.BaseSignal","dispatchCallback1",0x300c17c0,"signals.BaseSignal.dispatchCallback1","signals/Signal.hx",126,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_130_dispatchCallback2,"signals.BaseSignal","dispatchCallback2",0x300c17c1,"signals.BaseSignal.dispatchCallback2","signals/Signal.hx",130,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_134_dispatchCallback3,"signals.BaseSignal","dispatchCallback3",0x300c17c2,"signals.BaseSignal.dispatchCallback3","signals/Signal.hx",134,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_138_sortCallbacks,"signals.BaseSignal","sortCallbacks",0x7de76bde,"signals.BaseSignal.sortCallbacks","signals/Signal.hx",138,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_147_get_numListeners,"signals.BaseSignal","get_numListeners",0x2db63b94,"signals.BaseSignal.get_numListeners","signals/Signal.hx",147,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_151_get_hasListeners,"signals.BaseSignal","get_hasListeners",0x13981800,"signals.BaseSignal.get_hasListeners","signals/Signal.hx",151,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_164_add,"signals.BaseSignal","add",0xb7ca90af,"signals.BaseSignal.add","signals/Signal.hx",164,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_215_getNumParams,"signals.BaseSignal","getNumParams",0xa59d0268,"signals.BaseSignal.getNumParams","signals/Signal.hx",215,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_225_priority,"signals.BaseSignal","priority",0xfd6e5a16,"signals.BaseSignal.priority","signals/Signal.hx",225,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_241_repeat,"signals.BaseSignal","repeat",0xcc8f058d,"signals.BaseSignal.repeat","signals/Signal.hx",241,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_253_fireOnAdd,"signals.BaseSignal","fireOnAdd",0xd5bcebba,"signals.BaseSignal.fireOnAdd","signals/Signal.hx",253,0x2c062ff2)
HX_LOCAL_STACK_FRAME(_hx_pos_5a87166716eb3cfd_261_remove,"signals.BaseSignal","remove",0xca9b0a76,"signals.BaseSignal.remove","signals/Signal.hx",261,0x2c062ff2)
namespace signals{

void BaseSignal_obj::__construct( ::Dynamic __o_fireOnAdd){
            		 ::Dynamic fireOnAdd = __o_fireOnAdd;
            		if (::hx::IsNull(__o_fireOnAdd)) fireOnAdd = false;
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_51_new)
HXLINE(  77)		this->valence = 0;
HXLINE(  75)		this->requiresSort = false;
HXLINE(  74)		this->toTrigger = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  73)		this->callbacks = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  70)		this->_fireOnAdd = false;
HXLINE(  80)		this->_fireOnAdd = ( (bool)(fireOnAdd) );
            	}

Dynamic BaseSignal_obj::__CreateEmpty() { return new BaseSignal_obj; }

void *BaseSignal_obj::_hx_vtable = 0;

Dynamic BaseSignal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseSignal_obj > _hx_result = new BaseSignal_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseSignal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f646b04;
}

void BaseSignal_obj::sortPriority(){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_84_sortPriority)
HXDLIN(  84)		if (this->requiresSort) {
HXLINE(  85)			this->callbacks->sort(this->sortCallbacks_dyn());
HXLINE(  86)			this->requiresSort = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSignal_obj,sortPriority,(void))

void BaseSignal_obj::dispatchCallbacks(){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_90_dispatchCallbacks)
HXLINE(  91)		int i = 0;
HXLINE(  92)		while((i < this->callbacks->length)){
HXLINE(  93)			 ::Dynamic callbackData = this->callbacks->__get(i);
HXLINE(  94)			bool _hx_tmp;
HXDLIN(  94)			if (::hx::IsGreaterEq( callbackData->__Field(HX_("repeat",5b,97,7c,06),::hx::paccDynamic),0 )) {
HXLINE(  94)				_hx_tmp = ::hx::IsLessEq( callbackData->__Field(HX_("callCount",51,9f,a2,d6),::hx::paccDynamic),callbackData->__Field(HX_("repeat",5b,97,7c,06),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  94)				_hx_tmp = true;
            			}
HXDLIN(  94)			if (_hx_tmp) {
HXLINE(  95)				this->toTrigger->push(callbackData);
            			}
            			else {
HXLINE(  97)				callbackData->__SetField(HX_("remove",44,9c,88,04),true,::hx::paccDynamic);
            			}
HXLINE(  99)			::hx::FieldRef((callbackData).mPtr,HX_("callCount",51,9f,a2,d6))++;
HXLINE( 100)			i = (i + 1);
            		}
HXLINE( 104)		int j = (this->callbacks->length - 1);
HXLINE( 105)		while((j >= 0)){
HXLINE( 106)			 ::Dynamic callbackData = this->callbacks->__get(j);
HXLINE( 107)			if (::hx::IsEq( callbackData->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic),true )) {
HXLINE( 108)				this->callbacks->removeRange(j,1);
            			}
HXLINE( 110)			j = (j - 1);
            		}
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			int _g1 = this->toTrigger->length;
HXDLIN( 113)			while((_g < _g1)){
HXLINE( 113)				_g = (_g + 1);
HXDLIN( 113)				int l = (_g - 1);
HXLINE( 114)				if (::hx::IsNotNull( this->toTrigger->__get(l) )) {
HXLINE( 115)					this->toTrigger->__get(l)->__Field(HX_("dispatchMethod",3b,01,ba,44),::hx::paccDynamic)( ::Dynamic(this->toTrigger->__get(l)->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic)));
            				}
            			}
            		}
HXLINE( 118)		this->toTrigger = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSignal_obj,dispatchCallbacks,(void))

void BaseSignal_obj::dispatchCallback( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_122_dispatchCallback)
HXDLIN( 122)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("implement in override",ea,4f,31,cd)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,dispatchCallback,(void))

void BaseSignal_obj::dispatchCallback1( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_126_dispatchCallback1)
HXDLIN( 126)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("implement in override",ea,4f,31,cd)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,dispatchCallback1,(void))

void BaseSignal_obj::dispatchCallback2( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_130_dispatchCallback2)
HXDLIN( 130)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("implement in override",ea,4f,31,cd)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,dispatchCallback2,(void))

void BaseSignal_obj::dispatchCallback3( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_134_dispatchCallback3)
HXDLIN( 134)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("implement in override",ea,4f,31,cd)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,dispatchCallback3,(void))

int BaseSignal_obj::sortCallbacks( ::Dynamic s1, ::Dynamic s2){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_138_sortCallbacks)
HXDLIN( 138)		if (::hx::IsGreater( s1->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),s2->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic) )) {
HXLINE( 139)			return -1;
            		}
            		else {
HXLINE( 140)			if (::hx::IsLess( s1->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic),s2->__Field(HX_("priority",64,7b,3e,bb),::hx::paccDynamic) )) {
HXLINE( 141)				return 1;
            			}
            			else {
HXLINE( 143)				return 0;
            			}
            		}
HXLINE( 138)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseSignal_obj,sortCallbacks,return )

int BaseSignal_obj::get_numListeners(){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_147_get_numListeners)
HXDLIN( 147)		return this->callbacks->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSignal_obj,get_numListeners,return )

bool BaseSignal_obj::get_hasListeners(){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_151_get_hasListeners)
HXDLIN( 151)		return (this->get_numListeners() > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSignal_obj,get_hasListeners,return )

 ::signals::BaseSignal BaseSignal_obj::add( ::Dynamic callback, ::Dynamic __o_fireOnce, ::Dynamic __o_priority, ::Dynamic fireOnAdd){
            		 ::Dynamic fireOnce = __o_fireOnce;
            		if (::hx::IsNull(__o_fireOnce)) fireOnce = false;
            		 ::Dynamic priority = __o_priority;
            		if (::hx::IsNull(__o_priority)) priority = 0;
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_164_add)
HXLINE( 165)		bool _hx_tmp;
HXDLIN( 165)		bool _hx_tmp1;
HXDLIN( 165)		if (::hx::IsEq( fireOnce,false )) {
HXLINE( 165)			_hx_tmp1 = ::hx::IsNotEq( priority,0 );
            		}
            		else {
HXLINE( 165)			_hx_tmp1 = true;
            		}
HXDLIN( 165)		if (!(_hx_tmp1)) {
HXLINE( 165)			_hx_tmp = ::hx::IsNotNull( fireOnAdd );
            		}
            		else {
HXLINE( 165)			_hx_tmp = true;
            		}
HXDLIN( 165)		if (_hx_tmp) {
HXLINE( 166)			::String warningMessage = HX_("\nWARNING: fireOnce, priority and fireOnAdd params will be removed from 'Signals' in a future release\nInstead use daisy chain methods, eg: obj.add(callback).repeat(5).priority(1000).fireOnAdd();",9d,f6,f8,10);
HXLINE( 170)			::haxe::Log_obj::trace(warningMessage,::hx::SourceInfo(HX_("signals/Signal.hx",f2,2f,06,2c),170,HX_("signals.BaseSignal",fc,1f,a3,86),HX_("add",21,f2,49,00)));
            		}
HXLINE( 174)		int numParams = this->getNumParams(callback);
HXLINE( 175)		int repeat = -1;
HXLINE( 176)		if (::hx::IsEq( fireOnce,true )) {
HXLINE( 177)			repeat = 0;
            		}
HXLINE( 178)		this->currentCallback =  ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("priority",64,7b,3e,bb),priority)
            			->setFixed(1,HX_("callCount",51,9f,a2,d6),0)
            			->setFixed(2,HX_("params",46,fb,7a,ed),numParams)
            			->setFixed(3,HX_("remove",44,9c,88,04),false)
            			->setFixed(4,HX_("repeat",5b,97,7c,06),repeat)
            			->setFixed(5,HX_("callback",c5,99,06,7f),callback));
HXLINE( 186)		if ((numParams == 0)) {
HXLINE( 187)			this->currentCallback->__SetField(HX_("dispatchMethod",3b,01,ba,44),this->dispatchCallback_dyn(),::hx::paccDynamic);
            		}
            		else {
HXLINE( 188)			if ((numParams == 1)) {
HXLINE( 189)				this->currentCallback->__SetField(HX_("dispatchMethod",3b,01,ba,44),this->dispatchCallback1_dyn(),::hx::paccDynamic);
            			}
            			else {
HXLINE( 190)				if ((numParams == 2)) {
HXLINE( 191)					this->currentCallback->__SetField(HX_("dispatchMethod",3b,01,ba,44),this->dispatchCallback2_dyn(),::hx::paccDynamic);
            				}
            				else {
HXLINE( 192)					if ((numParams == 3)) {
HXLINE( 193)						this->currentCallback->__SetField(HX_("dispatchMethod",3b,01,ba,44),this->dispatchCallback3_dyn(),::hx::paccDynamic);
            					}
            				}
            			}
            		}
HXLINE( 196)		this->callbacks->push(this->currentCallback);
HXLINE( 198)		if (::hx::IsNotEq( priority,0 )) {
HXLINE( 199)			this->requiresSort = true;
            		}
HXLINE( 201)		bool _hx_tmp2;
HXDLIN( 201)		if (::hx::IsNotEq( fireOnAdd,true )) {
HXLINE( 201)			_hx_tmp2 = (this->_fireOnAdd == true);
            		}
            		else {
HXLINE( 201)			_hx_tmp2 = true;
            		}
HXDLIN( 201)		if (_hx_tmp2) {
HXLINE( 202)			this->currentCallback->__Field(HX_("dispatchMethod",3b,01,ba,44),::hx::paccDynamic)(callback);
            		}
HXLINE( 205)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(BaseSignal_obj,add,return )

int BaseSignal_obj::getNumParams( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_215_getNumParams)
HXDLIN( 215)		return this->valence;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,getNumParams,return )

 ::signals::BaseSignal BaseSignal_obj::priority(int value){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_225_priority)
HXLINE( 226)		if (::hx::IsNull( this->currentCallback )) {
HXLINE( 227)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 228)		this->currentCallback->__SetField(HX_("priority",64,7b,3e,bb),value,::hx::paccDynamic);
HXLINE( 230)		this->requiresSort = true;
HXLINE( 231)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,priority,return )

 ::signals::BaseSignal BaseSignal_obj::repeat(::hx::Null< int >  __o_value){
            		int value = __o_value.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_241_repeat)
HXLINE( 242)		if (::hx::IsNull( this->currentCallback )) {
HXLINE( 243)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 244)		this->currentCallback->__SetField(HX_("repeat",5b,97,7c,06),value,::hx::paccDynamic);
HXLINE( 245)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,repeat,return )

void BaseSignal_obj::fireOnAdd(){
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_253_fireOnAdd)
HXLINE( 254)		if (::hx::IsNull( this->currentCallback )) {
HXLINE( 255)			return;
            		}
HXLINE( 256)		::hx::FieldRef((this->currentCallback).mPtr,HX_("callCount",51,9f,a2,d6))++;
HXLINE( 257)		this->currentCallback->__Field(HX_("dispatchMethod",3b,01,ba,44),::hx::paccDynamic)( ::Dynamic(this->currentCallback->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSignal_obj,fireOnAdd,(void))

void BaseSignal_obj::remove( ::Dynamic __o_callback){
            		 ::Dynamic callback = __o_callback;
            		if (::hx::IsNull(__o_callback)) callback = false;
            	HX_STACKFRAME(&_hx_pos_5a87166716eb3cfd_261_remove)
HXDLIN( 261)		if (::hx::IsEq( callback,true )) {
HXLINE( 262)			this->callbacks = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 264)			int j = 0;
HXLINE( 265)			while((j < this->callbacks->length)){
HXLINE( 266)				if (::hx::IsEq( this->callbacks->__get(j)->__Field(HX_("callback",c5,99,06,7f),::hx::paccDynamic),callback )) {
HXLINE( 267)					this->callbacks->removeRange(j,1);
            				}
            				else {
HXLINE( 269)					j = (j + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSignal_obj,remove,(void))


::hx::ObjectPtr< BaseSignal_obj > BaseSignal_obj::__new( ::Dynamic __o_fireOnAdd) {
	::hx::ObjectPtr< BaseSignal_obj > __this = new BaseSignal_obj();
	__this->__construct(__o_fireOnAdd);
	return __this;
}

::hx::ObjectPtr< BaseSignal_obj > BaseSignal_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_fireOnAdd) {
	BaseSignal_obj *__this = (BaseSignal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseSignal_obj), true, "signals.BaseSignal"));
	*(void **)__this = BaseSignal_obj::_hx_vtable;
	__this->__construct(__o_fireOnAdd);
	return __this;
}

BaseSignal_obj::BaseSignal_obj()
{
}

void BaseSignal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseSignal);
	HX_MARK_MEMBER_NAME(numListeners,"numListeners");
	HX_MARK_MEMBER_NAME(hasListeners,"hasListeners");
	HX_MARK_MEMBER_NAME(_fireOnAdd,"_fireOnAdd");
	HX_MARK_MEMBER_NAME(currentCallback,"currentCallback");
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(toTrigger,"toTrigger");
	HX_MARK_MEMBER_NAME(requiresSort,"requiresSort");
	HX_MARK_MEMBER_NAME(valence,"valence");
	HX_MARK_END_CLASS();
}

void BaseSignal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numListeners,"numListeners");
	HX_VISIT_MEMBER_NAME(hasListeners,"hasListeners");
	HX_VISIT_MEMBER_NAME(_fireOnAdd,"_fireOnAdd");
	HX_VISIT_MEMBER_NAME(currentCallback,"currentCallback");
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(toTrigger,"toTrigger");
	HX_VISIT_MEMBER_NAME(requiresSort,"requiresSort");
	HX_VISIT_MEMBER_NAME(valence,"valence");
}

::hx::Val BaseSignal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return ::hx::Val( repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"valence") ) { return ::hx::Val( valence ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		if (HX_FIELD_EQ(inName,"toTrigger") ) { return ::hx::Val( toTrigger ); }
		if (HX_FIELD_EQ(inName,"fireOnAdd") ) { return ::hx::Val( fireOnAdd_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fireOnAdd") ) { return ::hx::Val( _fireOnAdd ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numListeners") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_numListeners() : numListeners ); }
		if (HX_FIELD_EQ(inName,"hasListeners") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasListeners() : hasListeners ); }
		if (HX_FIELD_EQ(inName,"requiresSort") ) { return ::hx::Val( requiresSort ); }
		if (HX_FIELD_EQ(inName,"sortPriority") ) { return ::hx::Val( sortPriority_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNumParams") ) { return ::hx::Val( getNumParams_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sortCallbacks") ) { return ::hx::Val( sortCallbacks_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentCallback") ) { return ::hx::Val( currentCallback ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dispatchCallback") ) { return ::hx::Val( dispatchCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numListeners") ) { return ::hx::Val( get_numListeners_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hasListeners") ) { return ::hx::Val( get_hasListeners_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dispatchCallbacks") ) { return ::hx::Val( dispatchCallbacks_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchCallback1") ) { return ::hx::Val( dispatchCallback1_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchCallback2") ) { return ::hx::Val( dispatchCallback2_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchCallback3") ) { return ::hx::Val( dispatchCallback3_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseSignal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"valence") ) { valence=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toTrigger") ) { toTrigger=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fireOnAdd") ) { _fireOnAdd=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numListeners") ) { numListeners=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasListeners") ) { hasListeners=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"requiresSort") ) { requiresSort=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentCallback") ) { currentCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseSignal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numListeners",59,6e,fe,9a));
	outFields->push(HX_("hasListeners",c5,4a,e0,80));
	outFields->push(HX_("_fireOnAdd",6d,6a,ac,89));
	outFields->push(HX_("currentCallback",1e,53,58,53));
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("toTrigger",fd,8c,73,55));
	outFields->push(HX_("requiresSort",ec,33,c4,32));
	outFields->push(HX_("valence",ac,be,df,65));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseSignal_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BaseSignal_obj,numListeners),HX_("numListeners",59,6e,fe,9a)},
	{::hx::fsBool,(int)offsetof(BaseSignal_obj,hasListeners),HX_("hasListeners",c5,4a,e0,80)},
	{::hx::fsBool,(int)offsetof(BaseSignal_obj,_fireOnAdd),HX_("_fireOnAdd",6d,6a,ac,89)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseSignal_obj,currentCallback),HX_("currentCallback",1e,53,58,53)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BaseSignal_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BaseSignal_obj,toTrigger),HX_("toTrigger",fd,8c,73,55)},
	{::hx::fsBool,(int)offsetof(BaseSignal_obj,requiresSort),HX_("requiresSort",ec,33,c4,32)},
	{::hx::fsInt,(int)offsetof(BaseSignal_obj,valence),HX_("valence",ac,be,df,65)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseSignal_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseSignal_obj_sMemberFields[] = {
	HX_("numListeners",59,6e,fe,9a),
	HX_("hasListeners",c5,4a,e0,80),
	HX_("_fireOnAdd",6d,6a,ac,89),
	HX_("currentCallback",1e,53,58,53),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("toTrigger",fd,8c,73,55),
	HX_("requiresSort",ec,33,c4,32),
	HX_("valence",ac,be,df,65),
	HX_("sortPriority",e2,ec,eb,34),
	HX_("dispatchCallbacks",f4,5c,60,68),
	HX_("dispatchCallback",9f,6e,00,98),
	HX_("dispatchCallback1",b2,5c,60,68),
	HX_("dispatchCallback2",b3,5c,60,68),
	HX_("dispatchCallback3",b4,5c,60,68),
	HX_("sortCallbacks",d0,cf,d5,a4),
	HX_("get_numListeners",e2,5a,9d,9f),
	HX_("get_hasListeners",4e,37,7f,85),
	HX_("add",21,f2,49,00),
	HX_("getNumParams",b6,e2,d2,ad),
	HX_("priority",64,7b,3e,bb),
	HX_("repeat",5b,97,7c,06),
	HX_("fireOnAdd",ac,ee,09,2e),
	HX_("remove",44,9c,88,04),
	::String(null()) };

::hx::Class BaseSignal_obj::__mClass;

void BaseSignal_obj::__register()
{
	BaseSignal_obj _hx_dummy;
	BaseSignal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("signals.BaseSignal",fc,1f,a3,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseSignal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseSignal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseSignal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseSignal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace signals
