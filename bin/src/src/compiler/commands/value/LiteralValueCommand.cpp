// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_VariableToken
#include <src/ast/base/VariableToken.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_Bytecode
#include <src/compiler/bytecode/Bytecode.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_BytecodeMap
#include <src/compiler/bytecode/BytecodeMap.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_LiteralValueCommand
#include <src/compiler/commands/value/LiteralValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_19_new,"src.compiler.commands.value.LiteralValueCommand","new",0x1c51c87d,"src.compiler.commands.value.LiteralValueCommand.new","src/compiler/commands/value/LiteralValueCommand.hx",19,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_26_copy,"src.compiler.commands.value.LiteralValueCommand","copy",0xa3ffdcf8,"src.compiler.commands.value.LiteralValueCommand.copy","src/compiler/commands/value/LiteralValueCommand.hx",26,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_31_getContent,"src.compiler.commands.value.LiteralValueCommand","getContent",0xcfc108c6,"src.compiler.commands.value.LiteralValueCommand.getContent","src/compiler/commands/value/LiteralValueCommand.hx",31,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_36_setContent,"src.compiler.commands.value.LiteralValueCommand","setContent",0xd33ea73a,"src.compiler.commands.value.LiteralValueCommand.setContent","src/compiler/commands/value/LiteralValueCommand.hx",36,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_41_run,"src.compiler.commands.value.LiteralValueCommand","run",0x1c54df68,"src.compiler.commands.value.LiteralValueCommand.run","src/compiler/commands/value/LiteralValueCommand.hx",41,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_46_getName,"src.compiler.commands.value.LiteralValueCommand","getName",0x8c7aec9e,"src.compiler.commands.value.LiteralValueCommand.getName","src/compiler/commands/value/LiteralValueCommand.hx",46,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_51_getFriendlyName,"src.compiler.commands.value.LiteralValueCommand","getFriendlyName",0xb3d4c1a9,"src.compiler.commands.value.LiteralValueCommand.getFriendlyName","src/compiler/commands/value/LiteralValueCommand.hx",51,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_56_getBytecode,"src.compiler.commands.value.LiteralValueCommand","getBytecode",0x219a9408,"src.compiler.commands.value.LiteralValueCommand.getBytecode","src/compiler/commands/value/LiteralValueCommand.hx",56,0xc52b29f5)
HX_LOCAL_STACK_FRAME(_hx_pos_1a83e04d6e44c9a4_61_reconstruct,"src.compiler.commands.value.LiteralValueCommand","reconstruct",0x34294321,"src.compiler.commands.value.LiteralValueCommand.reconstruct","src/compiler/commands/value/LiteralValueCommand.hx",61,0xc52b29f5)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void LiteralValueCommand_obj::__construct( ::src::compiler::Scope scope,::String content){
            	HX_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_19_new)
HXLINE(  20)		super::__construct(scope);
HXLINE(  21)		this->content = content;
            	}

Dynamic LiteralValueCommand_obj::__CreateEmpty() { return new LiteralValueCommand_obj; }

void *LiteralValueCommand_obj::_hx_vtable = 0;

Dynamic LiteralValueCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LiteralValueCommand_obj > _hx_result = new LiteralValueCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LiteralValueCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1628ecc3) {
		if (inClassId<=(int)0x1020cfc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1020cfc0;
		} else {
			return inClassId==(int)0x1628ecc3;
		}
	} else {
		return inClassId==(int)0x20538180;
	}
}

 ::src::compiler::commands::Command LiteralValueCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_26_copy)
HXDLIN(  26)		return  ::src::compiler::commands::value::LiteralValueCommand_obj::__alloc( HX_CTX ,scope,this->content);
            	}


::String LiteralValueCommand_obj::getContent(){
            	HX_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_31_getContent)
HXDLIN(  31)		return this->content;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LiteralValueCommand_obj,getContent,return )

void LiteralValueCommand_obj::setContent(::String content){
            	HX_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_36_setContent)
HXDLIN(  36)		this->content = content;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LiteralValueCommand_obj,setContent,(void))

 ::src::compiler::object::Object LiteralValueCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_41_run)
HXDLIN(  41)		return this->scope->getType(HX_("StringType",4b,88,b6,f5),null())->createValue(this->content,this->scope,null());
            	}


::String LiteralValueCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_46_getName)
HXDLIN(  46)		return HX_("LiteralValueCommand",c9,b1,43,d2);
            	}


::String LiteralValueCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_51_getFriendlyName)
HXDLIN(  51)		return HX_("literal",6f,a9,1b,94);
            	}


 ::src::compiler::bytecode::Bytecode LiteralValueCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_56_getBytecode)
HXDLIN(  56)		::String _hx_tmp = this->content;
HXDLIN(  56)		return ::src::compiler::bytecode::Bytecode_obj::fromString(_hx_tmp,::src::compiler::bytecode::BytecodeMap_obj::fromString(HX_("Literal",4f,d1,6c,61)),null());
            	}


::Array< ::Dynamic> LiteralValueCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_1a83e04d6e44c9a4_61_reconstruct)
HXDLIN(  61)		return ::Array_obj< ::Dynamic>::__new(1)->init(0, ::src::ast::base::VariableToken_obj::__alloc( HX_CTX ,this->content));
            	}



hx::ObjectPtr< LiteralValueCommand_obj > LiteralValueCommand_obj::__new( ::src::compiler::Scope scope,::String content) {
	hx::ObjectPtr< LiteralValueCommand_obj > __this = new LiteralValueCommand_obj();
	__this->__construct(scope,content);
	return __this;
}

hx::ObjectPtr< LiteralValueCommand_obj > LiteralValueCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::String content) {
	LiteralValueCommand_obj *__this = (LiteralValueCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LiteralValueCommand_obj), true, "src.compiler.commands.value.LiteralValueCommand"));
	*(void **)__this = LiteralValueCommand_obj::_hx_vtable;
	__this->__construct(scope,content);
	return __this;
}

LiteralValueCommand_obj::LiteralValueCommand_obj()
{
}

void LiteralValueCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LiteralValueCommand);
	HX_MARK_MEMBER_NAME(content,"content");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LiteralValueCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val LiteralValueCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getContent") ) { return hx::Val( getContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"setContent") ) { return hx::Val( setContent_dyn() ); }
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

hx::Val LiteralValueCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LiteralValueCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LiteralValueCommand_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LiteralValueCommand_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LiteralValueCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String LiteralValueCommand_obj_sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("getContent","\x43","\x13","\xd9","\x68"),
	HX_HCSTRING("setContent","\xb7","\xb1","\x56","\x6c"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void LiteralValueCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LiteralValueCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LiteralValueCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LiteralValueCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class LiteralValueCommand_obj::__mClass;

void LiteralValueCommand_obj::__register()
{
	hx::Object *dummy = new LiteralValueCommand_obj;
	LiteralValueCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.LiteralValueCommand","\x0b","\xc6","\x52","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LiteralValueCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LiteralValueCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LiteralValueCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LiteralValueCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LiteralValueCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LiteralValueCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value
