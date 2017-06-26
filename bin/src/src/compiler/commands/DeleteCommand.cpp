// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_BracketToken
#include <src/ast/base/BracketToken.h>
#endif
#ifndef INCLUDED_src_ast_base_KwdToken
#include <src/ast/base/KwdToken.h>
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
#ifndef INCLUDED_src_compiler_commands_DeleteCommand
#include <src/compiler/commands/DeleteCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_VariableAccess
#include <src/compiler/commands/value/VariableAccess.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_SyntaxErrorSignal
#include <src/compiler/signals/SyntaxErrorSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_46_new,"src.compiler.commands.DeleteCommand","new",0xf329fff1,"src.compiler.commands.DeleteCommand.new","src/compiler/commands/DeleteCommand.hx",46,0xb63fa6c0)
HX_LOCAL_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_54_walk,"src.compiler.commands.DeleteCommand","walk",0xd785cc58,"src.compiler.commands.DeleteCommand.walk","src/compiler/commands/DeleteCommand.hx",54,0xb63fa6c0)
HX_LOCAL_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_58_run,"src.compiler.commands.DeleteCommand","run",0xf32d16dc,"src.compiler.commands.DeleteCommand.run","src/compiler/commands/DeleteCommand.hx",58,0xb63fa6c0)
HX_LOCAL_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_70_getName,"src.compiler.commands.DeleteCommand","getName",0x83b5ee12,"src.compiler.commands.DeleteCommand.getName","src/compiler/commands/DeleteCommand.hx",70,0xb63fa6c0)
HX_LOCAL_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_75_getBytecode,"src.compiler.commands.DeleteCommand","getBytecode",0x03655f7c,"src.compiler.commands.DeleteCommand.getBytecode","src/compiler/commands/DeleteCommand.hx",75,0xb63fa6c0)
HX_LOCAL_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_80_reconstruct,"src.compiler.commands.DeleteCommand","reconstruct",0x15f40e95,"src.compiler.commands.DeleteCommand.reconstruct","src/compiler/commands/DeleteCommand.hx",80,0xb63fa6c0)
HX_LOCAL_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_22_fromTokens,"src.compiler.commands.DeleteCommand","fromTokens",0x319b70f3,"src.compiler.commands.DeleteCommand.fromTokens","src/compiler/commands/DeleteCommand.hx",22,0xb63fa6c0)
HX_LOCAL_STACK_FRAME(_hx_pos_62e61cb9a68bc2c9_40_fromBytecode,"src.compiler.commands.DeleteCommand","fromBytecode",0x9048a60e,"src.compiler.commands.DeleteCommand.fromBytecode","src/compiler/commands/DeleteCommand.hx",40,0xb63fa6c0)
namespace src{
namespace compiler{
namespace commands{

void DeleteCommand_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::commands::value::VariableAccess variable, ::src::compiler::commands::value::ValueCommand element){
            	HX_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_46_new)
HXLINE(  47)		super::__construct(scope);
HXLINE(  48)		this->element = element;
HXLINE(  49)		this->variable = variable;
            	}

Dynamic DeleteCommand_obj::__CreateEmpty() { return new DeleteCommand_obj; }

void *DeleteCommand_obj::_hx_vtable = 0;

Dynamic DeleteCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DeleteCommand_obj > _hx_result = new DeleteCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DeleteCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x52951db9;
	}
}

::Array< ::Dynamic> DeleteCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_54_walk)
HXDLIN(  54)		return ::Array_obj< ::Dynamic>::__new(2)->init(0,this->element)->init(1,this->variable);
            	}


 ::src::compiler::object::Object DeleteCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_58_run)
HXLINE(  59)		if (hx::IsNull( this->element )) {
HXLINE(  60)			this->variable->deleteVariable();
            		}
            		else {
HXLINE(  62)			 ::src::compiler::object::Object obj = this->variable->getVariable();
HXLINE(  63)			obj->_hx_delete(this->element->run());
            		}
HXLINE(  65)		return null();
            	}


::String DeleteCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_70_getName)
HXDLIN(  70)		return HX_("DeleteCommand",40,54,e7,27);
            	}


 ::src::compiler::bytecode::Bytecode DeleteCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_75_getBytecode)
HXDLIN(  75)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(2)->init(0,this->variable)->init(1,this->element);
HXDLIN(  75)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> DeleteCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_80_reconstruct)
HXDLIN(  80)		if (hx::IsNull( this->element )) {
HXLINE(  81)			 ::src::ast::base::KwdToken _hx_tmp =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("del",cb,39,4c,00));
HXDLIN(  81)			return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(2)->init(0,_hx_tmp)->init(1,this->variable->reconstruct()));
            		}
            		else {
HXLINE(  83)			 ::src::ast::base::KwdToken _hx_tmp1 =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("del",cb,39,4c,00));
HXDLIN(  83)			::Array< ::Dynamic> _hx_tmp2 = this->variable->reconstruct();
HXDLIN(  83)			return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(3)->init(0,_hx_tmp1)->init(1,_hx_tmp2)->init(2,::src::ast::base::BracketToken_obj::fromRaw(this->element->reconstruct())));
            		}
