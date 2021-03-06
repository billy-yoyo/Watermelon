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
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_RaiseCommand
#include <src/compiler/commands/RaiseCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_signals_CustomErrorSignal
#include <src/compiler/signals/CustomErrorSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ValueErrorSignal
#include <src/compiler/signals/ValueErrorSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_38_new,"src.compiler.commands.RaiseCommand","new",0x3d1c2472,"src.compiler.commands.RaiseCommand.new","src/compiler/commands/RaiseCommand.hx",38,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_45_copy,"src.compiler.commands.RaiseCommand","copy",0x3445f763,"src.compiler.commands.RaiseCommand.copy","src/compiler/commands/RaiseCommand.hx",45,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_49_setScope,"src.compiler.commands.RaiseCommand","setScope",0x22018540,"src.compiler.commands.RaiseCommand.setScope","src/compiler/commands/RaiseCommand.hx",49,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_56_walk,"src.compiler.commands.RaiseCommand","walk",0x417398b7,"src.compiler.commands.RaiseCommand.walk","src/compiler/commands/RaiseCommand.hx",56,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_60_run,"src.compiler.commands.RaiseCommand","run",0x3d1f3b5d,"src.compiler.commands.RaiseCommand.run","src/compiler/commands/RaiseCommand.hx",60,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_68_getName,"src.compiler.commands.RaiseCommand","getName",0x623ae713,"src.compiler.commands.RaiseCommand.getName","src/compiler/commands/RaiseCommand.hx",68,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_73_getFriendlyName,"src.compiler.commands.RaiseCommand","getFriendlyName",0x0973b91e,"src.compiler.commands.RaiseCommand.getFriendlyName","src/compiler/commands/RaiseCommand.hx",73,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_78_getBytecode,"src.compiler.commands.RaiseCommand","getBytecode",0xcdc16cfd,"src.compiler.commands.RaiseCommand.getBytecode","src/compiler/commands/RaiseCommand.hx",78,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_83_reconstruct,"src.compiler.commands.RaiseCommand","reconstruct",0xe0501c16,"src.compiler.commands.RaiseCommand.reconstruct","src/compiler/commands/RaiseCommand.hx",83,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_20_fromTokens,"src.compiler.commands.RaiseCommand","fromTokens",0xd4614e92,"src.compiler.commands.RaiseCommand.fromTokens","src/compiler/commands/RaiseCommand.hx",20,0xf09cf03d)
HX_LOCAL_STACK_FRAME(_hx_pos_c7faf46a3b30e52e_33_fromBytecode,"src.compiler.commands.RaiseCommand","fromBytecode",0xd678696d,"src.compiler.commands.RaiseCommand.fromBytecode","src/compiler/commands/RaiseCommand.hx",33,0xf09cf03d)
namespace src{
namespace compiler{
namespace commands{

void RaiseCommand_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand value){
            	HX_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_38_new)
HXLINE(  39)		super::__construct(scope);
HXLINE(  40)		this->value = value;
            	}

Dynamic RaiseCommand_obj::__CreateEmpty() { return new RaiseCommand_obj; }

void *RaiseCommand_obj::_hx_vtable = 0;

Dynamic RaiseCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RaiseCommand_obj > _hx_result = new RaiseCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RaiseCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x2232796a;
	}
}

 ::src::compiler::commands::Command RaiseCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_45_copy)
HXDLIN(  45)		return  ::src::compiler::commands::RaiseCommand_obj::__alloc( HX_CTX ,scope,this->value->copy(scope));
            	}


void RaiseCommand_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_49_setScope)
HXLINE(  50)		this->super::setScope(scope);
HXLINE(  51)		this->value->setScope(scope);
            	}


::Array< ::Dynamic> RaiseCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_56_walk)
HXDLIN(  56)		return this->value->walk();
            	}


 ::src::compiler::object::Object RaiseCommand_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_60_run)
HXLINE(  61)		 ::src::compiler::object::Object obj = this->value->run();
HXLINE(  62)		if (hx::IsNotNull( this->value )) {
HXLINE(  62)			HX_STACK_DO_THROW( ::src::compiler::signals::CustomErrorSignal_obj::__alloc( HX_CTX ,obj));
            		}
            		else {
HXLINE(  63)			HX_STACK_DO_THROW( ::src::compiler::signals::ValueErrorSignal_obj::__alloc( HX_CTX ,HX_("Cannot raise nothing",1c,d7,6b,fc)));
            		}
