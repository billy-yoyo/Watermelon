// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_RootToken
#include <src/ast/base/RootToken.h>
#endif
#ifndef INCLUDED_src_compiler_Core
#include <src/compiler/Core.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler__Core_OperativeCapture
#include <src/compiler/_Core/OperativeCapture.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_Bytecode
#include <src/compiler/bytecode/Bytecode.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_StringPool
#include <src/compiler/bytecode/StringPool.h>
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
#ifndef INCLUDED_src_compiler_commands_FunctionDefinitionCommand
#include <src/compiler/commands/FunctionDefinitionCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_IfCommand
#include <src/compiler/commands/IfCommand.h>
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
#ifndef INCLUDED_src_compiler_commands_value_ObjectArrayAssignmentCommand
#include <src/compiler/commands/value/ObjectArrayAssignmentCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_SyntaxErrorSignal
#include <src/compiler/signals/SyntaxErrorSignal.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_18__opcap,"src.compiler.Core","_opcap",0x34b9365c,"src.compiler.Core._opcap","src/compiler/Core.hx",18,0x3bfcc3ba)
HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_50_convertRoot,"src.compiler.Core","convertRoot",0x2b5d87eb,"src.compiler.Core.convertRoot","src/compiler/Core.hx",50,0x3bfcc3ba)
HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_56_convert,"src.compiler.Core","convert",0x79712529,"src.compiler.Core.convert","src/compiler/Core.hx",56,0x3bfcc3ba)
HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_94_convertBlock,"src.compiler.Core","convertBlock",0x8e146b64,"src.compiler.Core.convertBlock","src/compiler/Core.hx",94,0x3bfcc3ba)
HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_121_convertBytes,"src.compiler.Core","convertBytes",0x96affe82,"src.compiler.Core.convertBytes","src/compiler/Core.hx",121,0x3bfcc3ba)
HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_127_compile,"src.compiler.Core","compile",0xe2164ca9,"src.compiler.Core.compile","src/compiler/Core.hx",127,0x3bfcc3ba)
HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_25_boot,"src.compiler.Core","boot",0xfe2b5f3c,"src.compiler.Core.boot","src/compiler/Core.hx",25,0x3bfcc3ba)
HX_LOCAL_STACK_FRAME(_hx_pos_4e7f69f29ed8fa1e_34_boot,"src.compiler.Core","boot",0xfe2b5f3c,"src.compiler.Core.boot","src/compiler/Core.hx",34,0x3bfcc3ba)
namespace src{
namespace compiler{

void Core_obj::__construct() { }

Dynamic Core_obj::__CreateEmpty() { return new Core_obj; }

void *Core_obj::_hx_vtable = 0;

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Core_obj > _hx_result = new Core_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Core_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ff6ae7a;
}

 ::src::compiler::_Core::OperativeCapture Core_obj::_opcap( ::Dynamic end, ::Dynamic startContent, ::Dynamic endContent, ::Dynamic checkOverride){
            	HX_GC_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_18__opcap)
HXLINE(  19)		if (hx::IsEq( ::Type_obj::getClass(end),hx::ClassOf< ::String >() )) {
HXLINE(  19)			end = ::cpp::VirtualArray_obj::__new(1)->init(0,end);
            		}
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if (hx::IsNotNull( startContent )) {
HXLINE(  20)			_hx_tmp = hx::IsEq( ::Type_obj::getClass(startContent),hx::ClassOf< ::String >() );
            		}
            		else {
HXLINE(  20)			_hx_tmp = false;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  20)			startContent = ::cpp::VirtualArray_obj::__new(1)->init(0,startContent);
            		}
HXLINE(  21)		bool _hx_tmp1;
HXDLIN(  21)		if (hx::IsNotNull( endContent )) {
HXLINE(  21)			_hx_tmp1 = hx::IsEq( ::Type_obj::getClass(endContent),hx::ClassOf< ::String >() );
            		}
            		else {
HXLINE(  21)			_hx_tmp1 = false;
            		}
HXDLIN(  21)		if (_hx_tmp1) {
HXLINE(  21)			endContent = ::cpp::VirtualArray_obj::__new(1)->init(0,endContent);
            		}
