// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_ListToken
#include <src/ast/base/ListToken.h>
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
#ifndef INCLUDED_src_compiler_commands_value_ObjectIndexPair
#include <src/compiler/commands/value/ObjectIndexPair.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_36_new,"src.compiler.commands.value.ObjectIndexPair","new",0xc3011d21,"src.compiler.commands.value.ObjectIndexPair.new","src/compiler/commands/value/ObjectIndexPair.hx",36,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_44_copy,"src.compiler.commands.value.ObjectIndexPair","copy",0xd6ba97d4,"src.compiler.commands.value.ObjectIndexPair.copy","src/compiler/commands/value/ObjectIndexPair.hx",44,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_48_setScope,"src.compiler.commands.value.ObjectIndexPair","setScope",0x3b8db231,"src.compiler.commands.value.ObjectIndexPair.setScope","src/compiler/commands/value/ObjectIndexPair.hx",48,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_56_walk,"src.compiler.commands.value.ObjectIndexPair","walk",0xe3e83928,"src.compiler.commands.value.ObjectIndexPair.walk","src/compiler/commands/value/ObjectIndexPair.hx",56,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_61_getName,"src.compiler.commands.value.ObjectIndexPair","getName",0xcd1b6342,"src.compiler.commands.value.ObjectIndexPair.getName","src/compiler/commands/value/ObjectIndexPair.hx",61,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_66_getFriendlyName,"src.compiler.commands.value.ObjectIndexPair","getFriendlyName",0xfd827c4d,"src.compiler.commands.value.ObjectIndexPair.getFriendlyName","src/compiler/commands/value/ObjectIndexPair.hx",66,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_71_getBytecode,"src.compiler.commands.value.ObjectIndexPair","getBytecode",0xe8652cac,"src.compiler.commands.value.ObjectIndexPair.getBytecode","src/compiler/commands/value/ObjectIndexPair.hx",71,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_76_reconstruct,"src.compiler.commands.value.ObjectIndexPair","reconstruct",0xfaf3dbc5,"src.compiler.commands.value.ObjectIndexPair.reconstruct","src/compiler/commands/value/ObjectIndexPair.hx",76,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_19_fromTokens,"src.compiler.commands.value.ObjectIndexPair","fromTokens",0x8b0759c3,"src.compiler.commands.value.ObjectIndexPair.fromTokens","src/compiler/commands/value/ObjectIndexPair.hx",19,0x5127dcd1)
HX_LOCAL_STACK_FRAME(_hx_pos_c3d5aad1c1d714c0_30_fromBytecode,"src.compiler.commands.value.ObjectIndexPair","fromBytecode",0x0b1c62de,"src.compiler.commands.value.ObjectIndexPair.fromBytecode","src/compiler/commands/value/ObjectIndexPair.hx",30,0x5127dcd1)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void ObjectIndexPair_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand variable, ::src::compiler::commands::value::ValueCommand index){
            	HX_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_36_new)
HXLINE(  37)		super::__construct(scope);
HXLINE(  38)		this->variable = variable;
HXLINE(  39)		this->index = index;
            	}

Dynamic ObjectIndexPair_obj::__CreateEmpty() { return new ObjectIndexPair_obj; }

void *ObjectIndexPair_obj::_hx_vtable = 0;

Dynamic ObjectIndexPair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectIndexPair_obj > _hx_result = new ObjectIndexPair_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ObjectIndexPair_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03c063d7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03c063d7;
	} else {
		return inClassId==(int)0x20538180;
	}
}

 ::src::compiler::commands::Command ObjectIndexPair_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_44_copy)
HXDLIN(  44)		 ::src::compiler::commands::value::ValueCommand _hx_tmp = hx::TCast<  ::src::compiler::commands::value::ValueCommand >::cast(this->variable->copy(scope));
HXDLIN(  44)		return  ::src::compiler::commands::value::ObjectIndexPair_obj::__alloc( HX_CTX ,scope,_hx_tmp,this->index->copy(scope));
            	}


void ObjectIndexPair_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_48_setScope)
HXLINE(  49)		this->super::setScope(scope);
HXLINE(  50)		this->variable->setScope(scope);
HXLINE(  51)		this->index->setScope(scope);
            	}


::Array< ::Dynamic> ObjectIndexPair_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_56_walk)
HXDLIN(  56)		return ::Array_obj< ::Dynamic>::__new(2)->init(0,this->variable)->init(1,this->index);
            	}


::String ObjectIndexPair_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_61_getName)
HXDLIN(  61)		return HX_("ObjectIndexPair",6d,ad,2e,f2);
            	}


