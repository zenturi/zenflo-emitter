#include <hxcpp.h>

#ifndef INCLUDED_AsyncTools
#include <AsyncTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_34_aMapLimit,"AsyncTools","aMapLimit",0xadb7f8b1,"AsyncTools.aMapLimit","AsyncTools.hx",34,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_33_aMapLimit,"AsyncTools","aMapLimit",0xadb7f8b1,"AsyncTools.aMapLimit","AsyncTools.hx",33,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_43_aMap,"AsyncTools","aMap",0xf4dafe2a,"AsyncTools.aMap","AsyncTools.hx",43,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_51_aMapSeries,"AsyncTools","aMapSeries",0xd574db41,"AsyncTools.aMapSeries","AsyncTools.hx",51,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_63_aEachLimit,"AsyncTools","aEachLimit",0x1bdcbf88,"AsyncTools.aEachLimit","AsyncTools.hx",63,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_64_aEachLimit,"AsyncTools","aEachLimit",0x1bdcbf88,"AsyncTools.aEachLimit","AsyncTools.hx",64,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_62_aEachLimit,"AsyncTools","aEachLimit",0x1bdcbf88,"AsyncTools.aEachLimit","AsyncTools.hx",62,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_72_aEach,"AsyncTools","aEach",0x4579a6b3,"AsyncTools.aEach","AsyncTools.hx",72,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_80_aEachSeries,"AsyncTools","aEachSeries",0xc77e108a,"AsyncTools.aEachSeries","AsyncTools.hx",80,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_93_aFilterLimit,"AsyncTools","aFilterLimit",0xa0cea5f1,"AsyncTools.aFilterLimit","AsyncTools.hx",93,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_92_aFilterLimit,"AsyncTools","aFilterLimit",0xa0cea5f1,"AsyncTools.aFilterLimit","AsyncTools.hx",92,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_97_aFilterLimit,"AsyncTools","aFilterLimit",0xa0cea5f1,"AsyncTools.aFilterLimit","AsyncTools.hx",97,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_91_aFilterLimit,"AsyncTools","aFilterLimit",0xa0cea5f1,"AsyncTools.aFilterLimit","AsyncTools.hx",91,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_111_aFilter,"AsyncTools","aFilter",0xdbc358ea,"AsyncTools.aFilter","AsyncTools.hx",111,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_119_aFilterSeries,"AsyncTools","aFilterSeries",0x9635c601,"AsyncTools.aFilterSeries","AsyncTools.hx",119,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_139_aForEachOfMapLimit,"AsyncTools","aForEachOfMapLimit",0x693c918e,"AsyncTools.aForEachOfMapLimit","AsyncTools.hx",139,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_147_aForEachOfMapLimit,"AsyncTools","aForEachOfMapLimit",0x693c918e,"AsyncTools.aForEachOfMapLimit","AsyncTools.hx",147,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_173_aForEachOfMapLimit,"AsyncTools","aForEachOfMapLimit",0x693c918e,"AsyncTools.aForEachOfMapLimit","AsyncTools.hx",173,0x04c05abf)
HX_LOCAL_STACK_FRAME(_hx_pos_ded7c2dfddce8878_129_aForEachOfMapLimit,"AsyncTools","aForEachOfMapLimit",0x693c918e,"AsyncTools.aForEachOfMapLimit","AsyncTools.hx",129,0x04c05abf)
static const bool _hx_array_data_b91c4d5f_23[] = {
	0,
};
static const int _hx_array_data_b91c4d5f_24[] = {
	(int)0,
};
static const int _hx_array_data_b91c4d5f_25[] = {
	(int)0,
};

void AsyncTools_obj::__construct() { }

Dynamic AsyncTools_obj::__CreateEmpty() { return new AsyncTools_obj; }

void *AsyncTools_obj::_hx_vtable = 0;

Dynamic AsyncTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AsyncTools_obj > _hx_result = new AsyncTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AsyncTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10107683;
}

void AsyncTools_obj::aMapLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,cb) HXARGC(3)
            		void _hx_run( ::Dynamic item,int _, ::Dynamic done){
            			HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_34_aMapLimit)
