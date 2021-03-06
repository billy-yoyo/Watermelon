// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_src_Watermelon
#include <src/Watermelon.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_EndLineToken
#include <src/ast/base/EndLineToken.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_Bytecode
#include <src/compiler/bytecode/Bytecode.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_StringPool
#include <src/compiler/bytecode/StringPool.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_RootCommand
#include <src/compiler/commands/RootCommand.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitCodeSignal
#include <src/compiler/signals/ExitCodeSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_20_new,"src.compiler.commands.RootCommand","new",0x459d819a,"src.compiler.commands.RootCommand.new","src/compiler/commands/RootCommand.hx",20,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_41_copy,"src.compiler.commands.RootCommand","copy",0x9cf61d3b,"src.compiler.commands.RootCommand.copy","src/compiler/commands/RootCommand.hx",41,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_45_setScope,"src.compiler.commands.RootCommand","setScope",0xd4b57718,"src.compiler.commands.RootCommand.setScope","src/compiler/commands/RootCommand.hx",45,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_52_walk,"src.compiler.commands.RootCommand","walk",0xaa23be8f,"src.compiler.commands.RootCommand.walk","src/compiler/commands/RootCommand.hx",52,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_79_run,"src.compiler.commands.RootCommand","run",0x45a09885,"src.compiler.commands.RootCommand.run","src/compiler/commands/RootCommand.hx",79,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_101_getName,"src.compiler.commands.RootCommand","getName",0x8b35f83b,"src.compiler.commands.RootCommand.getName","src/compiler/commands/RootCommand.hx",101,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_106_getFriendlyName,"src.compiler.commands.RootCommand","getFriendlyName",0x23203246,"src.compiler.commands.RootCommand.getFriendlyName","src/compiler/commands/RootCommand.hx",106,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_110_getBytecode,"src.compiler.commands.RootCommand","getBytecode",0x68203225,"src.compiler.commands.RootCommand.getBytecode","src/compiler/commands/RootCommand.hx",110,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_122_reconstruct,"src.compiler.commands.RootCommand","reconstruct",0x7aaee13e,"src.compiler.commands.RootCommand.reconstruct","src/compiler/commands/RootCommand.hx",122,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_23_fromBytecode,"src.compiler.commands.RootCommand","fromBytecode",0x4f062745,"src.compiler.commands.RootCommand.fromBytecode","src/compiler/commands/RootCommand.hx",23,0xd7f452f7)
HX_LOCAL_STACK_FRAME(_hx_pos_c7c8df40f455b5aa_56_throwUncaughtError,"src.compiler.commands.RootCommand","throwUncaughtError",0xa91e8bf3,"src.compiler.commands.RootCommand.throwUncaughtError","src/compiler/commands/RootCommand.hx",56,0xd7f452f7)
namespace src{
namespace compiler{
namespace commands{

void RootCommand_obj::__construct( ::src::compiler::Scope scope,::Array< ::Dynamic> commands){
            	HX_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_20_new)
HXLINE(  32)		this->handleErrors = true;
HXLINE(  31)		this->useStringPool = true;
HXLINE(  35)		super::__construct(scope);
HXLINE(  36)		this->commands = commands;
            	}

Dynamic RootCommand_obj::__CreateEmpty() { return new RootCommand_obj; }

void *RootCommand_obj::_hx_vtable = 0;

Dynamic RootCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RootCommand_obj > _hx_result = new RootCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RootCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x6b0761fe;
	}
}

 ::src::compiler::commands::Command RootCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_41_copy)
HXDLIN(  41)		return  ::src::compiler::commands::RootCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::commands::Command_obj::copyArray(scope,this->commands));
            	}


void RootCommand_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_45_setScope)
HXLINE(  46)		this->super::setScope(scope);
HXLINE(  47)		{
HXLINE(  47)			int _g = (int)0;
HXDLIN(  47)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN(  47)			while((_g < _g1->length)){
HXLINE(  47)				 ::src::compiler::commands::Command cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN(  47)				_g = (_g + (int)1);
HXDLIN(  47)				cmd->setScope(scope);
            			}
            		}
            	}


::Array< ::Dynamic> RootCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_52_walk)
HXDLIN(  52)		return this->commands;
            	}


 ::src::compiler::object::Object RootCommand_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_79_run)
