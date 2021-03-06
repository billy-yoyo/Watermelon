// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_Bytecode
#include <src/compiler/bytecode/Bytecode.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_VariableAccess
#include <src/compiler/commands/value/VariableAccess.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_VariableValueCommand
#include <src/compiler/commands/value/VariableValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85ab6144d843f4bd_28_new,"src.compiler.commands.value.VariableValueCommand","new",0xa94a4ec6,"src.compiler.commands.value.VariableValueCommand.new","src/compiler/commands/value/VariableValueCommand.hx",28,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_35_copy,"src.compiler.commands.value.VariableValueCommand","copy",0x707cd68f,"src.compiler.commands.value.VariableValueCommand.copy","src/compiler/commands/value/VariableValueCommand.hx",35,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_39_setScope,"src.compiler.commands.value.VariableValueCommand","setScope",0x62356a6c,"src.compiler.commands.value.VariableValueCommand.setScope","src/compiler/commands/value/VariableValueCommand.hx",39,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_46_walk,"src.compiler.commands.value.VariableValueCommand","walk",0x7daa77e3,"src.compiler.commands.value.VariableValueCommand.walk","src/compiler/commands/value/VariableValueCommand.hx",46,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_52_run,"src.compiler.commands.value.VariableValueCommand","run",0xa94d65b1,"src.compiler.commands.value.VariableValueCommand.run","src/compiler/commands/value/VariableValueCommand.hx",52,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_57_getName,"src.compiler.commands.value.VariableValueCommand","getName",0xaf6ecb67,"src.compiler.commands.value.VariableValueCommand.getName","src/compiler/commands/value/VariableValueCommand.hx",57,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_62_getFriendlyName,"src.compiler.commands.value.VariableValueCommand","getFriendlyName",0x7a621172,"src.compiler.commands.value.VariableValueCommand.getFriendlyName","src/compiler/commands/value/VariableValueCommand.hx",62,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_67_getBytecode,"src.compiler.commands.value.VariableValueCommand","getBytecode",0xea600b51,"src.compiler.commands.value.VariableValueCommand.getBytecode","src/compiler/commands/value/VariableValueCommand.hx",67,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_72_reconstruct,"src.compiler.commands.value.VariableValueCommand","reconstruct",0xfceeba6a,"src.compiler.commands.value.VariableValueCommand.reconstruct","src/compiler/commands/value/VariableValueCommand.hx",72,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_18_fromTokens,"src.compiler.commands.value.VariableValueCommand","fromTokens",0x7539d6be,"src.compiler.commands.value.VariableValueCommand.fromTokens","src/compiler/commands/value/VariableValueCommand.hx",18,0x7f2c6cc8)
HX_LOCAL_STACK_FRAME(_hx_pos_85ab6144d843f4bd_23_fromBytecode,"src.compiler.commands.value.VariableValueCommand","fromBytecode",0xc4a45499,"src.compiler.commands.value.VariableValueCommand.fromBytecode","src/compiler/commands/value/VariableValueCommand.hx",23,0x7f2c6cc8)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void VariableValueCommand_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::commands::value::VariableAccess variable){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_28_new)
HXLINE(  29)		super::__construct(scope);
HXLINE(  30)		this->variable = variable;
            	}

Dynamic VariableValueCommand_obj::__CreateEmpty() { return new VariableValueCommand_obj; }

void *VariableValueCommand_obj::_hx_vtable = 0;

Dynamic VariableValueCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VariableValueCommand_obj > _hx_result = new VariableValueCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VariableValueCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1020cfc0) {
		if (inClassId<=(int)0x08fa0880) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08fa0880;
		} else {
			return inClassId==(int)0x1020cfc0;
		}
	} else {
		return inClassId==(int)0x20538180;
	}
}

 ::src::compiler::commands::Command VariableValueCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_85ab6144d843f4bd_35_copy)
HXDLIN(  35)		return  ::src::compiler::commands::value::VariableValueCommand_obj::__alloc( HX_CTX ,scope,this->variable->copy(scope));
            	}


