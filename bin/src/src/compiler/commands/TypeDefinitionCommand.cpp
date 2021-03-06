// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_BlockToken
#include <src/ast/base/BlockToken.h>
#endif
#ifndef INCLUDED_src_ast_base_BracketToken
#include <src/ast/base/BracketToken.h>
#endif
#ifndef INCLUDED_src_ast_base_CommaToken
#include <src/ast/base/CommaToken.h>
#endif
#ifndef INCLUDED_src_ast_base_KwdToken
#include <src/ast/base/KwdToken.h>
#endif
#ifndef INCLUDED_src_ast_base_VariableToken
#include <src/ast/base/VariableToken.h>
#endif
#ifndef INCLUDED_src_compiler_Core
#include <src/compiler/Core.h>
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
#ifndef INCLUDED_src_compiler_commands_TypeDefinitionCommand
#include <src/compiler/commands/TypeDefinitionCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_LiteralValueCommand
#include <src/compiler/commands/value/LiteralValueCommand.h>
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
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ObjectTypeObject
#include <src/compiler/object/builtin/ObjectTypeObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_InvalidArgumentSignal
#include <src/compiler/signals/InvalidArgumentSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_SyntaxErrorSignal
#include <src/compiler/signals/SyntaxErrorSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_YieldSignal
#include <src/compiler/signals/YieldSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_66_new,"src.compiler.commands.TypeDefinitionCommand","new",0x4a3cd16f,"src.compiler.commands.TypeDefinitionCommand.new","src/compiler/commands/TypeDefinitionCommand.hx",66,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_76_copy,"src.compiler.commands.TypeDefinitionCommand","copy",0xa3bca7c6,"src.compiler.commands.TypeDefinitionCommand.copy","src/compiler/commands/TypeDefinitionCommand.hx",76,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_82_setScope,"src.compiler.commands.TypeDefinitionCommand","setScope",0x0b3ba323,"src.compiler.commands.TypeDefinitionCommand.setScope","src/compiler/commands/TypeDefinitionCommand.hx",82,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_90_walk,"src.compiler.commands.TypeDefinitionCommand","walk",0xb0ea491a,"src.compiler.commands.TypeDefinitionCommand.walk","src/compiler/commands/TypeDefinitionCommand.hx",90,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_98_run,"src.compiler.commands.TypeDefinitionCommand","run",0x4a3fe85a,"src.compiler.commands.TypeDefinitionCommand.run","src/compiler/commands/TypeDefinitionCommand.hx",98,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_128_getName,"src.compiler.commands.TypeDefinitionCommand","getName",0x17825690,"src.compiler.commands.TypeDefinitionCommand.getName","src/compiler/commands/TypeDefinitionCommand.hx",128,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_133_getFriendlyName,"src.compiler.commands.TypeDefinitionCommand","getFriendlyName",0x8a226d9b,"src.compiler.commands.TypeDefinitionCommand.getFriendlyName","src/compiler/commands/TypeDefinitionCommand.hx",133,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_138_getBytecode,"src.compiler.commands.TypeDefinitionCommand","getBytecode",0xa602defa,"src.compiler.commands.TypeDefinitionCommand.getBytecode","src/compiler/commands/TypeDefinitionCommand.hx",138,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_143_reconstruct,"src.compiler.commands.TypeDefinitionCommand","reconstruct",0xb8918e13,"src.compiler.commands.TypeDefinitionCommand.reconstruct","src/compiler/commands/TypeDefinitionCommand.hx",143,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_28_fromTokens,"src.compiler.commands.TypeDefinitionCommand","fromTokens",0x16c8eb35,"src.compiler.commands.TypeDefinitionCommand.fromTokens","src/compiler/commands/TypeDefinitionCommand.hx",28,0x33749802)
HX_LOCAL_STACK_FRAME(_hx_pos_11b54e9eee6c27d2_55_fromBytecode,"src.compiler.commands.TypeDefinitionCommand","fromBytecode",0x377ab4d0,"src.compiler.commands.TypeDefinitionCommand.fromBytecode","src/compiler/commands/TypeDefinitionCommand.hx",55,0x33749802)
namespace src{
namespace compiler{
namespace commands{

void TypeDefinitionCommand_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::Scope typeScope,::String name,::Array< ::Dynamic> extensions,::Array< ::Dynamic> code){
            	HX_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_66_new)
HXLINE(  67)		super::__construct(scope);
HXLINE(  68)		this->typeScope = typeScope;
HXLINE(  69)		this->name = name;
HXLINE(  70)		this->extensions = extensions;
HXLINE(  71)		if (hx::IsNull( extensions )) {
HXLINE(  71)			this->extensions = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE(  72)		this->code = code;
            	}

Dynamic TypeDefinitionCommand_obj::__CreateEmpty() { return new TypeDefinitionCommand_obj; }

void *TypeDefinitionCommand_obj::_hx_vtable = 0;

Dynamic TypeDefinitionCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TypeDefinitionCommand_obj > _hx_result = new TypeDefinitionCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TypeDefinitionCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x7fe90863;
	}
}

 ::src::compiler::commands::Command TypeDefinitionCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_76_copy)
