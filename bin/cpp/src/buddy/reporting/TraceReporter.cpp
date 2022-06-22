#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_buddy_Failure
#include <buddy/Failure.h>
#endif
#ifndef INCLUDED_buddy_Spec
#include <buddy/Spec.h>
#endif
#ifndef INCLUDED_buddy_SpecStatus
#include <buddy/SpecStatus.h>
#endif
#ifndef INCLUDED_buddy_Step
#include <buddy/Step.h>
#endif
#ifndef INCLUDED_buddy_Suite
#include <buddy/Suite.h>
#endif
#ifndef INCLUDED_buddy_reporting_Reporter
#include <buddy/reporting/Reporter.h>
#endif
#ifndef INCLUDED_buddy_reporting_TraceReporter
#include <buddy/reporting/TraceReporter.h>
#endif
#ifndef INCLUDED_buddy_reporting__TraceReporter_Color_Impl_
#include <buddy/reporting/_TraceReporter/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7133d0639a959e25_29_new,"buddy.reporting.TraceReporter","new",0x238c0270,"buddy.reporting.TraceReporter.new","buddy/reporting/TraceReporter.hx",29,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_33_start,"buddy.reporting.TraceReporter","start",0x0b404a72,"buddy.reporting.TraceReporter.start","buddy/reporting/TraceReporter.hx",33,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_38_progress,"buddy.reporting.TraceReporter","progress",0xf5b34b9d,"buddy.reporting.TraceReporter.progress","buddy/reporting/TraceReporter.hx",38,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_55_done,"buddy.reporting.TraceReporter","done",0xf0618c72,"buddy.reporting.TraceReporter.done","buddy/reporting/TraceReporter.hx",55,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_74_done,"buddy.reporting.TraceReporter","done",0xf0618c72,"buddy.reporting.TraceReporter.done","buddy/reporting/TraceReporter.hx",74,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_79_done,"buddy.reporting.TraceReporter","done",0xf0618c72,"buddy.reporting.TraceReporter.done","buddy/reporting/TraceReporter.hx",79,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_89_done,"buddy.reporting.TraceReporter","done",0xf0618c72,"buddy.reporting.TraceReporter.done","buddy/reporting/TraceReporter.hx",89,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_70_done,"buddy.reporting.TraceReporter","done",0xf0618c72,"buddy.reporting.TraceReporter.done","buddy/reporting/TraceReporter.hx",70,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_131_done,"buddy.reporting.TraceReporter","done",0xf0618c72,"buddy.reporting.TraceReporter.done","buddy/reporting/TraceReporter.hx",131,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_41_done,"buddy.reporting.TraceReporter","done",0xf0618c72,"buddy.reporting.TraceReporter.done","buddy/reporting/TraceReporter.hx",41,0x6310aa42)
static const int _hx_array_data_a6664a7e_15[] = {
	(int)0,
};
static const int _hx_array_data_a6664a7e_16[] = {
	(int)0,
};
static const int _hx_array_data_a6664a7e_17[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_148_print,"buddy.reporting.TraceReporter","print",0x4fc02e3d,"buddy.reporting.TraceReporter.print","buddy/reporting/TraceReporter.hx",148,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_159_println,"buddy.reporting.TraceReporter","println",0xe2d655ff,"buddy.reporting.TraceReporter.println","buddy/reporting/TraceReporter.hx",159,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_163_strCol,"buddy.reporting.TraceReporter","strCol",0xd819cbff,"buddy.reporting.TraceReporter.strCol","buddy/reporting/TraceReporter.hx",163,0x6310aa42)
HX_LOCAL_STACK_FRAME(_hx_pos_7133d0639a959e25_168_resolveImmediately,"buddy.reporting.TraceReporter","resolveImmediately",0x9f268522,"buddy.reporting.TraceReporter.resolveImmediately","buddy/reporting/TraceReporter.hx",168,0x6310aa42)
namespace buddy{
namespace reporting{

void TraceReporter_obj::__construct(::hx::Null< bool >  __o_colors){
            		bool colors = __o_colors.Default(false);
            	HX_STACKFRAME(&_hx_pos_7133d0639a959e25_29_new)
HXDLIN(  29)		this->colors = colors;
            	}

Dynamic TraceReporter_obj::__CreateEmpty() { return new TraceReporter_obj; }

void *TraceReporter_obj::_hx_vtable = 0;

Dynamic TraceReporter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TraceReporter_obj > _hx_result = new TraceReporter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TraceReporter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4460327e;
}

static ::buddy::reporting::Reporter_obj _hx_buddy_reporting_TraceReporter__hx_buddy_reporting_Reporter= {
	(  ::promhx::Promise (::hx::Object::*)())&::buddy::reporting::TraceReporter_obj::start,
	(  ::promhx::Promise (::hx::Object::*)( ::buddy::Spec))&::buddy::reporting::TraceReporter_obj::progress,
	(  ::promhx::Promise (::hx::Object::*)( ::Dynamic,bool))&::buddy::reporting::TraceReporter_obj::done,
};

void *TraceReporter_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x70bc11a9: return &_hx_buddy_reporting_TraceReporter__hx_buddy_reporting_Reporter;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::promhx::Promise TraceReporter_obj::start(){
            	HX_STACKFRAME(&_hx_pos_7133d0639a959e25_33_start)
HXDLIN(  33)		return this->resolveImmediately(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TraceReporter_obj,start,return )

 ::promhx::Promise TraceReporter_obj::progress( ::buddy::Spec spec){
            	HX_STACKFRAME(&_hx_pos_7133d0639a959e25_38_progress)
HXDLIN(  38)		return this->resolveImmediately(spec);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TraceReporter_obj,progress,return )

 ::promhx::Promise TraceReporter_obj::done( ::Dynamic suites,bool status){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0,::Array< int >,failures,::Array< int >,total,::Array< int >,pending,::Array< ::Dynamic>,countTests) HXARGC(1)
            		void _hx_run( ::buddy::Suite s){
            			HX_STACKFRAME(&_hx_pos_7133d0639a959e25_55_done)
HXLINE(  56)			if (::hx::IsNotNull( s->error )) {
HXLINE(  56)				failures[0]++;
            			}
HXLINE(  58)			{
HXLINE(  58)				int _g = 0;
HXDLIN(  58)				::Array< ::Dynamic> _g1 = s->steps;
HXDLIN(  58)				while((_g < _g1->length)){
HXLINE(  58)					 ::buddy::Step sp = _g1->__get(_g).StaticCast<  ::buddy::Step >();
HXDLIN(  58)					_g = (_g + 1);
HXDLIN(  58)					switch((int)(sp->_hx_getIndex())){
            						case (int)0: {
HXLINE(  63)							 ::buddy::Suite s = sp->_hx_getObject(0).StaticCast<  ::buddy::Suite >();
HXLINE(  64)							countTests->__get(0)(s);
            						}
            						break;
            						case (int)1: {
HXLINE(  59)							 ::buddy::Spec sp1 = sp->_hx_getObject(0).StaticCast<  ::buddy::Spec >();
HXDLIN(  59)							{
HXLINE(  60)								total[0]++;
HXLINE(  61)								if (::hx::IsPointerEq( sp1->status,::buddy::SpecStatus_obj::Failed_dyn() )) {
HXLINE(  61)									failures[0]++;
            								}
            								else {
HXLINE(  62)									if (::hx::IsPointerEq( sp1->status,::buddy::SpecStatus_obj::Pending_dyn() )) {
HXLINE(  62)										pending[0]++;
            									}
            								}
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4, ::buddy::reporting::TraceReporter,_gthis,::Array< ::Dynamic>,printTests) HXARGC(2)
            		 ::Dynamic _hx_run( ::buddy::Suite s,int indentLevel){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::buddy::reporting::TraceReporter,_gthis,int,indentLevel,::Array< ::Dynamic>,lines) HXARGC(2)
            			void _hx_run(::String str, ::Dynamic __o_color){
            		int color = __o_color.Default(39);
            				HX_STACKFRAME(&_hx_pos_7133d0639a959e25_74_done)
HXLINE(  75)				::String start = _gthis->strCol(color);
HXDLIN(  75)				::String end = _gthis->strCol(39);
HXLINE(  76)				::Array< ::String > lines1 = lines->__get(0).StaticCast< ::Array< ::String > >();
HXDLIN(  76)				int str1 = str.length;
HXDLIN(  76)				lines1->push(((start + ::StringTools_obj::lpad(str,HX_(" ",20,00,00,00),(str1 + ::Std_obj::_hx_int(::Math_obj::max(( (Float)(0) ),( (Float)((indentLevel * 2)) )))))) + end));
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,print) HXARGC(2)
            			void _hx_run(::String indent,::Array< ::Dynamic> stack){
            				HX_STACKFRAME(&_hx_pos_7133d0639a959e25_79_done)
HXLINE(  80)				bool printStack;
HXDLIN(  80)				if (::hx::IsNotNull( stack )) {
HXLINE(  80)					printStack = (stack->length == 0);
            				}
            				else {
HXLINE(  80)					printStack = true;
            				}
HXDLIN(  80)				if (printStack) {
HXLINE(  80)					return;
            				}
HXLINE(  81)				{
HXLINE(  81)					int _g = 0;
HXDLIN(  81)					while((_g < stack->length)){
HXLINE(  81)						 ::haxe::StackItem s = stack->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN(  81)						_g = (_g + 1);
HXDLIN(  81)						if ((s->_hx_getIndex() == 2)) {
HXLINE(  82)							 ::haxe::StackItem _g = s->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN(  82)							 ::Dynamic _g1 = s->_hx_getObject(3);
HXDLIN(  82)							{
HXLINE(  82)								::String file = s->_hx_getString(1);
HXDLIN(  82)								int line = s->_hx_getInt(2);
HXDLIN(  82)								bool printStack;
HXDLIN(  82)								bool printStack1;
HXDLIN(  82)								if ((line > 0)) {
HXLINE(  82)									printStack1 = (file.indexOf(HX_("buddy/internal/",c9,bc,72,65),null()) != 0);
            								}
            								else {
HXLINE(  82)									printStack1 = false;
            								}
HXDLIN(  82)								if (printStack1) {
HXLINE(  82)									printStack = (file.indexOf(HX_("buddy.SuitesRunner",93,43,2e,cb),null()) != 0);
            								}
            								else {
HXLINE(  82)									printStack = false;
            								}
HXDLIN(  82)								if (printStack) {
HXLINE(  83)									print((indent + (((HX_("@ ",e0,37,00,00) + file) + HX_(":",3a,00,00,00)) + line)),33);
            								}
            							}
            						}
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,print) HXARGC(1)
            			void _hx_run( ::buddy::Spec spec){
            				HX_STACKFRAME(&_hx_pos_7133d0639a959e25_89_done)
HXLINE(  89)				int _g = 0;
HXDLIN(  89)				::Array< ::String > _g1 = spec->traces;
HXDLIN(  89)				while((_g < _g1->length)){
HXLINE(  89)					::String t = _g1->__get(_g);
HXDLIN(  89)					_g = (_g + 1);
HXDLIN(  89)					print((HX_("    ",00,38,3f,15) + t),33);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_7133d0639a959e25_70_done)
HXLINE(  71)			bool success = true;
HXLINE(  72)			::Array< ::Dynamic> lines = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::String >::__new(0));
HXLINE(  74)			 ::Dynamic print =  ::Dynamic(new _hx_Closure_1(_gthis,indentLevel,lines));
HXLINE(  79)			 ::Dynamic printStack =  ::Dynamic(new _hx_Closure_2(print));
HXLINE(  88)			 ::Dynamic printTraces =  ::Dynamic(new _hx_Closure_3(print));
HXLINE(  92)			if ((s->description.length > 0)) {
HXLINE(  92)				print(s->description,null());
            			}
HXLINE(  94)			if (::hx::IsNotNull( s->error )) {
HXLINE(  96)				 ::Dynamic print1 = print;
HXDLIN(  96)				print1((HX_("ERROR: ",4e,70,de,69) + ::Std_obj::string(s->error)),31);
HXLINE(  97)				printStack(HX_("  ",00,1c,00,00),s->stack);
HXLINE(  98)				return  ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("success",c3,25,4e,b8),false)
            					->setFixed(1,HX_("lines",ff,dd,01,75),lines->__get(0).StaticCast< ::Array< ::String > >()));
            			}
HXLINE( 101)			{
HXLINE( 101)				int _g = 0;
HXDLIN( 101)				::Array< ::Dynamic> _g1 = s->steps;
HXDLIN( 101)				while((_g < _g1->length)){
HXLINE( 101)					 ::buddy::Step step = _g1->__get(_g).StaticCast<  ::buddy::Step >();
HXDLIN( 101)					_g = (_g + 1);
HXDLIN( 101)					switch((int)(step->_hx_getIndex())){
            						case (int)0: {
HXLINE( 119)							 ::buddy::Suite s = step->_hx_getObject(0).StaticCast<  ::buddy::Suite >();
HXDLIN( 119)							{
HXLINE( 120)								 ::Dynamic ret = printTests->__get(0)(s,(indentLevel + 1));
HXLINE( 121)								if (success) {
HXLINE( 121)									success = ( (bool)(ret->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) );
            								}
            								else {
HXLINE( 121)									success = false;
            								}
HXLINE( 122)								lines[0] = lines->__get(0).StaticCast< ::Array< ::String > >()->concat(( (::Array< ::String >)(ret->__Field(HX_("lines",ff,dd,01,75),::hx::paccDynamic)) ));
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 102)							 ::buddy::Spec sp = step->_hx_getObject(0).StaticCast<  ::buddy::Spec >();
HXDLIN( 102)							{
HXLINE( 103)								if (success) {
HXLINE( 103)									success = ::hx::IsPointerEq( sp->status,::buddy::SpecStatus_obj::Passed_dyn() );
            								}
            								else {
HXLINE( 103)									success = false;
            								}
HXLINE( 105)								if (::hx::IsPointerEq( sp->status,::buddy::SpecStatus_obj::Failed_dyn() )) {
HXLINE( 106)									print(((HX_("  ",00,1c,00,00) + sp->description) + HX_(" (FAILED)",c4,08,d1,e4)),31);
HXLINE( 107)									printTraces(sp);
HXLINE( 109)									{
HXLINE( 109)										int _g = 0;
HXDLIN( 109)										::Array< ::Dynamic> _g1 = sp->failures;
HXDLIN( 109)										while((_g < _g1->length)){
HXLINE( 109)											 ::buddy::Failure failure = _g1->__get(_g).StaticCast<  ::buddy::Failure >();
HXDLIN( 109)											_g = (_g + 1);
HXLINE( 110)											 ::Dynamic print1 = print;
HXDLIN( 110)											print1((HX_("    ",00,38,3f,15) + ::Std_obj::string(failure->error)),33);
HXLINE( 111)											printStack(HX_("      ",00,54,7d,4d),failure->stack);
            										}
            									}
            								}
            								else {
HXLINE( 115)									 ::Dynamic print1 = print;
HXDLIN( 115)									::String _hx_tmp = ((HX_("  ",00,1c,00,00) + sp->description) + HX_(" (",08,1c,00,00));
HXDLIN( 115)									::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(sp->status)) + HX_(")",29,00,00,00));
HXDLIN( 115)									int _hx_tmp2;
HXDLIN( 115)									if (::hx::IsPointerEq( sp->status,::buddy::SpecStatus_obj::Passed_dyn() )) {
HXLINE( 115)										_hx_tmp2 = 32;
            									}
            									else {
HXLINE( 115)										_hx_tmp2 = 33;
            									}
HXDLIN( 115)									print1(_hx_tmp1,_hx_tmp2);
HXLINE( 116)									printTraces(sp);
            								}
            							}
            						}
            						break;
            					}
            				}
            			}
HXLINE( 125)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("success",c3,25,4e,b8),success)
            				->setFixed(1,HX_("lines",ff,dd,01,75),lines->__get(0).StaticCast< ::Array< ::String > >()));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_5, ::buddy::reporting::TraceReporter,_gthis,::Array< ::Dynamic>,printTests) HXARGC(1)
            		void _hx_run( ::buddy::Suite s){
            			HX_STACKFRAME(&_hx_pos_7133d0639a959e25_131_done)
HXLINE( 132)			 ::Dynamic ret = printTests->__get(0)(s,-1);
HXLINE( 133)			::Lambda_obj::iter(ret->__Field(HX_("lines",ff,dd,01,75),::hx::paccDynamic),_gthis->println_dyn());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_7133d0639a959e25_41_done)
HXDLIN(  41)		 ::buddy::reporting::TraceReporter _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  45)		this->println(HX_("",00,00,00,00));
HXLINE(  48)		::Array< int > total = ::Array_obj< int >::fromData( _hx_array_data_a6664a7e_15,1);
HXLINE(  49)		::Array< int > failures = ::Array_obj< int >::fromData( _hx_array_data_a6664a7e_16,1);
HXLINE(  50)		::Array< int > pending = ::Array_obj< int >::fromData( _hx_array_data_a6664a7e_17,1);
HXLINE(  52)		::Array< ::Dynamic> countTests = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(  53)		::Array< ::Dynamic> printTests = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(  55)		countTests[0] =  ::Dynamic(new _hx_Closure_0(failures,total,pending,countTests));
HXLINE(  68)		::Lambda_obj::iter(suites,countTests->__get(0));
HXLINE(  70)		printTests[0] =  ::Dynamic(new _hx_Closure_4(_gthis,printTests));
HXLINE( 131)		::Lambda_obj::iter(suites, ::Dynamic(new _hx_Closure_5(_gthis,printTests)));
HXLINE( 136)		int totalColor;
HXDLIN( 136)		if ((failures->__get(0) > 0)) {
HXLINE( 136)			totalColor = 31;
            		}
            		else {
HXLINE( 136)			totalColor = 32;
            		}
HXLINE( 137)		int pendingColor;
HXDLIN( 137)		if ((pending->__get(0) > 0)) {
HXLINE( 137)			pendingColor = 33;
            		}
            		else {
HXLINE( 137)			pendingColor = totalColor;
            		}
HXLINE( 140)		::String _hx_tmp = this->strCol(totalColor);
HXDLIN( 140)		::String _hx_tmp1 = (_hx_tmp + ((((HX_("",00,00,00,00) + total->__get(0)) + HX_(" specs, ",2c,26,ab,05)) + failures->__get(0)) + HX_(" failures, ",bd,2b,3a,56)));
HXDLIN( 140)		::String _hx_tmp2 = (_hx_tmp1 + this->strCol(pendingColor));
HXDLIN( 140)		::String _hx_tmp3 = (_hx_tmp2 + ((HX_("",00,00,00,00) + pending->__get(0)) + HX_(" pending",37,dc,3a,52)));
HXLINE( 139)		this->println((_hx_tmp3 + this->strCol(39)));
HXLINE( 145)		return this->resolveImmediately(suites);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TraceReporter_obj,done,return )