HXLINE(  34)			cb(item,done);
            		}
            		HX_END_LOCAL_FUNC3((void))

            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_33_aMapLimit)
HXDLIN(  33)		::AsyncTools_obj::aForEachOfMapLimit(iterable,limit, ::Dynamic(new _hx_Closure_0(cb)),done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AsyncTools_obj,aMapLimit,(void))

void AsyncTools_obj::aMap( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done){
            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_43_aMap)
HXDLIN(  43)		::AsyncTools_obj::aMapLimit(iterable,0,cb,done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncTools_obj,aMap,(void))

void AsyncTools_obj::aMapSeries( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done){
            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_51_aMapSeries)
HXDLIN(  51)		::AsyncTools_obj::aMapLimit(iterable,1,cb,done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncTools_obj,aMapSeries,(void))

void AsyncTools_obj::aEachLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,cb) HXARGC(2)
            		void _hx_run( ::Dynamic item, ::Dynamic done){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,done) HXARGC(1)
            			void _hx_run( ::Dynamic err){
            				HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_63_aEachLimit)
HXLINE(  63)				done(err,true);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_63_aEachLimit)
HXLINE(  63)			cb(item, ::Dynamic(new _hx_Closure_0(done)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,done) HXARGC(2)
            		void _hx_run( ::Dynamic err,::Array< bool > items){
            			HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_64_aEachLimit)
HXLINE(  64)			done(err);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_62_aEachLimit)
HXDLIN(  62)		::AsyncTools_obj::aMapLimit(iterable,limit, ::Dynamic(new _hx_Closure_1(cb)), ::Dynamic(new _hx_Closure_2(done)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AsyncTools_obj,aEachLimit,(void))

void AsyncTools_obj::aEach( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done){
            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_72_aEach)
HXDLIN(  72)		::AsyncTools_obj::aEachLimit(iterable,0,cb,done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncTools_obj,aEach,(void))

void AsyncTools_obj::aEachSeries( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done){
            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_80_aEachSeries)
HXDLIN(  80)		::AsyncTools_obj::aEachLimit(iterable,1,cb,done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncTools_obj,aEachSeries,(void))

void AsyncTools_obj::aFilterLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,cb) HXARGC(2)
            		void _hx_run( ::Dynamic item, ::Dynamic done){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,done, ::Dynamic,item) HXARGC(2)
            			void _hx_run( ::Dynamic err,bool keep){
            				HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_93_aFilterLimit)