HXLINE(  77)		 ::src::compiler::Scope typeScope =  ::src::compiler::Scope_obj::__alloc( HX_CTX ,this->typeScope->getName(),scope);
HXLINE(  78)		::String _hx_tmp = this->name;
HXDLIN(  78)		::Array< ::Dynamic> _hx_tmp1 = ::src::compiler::commands::value::VariableAccess_obj::copyArray(scope,this->extensions);
HXDLIN(  78)		return  ::src::compiler::commands::TypeDefinitionCommand_obj::__alloc( HX_CTX ,scope,typeScope,_hx_tmp,_hx_tmp1,::src::compiler::commands::Command_obj::copyArray(scope,this->code));
            	}


void TypeDefinitionCommand_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_82_setScope)
HXLINE(  83)		this->super::setScope(scope);
HXLINE(  84)		this->typeScope->setParent(scope);
HXLINE(  85)		{
HXLINE(  85)			int _g = (int)0;
HXDLIN(  85)			::Array< ::Dynamic> _g1 = this->extensions;
HXDLIN(  85)			while((_g < _g1->length)){
HXLINE(  85)				 ::src::compiler::commands::value::VariableAccess ext = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::VariableAccess >();
HXDLIN(  85)				_g = (_g + (int)1);
HXDLIN(  85)				ext->setScope(scope);
            			}
            		}
HXLINE(  86)		{
HXLINE(  86)			int _g2 = (int)0;
HXDLIN(  86)			::Array< ::Dynamic> _g11 = this->code;
HXDLIN(  86)			while((_g2 < _g11->length)){
HXLINE(  86)				 ::src::compiler::commands::Command cmd = _g11->__get(_g2).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN(  86)				_g2 = (_g2 + (int)1);
HXDLIN(  86)				cmd->setScope(scope);
            			}
            		}
            	}


::Array< ::Dynamic> TypeDefinitionCommand_obj::walk(){
            	HX_GC_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_90_walk)
HXLINE(  91)		::Array< ::Dynamic> cmds = this->code->copy();
HXLINE(  92)		{
HXLINE(  92)			int _g = (int)0;
HXDLIN(  92)			::Array< ::Dynamic> _g1 = this->extensions;
HXDLIN(  92)			while((_g < _g1->length)){
HXLINE(  92)				 ::src::compiler::commands::value::VariableAccess ext = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::VariableAccess >();
HXDLIN(  92)				_g = (_g + (int)1);
HXDLIN(  92)				cmds->push(ext);
            			}
            		}
