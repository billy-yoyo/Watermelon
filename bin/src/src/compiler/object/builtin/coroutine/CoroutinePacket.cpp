// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_coroutine_CoroutineObject
#include <src/compiler/object/builtin/coroutine/CoroutineObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_coroutine_CoroutinePacket
#include <src/compiler/object/builtin/coroutine/CoroutinePacket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c959302e95626475_16_new,"src.compiler.object.builtin.coroutine.CoroutinePacket","new",0x327c27e7,"src.compiler.object.builtin.coroutine.CoroutinePacket.new","src/compiler/object/builtin/coroutine/CoroutinePacket.hx",16,0xa43f81cc)
HX_LOCAL_STACK_FRAME(_hx_pos_c959302e95626475_25_setTime,"src.compiler.object.builtin.coroutine.CoroutinePacket","setTime",0x103933d6,"src.compiler.object.builtin.coroutine.CoroutinePacket.setTime","src/compiler/object/builtin/coroutine/CoroutinePacket.hx",25,0xa43f81cc)
namespace src{
namespace compiler{
namespace object{
namespace builtin{
namespace coroutine{

void CoroutinePacket_obj::__construct( ::src::compiler::object::Object object, ::src::compiler::object::builtin::coroutine::CoroutineObject source){
            	HX_STACKFRAME(&_hx_pos_c959302e95626475_16_new)
HXLINE(  17)		this->object = object;
HXLINE(  18)		this->source = source;
HXLINE(  19)		this->readBy = null();
HXLINE(  20)		this->sent = (int)0;
            	}

Dynamic CoroutinePacket_obj::__CreateEmpty() { return new CoroutinePacket_obj; }

void *CoroutinePacket_obj::_hx_vtable = 0;

Dynamic CoroutinePacket_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CoroutinePacket_obj > _hx_result = new CoroutinePacket_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CoroutinePacket_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6530d715;
}

void CoroutinePacket_obj::setTime(){
            	HX_STACKFRAME(&_hx_pos_c959302e95626475_25_setTime)
HXDLIN(  25)		this->sent = ::Sys_obj::cpuTime();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CoroutinePacket_obj,setTime,(void))


hx::ObjectPtr< CoroutinePacket_obj > CoroutinePacket_obj::__new( ::src::compiler::object::Object object, ::src::compiler::object::builtin::coroutine::CoroutineObject source) {
	hx::ObjectPtr< CoroutinePacket_obj > __this = new CoroutinePacket_obj();
	__this->__construct(object,source);
	return __this;
}

hx::ObjectPtr< CoroutinePacket_obj > CoroutinePacket_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::object::Object object, ::src::compiler::object::builtin::coroutine::CoroutineObject source) {
	CoroutinePacket_obj *__this = (CoroutinePacket_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CoroutinePacket_obj), true, "src.compiler.object.builtin.coroutine.CoroutinePacket"));
	*(void **)__this = CoroutinePacket_obj::_hx_vtable;
	__this->__construct(object,source);
	return __this;
}

CoroutinePacket_obj::CoroutinePacket_obj()
{
}

void CoroutinePacket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CoroutinePacket);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(readBy,"readBy");
	HX_MARK_MEMBER_NAME(sent,"sent");
	HX_MARK_END_CLASS();
}

void CoroutinePacket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(readBy,"readBy");
	HX_VISIT_MEMBER_NAME(sent,"sent");
}

hx::Val CoroutinePacket_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sent") ) { return hx::Val( sent ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"source") ) { return hx::Val( source ); }
		if (HX_FIELD_EQ(inName,"readBy") ) { return hx::Val( readBy ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTime") ) { return hx::Val( setTime_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CoroutinePacket_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sent") ) { sent=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::src::compiler::object::Object >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast<  ::src::compiler::object::builtin::coroutine::CoroutineObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readBy") ) { readBy=inValue.Cast<  ::src::compiler::object::builtin::coroutine::CoroutineObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CoroutinePacket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("readBy","\xcd","\x86","\x91","\xfc"));
	outFields->push(HX_HCSTRING("sent","\x58","\x8d","\x50","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CoroutinePacket_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::object::Object*/ ,(int)offsetof(CoroutinePacket_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsObject /*::src::compiler::object::builtin::coroutine::CoroutineObject*/ ,(int)offsetof(CoroutinePacket_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsObject /*::src::compiler::object::builtin::coroutine::CoroutineObject*/ ,(int)offsetof(CoroutinePacket_obj,readBy),HX_HCSTRING("readBy","\xcd","\x86","\x91","\xfc")},
	{hx::fsFloat,(int)offsetof(CoroutinePacket_obj,sent),HX_HCSTRING("sent","\x58","\x8d","\x50","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CoroutinePacket_obj_sStaticStorageInfo = 0;
#endif

static ::String CoroutinePacket_obj_sMemberFields[] = {
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("readBy","\xcd","\x86","\x91","\xfc"),
	HX_HCSTRING("sent","\x58","\x8d","\x50","\x4c"),
	HX_HCSTRING("setTime","\xcf","\x0c","\x81","\x12"),
	::String(null()) };

static void CoroutinePacket_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoroutinePacket_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoroutinePacket_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoroutinePacket_obj::__mClass,"__mClass");
};

#endif

hx::Class CoroutinePacket_obj::__mClass;

void CoroutinePacket_obj::__register()
{
	hx::Object *dummy = new CoroutinePacket_obj;
	CoroutinePacket_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.coroutine.CoroutinePacket","\x75","\xa8","\x6a","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CoroutinePacket_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CoroutinePacket_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CoroutinePacket_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoroutinePacket_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoroutinePacket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoroutinePacket_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
} // end namespace coroutine
