// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_36_stdin,"Sys","stdin",0x03b9a107,"Sys.stdin","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",36,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_41_stdout,"Sys","stdout",0x3eb7d92c,"Sys.stdout","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",41,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_54_args,"Sys","args",0xeaeddc7e,"Sys.args","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",54,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_69_sleep,"Sys","sleep",0xfe70aad6,"Sys.sleep","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",69,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_111_time,"Sys","time",0xf7761b2e,"Sys.time","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",111,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_115_cpuTime,"Sys","cpuTime",0x274f48d4,"Sys.cpuTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",115,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_123_programPath,"Sys","programPath",0x38d53548,"Sys.programPath","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",123,0x57bbb657)

void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

void *Sys_obj::_hx_vtable = 0;

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x003f64ed;
}

 ::haxe::io::Input Sys_obj::_hx_stdin(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_36_stdin)
HXDLIN(  36)		return  ::sys::io::FileInput_obj::__alloc( HX_CTX ,_hx_std_file_stdin());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stdin,return )

 ::haxe::io::Output Sys_obj::_hx_stdout(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_41_stdout)
HXDLIN(  41)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_stdout());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stdout,return )

::Array< ::String > Sys_obj::args(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_54_args)
HXDLIN(  54)		return ::__get_args();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

void Sys_obj::sleep(Float seconds){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_69_sleep)
HXDLIN(  69)		_hx_std_sys_sleep(seconds);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

Float Sys_obj::time(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_111_time)
HXDLIN( 111)		return _hx_std_sys_time();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,time,return )

Float Sys_obj::cpuTime(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_115_cpuTime)
HXDLIN( 115)		return _hx_std_sys_cpu_time();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,cpuTime,return )

::String Sys_obj::programPath(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_123_programPath)
HXDLIN( 123)		return _hx_std_sys_exe_path();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,programPath,return )


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stdin") ) { outValue = _hx_stdin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { outValue = _hx_stdout_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cpuTime") ) { outValue = cpuTime_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programPath") ) { outValue = programPath_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

static void Sys_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sys_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"),
	HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("cpuTime","\x55","\x2d","\x7d","\x72"),
	HX_HCSTRING("programPath","\x49","\xee","\x75","\xc1"),
	::String(null())
};

void Sys_obj::__register()
{
	hx::Object *dummy = new Sys_obj;
	Sys_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sys_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sys_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

