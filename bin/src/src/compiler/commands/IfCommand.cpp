// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_BlockToken
#include <src/ast/base/BlockToken.h>
#endif
#ifndef INCLUDED_src_ast_base_BracketToken
#include <src/ast/base/BracketToken.h>
#endif
#ifndef INCLUDED_src_ast_base_EndLineToken
#include <src/ast/base/EndLineToken.h>
#endif
#ifndef INCLUDED_src_ast_base_KwdToken
#include <src/ast/base/KwdToken.h>
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
#ifndef INCLUDED_src_compiler_commands_CondAndExpr
#include <src/compiler/commands/CondAndExpr.h>
#endif
#ifndef INCLUDED_src_compiler_commands_IfCommand
#include <src/compiler/commands/IfCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_82543df3a6f52559_91_new,"src.compiler.commands.IfCommand","new",0x0a2d01ff,"src.compiler.commands.IfCommand.new","src/compiler/commands/IfCommand.hx",91,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_98_walk,"src.compiler.commands.IfCommand","walk",0xe324968a,"src.compiler.commands.IfCommand.walk","src/compiler/commands/IfCommand.hx",98,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_106_run,"src.compiler.commands.IfCommand","run",0x0a3018ea,"src.compiler.commands.IfCommand.run","src/compiler/commands/IfCommand.hx",106,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_125_getName,"src.compiler.commands.IfCommand","getName",0xb4fe0f20,"src.compiler.commands.IfCommand.getName","src/compiler/commands/IfCommand.hx",125,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_129_getBytecode,"src.compiler.commands.IfCommand","getBytecode",0xc16e1f8a,"src.compiler.commands.IfCommand.getBytecode","src/compiler/commands/IfCommand.hx",129,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_136_reconstruct,"src.compiler.commands.IfCommand","reconstruct",0xd3fccea3,"src.compiler.commands.IfCommand.reconstruct","src/compiler/commands/IfCommand.hx",136,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_23_getCondAndExprFromBytes,"src.compiler.commands.IfCommand","getCondAndExprFromBytes",0x80b1722c,"src.compiler.commands.IfCommand.getCondAndExprFromBytes","src/compiler/commands/IfCommand.hx",23,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_39_fromTokens,"src.compiler.commands.IfCommand","fromTokens",0xd69eeca5,"src.compiler.commands.IfCommand.fromTokens","src/compiler/commands/IfCommand.hx",39,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_27_fromTokens,"src.compiler.commands.IfCommand","fromTokens",0xd69eeca5,"src.compiler.commands.IfCommand.fromTokens","src/compiler/commands/IfCommand.hx",27,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_82543df3a6f52559_81_fromBytecode,"src.compiler.commands.IfCommand","fromBytecode",0x19e7f240,"src.compiler.commands.IfCommand.fromBytecode","src/compiler/commands/IfCommand.hx",81,0x08733bf2)
namespace src{
namespace compiler{
namespace commands{

void IfCommand_obj::__construct( ::src::compiler::Scope scope,::Array< ::Dynamic> ifCodes,::Array< ::Dynamic> elseCode){
            	HX_STACKFRAME(&_hx_pos_82543df3a6f52559_91_new)
HXLINE(  92)		super::__construct(scope);
HXLINE(  93)		this->ifCodes = ifCodes;
HXLINE(  94)		this->elseCode = elseCode;
            	}

Dynamic IfCommand_obj::__CreateEmpty() { return new IfCommand_obj; }

void *IfCommand_obj::_hx_vtable = 0;

Dynamic IfCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IfCommand_obj > _hx_result = new IfCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IfCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		if (inClassId<=(int)0x1020cfc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1020cfc0;
		} else {
			return inClassId==(int)0x20538180;
		}
	} else {
		return inClassId==(int)0x4e8e6a63;
	}
}

::Array< ::Dynamic> IfCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_82543df3a6f52559_98_walk)
HXLINE(  99)		::Array< ::Dynamic> cmds = ::Array_obj< ::Dynamic>::__new();
HXLINE( 100)		{
HXLINE( 100)			int _g = (int)0;
HXDLIN( 100)			::Array< ::Dynamic> _g1 = this->ifCodes;
HXDLIN( 100)			while((_g < _g1->length)){
HXLINE( 100)				 ::src::compiler::commands::CondAndExpr x = _g1->__get(_g).StaticCast<  ::src::compiler::commands::CondAndExpr >();
HXDLIN( 100)				_g = (_g + (int)1);
HXDLIN( 100)				cmds->push(x);
            			}
            		}