::String ObjectIndexPair_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_66_getFriendlyName)
HXDLIN(  66)		return HX_("variable and index pair",f5,f7,15,fa);
            	}


 ::src::compiler::bytecode::Bytecode ObjectIndexPair_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_71_getBytecode)
HXDLIN(  71)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(2)->init(0,this->variable)->init(1,this->index);
HXDLIN(  71)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> ObjectIndexPair_obj::reconstruct(){
            	HX_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_76_reconstruct)
HXDLIN(  76)		::Array< ::Dynamic> _hx_tmp = this->variable->reconstruct();
HXDLIN(  76)		return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(2)->init(0,_hx_tmp)->init(1,::src::ast::base::ListToken_obj::fromRaw(this->index->reconstruct())));
            	}


 ::src::compiler::commands::value::ObjectIndexPair ObjectIndexPair_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_19_fromTokens)
HXDLIN(  19)		if ((tokens->length != (int)2)) {
HXDLIN(  19)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Invalid object indexing syntax",3b,54,c8,71)));
            		}
            		else {
HXLINE(  21)			if ((tokens->__get((int)1).StaticCast<  ::src::ast::Token >()->getName() != HX_("ListToken",9b,21,3f,cc))) {
HXLINE(  21)				HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Invalid object indexing syntax, array access must be in square brackets",ff,a6,79,57)));
            			}
HXLINE(  22)			 ::src::compiler::commands::value::ValueCommand variable = ::src::compiler::commands::value::ValueCommand_obj::fromToken(scope,tokens->__get((int)0).StaticCast<  ::src::ast::Token >());
HXLINE(  23)			 ::src::compiler::commands::value::ValueCommand index = ::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,( (::Array< ::Dynamic>)(tokens->__get((int)1).StaticCast<  ::src::ast::Token >()->getContent()) ));
HXLINE(  24)			return  ::src::compiler::commands::value::ObjectIndexPair_obj::__alloc( HX_CTX ,scope,variable,index);
            		}
HXLINE(  19)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectIndexPair_obj,fromTokens,return )

 ::src::compiler::commands::value::ObjectIndexPair ObjectIndexPair_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_c3d5aad1c1d714c0_30_fromBytecode)
HXDLIN(  30)		 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN(  30)		return  ::src::compiler::commands::value::ObjectIndexPair_obj::__alloc( HX_CTX ,scope,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectIndexPair_obj,fromBytecode,return )


hx::ObjectPtr< ObjectIndexPair_obj > ObjectIndexPair_obj::__new( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand variable, ::src::compiler::commands::value::ValueCommand index) {
	hx::ObjectPtr< ObjectIndexPair_obj > __this = new ObjectIndexPair_obj();
	__this->__construct(scope,variable,index);
	return __this;
}

hx::ObjectPtr< ObjectIndexPair_obj > ObjectIndexPair_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand variable, ::src::compiler::commands::value::ValueCommand index) {
	ObjectIndexPair_obj *__this = (ObjectIndexPair_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectIndexPair_obj), true, "src.compiler.commands.value.ObjectIndexPair"));
	*(void **)__this = ObjectIndexPair_obj::_hx_vtable;
	__this->__construct(scope,variable,index);
	return __this;
}

ObjectIndexPair_obj::ObjectIndexPair_obj()
{
}

void ObjectIndexPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectIndexPair);
	HX_MARK_MEMBER_NAME(variable,"variable");
	HX_MARK_MEMBER_NAME(index,"index");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectIndexPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variable,"variable");
	HX_VISIT_MEMBER_NAME(index,"index");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ObjectIndexPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"variable") ) { return hx::Val( variable ); }
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

bool ObjectIndexPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val ObjectIndexPair_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"variable") ) { variable=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectIndexPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectIndexPair_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(ObjectIndexPair_obj,variable),HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69")},
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(ObjectIndexPair_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectIndexPair_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectIndexPair_obj_sMemberFields[] = {
	HX_HCSTRING("variable","\x3c","\x12","\x0d","\x69"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("setScope","\x92","\xda","\x0d","\x87"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void ObjectIndexPair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectIndexPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectIndexPair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectIndexPair_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectIndexPair_obj::__mClass;

static ::String ObjectIndexPair_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void ObjectIndexPair_obj::__register()
{
	hx::Object *dummy = new ObjectIndexPair_obj;
	ObjectIndexPair_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.ObjectIndexPair","\xaf","\xf8","\xc9","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ObjectIndexPair_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectIndexPair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ObjectIndexPair_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectIndexPair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectIndexPair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectIndexPair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectIndexPair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectIndexPair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value