HXLINE(  81)		 ::src::compiler::commands::Command command = null();
HXLINE(  82)		try {
            			HX_STACK_CATCHABLE( ::src::compiler::signals::ExitSignal, 0);
HXLINE(  83)			int _g1 = (int)0;
HXDLIN(  83)			int _g = this->commands->length;
HXDLIN(  83)			while((_g1 < _g)){
HXLINE(  83)				_g1 = (_g1 + (int)1);
HXDLIN(  83)				int i = (_g1 - (int)1);
HXLINE(  84)				command = this->commands->__get(i).StaticCast<  ::src::compiler::commands::Command >();
HXLINE(  85)				command->run();
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::src::compiler::signals::ExitSignal >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::src::compiler::signals::ExitSignal signal = _hx_e;
HXLINE(  92)				if (!(this->handleErrors)) {
HXLINE(  92)					HX_STACK_DO_THROW(signal);
            				}
HXLINE(  93)				if ((signal->getName() == HX_("ExitCodeSignal",53,d4,2f,fa))) {
HXLINE(  93)					HX_STACK_DO_THROW( ::src::compiler::signals::ExitCodeSignal_obj::__alloc( HX_CTX ));
            				}
HXLINE(  94)				::String _hx_tmp = ((HX_("",00,00,00,00) + signal->getName()) + HX_(": ",a6,32,00,00));
HXDLIN(  94)				::src::compiler::commands::RootCommand_obj::throwUncaughtError(command,(_hx_tmp + signal->msg));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  96)		return null();
            	}


::String RootCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_101_getName)
HXDLIN( 101)		return HX_("RootCommand",29,2b,cf,57);
            	}


::String RootCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_106_getFriendlyName)
HXDLIN( 106)		return HX_("root",22,ee,ae,4b);
            	}


 ::src::compiler::bytecode::Bytecode RootCommand_obj::getBytecode(){
            	HX_GC_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_110_getBytecode)
HXLINE( 111)		::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE( 112)		if (this->useStringPool) {
HXLINE( 113)			 ::src::compiler::bytecode::StringPool stringPool =  ::src::compiler::bytecode::StringPool_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE( 114)			::src::compiler::bytecode::Bytecode_obj::currentStringPool = stringPool;
HXLINE( 115)			arr->push(stringPool);
            		}
HXLINE( 117)		{
HXLINE( 117)			int _g = (int)0;
HXDLIN( 117)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN( 117)			while((_g < _g1->length)){
HXLINE( 117)				 ::src::compiler::commands::Command cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN( 117)				_g = (_g + (int)1);
HXDLIN( 117)				arr->push(cmd);
            			}
            		}
HXLINE( 118)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(arr,this->getCodeID());
            	}


::Array< ::Dynamic> RootCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_122_reconstruct)
HXLINE( 123)		::Array< ::Dynamic> tokens = ::Array_obj< ::Dynamic>::__new();
HXLINE( 124)		{
HXLINE( 124)			int _g = (int)0;
HXDLIN( 124)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN( 124)			while((_g < _g1->length)){
HXLINE( 124)				 ::src::compiler::commands::Command cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN( 124)				_g = (_g + (int)1);
HXLINE( 125)				::Array< ::Dynamic> _hx_const = cmd->reconstruct();
HXLINE( 126)				bool _hx_tmp;
HXDLIN( 126)				if ((_hx_const->__get((_hx_const->length - (int)1)).StaticCast<  ::src::ast::Token >()->getName() == HX_("BlockToken",8c,2a,40,e2))) {
HXLINE( 126)					_hx_tmp = (cmd->getName() == HX_("MapValueCommand",76,32,8d,69));
            				}
            				else {
HXLINE( 126)					_hx_tmp = true;
            				}
HXDLIN( 126)				if (_hx_tmp) {
HXLINE( 127)					_hx_const->push( ::src::ast::base::EndLineToken_obj::__alloc( HX_CTX ,HX_(";",3b,00,00,00)));
            				}
HXLINE( 129)				tokens->push(_hx_const);
            			}
            		}
HXLINE( 131)		return ::src::ast::Token_obj::merge(tokens);
            	}


 ::src::compiler::commands::RootCommand RootCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_23_fromBytecode)
HXLINE(  24)		if (hx::IsNull( arr->__get((int)0).StaticCast<  ::src::compiler::bytecode::Bytecode >() )) {
HXLINE(  24)			arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >();
            		}
HXLINE(  25)		::Array< ::Dynamic> commands = ::Array_obj< ::Dynamic>::__new();
HXLINE(  26)		while((arr->length > (int)0)){
HXLINE(  26)			commands->push(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            		}
HXLINE(  27)		return  ::src::compiler::commands::RootCommand_obj::__alloc( HX_CTX ,scope,commands);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RootCommand_obj,fromBytecode,return )