HXLINE( 101)		{
HXLINE( 101)			int _g2 = (int)0;
HXDLIN( 101)			::Array< ::Dynamic> _g11 = this->elseCode;
HXDLIN( 101)			while((_g2 < _g11->length)){
HXLINE( 101)				 ::src::compiler::commands::Command x1 = _g11->__get(_g2).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN( 101)				_g2 = (_g2 + (int)1);
HXDLIN( 101)				cmds->push(x1);
            			}
            		}
HXLINE( 102)		return cmds;
            	}


 ::src::compiler::object::Object IfCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_82543df3a6f52559_106_run)
HXLINE( 107)		{
HXLINE( 107)			int _g = (int)0;
HXDLIN( 107)			::Array< ::Dynamic> _g1 = this->ifCodes;
HXDLIN( 107)			while((_g < _g1->length)){
HXLINE( 107)				 ::src::compiler::commands::CondAndExpr condAndExpr = _g1->__get(_g).StaticCast<  ::src::compiler::commands::CondAndExpr >();
HXDLIN( 107)				_g = (_g + (int)1);
HXLINE( 108)				if (condAndExpr->cond->run()->rawBool()) {
HXLINE( 109)					{
HXLINE( 109)						int _g2 = (int)0;
HXDLIN( 109)						::Array< ::Dynamic> _g3 = condAndExpr->code;
HXDLIN( 109)						while((_g2 < _g3->length)){
HXLINE( 109)							 ::src::compiler::commands::Command cmd = _g3->__get(_g2).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN( 109)							_g2 = (_g2 + (int)1);
HXLINE( 110)							cmd->run();
            						}
            					}
HXLINE( 112)					return null();
            				}
            			}
            		}
HXLINE( 115)		if (hx::IsNotNull( this->elseCode )) {
HXLINE( 116)			int _g4 = (int)0;
HXDLIN( 116)			::Array< ::Dynamic> _g11 = this->elseCode;
HXDLIN( 116)			while((_g4 < _g11->length)){
HXLINE( 116)				 ::src::compiler::commands::Command cmd1 = _g11->__get(_g4).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN( 116)				_g4 = (_g4 + (int)1);
HXLINE( 117)				cmd1->run();
            			}
            		}
HXLINE( 120)		return null();
            	}


::String IfCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_82543df3a6f52559_125_getName)
HXDLIN( 125)		return HX_("IfCommand",ce,02,af,3f);
            	}


 ::src::compiler::bytecode::Bytecode IfCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_82543df3a6f52559_129_getBytecode)
HXLINE( 130)		::cpp::VirtualArray arr = this->ifCodes->copy();
HXLINE( 131)		arr->insert((int)0,this->elseCode);
HXLINE( 132)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(arr,this->getCodeID());
            	}


