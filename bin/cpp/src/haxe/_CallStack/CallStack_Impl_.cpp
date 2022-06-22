#include <hxcpp.h>

#ifndef INCLUDED_haxe_NativeStackTrace
#include <haxe/NativeStackTrace.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_422e130a97e2d2f5_52_callStack,"haxe._CallStack.CallStack_Impl_","callStack",0x30d63cab,"haxe._CallStack.CallStack_Impl_.callStack","/usr/local/lib/haxe/std/haxe/CallStack.hx",52,0x6022c9c0)
HX_LOCAL_STACK_FRAME(_hx_pos_422e130a97e2d2f5_63_exceptionStack,"haxe._CallStack.CallStack_Impl_","exceptionStack",0x933cbdf8,"haxe._CallStack.CallStack_Impl_.exceptionStack","/usr/local/lib/haxe/std/haxe/CallStack.hx",63,0x6022c9c0)
HX_LOCAL_STACK_FRAME(_hx_pos_422e130a97e2d2f5_84_subtract,"haxe._CallStack.CallStack_Impl_","subtract",0x6f9ab153,"haxe._CallStack.CallStack_Impl_.subtract","/usr/local/lib/haxe/std/haxe/CallStack.hx",84,0x6022c9c0)
HX_LOCAL_STACK_FRAME(_hx_pos_422e130a97e2d2f5_120_equalItems,"haxe._CallStack.CallStack_Impl_","equalItems",0xbce5e9ab,"haxe._CallStack.CallStack_Impl_.equalItems","/usr/local/lib/haxe/std/haxe/CallStack.hx",120,0x6022c9c0)
namespace haxe{
namespace _CallStack{

void CallStack_Impl__obj::__construct() { }

Dynamic CallStack_Impl__obj::__CreateEmpty() { return new CallStack_Impl__obj; }

void *CallStack_Impl__obj::_hx_vtable = 0;

Dynamic CallStack_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallStack_Impl__obj > _hx_result = new CallStack_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallStack_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29a173d9;
}

::Array< ::Dynamic> CallStack_Impl__obj::callStack(){
            	HX_STACKFRAME(&_hx_pos_422e130a97e2d2f5_52_callStack)
HXDLIN(  52)		return ::haxe::NativeStackTrace_obj::toHaxe(::haxe::NativeStackTrace_obj::callStack(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_Impl__obj,callStack,return )

::Array< ::Dynamic> CallStack_Impl__obj::exceptionStack(::hx::Null< bool >  __o_fullStack){
            		bool fullStack = __o_fullStack.Default(false);
            	HX_STACKFRAME(&_hx_pos_422e130a97e2d2f5_63_exceptionStack)
HXLINE(  64)		::Array< ::Dynamic> eStack = ::haxe::NativeStackTrace_obj::toHaxe(::haxe::NativeStackTrace_obj::exceptionStack(),null());
HXLINE(  65)		::Array< ::Dynamic> this1;
HXDLIN(  65)		if (fullStack) {
HXLINE(  65)			this1 = eStack;
            		}
            		else {
HXLINE(  65)			this1 = ::haxe::_CallStack::CallStack_Impl__obj::subtract(eStack,::haxe::_CallStack::CallStack_Impl__obj::callStack());
            		}
HXDLIN(  65)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_Impl__obj,exceptionStack,return )

::Array< ::Dynamic> CallStack_Impl__obj::subtract(::Array< ::Dynamic> this1,::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_422e130a97e2d2f5_84_subtract)
HXLINE(  85)		int startIndex = -1;
HXLINE(  86)		int i = -1;
HXLINE(  87)		while(true){
HXLINE(  87)			i = (i + 1);
HXDLIN(  87)			if (!((i < this1->length))) {
HXLINE(  87)				goto _hx_goto_2;
            			}
HXLINE(  88)			{
HXLINE(  88)				int _g = 0;
HXDLIN(  88)				int _g1 = stack->length;
HXDLIN(  88)				while((_g < _g1)){
HXLINE(  88)					_g = (_g + 1);
HXDLIN(  88)					int j = (_g - 1);
HXLINE(  89)					if (::haxe::_CallStack::CallStack_Impl__obj::equalItems(this1->__get(i).StaticCast<  ::haxe::StackItem >(),stack->__get(j).StaticCast<  ::haxe::StackItem >())) {
HXLINE(  90)						if ((startIndex < 0)) {
HXLINE(  91)							startIndex = i;
            						}
HXLINE(  93)						i = (i + 1);
HXLINE(  94)						if ((i >= this1->length)) {
HXLINE(  94)							goto _hx_goto_3;
            						}
            					}
            					else {
HXLINE(  96)						startIndex = -1;
            					}
            				}
            				_hx_goto_3:;
            			}
HXLINE(  99)			if ((startIndex >= 0)) {
HXLINE(  99)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE( 101)		if ((startIndex >= 0)) {
HXLINE( 101)			return this1->slice(0,startIndex);
            		}
            		else {
HXLINE( 101)			return this1;
            		}
HXDLIN( 101)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_Impl__obj,subtract,return )

bool CallStack_Impl__obj::equalItems( ::haxe::StackItem item1, ::haxe::StackItem item2){
            	HX_STACKFRAME(&_hx_pos_422e130a97e2d2f5_120_equalItems)
HXDLIN( 120)		if (::hx::IsNull( item1 )) {
HXLINE( 121)			if (::hx::IsNull( item2 )) {
HXLINE( 121)				return true;
            			}
            			else {
HXLINE( 131)				return false;
            			}
            		}
            		else {
HXDLIN( 120)			switch((int)(item1->_hx_getIndex())){
            				case (int)0: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 0)) {
HXLINE( 122)							return true;
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 1)) {
HXLINE( 123)							::String m2 = item2->_hx_getString(0);
HXDLIN( 123)							::String m1 = item1->_hx_getString(0);
HXLINE( 124)							return (m1 == m2);
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 2)) {
HXLINE( 125)							 ::haxe::StackItem item21 = item2->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 125)							::String file2 = item2->_hx_getString(1);
HXDLIN( 125)							int line2 = item2->_hx_getInt(2);
HXDLIN( 125)							 ::Dynamic col2 = item2->_hx_getObject(3);
HXDLIN( 125)							 ::Dynamic col1 = item1->_hx_getObject(3);
HXDLIN( 125)							int line1 = item1->_hx_getInt(2);
HXDLIN( 125)							::String file1 = item1->_hx_getString(1);
HXDLIN( 125)							 ::haxe::StackItem item11 = item1->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXLINE( 126)							bool _hx_tmp;
HXDLIN( 126)							bool _hx_tmp1;
HXDLIN( 126)							if ((file1 == file2)) {
HXLINE( 126)								_hx_tmp1 = (line1 == line2);
            							}
            							else {
HXLINE( 126)								_hx_tmp1 = false;
            							}
HXDLIN( 126)							if (_hx_tmp1) {
HXLINE( 126)								_hx_tmp = ::hx::IsEq( col1,col2 );
            							}
            							else {
HXLINE( 126)								_hx_tmp = false;
            							}
HXDLIN( 126)							if (_hx_tmp) {
HXLINE( 126)								return ::haxe::_CallStack::CallStack_Impl__obj::equalItems(item11,item21);
            							}
            							else {
HXLINE( 126)								return false;
            							}
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 3)) {
HXLINE( 127)							::String class2 = item2->_hx_getString(0);
HXDLIN( 127)							::String method2 = item2->_hx_getString(1);
HXDLIN( 127)							::String method1 = item1->_hx_getString(1);
HXDLIN( 127)							::String class1 = item1->_hx_getString(0);
HXLINE( 128)							if ((class1 == class2)) {
HXLINE( 128)								return (method1 == method2);
            							}
            							else {
HXLINE( 128)								return false;
            							}
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 4)) {
HXLINE( 129)							 ::Dynamic v2 = item2->_hx_getObject(0);
HXDLIN( 129)							 ::Dynamic v1 = item1->_hx_getObject(0);
HXLINE( 130)							return ::hx::IsEq( v1,v2 );
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            			}
            		}
HXLINE( 120)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_Impl__obj,equalItems,return )


CallStack_Impl__obj::CallStack_Impl__obj()
{
}

bool CallStack_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { outValue = callStack_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"equalItems") ) { outValue = equalItems_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { outValue = exceptionStack_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CallStack_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CallStack_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CallStack_Impl__obj::__mClass;

static ::String CallStack_Impl__obj_sStaticFields[] = {
	HX_("callStack",ca,c1,4a,10),
	HX_("exceptionStack",79,48,56,0b),
	HX_("subtract",14,75,11,f8),
	HX_("equalItems",ac,df,65,63),
	::String(null())
};

void CallStack_Impl__obj::__register()
{
	CallStack_Impl__obj _hx_dummy;
	CallStack_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe._CallStack.CallStack_Impl_",0f,a8,ff,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStack_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CallStack_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CallStack_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallStack_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallStack_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace _CallStack