HXLINE(  93)		if (hx::IsNotNull( this->name )) {
HXLINE(  93)			cmds->push( ::src::compiler::commands::value::LiteralValueCommand_obj::__alloc( HX_CTX ,this->scope,this->name));
            		}
HXLINE(  94)		return cmds;
            	}


 ::src::compiler::object::Object TypeDefinitionCommand_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_98_run)
HXLINE(  99)		try {
            			HX_STACK_CATCHABLE( ::src::compiler::signals::YieldSignal, 0);
HXLINE( 100)			int _g = (int)0;
HXDLIN( 100)			::Array< ::Dynamic> _g1 = this->code;
HXDLIN( 100)			while((_g < _g1->length)){
HXLINE( 100)				 ::src::compiler::commands::Command cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN( 100)				_g = (_g + (int)1);
HXDLIN( 100)				cmd->run();
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::src::compiler::signals::YieldSignal >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::src::compiler::signals::YieldSignal e = _hx_e;
HXLINE( 102)				HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Cannot yield from within a type definition",6b,70,62,f9)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 104)		 ::haxe::ds::StringMap members =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 105)		{
HXLINE( 105)			 ::Dynamic name = this->typeScope->getVariables()->keys();
HXDLIN( 105)			while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 105)				::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 106)				members->set(name1,this->typeScope->getVariables()->get(name1).StaticCast<  ::src::compiler::object::Object >());
            			}
            		}
HXLINE( 108)		{
HXLINE( 108)			 ::Dynamic name2 = this->typeScope->getTypes()->keys();
HXDLIN( 108)			while(( (bool)(name2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 108)				::String name3 = ( (::String)(name2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 109)				members->set(name3,this->typeScope->getTypes()->get(name3).StaticCast<  ::src::compiler::object::Object >());
            			}
            		}
HXLINE( 111)		::Array< ::Dynamic> parents = ::Array_obj< ::Dynamic>::__new();
HXLINE( 112)		{
HXLINE( 112)			int _g2 = (int)0;
HXDLIN( 112)			::Array< ::Dynamic> _g11 = this->extensions;
HXDLIN( 112)			while((_g2 < _g11->length)){
HXLINE( 112)				 ::src::compiler::commands::value::VariableAccess variable = _g11->__get(_g2).StaticCast<  ::src::compiler::commands::value::VariableAccess >();
HXDLIN( 112)				_g2 = (_g2 + (int)1);
HXLINE( 113)				 ::src::compiler::object::Object obj = variable->getVariable();
HXLINE( 114)				if (!(obj->isInstance(HX_("ObjectTypeType",93,1c,e6,5d)))) {
HXLINE( 114)					HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,HX_("None-Type extension given",ab,2f,6d,af)));
            				}
HXLINE( 115)				parents->push(hx::TCast<  ::src::compiler::object::builtin::ObjectTypeObject >::cast(obj)->getValue());
            			}
            		}
HXLINE( 117)		if (hx::IsNotNull( this->name )) {
HXLINE( 118)			 ::src::compiler::Scope _hx_tmp = this->scope;
HXDLIN( 118)			::String _hx_tmp1 = this->name;
HXDLIN( 118)			_hx_tmp->setType(_hx_tmp1, ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->scope,this->name,members,null(),parents),true);
HXLINE( 119)			return null();
            		}
            		else {
HXLINE( 121)			 ::src::compiler::object::ObjectType _hx_tmp2 = this->scope->getType(HX_("ObjectTypeType",93,1c,e6,5d),null());
HXDLIN( 121)			 ::src::compiler::Scope _hx_tmp3 = this->scope;
HXDLIN( 121)			::String _hx_tmp4 = this->scope->getName();
HXDLIN( 121)			return _hx_tmp2->createValue( ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,_hx_tmp3,_hx_tmp4,members,null(),parents),this->scope,null());
            		}
HXLINE( 117)		return null();
            	}


::String TypeDefinitionCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_128_getName)
HXDLIN( 128)		return HX_("TypeDefinitionCommand",be,37,b8,49);
            	}


