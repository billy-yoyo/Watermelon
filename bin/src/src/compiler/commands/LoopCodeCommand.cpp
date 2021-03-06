// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_EndLineToken
#include <src/ast/base/EndLineToken.h>
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
#ifndef INCLUDED_src_compiler_commands_LoopCodeCommand
#include <src/compiler/commands/LoopCodeCommand.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_02a90693be860357_15_new,"src.compiler.commands.LoopCodeCommand","new",0x46b6e1eb,"src.compiler.commands.LoopCodeCommand.new","src/compiler/commands/LoopCodeCommand.hx",15,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_39_copy,"src.compiler.commands.LoopCodeCommand","copy",0x921103ca,"src.compiler.commands.LoopCodeCommand.copy","src/compiler/commands/LoopCodeCommand.hx",39,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_43_setScope,"src.compiler.commands.LoopCodeCommand","setScope",0xde885127,"src.compiler.commands.LoopCodeCommand.setScope","src/compiler/commands/LoopCodeCommand.hx",43,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_50_walk,"src.compiler.commands.LoopCodeCommand","walk",0x9f3ea51e,"src.compiler.commands.LoopCodeCommand.walk","src/compiler/commands/LoopCodeCommand.hx",50,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_54_run,"src.compiler.commands.LoopCodeCommand","run",0x46b9f8d6,"src.compiler.commands.LoopCodeCommand.run","src/compiler/commands/LoopCodeCommand.hx",54,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_72_getName,"src.compiler.commands.LoopCodeCommand","getName",0xa7f4550c,"src.compiler.commands.LoopCodeCommand.getName","src/compiler/commands/LoopCodeCommand.hx",72,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_77_getFriendlyName,"src.compiler.commands.LoopCodeCommand","getFriendlyName",0x26b14817,"src.compiler.commands.LoopCodeCommand.getFriendlyName","src/compiler/commands/LoopCodeCommand.hx",77,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_82_getBytecode,"src.compiler.commands.LoopCodeCommand","getBytecode",0xeffbcb76,"src.compiler.commands.LoopCodeCommand.getBytecode","src/compiler/commands/LoopCodeCommand.hx",82,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_87_reconstruct,"src.compiler.commands.LoopCodeCommand","reconstruct",0x028a7a8f,"src.compiler.commands.LoopCodeCommand.reconstruct","src/compiler/commands/LoopCodeCommand.hx",87,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_19_fromTokens,"src.compiler.commands.LoopCodeCommand","fromTokens",0xd9202239,"src.compiler.commands.LoopCodeCommand.fromTokens","src/compiler/commands/LoopCodeCommand.hx",19,0x190b2c46)
HX_LOCAL_STACK_FRAME(_hx_pos_02a90693be860357_23_fromBytecode,"src.compiler.commands.LoopCodeCommand","fromBytecode",0xa750b4d4,"src.compiler.commands.LoopCodeCommand.fromBytecode","src/compiler/commands/LoopCodeCommand.hx",23,0x190b2c46)
namespace src{
namespace compiler{
namespace commands{

void LoopCodeCommand_obj::__construct( ::src::compiler::Scope scope,::Array< ::Dynamic> commands){
            	HX_STACKFRAME(&_hx_pos_02a90693be860357_15_new)
HXLINE(  30)		this->progress = (int)0;
HXLINE(  33)		super::__construct(scope);
HXLINE(  34)		this->commands = commands;
            	}

Dynamic LoopCodeCommand_obj::__CreateEmpty() { return new LoopCodeCommand_obj; }

void *LoopCodeCommand_obj::_hx_vtable = 0;

Dynamic LoopCodeCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LoopCodeCommand_obj > _hx_result = new LoopCodeCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LoopCodeCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x5d6868cf;
	}
}

 ::src::compiler::commands::Command LoopCodeCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_02a90693be860357_39_copy)
HXDLIN(  39)		return  ::src::compiler::commands::LoopCodeCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::commands::Command_obj::copyArray(scope,this->commands));
            	}


void LoopCodeCommand_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_02a90693be860357_43_setScope)
HXLINE(  44)		this->super::setScope(scope);
HXLINE(  45)		{
HXLINE(  45)			int _g = (int)0;
HXDLIN(  45)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN(  45)			while((_g < _g1->length)){
HXLINE(  45)				 ::src::compiler::commands::Command cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN(  45)				_g = (_g + (int)1);
HXDLIN(  45)				cmd->setScope(scope);
            			}
            		}
            	}


::Array< ::Dynamic> LoopCodeCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_02a90693be860357_50_walk)
HXDLIN(  50)		return this->commands;
            	}


 ::src::compiler::object::Object LoopCodeCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_02a90693be860357_54_run)
