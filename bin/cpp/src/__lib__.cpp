#include <hxcpp.h>

#include <stdio.h>

extern "C" void __hxcpp_main();

extern "C" void __hxcpp_lib_main();

#ifndef INCLUDED_TestEvent
#include <TestEvent.h>
#endif
#ifndef INCLUDED_buddy_Buddy
#include <buddy/Buddy.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif
HX_LOCAL_STACK_FRAME(_hx_pos_fe66fde75063e1fc_1___hxcpp_main,"hxcpp","__hxcpp_main",0x10478780,"hxcpp.__hxcpp_main","?",1,0x0000003f)


void __hxcpp_main() {
{
            	HX_STACKFRAME(&_hx_pos_fe66fde75063e1fc_1___hxcpp_main)
HXDLIN(   1)		::TestEvent_obj::main();
HXDLIN(   1)		::sys::thread::_Thread::Thread_Impl__obj::processEvents();
            	}
	}

void __hxcpp_lib_main() {
	HX_TOP_OF_STACK
	::hx::Boot();
	__boot_all();
	__hxcpp_main();
	}