HXLINE(  93)				if (::hx::IsNotNull( err )) {
HXLINE(  93)					done(err,null());
            				}
            				else {
HXLINE(  94)					 ::haxe::ds::Option _hx_tmp;
HXDLIN(  94)					if (keep) {
HXLINE(  94)						_hx_tmp = ::haxe::ds::Option_obj::Some(item);
            					}
            					else {
HXLINE(  94)						_hx_tmp = ::haxe::ds::Option_obj::None_dyn();
            					}
HXDLIN(  94)					done(null(),_hx_tmp);
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_92_aFilterLimit)
HXLINE(  92)			cb(item, ::Dynamic(new _hx_Closure_0(done,item)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,done) HXARGC(2)
            		void _hx_run( ::Dynamic err,::Array< ::Dynamic> results){
            			HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_97_aFilterLimit)
HXLINE(  97)			if (::hx::IsNotNull( err )) {
HXLINE(  97)				done(err,null());
            			}
            			else {
HXLINE(  99)				 ::Dynamic done1 = done;
HXDLIN(  99)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  99)				{
HXLINE(  99)					int _g1 = 0;
HXDLIN(  99)					::Array< ::Dynamic> _g2 = results;
HXDLIN(  99)					while((_g1 < _g2->length)){
HXLINE(  99)						 ::haxe::ds::Option v = _g2->__get(_g1).StaticCast<  ::haxe::ds::Option >();
HXDLIN(  99)						_g1 = (_g1 + 1);
HXDLIN(  99)						if (!(__hxcpp_enum_eq(v,::haxe::ds::Option_obj::None_dyn()))) {
HXLINE(  99)							_g->push(v);
            						}
            					}
            				}
HXDLIN(  99)				::Array< ::Dynamic> _this = _g;
HXDLIN(  99)				::cpp::VirtualArray result = ::cpp::VirtualArray_obj::__new(_this->length);
HXDLIN(  99)				{
HXLINE(  99)					int _g3 = 0;
HXDLIN(  99)					int _g4 = _this->length;
HXDLIN(  99)					while((_g3 < _g4)){
HXLINE(  99)						_g3 = (_g3 + 1);
HXDLIN(  99)						int i = (_g3 - 1);
HXDLIN(  99)						{
HXLINE(  99)							 ::Dynamic inValue = ::Type_obj::enumParameters(_hx_array_unsafe_get(_this,i))->__get(0);
HXDLIN(  99)							result->__unsafe_set(i,inValue);
            						}
            					}
            				}
HXDLIN(  99)				done1(null(),result);
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_91_aFilterLimit)
HXDLIN(  91)		::AsyncTools_obj::aMapLimit(iterable,limit, ::Dynamic(new _hx_Closure_1(cb)), ::Dynamic(new _hx_Closure_2(done)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AsyncTools_obj,aFilterLimit,(void))

void AsyncTools_obj::aFilter( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done){
            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_111_aFilter)
HXDLIN( 111)		::AsyncTools_obj::aFilterLimit(iterable,0,cb,done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncTools_obj,aFilter,(void))

void AsyncTools_obj::aFilterSeries( ::Dynamic iterable, ::Dynamic cb, ::Dynamic done){
            	HX_STACKFRAME(&_hx_pos_ded7c2dfddce8878_119_aFilterSeries)
HXDLIN( 119)		::AsyncTools_obj::aFilterLimit(iterable,1,cb,done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncTools_obj,aFilterSeries,(void))

void AsyncTools_obj::aForEachOfMapLimit( ::Dynamic iterable,int limit, ::Dynamic cb, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ds::IntMap,complete,::Array< int >,pos) HXARGC(0)
            		::cpp::VirtualArray _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ded7c2dfddce8878_139_aForEachOfMapLimit)
HXLINE( 140)			int currentPos = pos->__get(0);
HXLINE( 141)			::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 141)			{
HXLINE( 141)				int _g1 = 0;
HXDLIN( 141)				int _g2 = currentPos;
HXDLIN( 141)				while((_g1 < _g2)){
HXLINE( 141)					_g1 = (_g1 + 1);
HXDLIN( 141)					int key = (_g1 - 1);
HXDLIN( 141)					_g->push(complete->get(key));
            				}
            			}