void RootCommand_obj::throwUncaughtError( ::src::compiler::commands::Command command,::String msg){
            	HX_STACKFRAME(&_hx_pos_c7c8df40f455b5aa_56_throwUncaughtError)
HXLINE(  57)		::Array< ::Dynamic> stack = ::haxe::CallStack_obj::exceptionStack();
HXLINE(  58)		::Array< ::String > simple = ::Array_obj< ::String >::__new();
HXDLIN(  58)		::String next;
HXLINE(  59)		{
HXLINE(  59)			int _g = (int)0;
HXDLIN(  59)			while((_g < stack->length)){
HXLINE(  59)				 ::haxe::StackItem item = stack->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN(  59)				_g = (_g + (int)1);
HXLINE(  60)				next = ( (::String)(::Type_obj::enumParameters(item)->__get((int)1)->__Field(HX_("split",da,ea,6e,81),hx::paccDynamic)(HX_("/",2f,00,00,00))->__Field(HX_("pop",91,5d,55,00),hx::paccDynamic)()->__Field(HX_("split",da,ea,6e,81),hx::paccDynamic)(HX_(".",2e,00,00,00))->__Field(HX_("shift",82,ec,22,7c),hx::paccDynamic)()) );
HXLINE(  61)				if ((simple->__get((simple->length - (int)1)) != next)) {
HXLINE(  61)					simple->push(next);
            				}
            			}
            		}
HXLINE(  63)		simple->pop();
HXLINE(  64)		::src::Watermelon_obj::print(msg);
HXLINE(  65)		while((simple->length > (int)0)){
HXLINE(  66)			::String name = ( (::String)(simple->shift()) );
HXLINE(  67)			::String friendly;
HXLINE(  68)			hx::Class cls = ::Type_obj::resolveClass((HX_("src.compiler.commands.value.",7e,32,41,6c) + name));
HXLINE(  69)			if (hx::IsNull( cls )) {
HXLINE(  69)				cls = ::Type_obj::resolveClass((HX_("src.compiler.commands.",21,e0,9d,24) + name));
            			}
HXLINE(  70)			if (hx::IsNull( cls )) {
HXLINE(  70)				cls = ::Type_obj::resolveClass((HX_("src.compiler.commands.coroutine.",b7,9e,17,51) + name));
            			}
HXLINE(  71)			if (hx::IsNull( cls )) {
HXLINE(  71)				friendly = name;
            			}
            			else {
HXLINE(  72)				friendly = ( (::String)(::Reflect_obj::getProperty(::Type_obj::createEmptyInstance(cls),HX_("getFriendlyName",0c,92,f4,af))()) );
            			}
HXLINE(  73)			 ::Dynamic _hx_tmp = hx::ClassOf< ::src::Watermelon >();
HXDLIN(  73)			::src::Watermelon_obj::print((HX_("Called from ",b3,3f,e6,c7) + friendly));
            		}
HXLINE(  75)		 ::Dynamic _hx_tmp1 = hx::ClassOf< ::src::Watermelon >();
HXDLIN(  75)		::String _hx_tmp2 = (HX_("Called from root command ",a0,ba,79,37) + command->getFriendlyName());
HXDLIN(  75)		::src::Watermelon_obj::print(_hx_tmp2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RootCommand_obj,throwUncaughtError,(void))


hx::ObjectPtr< RootCommand_obj > RootCommand_obj::__new( ::src::compiler::Scope scope,::Array< ::Dynamic> commands) {
	hx::ObjectPtr< RootCommand_obj > __this = new RootCommand_obj();
	__this->__construct(scope,commands);
	return __this;
}

hx::ObjectPtr< RootCommand_obj > RootCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::Array< ::Dynamic> commands) {
	RootCommand_obj *__this = (RootCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RootCommand_obj), true, "src.compiler.commands.RootCommand"));
	*(void **)__this = RootCommand_obj::_hx_vtable;
	__this->__construct(scope,commands);
	return __this;
}

RootCommand_obj::RootCommand_obj()
{
}

void RootCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RootCommand);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(useStringPool,"useStringPool");
	HX_MARK_MEMBER_NAME(handleErrors,"handleErrors");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RootCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(useStringPool,"useStringPool");
	HX_VISIT_MEMBER_NAME(handleErrors,"handleErrors");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val RootCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"setScope") ) { return hx::Val( setScope_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleErrors") ) { return hx::Val( handleErrors ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useStringPool") ) { return hx::Val( useStringPool ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFriendlyName") ) { return hx::Val( getFriendlyName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RootCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"throwUncaughtError") ) { outValue = throwUncaughtError_dyn(); return true; }
	}
	return false;
}

hx::Val RootCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleErrors") ) { handleErrors=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useStringPool") ) { useStringPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RootCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("useStringPool","\x74","\x01","\xc2","\x34"));
	outFields->push(HX_HCSTRING("handleErrors","\x73","\xa9","\x94","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RootCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RootCommand_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsBool,(int)offsetof(RootCommand_obj,useStringPool),HX_HCSTRING("useStringPool","\x74","\x01","\xc2","\x34")},
	{hx::fsBool,(int)offsetof(RootCommand_obj,handleErrors),HX_HCSTRING("handleErrors","\x73","\xa9","\x94","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RootCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String RootCommand_obj_sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("useStringPool","\x74","\x01","\xc2","\x34"),
	HX_HCSTRING("handleErrors","\x73","\xa9","\x94","\x9f"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("setScope","\x92","\xda","\x0d","\x87"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void RootCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RootCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RootCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RootCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class RootCommand_obj::__mClass;

static ::String RootCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	HX_HCSTRING("throwUncaughtError","\xed","\xcb","\xef","\x26"),
	::String(null())
};

void RootCommand_obj::__register()
{
	hx::Object *dummy = new RootCommand_obj;
	RootCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.RootCommand","\xa8","\x6c","\xea","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RootCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RootCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RootCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RootCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RootCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RootCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RootCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RootCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