::Array< ::Dynamic> IfCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_82543df3a6f52559_136_reconstruct)
HXLINE( 137)		::Array< ::Dynamic> tokens = ::Array_obj< ::Dynamic>::__new();
HXLINE( 138)		::String text = HX_("if",dd,5b,00,00);
HXLINE( 139)		{
HXLINE( 139)			int _g = (int)0;
HXDLIN( 139)			::Array< ::Dynamic> _g1 = this->ifCodes;
HXDLIN( 139)			while((_g < _g1->length)){
HXLINE( 139)				 ::src::compiler::commands::CondAndExpr cexpr = _g1->__get(_g).StaticCast<  ::src::compiler::commands::CondAndExpr >();
HXDLIN( 139)				_g = (_g + (int)1);
HXLINE( 140)				 ::src::ast::base::KwdToken _hx_tmp =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,text);
HXDLIN( 140)				 ::src::ast::base::BracketToken _hx_tmp1 = ::src::ast::base::BracketToken_obj::fromRaw(cexpr->cond->reconstruct());
HXDLIN( 140)				 ::src::ast::base::EndLineToken _hx_tmp2 =  ::src::ast::base::EndLineToken_obj::__alloc( HX_CTX ,HX_(";",3b,00,00,00));
HXDLIN( 140)				tokens->push(::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,::src::ast::base::BlockToken_obj::fromRaw(_hx_tmp2->join(::src::compiler::commands::Command_obj::reconstructCommands(cexpr->code),null()))));
HXLINE( 141)				if ((text == HX_("if",dd,5b,00,00))) {
HXLINE( 141)					text = HX_("elif",04,dc,14,43);
            				}
            			}
            		}
HXLINE( 143)		if (hx::IsNotNull( this->elseCode )) {
HXLINE( 144)			 ::src::ast::base::KwdToken _hx_tmp3 =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("else",b9,e4,14,43));
HXDLIN( 144)			 ::src::ast::base::EndLineToken _hx_tmp4 =  ::src::ast::base::EndLineToken_obj::__alloc( HX_CTX ,HX_(";",3b,00,00,00));
HXDLIN( 144)			tokens->push(::Array_obj< ::Dynamic>::__new(2)->init(0,_hx_tmp3)->init(1,::src::ast::base::BlockToken_obj::fromRaw(_hx_tmp4->join(::src::compiler::commands::Command_obj::reconstructCommands(this->elseCode),null()))));
            		}
HXLINE( 146)		return ::src::ast::Token_obj::merge(tokens);
            	}


 ::Dynamic IfCommand_obj::getCondAndExprFromBytes(){
            	HX_STACKFRAME(&_hx_pos_82543df3a6f52559_23_getCondAndExprFromBytes)
HXDLIN(  23)		return ::src::compiler::commands::CondAndExpr_obj::fromBytecode_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(IfCommand_obj,getCondAndExprFromBytes,return )

 ::src::compiler::commands::IfCommand IfCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run( ::src::ast::Token token1){
            			HX_GC_STACKFRAME(&_hx_pos_82543df3a6f52559_39_fromTokens)
HXLINE(  39)			bool spl1;
HXDLIN(  39)			if (hx::IsNotEq( token1->getContent(),HX_("if",dd,5b,00,00) )) {
HXLINE(  39)				spl1 = hx::IsEq( token1->getContent(),HX_("elif",04,dc,14,43) );
            			}
            			else {
HXLINE(  39)				spl1 = true;
            			}
HXDLIN(  39)			if (!(spl1)) {
HXLINE(  39)				return hx::IsEq( token1->getContent(),HX_("else",b9,e4,14,43) );
            			}
            			else {
HXLINE(  39)				return true;
            			}
HXDLIN(  39)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_82543df3a6f52559_27_fromTokens)
HXLINE(  28)		::Array< ::Dynamic> ifs = ::Array_obj< ::Dynamic>::__new();
HXLINE(  29)		{
HXLINE(  29)			int _g = (int)0;
HXDLIN(  29)			while((_g < tokens->length)){
HXLINE(  29)				 ::src::ast::Token token = tokens->__get(_g).StaticCast<  ::src::ast::Token >();
HXDLIN(  29)				_g = (_g + (int)1);
HXLINE(  30)				bool _hx_tmp;
HXDLIN(  30)				if ((token->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  30)					bool _hx_tmp1;
HXDLIN(  30)					if (hx::IsNotEq( token->getContent(),HX_("if",dd,5b,00,00) )) {
HXLINE(  30)						_hx_tmp1 = hx::IsEq( token->getContent(),HX_("elif",04,dc,14,43) );
            					}
            					else {
HXLINE(  30)						_hx_tmp1 = true;
            					}
HXDLIN(  30)					if (!(_hx_tmp1)) {
HXLINE(  30)						_hx_tmp = hx::IsEq( token->getContent(),HX_("else",b9,e4,14,43) );
            					}
            					else {
HXLINE(  30)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  30)					_hx_tmp = false;
            				}
HXDLIN(  30)				if (_hx_tmp) {
HXLINE(  30)					ifs->push(token);
            				}
            			}
            		}
HXLINE(  32)		if (hx::IsNotEq( ifs->shift().StaticCast<  ::src::ast::Token >()->getContent(),HX_("if",dd,5b,00,00) )) {
HXLINE(  32)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("If statement must start with if",f6,2c,85,53)));
            		}
