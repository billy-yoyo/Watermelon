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
#ifndef INCLUDED_src_compiler_bytecode_Bytecode
#include <src/compiler/bytecode/Bytecode.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_BytecodeMap
#include <src/compiler/bytecode/BytecodeMap.h>
#endif
#ifndef INCLUDED_src_compiler_commands_AssignmentCommand
#include <src/compiler/commands/AssignmentCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_BreakCommand
#include <src/compiler/commands/BreakCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_ContinueCommand
#include <src/compiler/commands/ContinueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_DeleteCommand
#include <src/compiler/commands/DeleteCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_ForLoopComand
#include <src/compiler/commands/ForLoopComand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_FunctionCodeCommand
#include <src/compiler/commands/FunctionCodeCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_FunctionDefinitionCommand
#include <src/compiler/commands/FunctionDefinitionCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_IfCommand
#include <src/compiler/commands/IfCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_IteratorCommand
#include <src/compiler/commands/IteratorCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_LoopCodeCommand
#include <src/compiler/commands/LoopCodeCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_ReturnCommand
#include <src/compiler/commands/ReturnCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_RootCommand
#include <src/compiler/commands/RootCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_TypeDefinitionCommand
#include <src/compiler/commands/TypeDefinitionCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_WhileLoopCommand
#include <src/compiler/commands/WhileLoopCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_BinaryExpressionValueCommand
#include <src/compiler/commands/value/BinaryExpressionValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_BoolExpressionValueCommand
#include <src/compiler/commands/value/BoolExpressionValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ContainsValueCommand
#include <src/compiler/commands/value/ContainsValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_EqualityValueCommand
#include <src/compiler/commands/value/EqualityValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_FunctionCallValueCommand
#include <src/compiler/commands/value/FunctionCallValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ListValueCommand
#include <src/compiler/commands/value/ListValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_MapValueCommand
#include <src/compiler/commands/value/MapValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_MathsExpressionValueCommand
#include <src/compiler/commands/value/MathsExpressionValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ObjectArrayAccessValueCommand
#include <src/compiler/commands/value/ObjectArrayAccessValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ObjectArrayAssignmentCommand
#include <src/compiler/commands/value/ObjectArrayAssignmentCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ObjectIndexPair
#include <src/compiler/commands/value/ObjectIndexPair.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ObjectValueCommand
#include <src/compiler/commands/value/ObjectValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_TupleValueCommand
#include <src/compiler/commands/value/TupleValueCommand.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_698a096316e4700b_115_fromCommand,"src.compiler.bytecode.BytecodeMap","fromCommand",0xbc7e71c6,"src.compiler.bytecode.BytecodeMap.fromCommand","src/compiler/bytecode/BytecodeMap.hx",115,0xf40e8ecc)
HX_LOCAL_STACK_FRAME(_hx_pos_698a096316e4700b_119_fromString,"src.compiler.bytecode.BytecodeMap","fromString",0xfcca10b6,"src.compiler.bytecode.BytecodeMap.fromString","src/compiler/bytecode/BytecodeMap.hx",119,0xf40e8ecc)
HX_LOCAL_STACK_FRAME(_hx_pos_698a096316e4700b_127_getCommand,"src.compiler.bytecode.BytecodeMap","getCommand",0x7924da30,"src.compiler.bytecode.BytecodeMap.getCommand","src/compiler/bytecode/BytecodeMap.hx",127,0xf40e8ecc)
HX_LOCAL_STACK_FRAME(_hx_pos_698a096316e4700b_132_getConverter,"src.compiler.bytecode.BytecodeMap","getConverter",0xc2cb2545,"src.compiler.bytecode.BytecodeMap.getConverter","src/compiler/bytecode/BytecodeMap.hx",132,0xf40e8ecc)
HX_LOCAL_STACK_FRAME(_hx_pos_698a096316e4700b_137_getConverterFromID,"src.compiler.bytecode.BytecodeMap","getConverterFromID",0x26d8eeea,"src.compiler.bytecode.BytecodeMap.getConverterFromID","src/compiler/bytecode/BytecodeMap.hx",137,0xf40e8ecc)
HX_LOCAL_STACK_FRAME(_hx_pos_698a096316e4700b_13_boot,"src.compiler.bytecode.BytecodeMap","boot",0xa04d80cd,"src.compiler.bytecode.BytecodeMap.boot","src/compiler/bytecode/BytecodeMap.hx",13,0xf40e8ecc)
static const ::String _hx_array_data_a879a9b3_6[] = {
	HX_("StringPool",6d,16,0a,f3),HX_("Variable8",5c,c2,35,24),HX_("Variable32",fb,49,d4,8a),HX_("Variable64",9a,4c,d4,8a),HX_("String",f1,9c,c4,45),HX_("StringPoolString",1e,c3,26,a9),HX_("Int8",89,70,94,30),HX_("Int32",2e,03,4e,51),HX_("Int64",cd,05,4e,51),HX_("Float",7c,35,c4,95),HX_("Double",31,9f,5f,67),HX_("True",6e,d3,dc,37),HX_("False",83,a5,7c,8e),HX_("Zero",48,3b,ca,3b),HX_("One",46,52,3c,00),HX_("Two",6c,25,40,00),HX_("Three",3e,c4,bd,a2),HX_("Four",06,90,99,2e),HX_("Five",52,03,95,2e),HX_("Six",02,57,3f,00),HX_("Seven",ed,94,5e,0d),HX_("Eight",2f,f1,5b,00),HX_("Nine",52,b1,de,33),HX_("Ten",bd,15,40,00),HX_("Array",79,dd,bc,b8),HX_("Literal",4f,d1,6c,61),HX_("Map",7c,c2,3a,00),HX_("Null",a7,ca,e7,33),HX_("BoolExpressionValueCommand",7c,27,97,d7),HX_("ContainsValueCommand",b9,9e,cf,1c),HX_("EqualityValueCommand",14,ac,fa,7d),HX_("FunctionCallValueCommand",f0,66,19,6a),HX_("ListValueCommand",78,b3,90,9e),HX_("MapValueCommand",76,32,8d,69),HX_("MathsExpressionValueCommand",7d,ed,09,08),HX_("ObjectArrayAccessValueCommand",78,7e,b7,a4),HX_("ObjectArrayAssignmentCommand",e4,79,15,43),HX_("ObjectIndexPair",6d,ad,2e,f2),HX_("ObjectValueCommand",59,eb,9e,45),HX_("TupleValueCommand",e2,ed,24,27),HX_("VariableValueCommand",56,8e,e3,af),HX_("AssignmentCommand",5e,bd,c8,6a),HX_("BreakCommand",6c,66,14,58),HX_("ContinueCommand",84,ab,a9,ed),HX_("DeleteCommand",40,54,e7,27),HX_("ForLoopCommand",de,e6,e8,2e),HX_("FunctionCodeCommand",46,a3,e9,4f),HX_("FunctionDefinitionCommand",a0,a5,36,69),HX_("IfCommand",ce,02,af,3f),HX_("IteratorCommand",dd,90,61,b2),HX_("LoopCodeCommand",7a,a3,83,06),HX_("ReturnCommand",5b,3a,ec,60),HX_("RootCommand",29,2b,cf,57),HX_("TypeDefinitionCommand",be,37,b8,49),HX_("WhileLoopCommand",36,23,38,dc),HX_("Argument",9d,2a,5b,df),HX_("ValueCommandPair",34,33,09,1c),HX_("CondAndExpr",ca,c1,2d,62),HX_("FunctionArgumentCommand",f6,23,fd,a4),HX_("VariableAccess",20,05,1f,5c),HX_("BinaryExpressionValueCommand",93,80,c0,81),
};
HX_LOCAL_STACK_FRAME(_hx_pos_698a096316e4700b_77_boot,"src.compiler.bytecode.BytecodeMap","boot",0xa04d80cd,"src.compiler.bytecode.BytecodeMap.boot","src/compiler/bytecode/BytecodeMap.hx",77,0xf40e8ecc)
namespace src{
namespace compiler{
namespace bytecode{

void BytecodeMap_obj::__construct() { }

Dynamic BytecodeMap_obj::__CreateEmpty() { return new BytecodeMap_obj; }

void *BytecodeMap_obj::_hx_vtable = 0;

Dynamic BytecodeMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BytecodeMap_obj > _hx_result = new BytecodeMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BytecodeMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29a2c88f;
}

::Array< ::String > BytecodeMap_obj::codeMap;

