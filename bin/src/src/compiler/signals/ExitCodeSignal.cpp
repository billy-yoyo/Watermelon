// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_compiler_signals_ExitCodeSignal
#include <src/compiler/signals/ExitCodeSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fdb48758c82321f1_11_new,"src.compiler.signals.ExitCodeSignal","new",0xcbc3802d,"src.compiler.signals.ExitCodeSignal.new","src/compiler/signals/ExitCodeSignal.hx",11,0x84a61ee2)
HX_LOCAL_STACK_FRAME(_hx_pos_fdb48758c82321f1_16_getName,"src.compiler.signals.ExitCodeSignal","getName",0xf31a3c4e,"src.compiler.signals.ExitCodeSignal.getName","src/compiler/signals/ExitCodeSignal.hx",16,0x84a61ee2)
namespace src{
namespace compiler{
namespace signals{

void ExitCodeSignal_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fdb48758c82321f1_11_new)
HXDLIN(  11)		super::__construct(HX_("",00,00,00,00));
            	}

Dynamic ExitCodeSignal_obj::__CreateEmpty() { return new ExitCodeSignal_obj; }

void *ExitCodeSignal_obj::_hx_vtable = 0;

Dynamic ExitCodeSignal_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ExitCodeSignal_obj > _hx_result = new ExitCodeSignal_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExitCodeSignal_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f7d2c12) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1f7d2c12;
	} else {
		return inClassId==(int)0x2d3d9abb;
	}
}

::String ExitCodeSignal_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_fdb48758c82321f1_16_getName)
HXDLIN(  16)		return HX_("ExitCodeSignal",53,d4,2f,fa);
            	}



ExitCodeSignal_obj::ExitCodeSignal_obj()
{
}

hx::Val ExitCodeSignal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ExitCodeSignal_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ExitCodeSignal_obj_sStaticStorageInfo = 0;
#endif

static ::String ExitCodeSignal_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void ExitCodeSignal_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExitCodeSignal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ExitCodeSignal_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExitCodeSignal_obj::__mClass,"__mClass");
};

#endif

hx::Class ExitCodeSignal_obj::__mClass;

void ExitCodeSignal_obj::__register()
{
	hx::Object *dummy = new ExitCodeSignal_obj;
	ExitCodeSignal_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.signals.ExitCodeSignal","\xbb","\xe5","\x42","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ExitCodeSignal_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ExitCodeSignal_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExitCodeSignal_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ExitCodeSignal_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExitCodeSignal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExitCodeSignal_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace signals