HXLINE(  33)		 ::src::ast::Token endIf = ifs->pop().StaticCast<  ::src::ast::Token >();
HXLINE(  34)		{
HXLINE(  34)			int _g1 = (int)0;
HXDLIN(  34)			while((_g1 < ifs->length)){
HXLINE(  34)				 ::src::ast::Token elif = ifs->__get(_g1).StaticCast<  ::src::ast::Token >();
HXDLIN(  34)				_g1 = (_g1 + (int)1);
HXLINE(  35)				if (hx::IsNotEq( elif->getContent(),HX_("elif",04,dc,14,43) )) {
HXLINE(  35)					HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("if or else found in the middle of the if block (should be elif)",57,be,96,fc)));
            				}
            			}
            		}
HXLINE(  38)		::Array< ::Dynamic> spl = ::src::compiler::commands::Command_obj::splitTokens(tokens,HX_("KwdToken",c1,aa,4a,b9),null(), ::Dynamic(new _hx_Closure_0()));
HXLINE(  41)		if ((spl->__get((int)0).StaticCast< ::Array< ::Dynamic> >()->length == (int)0)) {
HXLINE(  41)			spl->shift();
            		}
HXLINE(  42)		bool _hx_tmp2;
HXDLIN(  42)		if ((tokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  42)			_hx_tmp2 = hx::IsEq( tokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getContent(),HX_("if",dd,5b,00,00) );
            		}
            		else {
HXLINE(  42)			_hx_tmp2 = false;
            		}
HXDLIN(  42)		if (_hx_tmp2) {
HXLINE(  43)			::Array< ::Dynamic> elseCode = null();
HXLINE(  44)			bool _hx_tmp3;
HXDLIN(  44)			if (hx::IsNotNull( endIf )) {
HXLINE(  44)				_hx_tmp3 = hx::IsEq( endIf->getContent(),HX_("else",b9,e4,14,43) );
            			}
            			else {
HXLINE(  44)				_hx_tmp3 = false;
            			}
HXDLIN(  44)			if (_hx_tmp3) {
HXLINE(  45)				::Array< ::Dynamic> lastTokens = ( (::Array< ::Dynamic>)(spl->pop()) );
HXLINE(  46)				bool _hx_tmp4;
HXDLIN(  46)				if ((lastTokens->length == (int)1)) {
HXLINE(  46)					_hx_tmp4 = (lastTokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() == HX_("BlockToken",8c,2a,40,e2));
            				}
            				else {
HXLINE(  46)					_hx_tmp4 = false;
            				}
HXDLIN(  46)				if (_hx_tmp4) {
HXLINE(  47)					elseCode = ::src::compiler::Core_obj::convert(scope,( (::Array< ::Dynamic>)(lastTokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getContent()) ));
            				}
            				else {
HXLINE(  48)					elseCode = ::src::compiler::Core_obj::convert(scope,lastTokens);
            				}
            			}
HXLINE(  54)			::Array< ::Dynamic> ifCodes = ::Array_obj< ::Dynamic>::__new();
HXLINE(  55)			{
HXLINE(  55)				int _g2 = (int)0;
HXDLIN(  55)				while((_g2 < spl->length)){
HXLINE(  55)					::Array< ::Dynamic> tokens1 = spl->__get(_g2).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  55)					_g2 = (_g2 + (int)1);
HXLINE(  57)					if ((tokens1->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() != HX_("BracketToken",d1,67,c5,1e))) {
HXLINE(  57)						HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("If condition must be surrounded in brackets",31,10,c8,8d)));
            					}