 ::haxe::ds::StringMap BytecodeMap_obj::fromBytecodeMap;

int BytecodeMap_obj::fromCommand( ::src::compiler::commands::Command command){
            	HX_STACKFRAME(&_hx_pos_698a096316e4700b_115_fromCommand)
HXDLIN( 115)		return ::src::compiler::bytecode::BytecodeMap_obj::fromString(command->getName());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytecodeMap_obj,fromCommand,return )

int BytecodeMap_obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_698a096316e4700b_119_fromString)
HXLINE( 120)		int index = ::src::compiler::bytecode::BytecodeMap_obj::codeMap->indexOf(s,null());
HXLINE( 121)		if ((index == (int)-1)) {
HXLINE( 121)			HX_STACK_DO_THROW((HX_("Failed to find command ",7a,21,f5,98) + s));
            		}
HXLINE( 122)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytecodeMap_obj,fromString,return )

::String BytecodeMap_obj::getCommand(int code){
            	HX_STACKFRAME(&_hx_pos_698a096316e4700b_127_getCommand)
HXDLIN( 127)		return ::src::compiler::bytecode::BytecodeMap_obj::codeMap->__get(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytecodeMap_obj,getCommand,return )

 ::Dynamic BytecodeMap_obj::getConverter(::String cmd){
            	HX_STACKFRAME(&_hx_pos_698a096316e4700b_132_getConverter)
HXDLIN( 132)		return ::src::compiler::bytecode::BytecodeMap_obj::fromBytecodeMap->get(cmd);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytecodeMap_obj,getConverter,return )

 ::Dynamic BytecodeMap_obj::getConverterFromID(int code){
            	HX_STACKFRAME(&_hx_pos_698a096316e4700b_137_getConverterFromID)
HXDLIN( 137)		return ::src::compiler::bytecode::BytecodeMap_obj::getConverter(::src::compiler::bytecode::BytecodeMap_obj::getCommand(code));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytecodeMap_obj,getConverterFromID,return )


BytecodeMap_obj::BytecodeMap_obj()
{
}

bool BytecodeMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"codeMap") ) { outValue = ( codeMap ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCommand") ) { outValue = getCommand_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromCommand") ) { outValue = fromCommand_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getConverter") ) { outValue = getConverter_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromBytecodeMap") ) { outValue = ( fromBytecodeMap ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getConverterFromID") ) { outValue = getConverterFromID_dyn(); return true; }
	}
	return false;
}

