#ifndef INCLUDED_buddy_reporting_Reporter
#define INCLUDED_buddy_reporting_Reporter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(buddy,Spec)
HX_DECLARE_CLASS2(buddy,reporting,Reporter)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)

namespace buddy{
namespace reporting{


class HXCPP_CLASS_ATTRIBUTES Reporter_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::promhx::Promise (::hx::Object :: *_hx_start)(); 
		static inline  ::promhx::Promise start( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::buddy::reporting::Reporter_obj *>(_hx_.mPtr->_hx_getInterface(0x70bc11a9)))->_hx_start)();
		}
		 ::promhx::Promise (::hx::Object :: *_hx_progress)( ::buddy::Spec spec); 
		static inline  ::promhx::Promise progress( ::Dynamic _hx_, ::buddy::Spec spec) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::buddy::reporting::Reporter_obj *>(_hx_.mPtr->_hx_getInterface(0x70bc11a9)))->_hx_progress)(spec);
		}
		 ::promhx::Promise (::hx::Object :: *_hx_done)( ::Dynamic suites,bool status); 
		static inline  ::promhx::Promise done( ::Dynamic _hx_, ::Dynamic suites,bool status) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::buddy::reporting::Reporter_obj *>(_hx_.mPtr->_hx_getInterface(0x70bc11a9)))->_hx_done)(suites,status);
		}
};

} // end namespace buddy
} // end namespace reporting

#endif /* INCLUDED_buddy_reporting_Reporter */ 
