// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_CommaToken
#include <src/ast/base/CommaToken.h>
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
#ifndef INCLUDED_src_compiler_commands_value_TupleValueCommand
#include <src/compiler/commands/value/TupleValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_TupleObject
#include <src/compiler/object/builtin/TupleObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3d5f445230c13518_32_new,"src.compiler.commands.value.TupleValueCommand","new",0x9f185096,"src.compiler.commands.value.TupleValueCommand.new","src/compiler/commands/value/TupleValueCommand.hx",32,0x79fbab7c)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5f445230c13518_38_walk,"src.compiler.commands.value.TupleValueCommand","walk",0x9c1e0c13,"src.compiler.commands.value.TupleValueCommand.walk","src/compiler/commands/value/TupleValueCommand.hx",38,0x79fbab7c)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5f445230c13518_45_run,"src.compiler.commands.value.TupleValueCommand","run",0x9f1b6781,"src.compiler.commands.value.TupleValueCommand.run","src/compiler/commands/value/TupleValueCommand.hx",45,0x79fbab7c)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5f445230c13518_56_getName,"src.compiler.commands.value.TupleValueCommand","getName",0xce29f537,"src.compiler.commands.value.TupleValueCommand.getName","src/compiler/commands/value/TupleValueCommand.hx",56,0x79fbab7c)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5f445230c13518_61_getBytecode,"src.compiler.commands.value.TupleValueCommand","getBytecode",0xb3bc5d21,"src.compiler.commands.value.TupleValueCommand.getBytecode","src/compiler/commands/value/TupleValueCommand.hx",61,0x79fbab7c)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5f445230c13518_66_reconstruct,"src.compiler.commands.value.TupleValueCommand","reconstruct",0xc64b0c3a,"src.compiler.commands.value.TupleValueCommand.reconstruct","src/compiler/commands/value/TupleValueCommand.hx",66,0x79fbab7c)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5f445230c13518_20_fromTokens,"src.compiler.commands.value.TupleValueCommand","fromTokens",0xa09aaeee,"src.compiler.commands.value.TupleValueCommand.fromTokens","src/compiler/commands/value/TupleValueCommand.hx",20,0x79fbab7c)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5f445230c13518_24_fromBytecode,"src.compiler.commands.value.TupleValueCommand","fromBytecode",0x2c0f98c9,"src.compiler.commands.value.TupleValueCommand.fromBytecode","src/compiler/commands/value/TupleValueCommand.hx",24,0x79fbab7c)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void TupleValueCommand_obj::__construct( ::src::compiler::Scope scope,::Array< ::Dynamic> values){
            	HX_STACKFRAME(&_hx_pos_3d5f445230c13518_32_new)
HXLINE(  33)		super::__construct(scope);
HXLINE(  34)		this->values = values;
            	}

Dynamic TupleValueCommand_obj::__CreateEmpty() { return new TupleValueCommand_obj; }

void *TupleValueCommand_obj::_hx_vtable = 0;

Dynamic TupleValueCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TupleValueCommand_obj > _hx_result = new TupleValueCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TupleValueCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		if (inClassId<=(int)0x1020cfc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1020cfc0;
		} else {
			return inClassId==(int)0x20538180;
		}
	} else {
		return inClassId==(int)0x2bb3965c;
	}
}

::Array< ::Dynamic> TupleValueCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_3d5f445230c13518_38_walk)
HXLINE(  39)		::Array< ::Dynamic> cmds = ::Array_obj< ::Dynamic>::__new();
HXLINE(  40)		{
HXLINE(  40)			int _g = (int)0;
HXDLIN(  40)			::Array< ::Dynamic> _g1 = this->values;
HXDLIN(  40)			while((_g < _g1->length)){
HXLINE(  40)				 ::src::compiler::commands::value::ValueCommand x = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::ValueCommand >();
HXDLIN(  40)				_g = (_g + (int)1);
HXDLIN(  40)				cmds->push(x);
            			}
            		}
HXLINE(  41)		return cmds;
            	}


 ::src::compiler::object::Object TupleValueCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_3d5f445230c13518_45_run)