bool BytecodeMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"codeMap") ) { codeMap=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromBytecodeMap") ) { fromBytecodeMap=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BytecodeMap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo BytecodeMap_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &BytecodeMap_obj::codeMap,HX_HCSTRING("codeMap","\x6f","\x4b","\x79","\x4d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &BytecodeMap_obj::fromBytecodeMap,HX_HCSTRING("fromBytecodeMap","\x1d","\x14","\xb7","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void BytecodeMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytecodeMap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BytecodeMap_obj::codeMap,"codeMap");
	HX_MARK_MEMBER_NAME(BytecodeMap_obj::fromBytecodeMap,"fromBytecodeMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BytecodeMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytecodeMap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BytecodeMap_obj::codeMap,"codeMap");
	HX_VISIT_MEMBER_NAME(BytecodeMap_obj::fromBytecodeMap,"fromBytecodeMap");
};

#endif

hx::Class BytecodeMap_obj::__mClass;

static ::String BytecodeMap_obj_sStaticFields[] = {
	HX_HCSTRING("codeMap","\x6f","\x4b","\x79","\x4d"),
	HX_HCSTRING("fromBytecodeMap","\x1d","\x14","\xb7","\xda"),
	HX_HCSTRING("fromCommand","\x01","\xd5","\xad","\x19"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("getCommand","\x55","\xf7","\xce","\xd0"),
	HX_HCSTRING("getConverter","\xaa","\x95","\x12","\xef"),
	HX_HCSTRING("getConverterFromID","\x0f","\x39","\x4c","\x0e"),
	::String(null())
};

void BytecodeMap_obj::__register()
{
	hx::Object *dummy = new BytecodeMap_obj;
	BytecodeMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.bytecode.BytecodeMap","\xb3","\xa9","\x79","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BytecodeMap_obj::__GetStatic;
	__mClass->mSetStaticField = &BytecodeMap_obj::__SetStatic;
	__mClass->mMarkFunc = BytecodeMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BytecodeMap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BytecodeMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BytecodeMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytecodeMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytecodeMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BytecodeMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_698a096316e4700b_13_boot)
HXDLIN(  13)		codeMap = ::Array_obj< ::String >::fromData( _hx_array_data_a879a9b3_6,61);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_698a096316e4700b_77_boot)
HXDLIN(  77)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  77)			_g->set(HX_("BoolExpressionValueCommand",7c,27,97,d7),::src::compiler::commands::value::BoolExpressionValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ContainsValueCommand",b9,9e,cf,1c),::src::compiler::commands::value::ContainsValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("EqualityValueCommand",14,ac,fa,7d),::src::compiler::commands::value::EqualityValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("FunctionCallValueCommand",f0,66,19,6a),::src::compiler::commands::value::FunctionCallValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ListValueCommand",78,b3,90,9e),::src::compiler::commands::value::ListValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("MapValueCommand",76,32,8d,69),::src::compiler::commands::value::MapValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("MathsExpressionValueCommand",7d,ed,09,08),::src::compiler::commands::value::MathsExpressionValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ObjectArrayAccessValueCommand",78,7e,b7,a4),::src::compiler::commands::value::ObjectArrayAccessValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ObjectArrayAssignmentCommand",e4,79,15,43),::src::compiler::commands::value::ObjectArrayAssignmentCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ObjectIndexPair",6d,ad,2e,f2),::src::compiler::commands::value::ObjectIndexPair_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ObjectValueCommand",59,eb,9e,45),::src::compiler::commands::value::ObjectValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("TupleValueCommand",e2,ed,24,27),::src::compiler::commands::value::TupleValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("VariableValueCommand",56,8e,e3,af),::src::compiler::commands::value::VariableValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("AssignmentCommand",5e,bd,c8,6a),::src::compiler::commands::AssignmentCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("BreakCommand",6c,66,14,58),::src::compiler::commands::BreakCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ContinueCommand",84,ab,a9,ed),::src::compiler::commands::ContinueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("DeleteCommand",40,54,e7,27),::src::compiler::commands::DeleteCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ForLoopCommand",de,e6,e8,2e),::src::compiler::commands::ForLoopComand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("FunctionCodeCommand",46,a3,e9,4f),::src::compiler::commands::FunctionCodeCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("FunctionDefinitionCommand",a0,a5,36,69),::src::compiler::commands::FunctionDefinitionCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("IfCommand",ce,02,af,3f),::src::compiler::commands::IfCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("IteratorCommand",dd,90,61,b2),::src::compiler::commands::IteratorCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("LoopCodeCommand",7a,a3,83,06),::src::compiler::commands::LoopCodeCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("ReturnCommand",5b,3a,ec,60),::src::compiler::commands::ReturnCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("RootCommand",29,2b,cf,57),::src::compiler::commands::RootCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("TypeDefinitionCommand",be,37,b8,49),::src::compiler::commands::TypeDefinitionCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("WhileLoopCommand",36,23,38,dc),::src::compiler::commands::WhileLoopCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("Argument",9d,2a,5b,df),::src::compiler::commands::value::FunctionCallValueCommand_obj::getArgumentFromBytes());
HXDLIN(  77)			_g->set(HX_("ValueCommandPair",34,33,09,1c),::src::compiler::commands::value::MapValueCommand_obj::getValueCommandPairFromBytes());
HXDLIN(  77)			_g->set(HX_("CondAndExpr",ca,c1,2d,62),::src::compiler::commands::IfCommand_obj::getCondAndExprFromBytes());
HXDLIN(  77)			_g->set(HX_("FunctionArgumentCommand",f6,23,fd,a4),::src::compiler::commands::FunctionDefinitionCommand_obj::getFunctionArgumentCommandFromBytes());
HXDLIN(  77)			_g->set(HX_("VariableAccess",20,05,1f,5c),::src::compiler::commands::value::VariableAccess_obj::fromBytecode_dyn());
HXDLIN(  77)			_g->set(HX_("BinaryExpressionValueCommand",93,80,c0,81),::src::compiler::commands::value::BinaryExpressionValueCommand_obj::fromBytecode_dyn());
HXDLIN(  77)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_698a096316e4700b_77_boot)
HXDLIN(  77)		fromBytecodeMap =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace src
} // end namespace compiler
} // end namespace bytecode