HXLINE(  58)					 ::src::compiler::commands::value::ValueCommand cond = ::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,( (::Array< ::Dynamic>)(tokens1->shift().StaticCast<  ::src::ast::Token >()->getContent()) ));
HXLINE(  59)					bool _hx_tmp5;
HXDLIN(  59)					if ((tokens1->length == (int)1)) {
HXLINE(  59)						_hx_tmp5 = (tokens1->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() == HX_("BlockToken",8c,2a,40,e2));
            					}
            					else {
HXLINE(  59)						_hx_tmp5 = false;
            					}
HXDLIN(  59)					if (_hx_tmp5) {
HXLINE(  60)						ifCodes->push( ::src::compiler::commands::CondAndExpr_obj::__alloc( HX_CTX ,cond,::src::compiler::Core_obj::convert(scope,( (::Array< ::Dynamic>)(tokens1->__get((int)0).StaticCast<  ::src::ast::Token >()->getContent()) ))));
            					}
            					else {
HXLINE(  62)						if ((tokens1->__get((tokens1->length - (int)1)).StaticCast<  ::src::ast::Token >()->getName() != HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  62)							tokens1->push( ::src::ast::base::EndLineToken_obj::__alloc( HX_CTX ,HX_(";",3b,00,00,00)));
            						}
HXLINE(  63)						ifCodes->push( ::src::compiler::commands::CondAndExpr_obj::__alloc( HX_CTX ,cond,::src::compiler::Core_obj::convert(scope,tokens1)));
            					}
            				}
            			}
HXLINE(  66)			return  ::src::compiler::commands::IfCommand_obj::__alloc( HX_CTX ,scope,ifCodes,elseCode);
            		}
            		else {
HXLINE(  68)			spl->__get((int)0).StaticCast< ::Array< ::Dynamic> >()->push( ::src::ast::base::EndLineToken_obj::__alloc( HX_CTX ,HX_(";",3b,00,00,00)));
HXLINE(  69)			if ((spl->__get((int)1).StaticCast< ::Array< ::Dynamic> >()->__get((spl->__get((int)1).StaticCast< ::Array< ::Dynamic> >()->length - (int)1)).StaticCast<  ::src::ast::Token >()->getName() == HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  69)				spl->__get((int)1).StaticCast< ::Array< ::Dynamic> >()->pop().StaticCast<  ::src::ast::Token >();
            			}
HXLINE(  70)			 ::src::compiler::commands::value::ValueCommand ifCode = ::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,spl->__get((int)1).StaticCast< ::Array< ::Dynamic> >());
HXDLIN(  70)			 ::src::compiler::commands::CondAndExpr ifCode1 =  ::src::compiler::commands::CondAndExpr_obj::__alloc( HX_CTX ,ifCode,::src::compiler::Core_obj::convert(scope,spl->__get((int)0).StaticCast< ::Array< ::Dynamic> >()));
HXLINE(  71)			if ((spl->length == (int)2)) {
HXLINE(  72)				return  ::src::compiler::commands::IfCommand_obj::__alloc( HX_CTX ,scope,::Array_obj< ::Dynamic>::__new(1)->init(0,ifCode1),null());
            			}
            			else {
HXLINE(  73)				if ((spl->length == (int)3)) {
HXLINE(  74)					if ((spl->__get((int)2).StaticCast< ::Array< ::Dynamic> >()->__get((spl->__get((int)2).StaticCast< ::Array< ::Dynamic> >()->length - (int)1)).StaticCast<  ::src::ast::Token >()->getName() != HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  74)						spl->__get((int)2).StaticCast< ::Array< ::Dynamic> >()->push( ::src::ast::base::EndLineToken_obj::__alloc( HX_CTX ,HX_(";",3b,00,00,00)));
            					}
HXLINE(  75)					return  ::src::compiler::commands::IfCommand_obj::__alloc( HX_CTX ,scope,::Array_obj< ::Dynamic>::__new(1)->init(0,ifCode1),::src::compiler::Core_obj::convert(scope,spl->__get((int)2).StaticCast< ::Array< ::Dynamic> >()));
            				}
            				else {
HXLINE(  76)					HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Shorthand if statement must be of the form .. if .. else .. OR .. if ..",13,6d,a2,b2)));
            				}
            			}
            		}
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IfCommand_obj,fromTokens,return )

 ::src::compiler::commands::IfCommand IfCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_82543df3a6f52559_81_fromBytecode)