void TraceReporter_obj::print(::String s){
            	HX_STACKFRAME(&_hx_pos_7133d0639a959e25_148_print)
            	}


HX_DEFINE_DYNAMIC_FUNC1(TraceReporter_obj,print,(void))

void TraceReporter_obj::println(::String s){
            	HX_STACKFRAME(&_hx_pos_7133d0639a959e25_159_println)
HXDLIN( 159)		::haxe::Log_obj::trace(s,::hx::SourceInfo(HX_("buddy/reporting/TraceReporter.hx",42,aa,10,63),159,HX_("buddy.reporting.TraceReporter",7e,4a,66,a6),HX_("println",ef,db,33,84)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TraceReporter_obj,println,(void))

::String TraceReporter_obj::strCol(int color){
            	HX_STACKFRAME(&_hx_pos_7133d0639a959e25_163_strCol)
HXDLIN( 163)		if (this->colors) {
HXDLIN( 163)			return ::buddy::reporting::_TraceReporter::Color_Impl__obj::ansiCode(color);
            		}
            		else {
HXDLIN( 163)			return HX_("",00,00,00,00);
            		}
HXDLIN( 163)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TraceReporter_obj,strCol,return )

 ::promhx::Promise TraceReporter_obj::resolveImmediately( ::Dynamic o){
            	HX_GC_STACKFRAME(&_hx_pos_7133d0639a959e25_168_resolveImmediately)
HXLINE( 169)		 ::promhx::Deferred def =  ::promhx::Deferred_obj::__alloc( HX_CTX );
HXLINE( 170)		 ::promhx::Promise pr = def->promise();
HXLINE( 171)		def->resolve(o);
HXLINE( 172)		return pr;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TraceReporter_obj,resolveImmediately,return )


::hx::ObjectPtr< TraceReporter_obj > TraceReporter_obj::__new(::hx::Null< bool >  __o_colors) {
	::hx::ObjectPtr< TraceReporter_obj > __this = new TraceReporter_obj();
	__this->__construct(__o_colors);
	return __this;
}

::hx::ObjectPtr< TraceReporter_obj > TraceReporter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_colors) {
	TraceReporter_obj *__this = (TraceReporter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TraceReporter_obj), false, "buddy.reporting.TraceReporter"));
	*(void **)__this = TraceReporter_obj::_hx_vtable;
	__this->__construct(__o_colors);
	return __this;
}