::String TypeDefinitionCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_133_getFriendlyName)
HXDLIN( 133)		return HX_("type definition",39,31,89,02);
            	}


 ::src::compiler::bytecode::Bytecode TypeDefinitionCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_138_getBytecode)
HXDLIN( 138)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(3)->init(0,this->name)->init(1,this->extensions)->init(2,this->code);
HXDLIN( 138)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> TypeDefinitionCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_143_reconstruct)
HXDLIN( 143)		if ((this->extensions->length == (int)0)) {
HXLINE( 144)			if (hx::IsNull( this->name )) {
HXLINE( 145)				 ::src::ast::base::KwdToken _hx_tmp =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("type",ba,f2,08,4d));
HXDLIN( 145)				return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(2)->init(0,_hx_tmp)->init(1,::src::ast::base::BlockToken_obj::fromRaw(::src::compiler::commands::Command_obj::reconstructCommands(this->code))));
            			}
            			else {
HXLINE( 147)				 ::src::ast::base::KwdToken _hx_tmp1 =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("type",ba,f2,08,4d));
HXDLIN( 147)				 ::src::ast::base::VariableToken _hx_tmp2 =  ::src::ast::base::VariableToken_obj::__alloc( HX_CTX ,this->name);
HXDLIN( 147)				return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(3)->init(0,_hx_tmp1)->init(1,_hx_tmp2)->init(2,::src::ast::base::BlockToken_obj::fromRaw(::src::compiler::commands::Command_obj::reconstructCommands(this->code))));
            			}
            		}
            		else {
HXLINE( 150)			if (hx::IsNull( this->name )) {
HXLINE( 151)				 ::src::ast::base::KwdToken _hx_tmp3 =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("type",ba,f2,08,4d));
HXDLIN( 151)				 ::src::ast::base::KwdToken _hx_tmp4 =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("extends",59,cd,5c,70));
HXDLIN( 151)				 ::src::ast::base::CommaToken _hx_tmp5 =  ::src::ast::base::CommaToken_obj::__alloc( HX_CTX ,HX_(",",2c,00,00,00));
HXDLIN( 151)				 ::src::ast::base::BracketToken _hx_tmp6 = ::src::ast::base::BracketToken_obj::fromRaw(_hx_tmp5->join(::src::compiler::commands::Command_obj::reconstructCommands(this->extensions),null()));
HXDLIN( 151)				return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(4)->init(0,_hx_tmp3)->init(1,_hx_tmp4)->init(2,_hx_tmp6)->init(3,::src::ast::base::BlockToken_obj::fromRaw(::src::compiler::commands::Command_obj::reconstructCommands(this->code))));
            			}
            			else {
HXLINE( 153)				 ::src::ast::base::KwdToken _hx_tmp7 =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("type",ba,f2,08,4d));
HXDLIN( 153)				 ::src::ast::base::VariableToken _hx_tmp8 =  ::src::ast::base::VariableToken_obj::__alloc( HX_CTX ,this->name);
HXDLIN( 153)				 ::src::ast::base::KwdToken _hx_tmp9 =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("extends",59,cd,5c,70));
HXDLIN( 153)				 ::src::ast::base::CommaToken _hx_tmp10 =  ::src::ast::base::CommaToken_obj::__alloc( HX_CTX ,HX_(",",2c,00,00,00));
HXDLIN( 153)				 ::src::ast::base::BracketToken _hx_tmp11 = ::src::ast::base::BracketToken_obj::fromRaw(_hx_tmp10->join(::src::compiler::commands::Command_obj::reconstructCommands(this->extensions),null()));
HXDLIN( 153)				return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(5)->init(0,_hx_tmp7)->init(1,_hx_tmp8)->init(2,_hx_tmp9)->init(3,_hx_tmp11)->init(4,::src::ast::base::BlockToken_obj::fromRaw(::src::compiler::commands::Command_obj::reconstructCommands(this->code))));
            			}
            		}