HXLINE(  22)		return  ::src::compiler::_Core::OperativeCapture_obj::__alloc( HX_CTX ,end,startContent,endContent,checkOverride);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Core_obj,_opcap,return )

 ::haxe::ds::StringMap Core_obj::operativeMap;

 ::src::compiler::commands::RootCommand Core_obj::convertRoot( ::src::ast::base::RootToken root, ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_50_convertRoot)
HXLINE(  51)		if (hx::IsNull( scope )) {
HXLINE(  51)			scope =  ::src::compiler::Scope_obj::__alloc( HX_CTX ,HX_("root",22,ee,ae,4b),null());
            		}
HXLINE(  52)		return  ::src::compiler::commands::RootCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::Core_obj::convert(scope,( (::Array< ::Dynamic>)(root->getContent()) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Core_obj,convertRoot,return )

::Array< ::Dynamic> Core_obj::convert( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_56_convert)
HXLINE(  57)		tokens = tokens->copy();
HXLINE(  58)		::Array< ::Dynamic> subTokens = ::Array_obj< ::Dynamic>::__new();
HXLINE(  59)		::Array< ::Dynamic> groups = ::Array_obj< ::Dynamic>::__new();
HXLINE(  61)		 ::src::ast::Token operativeToken = null();
HXLINE(  62)		 ::src::compiler::_Core::OperativeCapture opCapture = null();
HXLINE(  63)		while((tokens->length > (int)0)){
HXLINE(  64)			 ::src::ast::Token token = tokens->shift().StaticCast<  ::src::ast::Token >();
HXLINE(  65)			subTokens->push(token);
HXLINE(  66)			if (hx::IsNull( operativeToken )) {
HXLINE(  67)				::Dynamic this1 = ::src::compiler::Core_obj::operativeMap;
HXDLIN(  67)				if (( ( ::haxe::ds::StringMap)(this1) )->exists(token->getName())) {
HXLINE(  68)					::Dynamic this2 = ::src::compiler::Core_obj::operativeMap;
HXDLIN(  68)					::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(( ( ::haxe::ds::StringMap)(this2) )->get(token->getName())) );
HXLINE(  69)					{
HXLINE(  69)						int _g = (int)0;
HXDLIN(  69)						while((_g < arr->length)){
HXLINE(  69)							 ::src::compiler::_Core::OperativeCapture capture = arr->__get(_g).StaticCast<  ::src::compiler::_Core::OperativeCapture >();
HXDLIN(  69)							_g = (_g + (int)1);
HXLINE(  70)							if (capture->isStart(token)) {
HXLINE(  71)								operativeToken = token;
HXLINE(  72)								opCapture = capture;
HXLINE(  73)								goto _hx_goto_3;
            							}
            						}
            						_hx_goto_3:;
            					}
            				}
            			}
HXLINE(  78)			bool _hx_tmp;
HXDLIN(  78)			bool _hx_tmp1;
HXDLIN(  78)			if (hx::IsNotNull( operativeToken )) {
HXLINE(  78)				_hx_tmp1 = hx::IsNotNull( opCapture );
            			}
            			else {
HXLINE(  78)				_hx_tmp1 = false;
            			}
HXDLIN(  78)			if (_hx_tmp1) {
HXLINE(  78)				 ::src::ast::Token _hx_tmp2;
HXDLIN(  78)				if ((tokens->length == (int)0)) {
HXLINE(  78)					_hx_tmp2 = null();
            				}
            				else {
HXLINE(  78)					_hx_tmp2 = tokens->__get((int)0).StaticCast<  ::src::ast::Token >();
            				}
HXDLIN(  78)				_hx_tmp = opCapture->isEnd(token,_hx_tmp2);
            			}
            			else {
HXLINE(  78)				_hx_tmp = false;
            			}
HXDLIN(  78)			if (_hx_tmp) {
HXLINE(  79)				groups->push(::src::compiler::Core_obj::convertBlock(scope,operativeToken,subTokens));
HXLINE(  80)				subTokens = ::Array_obj< ::Dynamic>::__new();
HXLINE(  81)				operativeToken = null();
HXLINE(  82)				opCapture = null();
            			}
            		}