TraceReporter_obj::TraceReporter_obj()
{
}

::hx::Val TraceReporter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return ::hx::Val( done_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"print") ) { return ::hx::Val( print_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"strCol") ) { return ::hx::Val( strCol_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { return ::hx::Val( println_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resolveImmediately") ) { return ::hx::Val( resolveImmediately_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TraceReporter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TraceReporter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colors",b0,c5,86,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TraceReporter_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TraceReporter_obj,colors),HX_("colors",b0,c5,86,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TraceReporter_obj_sStaticStorageInfo = 0;
#endif

static ::String TraceReporter_obj_sMemberFields[] = {
	HX_("colors",b0,c5,86,c6),
	HX_("start",62,74,0b,84),
	HX_("progress",ad,f7,2a,86),
	HX_("done",82,f0,6d,42),
	HX_("print",2d,58,8b,c8),
	HX_("println",ef,db,33,84),
	HX_("strCol",0f,54,13,11),
	HX_("resolveImmediately",32,e5,53,88),
	::String(null()) };

::hx::Class TraceReporter_obj::__mClass;

void TraceReporter_obj::__register()
{
	TraceReporter_obj _hx_dummy;
	TraceReporter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("buddy.reporting.TraceReporter",7e,4a,66,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TraceReporter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TraceReporter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TraceReporter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TraceReporter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace buddy
} // end namespace reporting
