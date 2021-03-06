// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_script_AssignmentToken
#include <src/ast/script/AssignmentToken.h>
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
#ifndef INCLUDED_src_compiler_commands_value_ObjectArrayAssignmentCommand
#include <src/compiler/commands/value/ObjectArrayAssignmentCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ObjectIndexPair
#include <src/compiler/commands/value/ObjectIndexPair.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_33_new,"src.compiler.commands.value.ObjectArrayAssignmentCommand","new",0xc3a1c754,"src.compiler.commands.value.ObjectArrayAssignmentCommand.new","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",33,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_41_copy,"src.compiler.commands.value.ObjectArrayAssignmentCommand","copy",0x62aeda41,"src.compiler.commands.value.ObjectArrayAssignmentCommand.copy","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",41,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_45_setScope,"src.compiler.commands.value.ObjectArrayAssignmentCommand","setScope",0x06782f1e,"src.compiler.commands.value.ObjectArrayAssignmentCommand.setScope","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",45,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_53_walk,"src.compiler.commands.value.ObjectArrayAssignmentCommand","walk",0x6fdc7b95,"src.compiler.commands.value.ObjectArrayAssignmentCommand.walk","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",53,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_57_run,"src.compiler.commands.value.ObjectArrayAssignmentCommand","run",0xc3a4de3f,"src.compiler.commands.value.ObjectArrayAssignmentCommand.run","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",57,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_64_getName,"src.compiler.commands.value.ObjectArrayAssignmentCommand","getName",0x19c8a2f5,"src.compiler.commands.value.ObjectArrayAssignmentCommand.getName","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",64,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_69_getFriendlyName,"src.compiler.commands.value.ObjectArrayAssignmentCommand","getFriendlyName",0x26d32700,"src.compiler.commands.value.ObjectArrayAssignmentCommand.getFriendlyName","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",69,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_74_getBytecode,"src.compiler.commands.value.ObjectArrayAssignmentCommand","getBytecode",0xded7c1df,"src.compiler.commands.value.ObjectArrayAssignmentCommand.getBytecode","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",74,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_79_reconstruct,"src.compiler.commands.value.ObjectArrayAssignmentCommand","reconstruct",0xf16670f8,"src.compiler.commands.value.ObjectArrayAssignmentCommand.reconstruct","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",79,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_17_fromTokens,"src.compiler.commands.value.ObjectArrayAssignmentCommand","fromTokens",0xc33cabf0,"src.compiler.commands.value.ObjectArrayAssignmentCommand.fromTokens","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",17,0x884b4dfa)
HX_LOCAL_STACK_FRAME(_hx_pos_ef25ead923cfe8d3_27_fromBytecode,"src.compiler.commands.value.ObjectArrayAssignmentCommand","fromBytecode",0xb8ec5a4b,"src.compiler.commands.value.ObjectArrayAssignmentCommand.fromBytecode","src/compiler/commands/value/ObjectArrayAssignmentCommand.hx",27,0x884b4dfa)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void ObjectArrayAssignmentCommand_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::commands::value::ObjectIndexPair objectIndexPair, ::src::compiler::commands::value::ValueCommand value){
            	HX_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_33_new)
HXLINE(  34)		super::__construct(scope);
HXLINE(  35)		this->objectIndexPair = objectIndexPair;
HXLINE(  36)		this->value = value;
            	}

Dynamic ObjectArrayAssignmentCommand_obj::__CreateEmpty() { return new ObjectArrayAssignmentCommand_obj; }

void *ObjectArrayAssignmentCommand_obj::_hx_vtable = 0;

Dynamic ObjectArrayAssignmentCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectArrayAssignmentCommand_obj > _hx_result = new ObjectArrayAssignmentCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ObjectArrayAssignmentCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		if (inClassId<=(int)0x1020cfc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1020cfc0;
		} else {
			return inClassId==(int)0x20538180;
		}
	} else {
		return inClassId==(int)0x49d12e0e;
	}
}

 ::src::compiler::commands::Command ObjectArrayAssignmentCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_41_copy)