HXLINE( 143)		return null();
            	}


 ::src::compiler::commands::TypeDefinitionCommand TypeDefinitionCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_28_fromTokens)
HXLINE(  29)		 ::src::ast::Token start = tokens->shift().StaticCast<  ::src::ast::Token >();
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if ((start->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  30)			_hx_tmp = hx::IsNotEq( start->getContent(),HX_("type",ba,f2,08,4d) );
            		}
            		else {
HXLINE(  30)			_hx_tmp = true;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  30)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Type definition must start with type keyword",ef,44,fe,e6)));
            		}
HXLINE(  32)		::Array< ::Dynamic> extensions = null();
HXLINE(  33)		bool _hx_tmp1;
HXDLIN(  33)		if ((tokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() == HX_("BracketToken",d1,67,c5,1e))) {
HXLINE(  33)			if ((tokens->__get((int)1).StaticCast<  ::src::ast::Token >()->getName() != HX_("VariableToken",fd,96,04,01))) {
HXLINE(  33)				_hx_tmp1 = (tokens->__get((int)1).StaticCast<  ::src::ast::Token >()->getName() == HX_("BracketToken",d1,67,c5,1e));
            			}
            			else {
HXLINE(  33)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE(  33)			_hx_tmp1 = false;
            		}
HXDLIN(  33)		if (_hx_tmp1) {
HXLINE(  34)			extensions = ::Array_obj< ::Dynamic>::__new();
HXLINE(  35)			::Array< ::Dynamic> spl = ::src::compiler::commands::Command_obj::splitTokens(( (::Array< ::Dynamic>)(tokens->shift().StaticCast<  ::src::ast::Token >()->getContent()) ),HX_("CommaToken",04,01,3f,49),null(),null());
HXLINE(  36)			{
HXLINE(  36)				int _g = (int)0;
HXDLIN(  36)				while((_g < spl->length)){
HXLINE(  36)					::Array< ::Dynamic> tokens1 = spl->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  36)					_g = (_g + (int)1);
HXLINE(  37)					extensions->push(::src::compiler::commands::value::VariableAccess_obj::fromTokens(scope,tokens1,null()));
            				}
            			}
            		}
HXLINE(  41)		::String name = null();
HXLINE(  42)		if ((tokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() == HX_("VariableToken",fd,96,04,01))) {
HXLINE(  43)			name = ( (::String)(tokens->shift().StaticCast<  ::src::ast::Token >()->getContent()) );
            		}
HXLINE(  46)		 ::src::ast::Token codeToken = tokens->pop().StaticCast<  ::src::ast::Token >();
HXLINE(  47)		::String typeScope;
HXDLIN(  47)		if (hx::IsNull( name )) {
HXLINE(  47)			typeScope = scope->nextTypeScopeName();
            		}
            		else {
HXLINE(  47)			typeScope = name;
            		}
HXDLIN(  47)		 ::src::compiler::Scope typeScope1 =  ::src::compiler::Scope_obj::__alloc( HX_CTX ,typeScope,scope);
HXLINE(  48)		if ((codeToken->getName() != HX_("BlockToken",8c,2a,40,e2))) {
HXLINE(  48)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Type definition must end in block",67,df,bf,c6)));
            		}
HXLINE(  49)		::Array< ::Dynamic> code = ::src::compiler::Core_obj::convert(typeScope1,( (::Array< ::Dynamic>)(codeToken->getContent()) ));
HXLINE(  51)		return  ::src::compiler::commands::TypeDefinitionCommand_obj::__alloc( HX_CTX ,scope,typeScope1,name,extensions,code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeDefinitionCommand_obj,fromTokens,return )

 ::src::compiler::commands::TypeDefinitionCommand TypeDefinitionCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_11b54e9eee6c27d2_55_fromBytecode)
