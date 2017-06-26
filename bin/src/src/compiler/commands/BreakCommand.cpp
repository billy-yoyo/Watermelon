// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
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
#ifndef INCLUDED_src_compiler_commands_BreakCommand
#include <src/compiler/commands/BreakCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_LoopBreakSignal
#include <src/compiler/signals/LoopBreakSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_SyntaxErrorSignal
#include <src/compiler/signals/SyntaxErrorSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5870ae631e9e7a5_14_new,"src.compiler.commands.BreakCommand","new",0x470d9f7f,"src.compiler.commands.BreakCommand.new","src/compiler/commands/BreakCommand.hx",14,0xdd2455d0)
HX_LOCAL_STACK_FRAME(_hx_pos_d5870ae631e9e7a5_31_run,"src.compiler.commands.BreakCommand","run",0x4710b66a,"src.compiler.commands.BreakCommand.run","src/compiler/commands/BreakCommand.hx",31,0xdd2455d0)
HX_LOCAL_STACK_FRAME(_hx_pos_d5870ae631e9e7a5_36_getName,"src.compiler.commands.BreakCommand","getName",0x7e3b6ca0,"src.compiler.commands.BreakCommand.getName","src/compiler/commands/BreakCommand.hx",36,0xdd2455d0)
HX_LOCAL_STACK_FRAME(_hx_pos_d5870ae631e9e7a5_41_getBytecode,"src.compiler.commands.BreakCommand","getBytecode",0x64683d0a,"src.compiler.commands.BreakCommand.getBytecode","src/compiler/commands/BreakCommand.hx",41,0xdd2455d0)
HX_LOCAL_STACK_FRAME(_hx_pos_d5870ae631e9e7a5_46_reconstruct,"src.compiler.commands.BreakCommand","reconstruct",0x76f6ec23,"src.compiler.commands.BreakCommand.reconstruct","src/compiler/commands/BreakCommand.hx",46,0xdd2455d0)
HX_LOCAL_STACK_FRAME(_hx_pos_d5870ae631e9e7a5_17_fromBytecode,"src.compiler.commands.BreakCommand","fromBytecode",0x11c7a4c0,"src.compiler.commands.BreakCommand.fromBytecode","src/compiler/commands/BreakCommand.hx",17,0xdd2455d0)
HX_LOCAL_STACK_FRAME(_hx_pos_d5870ae631e9e7a5_23_fromTokens,"src.compiler.commands.BreakCommand","fromTokens",0x7ef4ff25,"src.compiler.commands.BreakCommand.fromTokens","src/compiler/commands/BreakCommand.hx",23,0xdd2455d0)
namespace src{
namespace compiler{
namespace commands{

void BreakCommand_obj::__construct( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_d5870ae631e9e7a5_14_new)
HXDLIN(  14)		super::__construct(scope);
            	}

Dynamic BreakCommand_obj::__CreateEmpty() { return new BreakCommand_obj; }

void *BreakCommand_obj::_hx_vtable = 0;

Dynamic BreakCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BreakCommand_obj > _hx_result = new BreakCommand_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BreakCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x160c29f7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x160c29f7;
	} else {
		return inClassId==(int)0x20538180;
	}
}

 ::src::compiler::object::Object BreakCommand_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_d5870ae631e9e7a5_31_run)
HXDLIN(  31)		HX_STACK_DO_THROW( ::src::compiler::signals::LoopBreakSignal_obj::__alloc( HX_CTX ));
HXDLIN(  31)		return null();
            	}


::String BreakCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_d5870ae631e9e7a5_36_getName)
HXDLIN(  36)		return HX_("BreakCommand",6c,66,14,58);
            	}


 ::src::compiler::bytecode::Bytecode BreakCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_d5870ae631e9e7a5_41_getBytecode)
HXDLIN(  41)		return ::src::compiler::bytecode::Bytecode_obj::fromNull(this->getCodeID());
            	}


::Array< ::Dynamic> BreakCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_d5870ae631e9e7a5_46_reconstruct)
HXDLIN(  46)		return ::Array_obj< ::Dynamic>::__new(1)->init(0, ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("break",bf,24,ec,b8)));
            	}


 ::src::compiler::commands::BreakCommand BreakCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_d5870ae631e9e7a5_17_fromBytecode)
HXLINE(  18)		arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >();
HXLINE(  19)		return  ::src::compiler::commands::BreakCommand_obj::__alloc( HX_CTX ,scope);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakCommand_obj,fromBytecode,return )

 ::src::compiler::commands::BreakCommand BreakCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_d5870ae631e9e7a5_23_fromTokens)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if ((tokens->length == (int)2)) {
HXLINE(  24)			_hx_tmp = (tokens->__get((int)1).StaticCast<  ::src::ast::Token >()->getName() != HX_("EndLineToken",2a,db,3a,32));
            		}
            		else {
HXLINE(  24)			_hx_tmp = true;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  24)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Break must by itself in an expression",a6,ff,66,0d)));
            		}
HXLINE(  25)		bool _hx_tmp1;
HXDLIN(  25)		if ((tokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  25)			_hx_tmp1 = hx::IsNotEq( tokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getContent(),HX_("break",bf,24,ec,b8) );
            		}
            		else {
HXLINE(  25)			_hx_tmp1 = true;
            		}
HXDLIN(  25)		if (_hx_tmp1) {
HXLINE(  25)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Invalid break expression",c2,3a,ca,ed)));
            		}
HXLINE(  26)		return  ::src::compiler::commands::BreakCommand_obj::__alloc( HX_CTX ,scope);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakCommand_obj,fromTokens,return )


hx::ObjectPtr< BreakCommand_obj > BreakCommand_obj::__new( ::src::compiler::Scope scope) {
	hx::ObjectPtr< BreakCommand_obj > __this = new BreakCommand_obj();
	__this->__construct(scope);
	return __this;
}

hx::ObjectPtr< BreakCommand_obj > BreakCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope) {
	BreakCommand_obj *__this = (BreakCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BreakCommand_obj), true, "src.compiler.commands.BreakCommand"));
	*(void **)__this = BreakCommand_obj::_hx_vtable;
	__this->__construct(scope);
	return __this;
}

BreakCommand_obj::BreakCommand_obj()
{
}

hx::Val BreakCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BreakCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BreakCommand_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BreakCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String BreakCommand_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void BreakCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BreakCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BreakCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BreakCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class BreakCommand_obj::__mClass;

static ::String BreakCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	::String(null())
};

void BreakCommand_obj::__register()
{
	hx::Object *dummy = new BreakCommand_obj;
	BreakCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.BreakCommand","\x0d","\x74","\xd2","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BreakCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BreakCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BreakCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BreakCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BreakCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BreakCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BreakCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BreakCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
