// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_Bytecode
#include <src/compiler/bytecode/Bytecode.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_Argument
#include <src/compiler/commands/value/Argument.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfa0739dae4c82ff_198_new,"src.compiler.commands.value.Argument","new",0xb8ded58d,"src.compiler.commands.value.Argument.new","src/compiler/commands/value/FunctionCallValueCommand.hx",198,0x6f3c406e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa0739dae4c82ff_206_walk,"src.compiler.commands.value.Argument","walk",0x100bdf3c,"src.compiler.commands.value.Argument.walk","src/compiler/commands/value/FunctionCallValueCommand.hx",206,0x6f3c406e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa0739dae4c82ff_211_getBytecode,"src.compiler.commands.value.Argument","getBytecode",0x04933118,"src.compiler.commands.value.Argument.getBytecode","src/compiler/commands/value/FunctionCallValueCommand.hx",211,0x6f3c406e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa0739dae4c82ff_216_getName,"src.compiler.commands.value.Argument","getName",0x5f7bc1ae,"src.compiler.commands.value.Argument.getName","src/compiler/commands/value/FunctionCallValueCommand.hx",216,0x6f3c406e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa0739dae4c82ff_192_fromBytecode,"src.compiler.commands.value.Argument","fromBytecode",0x97323cf2,"src.compiler.commands.value.Argument.fromBytecode","src/compiler/commands/value/FunctionCallValueCommand.hx",192,0x6f3c406e)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void Argument_obj::__construct( ::src::compiler::commands::value::ValueCommand value,bool collapsed){
            	HX_STACKFRAME(&_hx_pos_bfa0739dae4c82ff_198_new)
HXLINE( 199)		super::__construct(null());
HXLINE( 200)		this->value = value;
HXLINE( 201)		this->collapsed = collapsed;
            	}

Dynamic Argument_obj::__CreateEmpty() { return new Argument_obj; }

void *Argument_obj::_hx_vtable = 0;

Dynamic Argument_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Argument_obj > _hx_result = new Argument_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Argument_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x52eb7963;
	}
}

::Array< ::Dynamic> Argument_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_bfa0739dae4c82ff_206_walk)
HXDLIN( 206)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,this->value);
            	}


 ::src::compiler::bytecode::Bytecode Argument_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_bfa0739dae4c82ff_211_getBytecode)
HXDLIN( 211)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(2)->init(0,this->value)->init(1,this->collapsed);
HXDLIN( 211)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


::String Argument_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_bfa0739dae4c82ff_216_getName)
HXDLIN( 216)		return HX_("Argument",9d,2a,5b,df);
            	}


 ::src::compiler::commands::value::Argument Argument_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_bfa0739dae4c82ff_192_fromBytecode)
HXDLIN( 192)		 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN( 192)		return  ::src::compiler::commands::value::Argument_obj::__alloc( HX_CTX ,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Argument_obj,fromBytecode,return )


hx::ObjectPtr< Argument_obj > Argument_obj::__new( ::src::compiler::commands::value::ValueCommand value,bool collapsed) {
	hx::ObjectPtr< Argument_obj > __this = new Argument_obj();
	__this->__construct(value,collapsed);
	return __this;
}

hx::ObjectPtr< Argument_obj > Argument_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::commands::value::ValueCommand value,bool collapsed) {
	Argument_obj *__this = (Argument_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Argument_obj), true, "src.compiler.commands.value.Argument"));
	*(void **)__this = Argument_obj::_hx_vtable;
	__this->__construct(value,collapsed);
	return __this;
}

Argument_obj::Argument_obj()
{
}

void Argument_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Argument);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(collapsed,"collapsed");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Argument_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(collapsed,"collapsed");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Argument_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collapsed") ) { return hx::Val( collapsed ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Argument_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
	}
	return false;
}

hx::Val Argument_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collapsed") ) { collapsed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Argument_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("collapsed","\x57","\xee","\x11","\x3e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Argument_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(Argument_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(Argument_obj,collapsed),HX_HCSTRING("collapsed","\x57","\xee","\x11","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Argument_obj_sStaticStorageInfo = 0;
#endif

static ::String Argument_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("collapsed","\x57","\xee","\x11","\x3e"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void Argument_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Argument_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Argument_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Argument_obj::__mClass,"__mClass");
};

#endif

hx::Class Argument_obj::__mClass;

static ::String Argument_obj_sStaticFields[] = {
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void Argument_obj::__register()
{
	hx::Object *dummy = new Argument_obj;
	Argument_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.Argument","\x1b","\x0b","\xf0","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Argument_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Argument_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Argument_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Argument_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Argument_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Argument_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Argument_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Argument_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value