HXLINE(  56)		::String name = ( (::String)(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope)) );
HXLINE(  57)		::String typeScope;
HXDLIN(  57)		if (hx::IsNull( name )) {
HXLINE(  57)			typeScope = scope->nextTypeScopeName();
            		}
            		else {
HXLINE(  57)			typeScope = name;
            		}
HXDLIN(  57)		 ::src::compiler::Scope typeScope1 =  ::src::compiler::Scope_obj::__alloc( HX_CTX ,typeScope,scope);
HXLINE(  58)		 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN(  58)		return  ::src::compiler::commands::TypeDefinitionCommand_obj::__alloc( HX_CTX ,scope,typeScope1,name,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(typeScope1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeDefinitionCommand_obj,fromBytecode,return )


hx::ObjectPtr< TypeDefinitionCommand_obj > TypeDefinitionCommand_obj::__new( ::src::compiler::Scope scope, ::src::compiler::Scope typeScope,::String name,::Array< ::Dynamic> extensions,::Array< ::Dynamic> code) {
	hx::ObjectPtr< TypeDefinitionCommand_obj > __this = new TypeDefinitionCommand_obj();
	__this->__construct(scope,typeScope,name,extensions,code);
	return __this;
}

hx::ObjectPtr< TypeDefinitionCommand_obj > TypeDefinitionCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::Scope typeScope,::String name,::Array< ::Dynamic> extensions,::Array< ::Dynamic> code) {
	TypeDefinitionCommand_obj *__this = (TypeDefinitionCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TypeDefinitionCommand_obj), true, "src.compiler.commands.TypeDefinitionCommand"));
	*(void **)__this = TypeDefinitionCommand_obj::_hx_vtable;
	__this->__construct(scope,typeScope,name,extensions,code);
	return __this;
}

TypeDefinitionCommand_obj::TypeDefinitionCommand_obj()
{
}

void TypeDefinitionCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TypeDefinitionCommand);
	HX_MARK_MEMBER_NAME(typeScope,"typeScope");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_MEMBER_NAME(code,"code");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TypeDefinitionCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(typeScope,"typeScope");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
	HX_VISIT_MEMBER_NAME(code,"code");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TypeDefinitionCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"code") ) { return hx::Val( code ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScope") ) { return hx::Val( setScope_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeScope") ) { return hx::Val( typeScope ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { return hx::Val( extensions ); }
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

bool TypeDefinitionCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val TypeDefinitionCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeScope") ) { typeScope=inValue.Cast<  ::src::compiler::Scope >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TypeDefinitionCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("typeScope","\x7a","\xcc","\xb1","\x3d"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"));
	outFields->push(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TypeDefinitionCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::Scope*/ ,(int)offsetof(TypeDefinitionCommand_obj,typeScope),HX_HCSTRING("typeScope","\x7a","\xcc","\xb1","\x3d")},
	{hx::fsString,(int)offsetof(TypeDefinitionCommand_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TypeDefinitionCommand_obj,extensions),HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TypeDefinitionCommand_obj,code),HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TypeDefinitionCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String TypeDefinitionCommand_obj_sMemberFields[] = {
	HX_HCSTRING("typeScope","\x7a","\xcc","\xb1","\x3d"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"),
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("setScope","\x92","\xda","\x0d","\x87"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void TypeDefinitionCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeDefinitionCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TypeDefinitionCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeDefinitionCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class TypeDefinitionCommand_obj::__mClass;

static ::String TypeDefinitionCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void TypeDefinitionCommand_obj::__register()
{
	hx::Object *dummy = new TypeDefinitionCommand_obj;
	TypeDefinitionCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.TypeDefinitionCommand","\xfd","\xed","\x25","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeDefinitionCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TypeDefinitionCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TypeDefinitionCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TypeDefinitionCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TypeDefinitionCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TypeDefinitionCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeDefinitionCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeDefinitionCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