HXLINE(  46)		 ::src::compiler::object::builtin::TupleObject obj = hx::TCast<  ::src::compiler::object::builtin::TupleObject >::cast(this->scope->getType(HX_("TupleType",c2,3e,8e,1a),null())->createObject(null()));
HXLINE(  47)		::Array< ::Dynamic> arr = obj->getArray();
HXLINE(  48)		{
HXLINE(  48)			int _g = (int)0;
HXDLIN(  48)			::Array< ::Dynamic> _g1 = this->values;
HXDLIN(  48)			while((_g < _g1->length)){
HXLINE(  48)				 ::src::compiler::commands::value::ValueCommand cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::ValueCommand >();
HXDLIN(  48)				_g = (_g + (int)1);
HXLINE(  49)				arr->push(cmd->run());
            			}
            		}
HXLINE(  51)		return obj;
            	}


::String TupleValueCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_3d5f445230c13518_56_getName)
HXDLIN(  56)		return HX_("TupleValueCommand",e2,ed,24,27);
            	}


 ::src::compiler::bytecode::Bytecode TupleValueCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_3d5f445230c13518_61_getBytecode)
HXDLIN(  61)		::Array< ::Dynamic> _hx_tmp = this->values;
HXDLIN(  61)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> TupleValueCommand_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_3d5f445230c13518_66_reconstruct)
HXDLIN(  66)		 ::src::ast::base::CommaToken _hx_tmp =  ::src::ast::base::CommaToken_obj::__alloc( HX_CTX ,HX_(",",2c,00,00,00));
HXDLIN(  66)		return _hx_tmp->join(::src::compiler::commands::Command_obj::reconstructCommands(this->values),null());
            	}


 ::src::compiler::commands::value::TupleValueCommand TupleValueCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_3d5f445230c13518_20_fromTokens)
HXDLIN(  20)		return  ::src::compiler::commands::value::TupleValueCommand_obj::__alloc( HX_CTX ,scope,::src::compiler::commands::value::ValueCommand_obj::splitTokens(scope,tokens,HX_("CommaToken",04,01,3f,49),true,null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TupleValueCommand_obj,fromTokens,return )

 ::src::compiler::commands::value::TupleValueCommand TupleValueCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_3d5f445230c13518_24_fromBytecode)
HXLINE(  25)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE(  26)		while((arr->length > (int)0)){
HXLINE(  26)			result->push(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            		}
HXLINE(  27)		return  ::src::compiler::commands::value::TupleValueCommand_obj::__alloc( HX_CTX ,scope,result);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TupleValueCommand_obj,fromBytecode,return )


hx::ObjectPtr< TupleValueCommand_obj > TupleValueCommand_obj::__new( ::src::compiler::Scope scope,::Array< ::Dynamic> values) {
	hx::ObjectPtr< TupleValueCommand_obj > __this = new TupleValueCommand_obj();
	__this->__construct(scope,values);
	return __this;
}

hx::ObjectPtr< TupleValueCommand_obj > TupleValueCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::Array< ::Dynamic> values) {
	TupleValueCommand_obj *__this = (TupleValueCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TupleValueCommand_obj), true, "src.compiler.commands.value.TupleValueCommand"));
	*(void **)__this = TupleValueCommand_obj::_hx_vtable;
	__this->__construct(scope,values);
	return __this;
}

TupleValueCommand_obj::TupleValueCommand_obj()
{
}

void TupleValueCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TupleValueCommand);
	HX_MARK_MEMBER_NAME(values,"values");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TupleValueCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TupleValueCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values ); }
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

bool TupleValueCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val TupleValueCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TupleValueCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TupleValueCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TupleValueCommand_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TupleValueCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String TupleValueCommand_obj_sMemberFields[] = {
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void TupleValueCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TupleValueCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TupleValueCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TupleValueCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class TupleValueCommand_obj::__mClass;

static ::String TupleValueCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void TupleValueCommand_obj::__register()
{
	hx::Object *dummy = new TupleValueCommand_obj;
	TupleValueCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.TupleValueCommand","\xa4","\x0d","\x9b","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TupleValueCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TupleValueCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TupleValueCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TupleValueCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TupleValueCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TupleValueCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TupleValueCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TupleValueCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value