HXDLIN(  41)		 ::src::compiler::commands::value::ObjectIndexPair _hx_tmp = hx::TCast<  ::src::compiler::commands::value::ObjectIndexPair >::cast(this->objectIndexPair->copy(scope));
HXDLIN(  41)		return  ::src::compiler::commands::value::ObjectArrayAssignmentCommand_obj::__alloc( HX_CTX ,scope,_hx_tmp,this->value->copy(scope));
            	}


void ObjectArrayAssignmentCommand_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_45_setScope)
HXLINE(  46)		this->super::setScope(scope);
HXLINE(  47)		this->objectIndexPair->setScope(scope);
HXLINE(  48)		this->value->setScope(scope);
            	}


::Array< ::Dynamic> ObjectArrayAssignmentCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_53_walk)
HXDLIN(  53)		return ::Array_obj< ::Dynamic>::__new(2)->init(0,this->objectIndexPair)->init(1,this->value);
            	}


 ::src::compiler::object::Object ObjectArrayAssignmentCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_57_run)
HXLINE(  58)		 ::src::compiler::object::Object _hx_tmp = this->objectIndexPair->variable->run();
HXDLIN(  58)		 ::src::compiler::object::Object _hx_tmp1 = this->objectIndexPair->index->run();
HXDLIN(  58)		_hx_tmp->set(_hx_tmp1,this->value->run());
HXLINE(  59)		return null();
            	}


::String ObjectArrayAssignmentCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_64_getName)
HXDLIN(  64)		return HX_("ObjectArrayAssignmentCommand",e4,79,15,43);
            	}


::String ObjectArrayAssignmentCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_69_getFriendlyName)
HXDLIN(  69)		return HX_("array index assignment",02,28,58,f3);
            	}


 ::src::compiler::bytecode::Bytecode ObjectArrayAssignmentCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_74_getBytecode)
HXDLIN(  74)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(3)->init(0,this->objectIndexPair->variable)->init(1,this->objectIndexPair->index)->init(2,this->value);
HXDLIN(  74)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> ObjectArrayAssignmentCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_79_reconstruct)
HXDLIN(  79)		::Array< ::Dynamic> _hx_tmp = this->objectIndexPair->reconstruct();
HXDLIN(  79)		 ::src::ast::script::AssignmentToken _hx_tmp1 =  ::src::ast::script::AssignmentToken_obj::__alloc( HX_CTX ,HX_("=",3d,00,00,00));
HXDLIN(  79)		return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(3)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,this->value->reconstruct()));
            	}


 ::src::compiler::commands::value::ObjectArrayAssignmentCommand ObjectArrayAssignmentCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_17_fromTokens)
HXLINE(  18)		if ((tokens->pop().StaticCast<  ::src::ast::Token >()->getName() != HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  18)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Assignments should end with and EndLineToken",35,32,68,56)));
            		}
HXLINE(  19)		::Array< ::Dynamic> spl = ::src::compiler::commands::Command_obj::splitTokens(tokens,HX_("AssignmentToken",4c,94,e1,56),null(),null());
HXLINE(  20)		if ((spl->length == (int)1)) {
HXLINE(  20)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Missing assignment token",00,a0,84,ff)));
            		}
            		else {
HXLINE(  21)			if ((spl->length > (int)2)) {
HXLINE(  21)				HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Too many assignments in one expression",be,05,7f,30)));
            			}
            		}
HXLINE(  22)		 ::src::compiler::commands::value::ObjectIndexPair _hx_tmp = ::src::compiler::commands::value::ObjectIndexPair_obj::fromTokens(scope,spl->__get((int)0).StaticCast< ::Array< ::Dynamic> >());
HXDLIN(  22)		return  ::src::compiler::commands::value::ObjectArrayAssignmentCommand_obj::__alloc( HX_CTX ,scope,_hx_tmp,::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,spl->__get((int)1).StaticCast< ::Array< ::Dynamic> >()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectArrayAssignmentCommand_obj,fromTokens,return )

 ::src::compiler::commands::value::ObjectArrayAssignmentCommand ObjectArrayAssignmentCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_ef25ead923cfe8d3_27_fromBytecode)
