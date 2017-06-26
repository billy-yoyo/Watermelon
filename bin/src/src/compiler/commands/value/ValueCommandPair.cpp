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
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommandPair
#include <src/compiler/commands/value/ValueCommandPair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3ff43457f236d2d_99_new,"src.compiler.commands.value.ValueCommandPair","new",0x32d323a4,"src.compiler.commands.value.ValueCommandPair.new","src/compiler/commands/value/MapValueCommand.hx",99,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ff43457f236d2d_107_walk,"src.compiler.commands.value.ValueCommandPair","walk",0x4bdbe545,"src.compiler.commands.value.ValueCommandPair.walk","src/compiler/commands/value/MapValueCommand.hx",107,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ff43457f236d2d_112_getName,"src.compiler.commands.value.ValueCommandPair","getName",0x62e66745,"src.compiler.commands.value.ValueCommandPair.getName","src/compiler/commands/value/MapValueCommand.hx",112,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ff43457f236d2d_117_getBytecode,"src.compiler.commands.value.ValueCommandPair","getBytecode",0x1435ee2f,"src.compiler.commands.value.ValueCommandPair.getBytecode","src/compiler/commands/value/MapValueCommand.hx",117,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ff43457f236d2d_123_reconstruct,"src.compiler.commands.value.ValueCommandPair","reconstruct",0x26c49d48,"src.compiler.commands.value.ValueCommandPair.reconstruct","src/compiler/commands/value/MapValueCommand.hx",123,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ff43457f236d2d_93_fromBytecode,"src.compiler.commands.value.ValueCommandPair","fromBytecode",0x35f4f3fb,"src.compiler.commands.value.ValueCommandPair.fromBytecode","src/compiler/commands/value/MapValueCommand.hx",93,0x37dd6368)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void ValueCommandPair_obj::__construct( ::src::compiler::commands::value::ValueCommand left, ::src::compiler::commands::value::ValueCommand right){
            	HX_STACKFRAME(&_hx_pos_f3ff43457f236d2d_99_new)
HXLINE( 100)		super::__construct(null());
HXLINE( 101)		this->left = left;
HXLINE( 102)		this->right = right;
            	}

Dynamic ValueCommandPair_obj::__CreateEmpty() { return new ValueCommandPair_obj; }

void *ValueCommandPair_obj::_hx_vtable = 0;

Dynamic ValueCommandPair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ValueCommandPair_obj > _hx_result = new ValueCommandPair_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ValueCommandPair_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x544eb7fa;
	}
}

::Array< ::Dynamic> ValueCommandPair_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_f3ff43457f236d2d_107_walk)
HXDLIN( 107)		return ::Array_obj< ::Dynamic>::__new(2)->init(0,this->left)->init(1,this->right);
            	}


::String ValueCommandPair_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_f3ff43457f236d2d_112_getName)
HXDLIN( 112)		return HX_("ValueCommandPair",34,33,09,1c);
            	}


 ::src::compiler::bytecode::Bytecode ValueCommandPair_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_f3ff43457f236d2d_117_getBytecode)
HXDLIN( 117)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(2)->init(0,this->left)->init(1,this->right);
HXDLIN( 117)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::Array< ::Dynamic> ValueCommandPair_obj::reconstruct(){
            	HX_GC_STACKFRAME(&_hx_pos_f3ff43457f236d2d_123_reconstruct)
HXDLIN( 123)		::Array< ::Dynamic> _hx_tmp = this->left->reconstruct();
HXDLIN( 123)		 ::src::ast::script::AssignmentToken _hx_tmp1 =  ::src::ast::script::AssignmentToken_obj::__alloc( HX_CTX ,HX_("=",3d,00,00,00));
HXDLIN( 123)		return ::src::ast::Token_obj::merge(::cpp::VirtualArray_obj::__new(3)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,this->right->reconstruct()));
            	}


 ::src::compiler::commands::value::ValueCommandPair ValueCommandPair_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_f3ff43457f236d2d_93_fromBytecode)
HXDLIN(  93)		 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN(  93)		return  ::src::compiler::commands::value::ValueCommandPair_obj::__alloc( HX_CTX ,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ValueCommandPair_obj,fromBytecode,return )


hx::ObjectPtr< ValueCommandPair_obj > ValueCommandPair_obj::__new( ::src::compiler::commands::value::ValueCommand left, ::src::compiler::commands::value::ValueCommand right) {
	hx::ObjectPtr< ValueCommandPair_obj > __this = new ValueCommandPair_obj();
	__this->__construct(left,right);
	return __this;
}

hx::ObjectPtr< ValueCommandPair_obj > ValueCommandPair_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::commands::value::ValueCommand left, ::src::compiler::commands::value::ValueCommand right) {
	ValueCommandPair_obj *__this = (ValueCommandPair_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ValueCommandPair_obj), true, "src.compiler.commands.value.ValueCommandPair"));
	*(void **)__this = ValueCommandPair_obj::_hx_vtable;
	__this->__construct(left,right);
	return __this;
}

ValueCommandPair_obj::ValueCommandPair_obj()
{
}

void ValueCommandPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValueCommandPair);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ValueCommandPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ValueCommandPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return hx::Val( left ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return hx::Val( right ); }
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

bool ValueCommandPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
	}
	return false;
}

hx::Val ValueCommandPair_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ValueCommandPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ValueCommandPair_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(ValueCommandPair_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(ValueCommandPair_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ValueCommandPair_obj_sStaticStorageInfo = 0;
#endif

static ::String ValueCommandPair_obj_sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void ValueCommandPair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValueCommandPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValueCommandPair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValueCommandPair_obj::__mClass,"__mClass");
};

#endif

hx::Class ValueCommandPair_obj::__mClass;

static ::String ValueCommandPair_obj_sStaticFields[] = {
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void ValueCommandPair_obj::__register()
{
	hx::Object *dummy = new ValueCommandPair_obj;
	ValueCommandPair_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.ValueCommandPair","\xb2","\xc1","\x4f","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValueCommandPair_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ValueCommandPair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ValueCommandPair_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ValueCommandPair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ValueCommandPair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValueCommandPair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValueCommandPair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValueCommandPair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value