HXLINE(  62)		return null();
            	}


::String RaiseCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_68_getName)
HXDLIN(  68)		return HX_("RaiseCommand",df,b5,3a,64);
            	}


::String RaiseCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_73_getFriendlyName)
HXDLIN(  73)		return HX_("raise",ec,e4,1b,e4);
            	}


 ::src::compiler::bytecode::Bytecode RaiseCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_78_getBytecode)
HXDLIN(  78)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(1)->init(0,this->value);
HXDLIN(  78)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> RaiseCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_83_reconstruct)
HXDLIN(  83)		 ::src::ast::base::KwdToken _hx_tmp =  ::src::ast::base::KwdToken_obj::__alloc( HX_CTX ,HX_("raise",ec,e4,1b,e4));
HXDLIN(  83)		return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(2)->init(0,_hx_tmp)->init(1,this->value->reconstruct()));
            	}


 ::src::compiler::commands::RaiseCommand RaiseCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_20_fromTokens)
HXLINE(  21)		 ::src::ast::Token end = tokens->pop().StaticCast<  ::src::ast::Token >();
HXLINE(  22)		if ((end->getName() != HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  22)			HX_STACK_DO_THROW(HX_("Raise must end in endline",1c,91,e0,8c));
            		}
HXLINE(  24)		 ::src::ast::Token start = tokens->shift().StaticCast<  ::src::ast::Token >();
HXLINE(  25)		bool _hx_tmp;
HXDLIN(  25)		if ((start->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  25)			_hx_tmp = hx::IsNotEq( start->getContent(),HX_("raise",ec,e4,1b,e4) );
            		}
            		else {
HXLINE(  25)			_hx_tmp = true;
            		}
HXDLIN(  25)		if (_hx_tmp) {
HXLINE(  25)			HX_STACK_DO_THROW(HX_("Invalid raise keyword",ac,54,0e,42));
            		}
HXLINE(  27)		if ((tokens->length == (int)0)) {
HXLINE(  27)			return  ::src::compiler::commands::RaiseCommand_obj::__alloc( HX_CTX ,scope,null());
            		}
            		else {
HXLINE(  28)			return  ::src::compiler::commands::RaiseCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,tokens));
            		}
HXLINE(  27)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RaiseCommand_obj,fromTokens,return )

 ::src::compiler::commands::RaiseCommand RaiseCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_c7faf46a3b30e52e_33_fromBytecode)
HXDLIN(  33)		return  ::src::compiler::commands::RaiseCommand_obj::__alloc( HX_CTX ,scope,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RaiseCommand_obj,fromBytecode,return )


hx::ObjectPtr< RaiseCommand_obj > RaiseCommand_obj::__new( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand value) {
	hx::ObjectPtr< RaiseCommand_obj > __this = new RaiseCommand_obj();
	__this->__construct(scope,value);
	return __this;
}

hx::ObjectPtr< RaiseCommand_obj > RaiseCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand value) {
	RaiseCommand_obj *__this = (RaiseCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RaiseCommand_obj), true, "src.compiler.commands.RaiseCommand"));
	*(void **)__this = RaiseCommand_obj::_hx_vtable;
	__this->__construct(scope,value);
	return __this;
}

RaiseCommand_obj::RaiseCommand_obj()
{
}

void RaiseCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RaiseCommand);
	HX_MARK_MEMBER_NAME(value,"value");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RaiseCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val RaiseCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
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

bool RaiseCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val RaiseCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RaiseCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RaiseCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(RaiseCommand_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RaiseCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String RaiseCommand_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("setScope","\x92","\xda","\x0d","\x87"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void RaiseCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RaiseCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RaiseCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RaiseCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class RaiseCommand_obj::__mClass;

static ::String RaiseCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void RaiseCommand_obj::__register()
{
	hx::Object *dummy = new RaiseCommand_obj;
	RaiseCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.RaiseCommand","\x80","\xc3","\xf8","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RaiseCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RaiseCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RaiseCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RaiseCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RaiseCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RaiseCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RaiseCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RaiseCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