HXDLIN( 141)			::cpp::VirtualArray output = _g;
HXLINE( 142)			return output;
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S10(::hx::LocalFunc,_hx_Closure_2,int,limit, ::Dynamic,completedItems, ::Dynamic,it,::Array< bool >,completed, ::haxe::ds::IntMap,complete,::Array< ::Dynamic>,next, ::Dynamic,cb, ::Dynamic,done,::Array< int >,pos,::Array< int >,running) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ded7c2dfddce8878_147_aForEachOfMapLimit)
HXLINE( 147)			if (!(completed->__get(0))) {
HXLINE( 151)				if (!(( (bool)(it->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) ))) {
HXLINE( 152)					if ((running->__get(0) <= 0)) {
HXLINE( 155)						if (!(completed->__get(0))) {
HXLINE( 156)							completed[0] = true;
HXLINE( 159)							 ::Dynamic done1 = done;
HXDLIN( 159)							done1(null(),completedItems());
            						}
            					}
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,completedItems,::Array< bool >,completed, ::haxe::ds::IntMap,complete,::Array< ::Dynamic>,next,int,currentPos, ::Dynamic,done,::Array< int >,running) HXARGC(2)
            					void _hx_run( ::Dynamic err, ::Dynamic mapped){
            						HX_GC_STACKFRAME(&_hx_pos_ded7c2dfddce8878_173_aForEachOfMapLimit)
HXLINE( 173)						if (!(completed->__get(0))) {
HXLINE( 177)							if (::hx::IsNotNull( err )) {
HXLINE( 178)								if (!(completed->__get(0))) {
HXLINE( 180)									completed[0] = true;
HXLINE( 182)									 ::Dynamic done1 = done;
HXDLIN( 182)									done1(err,completedItems());
            								}
            							}
            							else {
HXLINE( 189)								running[0]--;
HXLINE( 190)								complete->set(currentPos,mapped);
HXLINE( 192)								next->__get(0)();
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC2((void))

HXLINE( 164)					 ::Dynamic nextItem = it->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 165)					int currentPos = pos[0]++;
HXLINE( 166)					running[0]++;
HXLINE( 170)					cb(nextItem,currentPos, ::Dynamic(new _hx_Closure_1(completedItems,completed,complete,next,currentPos,done,running)));
HXLINE( 198)					if (!(completed->__get(0))) {
HXLINE( 201)						bool _hx_tmp;
HXDLIN( 201)						if ((limit != 0)) {
HXLINE( 201)							_hx_tmp = (running->__get(0) < limit);
            						}
            						else {
HXLINE( 201)							_hx_tmp = true;
            						}
HXDLIN( 201)						if (_hx_tmp) {
HXLINE( 204)							next->__get(0)();
            						}
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_ded7c2dfddce8878_129_aForEachOfMapLimit)
HXLINE( 130)		 ::haxe::ds::IntMap complete =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 131)		 ::Dynamic it = iterable->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXLINE( 132)		::Array< bool > completed = ::Array_obj< bool >::fromData( _hx_array_data_b91c4d5f_23,1);
HXLINE( 133)		::Array< int > running = ::Array_obj< int >::fromData( _hx_array_data_b91c4d5f_24,1);
HXLINE( 134)		::Array< int > pos = ::Array_obj< int >::fromData( _hx_array_data_b91c4d5f_25,1);
HXLINE( 139)		 ::Dynamic completedItems =  ::Dynamic(new _hx_Closure_0(complete,pos));
HXLINE( 145)		::Array< ::Dynamic> next = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 145)		next[0] =  ::Dynamic(new _hx_Closure_2(limit,completedItems,it,completed,complete,next,cb,done,pos,running));
HXLINE( 211)		next->__get(0)();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AsyncTools_obj,aForEachOfMapLimit,(void))


AsyncTools_obj::AsyncTools_obj()
{
}

bool AsyncTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"aMap") ) { outValue = aMap_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"aEach") ) { outValue = aEach_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"aFilter") ) { outValue = aFilter_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aMapLimit") ) { outValue = aMapLimit_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aMapSeries") ) { outValue = aMapSeries_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"aEachLimit") ) { outValue = aEachLimit_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aEachSeries") ) { outValue = aEachSeries_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"aFilterLimit") ) { outValue = aFilterLimit_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"aFilterSeries") ) { outValue = aFilterSeries_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"aForEachOfMapLimit") ) { outValue = aForEachOfMapLimit_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AsyncTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AsyncTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AsyncTools_obj::__mClass;

static ::String AsyncTools_obj_sStaticFields[] = {
	HX_("aMapLimit",80,14,6e,b3),
	HX_("aMap",bb,74,58,40),
	HX_("aMapSeries",92,14,17,cf),
	HX_("aEachLimit",d9,f8,7e,15),
	HX_("aEach",02,ef,c3,07),
	HX_("aEachSeries",19,fe,cd,3b),
	HX_("aFilterLimit",82,95,6e,f2),
	HX_("aFilter",f9,92,6b,7b),
	HX_("aFilterSeries",50,75,87,b0),
	HX_("aForEachOfMapLimit",df,03,a2,53),
	::String(null())
};

void AsyncTools_obj::__register()
{
	AsyncTools_obj _hx_dummy;
	AsyncTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AsyncTools",5f,4d,1c,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AsyncTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AsyncTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AsyncTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AsyncTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