HXLINE(  80)		return null();
            	}


 ::src::compiler::commands::DeleteCommand DeleteCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_22_fromTokens)
HXLINE(  23)		if ((tokens->length == (int)0)) {
HXLINE(  23)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Empty command",98,14,47,aa)));
            		}
HXLINE(  24)		 ::src::ast::Token start = tokens->shift().StaticCast<  ::src::ast::Token >();
HXLINE(  25)		bool _hx_tmp;
HXDLIN(  25)		if ((start->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  25)			_hx_tmp = hx::IsNotEq( start->getContent(),HX_("del",cb,39,4c,00) );
            		}
            		else {
HXLINE(  25)			_hx_tmp = true;
            		}
HXDLIN(  25)		if (_hx_tmp) {
HXLINE(  25)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Invalid delete command, keyword must be at the start",36,47,5a,79)));
            		}
HXLINE(  26)		 ::src::ast::Token end = tokens->pop().StaticCast<  ::src::ast::Token >();
HXLINE(  27)		if ((end->getName() != HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  27)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Invalid delete command, must end with an end line",1b,60,e4,53)));
            		}
HXLINE(  29)		if ((tokens->length == (int)0)) {
HXLINE(  29)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Empty delete command",a9,28,fe,0e)));
            		}
HXLINE(  31)		bool _hx_tmp1;
HXDLIN(  31)		if ((tokens->length > (int)1)) {
HXLINE(  31)			_hx_tmp1 = (tokens->__get((tokens->length - (int)1)).StaticCast<  ::src::ast::Token >()->getName() == HX_("ListToken",9b,21,3f,cc));
            		}
            		else {
HXLINE(  31)			_hx_tmp1 = false;
            		}
HXDLIN(  31)		if (_hx_tmp1) {
HXLINE(  32)			 ::src::compiler::commands::value::VariableAccess _hx_tmp2 = ::src::compiler::commands::value::VariableAccess_obj::fromTokens(scope,tokens->splice((int)0,(tokens->length - (int)1)),null());
HXDLIN(  32)			return  ::src::compiler::commands::DeleteCommand_obj::__alloc( HX_CTX ,scope,_hx_tmp2,::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,( (::Array< ::Dynamic>)(tokens->pop().StaticCast<  ::src::ast::Token >()->getContent()) )));
            		}
            		else {
HXLINE(  34)			return  ::src::compiler::commands::DeleteCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::commands::value::VariableAccess_obj::fromTokens(scope,tokens,null()),null());
            		}
HXLINE(  31)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DeleteCommand_obj,fromTokens,return )

 ::src::compiler::commands::DeleteCommand DeleteCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_62e61cb9a68bc2c9_40_fromBytecode)
HXDLIN(  40)		 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN(  40)		return  ::src::compiler::commands::DeleteCommand_obj::__alloc( HX_CTX ,scope,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DeleteCommand_obj,fromBytecode,return )


hx::ObjectPtr< DeleteCommand_obj > DeleteCommand_obj::__new( ::src::compiler::Scope scope, ::src::compiler::commands::value::VariableAccess variable, ::src::compiler::commands::value::ValueCommand element) {
	hx::ObjectPtr< DeleteCommand_obj > __this = new DeleteCommand_obj();
	__this->__construct(scope,variable,element);
	return __this;
}

hx::ObjectPtr< DeleteCommand_obj > DeleteCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::commands::value::VariableAccess variable, ::src::compiler::commands::value::ValueCommand element) {
	DeleteCommand_obj *__this = (DeleteCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DeleteCommand_obj), true, "src.compiler.commands.DeleteCommand"));
	*(void **)__this = DeleteCommand_obj::_hx_vtable;
	__this->__construct(scope,variable,element);
	return __this;
}

DeleteCommand_obj::DeleteCommand_obj()
{
}

void DeleteCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DeleteCommand);
	HX_MARK_MEMBER_NAME(element,"element");
	HX_MARK_MEMBER_NAME(variable,"variable");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DeleteCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(element,"element");
	HX_VISIT_MEMBER_NAME(variable,"variable");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DeleteCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { return hx::Val( element ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"variable") ) { return hx::Val( variable ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DeleteCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val DeleteCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"variable") ) { variable=inValue.Cast<  ::src::compiler::commands::value::VariableAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DeleteCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("element","\xbc","\xae","\x54","\x06"));
	outFields->push(HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DeleteCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(DeleteCommand_obj,element),HX_HCSTRING("element","\xbc","\xae","\x54","\x06")},
	{hx::fsObject /*::src::compiler::commands::value::VariableAccess*/ ,(int)offsetof(DeleteCommand_obj,variable),HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DeleteCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String DeleteCommand_obj_sMemberFields[] = {
	HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),
	HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void DeleteCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DeleteCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DeleteCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DeleteCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class DeleteCommand_obj::__mClass;

static ::String DeleteCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void DeleteCommand_obj::__register()
{
	hx::Object *dummy = new DeleteCommand_obj;
	DeleteCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.DeleteCommand","\x7f","\x33","\x75","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DeleteCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DeleteCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DeleteCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DeleteCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DeleteCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DeleteCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DeleteCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DeleteCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
