// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_LoopContinueSignal
#include <src/compiler/signals/LoopContinueSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc2421f498fc0bfd_10_new,"src.compiler.signals.LoopContinueSignal","new",0xa7f8cfad,"src.compiler.signals.LoopContinueSignal.new","src/compiler/signals/LoopContinueSignal.hx",10,0xd4402ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_bc2421f498fc0bfd_15_getName,"src.compiler.signals.LoopContinueSignal","getName",0xe8ed4bce,"src.compiler.signals.LoopContinueSignal.getName","src/compiler/signals/LoopContinueSignal.hx",15,0xd4402ae2)
namespace src{
namespace compiler{
namespace signals{

void LoopContinueSignal_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bc2421f498fc0bfd_10_new)
HXDLIN(  10)		super::__construct(HX_("",00,00,00,00));
            	}

Dynamic LoopContinueSignal_obj::__CreateEmpty() { return new LoopContinueSignal_obj; }

void *LoopContinueSignal_obj::_hx_vtable = 0;

Dynamic LoopContinueSignal_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LoopContinueSignal_obj > _hx_result = new LoopContinueSignal_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LoopContinueSignal_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0db3aa3b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0db3aa3b;
	} else {
		return inClassId==(int)0x1f7d2c12;
	}
}

::String LoopContinueSignal_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_bc2421f498fc0bfd_15_getName)
HXDLIN(  15)		return HX_("LoopContinueSignal",d3,8f,9e,97);
            	}



LoopContinueSignal_obj::LoopContinueSignal_obj()
{
}

hx::Val LoopContinueSignal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LoopContinueSignal_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LoopContinueSignal_obj_sStaticStorageInfo = 0;
#endif

static ::String LoopContinueSignal_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void LoopContinueSignal_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoopContinueSignal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoopContinueSignal_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoopContinueSignal_obj::__mClass,"__mClass");
};

#endif

hx::Class LoopContinueSignal_obj::__mClass;

void LoopContinueSignal_obj::__register()
{
	hx::Object *dummy = new LoopContinueSignal_obj;
	LoopContinueSignal_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.signals.LoopContinueSignal","\x3b","\x75","\xba","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoopContinueSignal_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LoopContinueSignal_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoopContinueSignal_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoopContinueSignal_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoopContinueSignal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoopContinueSignal_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace signals
