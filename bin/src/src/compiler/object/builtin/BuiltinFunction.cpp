// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_BuiltinFunction
#include <src/compiler/object/builtin/BuiltinFunction.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3da23fa78100dd24_10_new,"src.compiler.object.builtin.BuiltinFunction","new",0x9776f098,"src.compiler.object.builtin.BuiltinFunction.new","src/compiler/object/builtin/BuiltinFunction.hx",10,0xfe8ee77a)
HX_LOCAL_STACK_FRAME(_hx_pos_3da23fa78100dd24_16_setup,"src.compiler.object.builtin.BuiltinFunction","setup",0x78854cb5,"src.compiler.object.builtin.BuiltinFunction.setup","src/compiler/object/builtin/BuiltinFunction.hx",16,0xfe8ee77a)
HX_LOCAL_STACK_FRAME(_hx_pos_3da23fa78100dd24_20_call,"src.compiler.object.builtin.BuiltinFunction","call",0xe9532966,"src.compiler.object.builtin.BuiltinFunction.call","src/compiler/object/builtin/BuiltinFunction.hx",20,0xfe8ee77a)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void BuiltinFunction_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_3da23fa78100dd24_10_new)
HXDLIN(  10)		super::__construct(scope,type,members,value,args);
            	}

Dynamic BuiltinFunction_obj::__CreateEmpty() { return new BuiltinFunction_obj; }

void *BuiltinFunction_obj::_hx_vtable = 0;

Dynamic BuiltinFunction_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BuiltinFunction_obj > _hx_result = new BuiltinFunction_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool BuiltinFunction_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6a4c5ffa) {
		if (inClassId<=(int)0x15de4261) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15de4261;
		} else {
			return inClassId==(int)0x6a4c5ffa;
		}
	} else {
		return inClassId==(int)0x782c6273;
	}
}

void BuiltinFunction_obj::setup( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3da23fa78100dd24_16_setup)
HXDLIN(  16)		this->func = value;
            	}


 ::src::compiler::object::Object BuiltinFunction_obj::call(::Array< ::Dynamic> values){
            	HX_STACKFRAME(&_hx_pos_3da23fa78100dd24_20_call)
HXLINE(  21)		if (this->hasMember(HX_("__bound__",be,5f,06,75))) {
HXLINE(  21)			values->insert((int)0,this->getMember(HX_("__bound__",be,5f,06,75)));
            		}
HXLINE(  22)		return ( ( ::src::compiler::object::Object)(this->func(values)) );
            	}



hx::ObjectPtr< BuiltinFunction_obj > BuiltinFunction_obj::__new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	hx::ObjectPtr< BuiltinFunction_obj > __this = new BuiltinFunction_obj();
	__this->__construct(scope,type,members,value,args);
	return __this;
}

hx::ObjectPtr< BuiltinFunction_obj > BuiltinFunction_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	BuiltinFunction_obj *__this = (BuiltinFunction_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BuiltinFunction_obj), true, "src.compiler.object.builtin.BuiltinFunction"));
	*(void **)__this = BuiltinFunction_obj::_hx_vtable;
	__this->__construct(scope,type,members,value,args);
	return __this;
}

BuiltinFunction_obj::BuiltinFunction_obj()
{
}

void BuiltinFunction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BuiltinFunction);
	HX_MARK_MEMBER_NAME(func,"func");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BuiltinFunction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(func,"func");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val BuiltinFunction_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"func") ) { return hx::Val( func ); }
		if (HX_FIELD_EQ(inName,"call") ) { return hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return hx::Val( setup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BuiltinFunction_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"func") ) { func=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BuiltinFunction_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BuiltinFunction_obj,func),HX_HCSTRING("func","\x44","\xeb","\xc4","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BuiltinFunction_obj_sStaticStorageInfo = 0;
#endif

static ::String BuiltinFunction_obj_sMemberFields[] = {
	HX_HCSTRING("func","\x44","\xeb","\xc4","\x43"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void BuiltinFunction_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BuiltinFunction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BuiltinFunction_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BuiltinFunction_obj::__mClass,"__mClass");
};

#endif

hx::Class BuiltinFunction_obj::__mClass;

void BuiltinFunction_obj::__register()
{
	hx::Object *dummy = new BuiltinFunction_obj;
	BuiltinFunction_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.BuiltinFunction","\xa6","\x04","\x65","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BuiltinFunction_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BuiltinFunction_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BuiltinFunction_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BuiltinFunction_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BuiltinFunction_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BuiltinFunction_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