HXLINE(  85)		if ((subTokens->length > (int)0)) {
HXLINE(  86)			::Array< ::String > reconstructed = ::Array_obj< ::String >::__new();
HXLINE(  87)			{
HXLINE(  87)				int _g1 = (int)0;
HXDLIN(  87)				while((_g1 < subTokens->length)){
HXLINE(  87)					 ::src::ast::Token token1 = subTokens->__get(_g1).StaticCast<  ::src::ast::Token >();
HXDLIN(  87)					_g1 = (_g1 + (int)1);
HXDLIN(  87)					reconstructed->push(token1->reconstruct(null()));
            				}
            			}
HXLINE(  88)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,((HX_("Failed to process ",53,f7,61,cb) + reconstructed->join(HX_(" ",20,00,00,00))) + HX_(" (missing endline?)",d7,1f,a5,0d))));
            		}
HXLINE(  90)		return groups;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Core_obj,convert,return )

 ::src::compiler::commands::Command Core_obj::convertBlock( ::src::compiler::Scope scope, ::src::ast::Token operative,::Array< ::Dynamic> tokens){
            	HX_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_94_convertBlock)
HXLINE(  96)		if ((operative->getName() == HX_("AssignmentToken",4c,94,e1,56))) {
HXLINE(  97)			bool _hx_tmp;
HXDLIN(  97)			bool _hx_tmp1;
HXDLIN(  97)			if ((tokens->length >= (int)3)) {
HXLINE(  97)				_hx_tmp1 = (tokens->__get((int)2).StaticCast<  ::src::ast::Token >()->getName() == HX_("AssignmentToken",4c,94,e1,56));
            			}
            			else {
HXLINE(  97)				_hx_tmp1 = false;
            			}
HXDLIN(  97)			if (_hx_tmp1) {
HXLINE(  97)				_hx_tmp = (tokens->__get((int)1).StaticCast<  ::src::ast::Token >()->getName() == HX_("ListToken",9b,21,3f,cc));
            			}
            			else {
HXLINE(  97)				_hx_tmp = false;
            			}
HXDLIN(  97)			if (_hx_tmp) {
HXLINE(  98)				return ::src::compiler::commands::value::ObjectArrayAssignmentCommand_obj::fromTokens(scope,tokens);
            			}
HXLINE( 100)			return ::src::compiler::commands::AssignmentCommand_obj::fromTokens(scope,tokens);
            		}
            		else {
HXLINE( 102)			if ((operative->getName() == HX_("EndLineToken",2a,db,3a,32))) {
HXLINE( 103)				tokens->pop().StaticCast<  ::src::ast::Token >();
HXLINE( 105)				return ::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,tokens);
            			}
            			else {
HXLINE( 106)				if ((operative->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE( 107)					if (hx::IsEq( operative->getContent(),HX_("func",44,eb,c4,43) )) {
HXLINE( 107)						return ::src::compiler::commands::FunctionDefinitionCommand_obj::fromTokens(scope,tokens);
            					}
            					else {
HXLINE( 108)						if (hx::IsEq( operative->getContent(),HX_("return",b0,a4,2d,09) )) {
HXLINE( 108)							return ::src::compiler::commands::ReturnCommand_obj::fromTokens(scope,tokens);
            						}
            						else {
HXLINE( 109)							if (hx::IsEq( operative->getContent(),HX_("del",cb,39,4c,00) )) {
HXLINE( 109)								return ::src::compiler::commands::DeleteCommand_obj::fromTokens(scope,tokens);
            							}
            							else {
HXLINE( 110)								if (hx::IsEq( operative->getContent(),HX_("for",09,c7,4d,00) )) {
HXLINE( 110)									return ::src::compiler::commands::ForLoopComand_obj::fromTokens(scope,tokens);
            								}
            								else {
HXLINE( 111)									if (hx::IsEq( operative->getContent(),HX_("while",b1,43,bd,c9) )) {
HXLINE( 111)										return ::src::compiler::commands::WhileLoopCommand_obj::fromTokens(scope,tokens);
            									}
            									else {
HXLINE( 112)										if (hx::IsEq( operative->getContent(),HX_("if",dd,5b,00,00) )) {
HXLINE( 112)											return ::src::compiler::commands::IfCommand_obj::fromTokens(scope,tokens);
            										}
            										else {
HXLINE( 113)											if (hx::IsEq( operative->getContent(),HX_("break",bf,24,ec,b8) )) {
HXLINE( 113)												return ::src::compiler::commands::BreakCommand_obj::fromTokens(scope,tokens);
            											}
            											else {
HXLINE( 114)												if (hx::IsEq( operative->getContent(),HX_("continue",67,e0,c8,31) )) {
HXLINE( 114)													return ::src::compiler::commands::ContinueCommand_obj::fromTokens(scope,tokens);
            												}
            												else {
HXLINE( 115)													if (hx::IsEq( operative->getContent(),HX_("type",ba,f2,08,4d) )) {
HXLINE( 115)														return ::src::compiler::commands::TypeDefinitionCommand_obj::fromTokens(scope,tokens);
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 117)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Core_obj,convertBlock,return )

 ::src::compiler::commands::RootCommand Core_obj::convertBytes( ::haxe::io::Bytes bytes, ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_121_convertBytes)
HXLINE( 122)		if (hx::IsNull( scope )) {
HXLINE( 122)			scope =  ::src::compiler::Scope_obj::__alloc( HX_CTX ,HX_("root",22,ee,ae,4b),null());
            		}
HXLINE( 123)		return ::src::compiler::commands::RootCommand_obj::fromBytecode(scope,::src::compiler::bytecode::Bytecode_obj::fromBytes(bytes,scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Core_obj,convertBytes,return )

 ::src::compiler::bytecode::Bytecode Core_obj::compile( ::src::compiler::commands::RootCommand root, ::Dynamic stringPool){
            	HX_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_127_compile)
HXLINE( 128)		if (hx::IsNull( stringPool )) {
HXLINE( 128)			stringPool = true;
            		}
HXLINE( 129)		root->useStringPool = stringPool;
HXLINE( 130)		 ::src::compiler::bytecode::Bytecode code = root->getBytecode();
HXLINE( 131)		if (stringPool) {
HXLINE( 132)			root->getScope()->getRoot()->stringPool = ::Array_obj< ::String >::__new();
HXLINE( 133)			::src::compiler::bytecode::Bytecode_obj::currentStringPool = null();
            		}
HXLINE( 135)		return code;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Core_obj,compile,return )


Core_obj::Core_obj()
{
}

bool Core_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_opcap") ) { outValue = _opcap_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { outValue = convert_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"compile") ) { outValue = compile_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"convertRoot") ) { outValue = convertRoot_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"operativeMap") ) { outValue = ( operativeMap ); return true; }
		if (HX_FIELD_EQ(inName,"convertBlock") ) { outValue = convertBlock_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"convertBytes") ) { outValue = convertBytes_dyn(); return true; }
	}
	return false;
}

bool Core_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"operativeMap") ) { operativeMap=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Core_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Core_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Core_obj::operativeMap,HX_HCSTRING("operativeMap","\xa5","\x34","\xc7","\x63")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Core_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Core_obj::operativeMap,"operativeMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Core_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Core_obj::operativeMap,"operativeMap");
};

#endif

hx::Class Core_obj::__mClass;

static ::String Core_obj_sStaticFields[] = {
	HX_HCSTRING("_opcap","\xd2","\x04","\xb5","\x2f"),
	HX_HCSTRING("operativeMap","\xa5","\x34","\xc7","\x63"),
	HX_HCSTRING("convertRoot","\xb5","\x8d","\xf3","\x34"),
	HX_HCSTRING("convert","\xf3","\xfd","\xc9","\x1a"),
	HX_HCSTRING("convertBlock","\x5a","\x76","\xc3","\xe7"),
	HX_HCSTRING("convertBytes","\x78","\x09","\x5f","\xf0"),
	HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"),
	::String(null())
};

void Core_obj::__register()
{
	hx::Object *dummy = new Core_obj;
	Core_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.Core","\xa4","\x61","\x26","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Core_obj::__GetStatic;
	__mClass->mSetStaticField = &Core_obj::__SetStatic;
	__mClass->mMarkFunc = Core_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Core_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Core_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Core_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Core_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Core_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Core_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_25_boot)
HXDLIN(  25)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  25)			_g->set(HX_("AssignmentToken",4c,94,e1,56),::Array_obj< ::Dynamic>::__new(1)->init(0,::src::compiler::Core_obj::_opcap(HX_("EndLineToken",2a,db,3a,32),null(),null(),null())));
HXDLIN(  25)			_g->set(HX_("EndLineToken",2a,db,3a,32),::Array_obj< ::Dynamic>::__new(1)->init(0,::src::compiler::Core_obj::_opcap(HX_("EndLineToken",2a,db,3a,32),null(),null(),null())));
HXDLIN(  25)			{
            				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(3)
            				bool _hx_run( ::Dynamic lastVal, ::src::ast::Token token, ::src::ast::Token nextToken){
            					HX_GC_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_34_boot)
HXLINE(  35)					if ((token->getName() == HX_("BlockToken",8c,2a,40,e2))) {
HXLINE(  36)						bool value6;
HXDLIN(  36)						if (hx::IsNotNull( nextToken )) {
HXLINE(  36)							value6 = (nextToken->getName() != HX_("KwdToken",c1,aa,4a,b9));
            						}
            						else {
HXLINE(  36)							value6 = true;
            						}
HXDLIN(  36)						if (!(value6)) {
HXLINE(  36)							if (hx::IsNotEq( nextToken->getContent(),HX_("else",b9,e4,14,43) )) {
HXLINE(  36)								return hx::IsNotEq( nextToken->getContent(),HX_("elif",04,dc,14,43) );
            							}
            							else {
HXLINE(  36)								return false;
            							}
            						}
            						else {
HXLINE(  36)							return true;
            						}
            					}
            					else {
HXLINE(  37)						if ((token->getName() == HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  38)							return true;
            						}
            					}
HXLINE(  40)					return false;
            				}
            				HX_END_LOCAL_FUNC3(return)

HXLINE(  29)				 ::src::compiler::_Core::OperativeCapture value = ::src::compiler::Core_obj::_opcap(HX_("BlockToken",8c,2a,40,e2),HX_("func",44,eb,c4,43),null(),null());
HXLINE(  30)				 ::src::compiler::_Core::OperativeCapture value1 = ::src::compiler::Core_obj::_opcap(HX_("EndLineToken",2a,db,3a,32),HX_("return",b0,a4,2d,09),null(),null());
HXLINE(  31)				 ::src::compiler::_Core::OperativeCapture value2 = ::src::compiler::Core_obj::_opcap(::cpp::VirtualArray_obj::__new(2)->init(0,HX_("EndLineToken",2a,db,3a,32))->init(1,HX_("BlockToken",8c,2a,40,e2)),HX_("for",09,c7,4d,00),null(),null());
HXLINE(  32)				 ::src::compiler::_Core::OperativeCapture value3 = ::src::compiler::Core_obj::_opcap(HX_("EndLineToken",2a,db,3a,32),HX_("del",cb,39,4c,00),null(),null());
HXLINE(  33)				 ::src::compiler::_Core::OperativeCapture value4 = ::src::compiler::Core_obj::_opcap(::cpp::VirtualArray_obj::__new(2)->init(0,HX_("EndLineToken",2a,db,3a,32))->init(1,HX_("BlockToken",8c,2a,40,e2)),HX_("while",b1,43,bd,c9),null(),null());
HXLINE(  34)				 ::src::compiler::_Core::OperativeCapture value5 = ::src::compiler::Core_obj::_opcap(HX_("",00,00,00,00),HX_("if",dd,5b,00,00),HX_("",00,00,00,00), ::Dynamic(new _hx_Closure_0()));
HXLINE(  42)				 ::src::compiler::_Core::OperativeCapture value7 = ::src::compiler::Core_obj::_opcap(HX_("EndLineToken",2a,db,3a,32),HX_("break",bf,24,ec,b8),null(),null());
HXLINE(  43)				 ::src::compiler::_Core::OperativeCapture value8 = ::src::compiler::Core_obj::_opcap(HX_("EndLineToken",2a,db,3a,32),HX_("continue",67,e0,c8,31),null(),null());
HXLINE(  25)				_g->set(HX_("KwdToken",c1,aa,4a,b9),::Array_obj< ::Dynamic>::__new(9)->init(0,value)->init(1,value1)->init(2,value2)->init(3,value3)->init(4,value4)->init(5,value5)->init(6,value7)->init(7,value8)->init(8,::src::compiler::Core_obj::_opcap(HX_("BlockToken",8c,2a,40,e2),HX_("type",ba,f2,08,4d),null(),null())));
            			}
HXDLIN(  25)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_4e7f69f29ed8fa1e_25_boot)
HXDLIN(  25)		operativeMap =  ::Dynamic(new _hx_Closure_1())();
            	}
}

} // end namespace src
} // end namespace compiler