HXLINE(  55)		 ::src::compiler::commands::Command cmd;
HXLINE(  56)		while((this->progress < this->commands->length)){
HXLINE(  57)			cmd = this->commands->__get(this->progress).StaticCast<  ::src::compiler::commands::Command >();
HXLINE(  58)			bool _hx_tmp;
HXDLIN(  58)			if ((cmd->getName() != HX_("PipeReadCommand",e7,e2,01,95))) {
HXLINE(  58)				_hx_tmp = (cmd->getName() == HX_("PipeWriteCommand",9a,bf,b5,19));
            			}
            			else {
HXLINE(  58)				_hx_tmp = true;
            			}
HXDLIN(  58)			if (_hx_tmp) {
HXLINE(  59)				this->progress++;
HXLINE(  60)				cmd->run();
            			}
            			else {
HXLINE(  62)				cmd->run();
HXLINE(  63)				this->progress++;
            			}
            		}
HXLINE(  66)		this->progress = (int)0;
HXLINE(  67)		return null();
            	}


::String LoopCodeCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_02a90693be860357_72_getName)
HXDLIN(  72)		return HX_("LoopCodeCommand",7a,a3,83,06);
            	}


::String LoopCodeCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_02a90693be860357_77_getFriendlyName)
HXDLIN(  77)		return HX_("loop code",69,f0,15,49);
            	}


 ::src::compiler::bytecode::Bytecode LoopCodeCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_02a90693be860357_82_getBytecode)
HXDLIN(  82)		::Array< ::Dynamic> _hx_tmp = this->commands;
HXDLIN(  82)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> LoopCodeCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_02a90693be860357_87_reconstruct)
HXDLIN(  87)		 ::src::ast::base::EndLineToken _hx_tmp =  ::src::ast::base::EndLineToken_obj::__alloc( HX_CTX ,HX_(";",3b,00,00,00));
HXDLIN(  87)		return _hx_tmp->join(::src::compiler::commands::Command_obj::reconstructCommands(this->commands),null());
            	}


 ::src::compiler::commands::LoopCodeCommand LoopCodeCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_02a90693be860357_19_fromTokens)
HXDLIN(  19)		return  ::src::compiler::commands::LoopCodeCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::Core_obj::convert(scope,tokens));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoopCodeCommand_obj,fromTokens,return )

 ::src::compiler::commands::LoopCodeCommand LoopCodeCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_02a90693be860357_23_fromBytecode)
HXLINE(  24)		::Array< ::Dynamic> commands = ::Array_obj< ::Dynamic>::__new();
HXLINE(  25)		while((arr->length > (int)0)){
HXLINE(  25)			commands->push(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            		}
HXLINE(  26)		return  ::src::compiler::commands::LoopCodeCommand_obj::__alloc( HX_CTX ,scope,commands);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoopCodeCommand_obj,fromBytecode,return )


hx::ObjectPtr< LoopCodeCommand_obj > LoopCodeCommand_obj::__new( ::src::compiler::Scope scope,::Array< ::Dynamic> commands) {
	hx::ObjectPtr< LoopCodeCommand_obj > __this = new LoopCodeCommand_obj();
	__this->__construct(scope,commands);
	return __this;
}

hx::ObjectPtr< LoopCodeCommand_obj > LoopCodeCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::Array< ::Dynamic> commands) {
	LoopCodeCommand_obj *__this = (LoopCodeCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LoopCodeCommand_obj), true, "src.compiler.commands.LoopCodeCommand"));
	*(void **)__this = LoopCodeCommand_obj::_hx_vtable;
	__this->__construct(scope,commands);
	return __this;
}

LoopCodeCommand_obj::LoopCodeCommand_obj()
{
}

void LoopCodeCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoopCodeCommand);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(progress,"progress");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoopCodeCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val LoopCodeCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"commands") ) { return hx::Val( commands ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return hx::Val( progress ); }
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

bool LoopCodeCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val LoopCodeCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoopCodeCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LoopCodeCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LoopCodeCommand_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsInt,(int)offsetof(LoopCodeCommand_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LoopCodeCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String LoopCodeCommand_obj_sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("setScope","\x92","\xda","\x0d","\x87"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void LoopCodeCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoopCodeCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoopCodeCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoopCodeCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class LoopCodeCommand_obj::__mClass;

static ::String LoopCodeCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void LoopCodeCommand_obj::__register()
{
	hx::Object *dummy = new LoopCodeCommand_obj;
	LoopCodeCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.LoopCodeCommand","\x79","\x10","\xb7","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoopCodeCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoopCodeCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LoopCodeCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LoopCodeCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoopCodeCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoopCodeCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoopCodeCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoopCodeCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