HXDLIN(  27)		 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN(  27)		 ::src::compiler::commands::value::ObjectIndexPair _hx_tmp1 =  ::src::compiler::commands::value::ObjectIndexPair_obj::__alloc( HX_CTX ,scope,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
HXDLIN(  27)		return  ::src::compiler::commands::value::ObjectArrayAssignmentCommand_obj::__alloc( HX_CTX ,scope,_hx_tmp1,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectArrayAssignmentCommand_obj,fromBytecode,return )


hx::ObjectPtr< ObjectArrayAssignmentCommand_obj > ObjectArrayAssignmentCommand_obj::__new( ::src::compiler::Scope scope, ::src::compiler::commands::value::ObjectIndexPair objectIndexPair, ::src::compiler::commands::value::ValueCommand value) {
	hx::ObjectPtr< ObjectArrayAssignmentCommand_obj > __this = new ObjectArrayAssignmentCommand_obj();
	__this->__construct(scope,objectIndexPair,value);
	return __this;
}

hx::ObjectPtr< ObjectArrayAssignmentCommand_obj > ObjectArrayAssignmentCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::commands::value::ObjectIndexPair objectIndexPair, ::src::compiler::commands::value::ValueCommand value) {
	ObjectArrayAssignmentCommand_obj *__this = (ObjectArrayAssignmentCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectArrayAssignmentCommand_obj), true, "src.compiler.commands.value.ObjectArrayAssignmentCommand"));
	*(void **)__this = ObjectArrayAssignmentCommand_obj::_hx_vtable;
	__this->__construct(scope,objectIndexPair,value);
	return __this;
}

ObjectArrayAssignmentCommand_obj::ObjectArrayAssignmentCommand_obj()
{
}

void ObjectArrayAssignmentCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectArrayAssignmentCommand);
	HX_MARK_MEMBER_NAME(objectIndexPair,"objectIndexPair");
	HX_MARK_MEMBER_NAME(value,"value");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectArrayAssignmentCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectIndexPair,"objectIndexPair");
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ObjectArrayAssignmentCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"objectIndexPair") ) { return hx::Val( objectIndexPair ); }
		if (HX_FIELD_EQ(inName,"getFriendlyName") ) { return hx::Val( getFriendlyName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ObjectArrayAssignmentCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ObjectArrayAssignmentCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"objectIndexPair") ) { objectIndexPair=inValue.Cast<  ::src::compiler::commands::value::ObjectIndexPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectArrayAssignmentCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objectIndexPair","\x8d","\xa5","\xa2","\x91"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectArrayAssignmentCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::ObjectIndexPair*/ ,(int)offsetof(ObjectArrayAssignmentCommand_obj,objectIndexPair),HX_HCSTRING("objectIndexPair","\x8d","\xa5","\xa2","\x91")},
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(ObjectArrayAssignmentCommand_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectArrayAssignmentCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectArrayAssignmentCommand_obj_sMemberFields[] = {
	HX_HCSTRING("objectIndexPair","\x8d","\xa5","\xa2","\x91"),
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

static void ObjectArrayAssignmentCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectArrayAssignmentCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectArrayAssignmentCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectArrayAssignmentCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectArrayAssignmentCommand_obj::__mClass;

static ::String ObjectArrayAssignmentCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void ObjectArrayAssignmentCommand_obj::__register()
{
	hx::Object *dummy = new ObjectArrayAssignmentCommand_obj;
	ObjectArrayAssignmentCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.ObjectArrayAssignmentCommand","\x62","\xcd","\xb6","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ObjectArrayAssignmentCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectArrayAssignmentCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ObjectArrayAssignmentCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectArrayAssignmentCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectArrayAssignmentCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectArrayAssignmentCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectArrayAssignmentCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectArrayAssignmentCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value