void VariableValueCommand_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_39_setScope)
HXLINE(  40)		this->super::setScope(scope);
HXLINE(  41)		this->variable->setScope(scope);
            	}


::Array< ::Dynamic> VariableValueCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_46_walk)
HXDLIN(  46)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,this->variable);
            	}


 ::src::compiler::object::Object VariableValueCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_52_run)
HXDLIN(  52)		return this->variable->getVariable();
            	}


::String VariableValueCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_57_getName)
HXDLIN(  57)		return HX_("VariableValueCommand",56,8e,e3,af);
            	}


::String VariableValueCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_62_getFriendlyName)
HXDLIN(  62)		return HX_("variable",3c,12,0d,69);
            	}


 ::src::compiler::bytecode::Bytecode VariableValueCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_67_getBytecode)
HXDLIN(  67)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(1)->init(0,this->variable);
HXDLIN(  67)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> VariableValueCommand_obj::reconstruct(){
            	HX_STACKFRAME(&_hx_pos_85ab6144d843f4bd_72_reconstruct)
HXDLIN(  72)		return this->variable->reconstruct();
            	}


 ::src::compiler::commands::value::VariableValueCommand VariableValueCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_85ab6144d843f4bd_18_fromTokens)
HXDLIN(  18)		return  ::src::compiler::commands::value::VariableValueCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::commands::value::VariableAccess_obj::fromTokens(scope,tokens,null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VariableValueCommand_obj,fromTokens,return )

 ::src::compiler::commands::value::VariableValueCommand VariableValueCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_85ab6144d843f4bd_23_fromBytecode)
HXDLIN(  23)		return  ::src::compiler::commands::value::VariableValueCommand_obj::__alloc( HX_CTX ,scope,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VariableValueCommand_obj,fromBytecode,return )


hx::ObjectPtr< VariableValueCommand_obj > VariableValueCommand_obj::__new( ::src::compiler::Scope scope, ::src::compiler::commands::value::VariableAccess variable) {
	hx::ObjectPtr< VariableValueCommand_obj > __this = new VariableValueCommand_obj();
	__this->__construct(scope,variable);
	return __this;
}

hx::ObjectPtr< VariableValueCommand_obj > VariableValueCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::commands::value::VariableAccess variable) {
	VariableValueCommand_obj *__this = (VariableValueCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VariableValueCommand_obj), true, "src.compiler.commands.value.VariableValueCommand"));
	*(void **)__this = VariableValueCommand_obj::_hx_vtable;
	__this->__construct(scope,variable);
	return __this;
}

VariableValueCommand_obj::VariableValueCommand_obj()
{
}

void VariableValueCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VariableValueCommand);
	HX_MARK_MEMBER_NAME(variable,"variable");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VariableValueCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variable,"variable");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val VariableValueCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"variable") ) { return hx::Val( variable ); }
		if (HX_FIELD_EQ(inName,"setScope") ) { return hx::Val( setScope_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFriendlyName") ) { return hx::Val( getFriendlyName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VariableValueCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromTokens") ) { outValue = fromTokens_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
	}
	return false;
}

hx::Val VariableValueCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"variable") ) { variable=inValue.Cast<  ::src::compiler::commands::value::VariableAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VariableValueCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VariableValueCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::VariableAccess*/ ,(int)offsetof(VariableValueCommand_obj,variable),HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VariableValueCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String VariableValueCommand_obj_sMemberFields[] = {
	HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("setScope","\x92","\xda","\x0d","\x87"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void VariableValueCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VariableValueCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VariableValueCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VariableValueCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class VariableValueCommand_obj::__mClass;

static ::String VariableValueCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void VariableValueCommand_obj::__register()
{
	hx::Object *dummy = new VariableValueCommand_obj;
	VariableValueCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.VariableValueCommand","\xd4","\x33","\x06","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VariableValueCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VariableValueCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VariableValueCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VariableValueCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VariableValueCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VariableValueCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VariableValueCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VariableValueCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value