HXLINE(  82)		::Array< ::Dynamic> elseCode = ( (::Array< ::Dynamic>)(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope)) );
HXLINE(  83)		::Array< ::Dynamic> ifCodes = ::Array_obj< ::Dynamic>::__new();
HXLINE(  84)		while((arr->length > (int)0)){
HXLINE(  84)			ifCodes->push(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            		}
HXLINE(  85)		return  ::src::compiler::commands::IfCommand_obj::__alloc( HX_CTX ,scope,ifCodes,elseCode);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IfCommand_obj,fromBytecode,return )


hx::ObjectPtr< IfCommand_obj > IfCommand_obj::__new( ::src::compiler::Scope scope,::Array< ::Dynamic> ifCodes,::Array< ::Dynamic> elseCode) {
	hx::ObjectPtr< IfCommand_obj > __this = new IfCommand_obj();
	__this->__construct(scope,ifCodes,elseCode);
	return __this;
}

hx::ObjectPtr< IfCommand_obj > IfCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::Array< ::Dynamic> ifCodes,::Array< ::Dynamic> elseCode) {
	IfCommand_obj *__this = (IfCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IfCommand_obj), true, "src.compiler.commands.IfCommand"));
	*(void **)__this = IfCommand_obj::_hx_vtable;
	__this->__construct(scope,ifCodes,elseCode);
	return __this;
}

IfCommand_obj::IfCommand_obj()
{
}

void IfCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IfCommand);
	HX_MARK_MEMBER_NAME(ifCodes,"ifCodes");
	HX_MARK_MEMBER_NAME(elseCode,"elseCode");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IfCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ifCodes,"ifCodes");
	HX_VISIT_MEMBER_NAME(elseCode,"elseCode");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val IfCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ifCodes") ) { return hx::Val( ifCodes ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elseCode") ) { return hx::Val( elseCode ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool IfCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromTokens") ) { outValue = fromTokens_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getCondAndExprFromBytes") ) { outValue = getCondAndExprFromBytes_dyn(); return true; }
	}
	return false;
}

hx::Val IfCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"ifCodes") ) { ifCodes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elseCode") ) { elseCode=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IfCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ifCodes","\x89","\x49","\x38","\xb4"));
	outFields->push(HX_HCSTRING("elseCode","\x86","\x12","\x16","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IfCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(IfCommand_obj,ifCodes),HX_HCSTRING("ifCodes","\x89","\x49","\x38","\xb4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(IfCommand_obj,elseCode),HX_HCSTRING("elseCode","\x86","\x12","\x16","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IfCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String IfCommand_obj_sMemberFields[] = {
	HX_HCSTRING("ifCodes","\x89","\x49","\x38","\xb4"),
	HX_HCSTRING("elseCode","\x86","\x12","\x16","\x6b"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void IfCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IfCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IfCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IfCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class IfCommand_obj::__mClass;

static ::String IfCommand_obj_sStaticFields[] = {
	HX_HCSTRING("getCondAndExprFromBytes","\x0d","\x17","\x45","\x6c"),
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void IfCommand_obj::__register()
{
	hx::Object *dummy = new IfCommand_obj;
	IfCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.IfCommand","\x8d","\x96","\xee","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IfCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IfCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(IfCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IfCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IfCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IfCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IfCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IfCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
