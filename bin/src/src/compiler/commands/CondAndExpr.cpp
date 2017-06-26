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
#ifndef INCLUDED_src_compiler_commands_CondAndExpr
#include <src/compiler/commands/CondAndExpr.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_19525e40aaa36d10_160_new,"src.compiler.commands.CondAndExpr","new",0xa5827cbb,"src.compiler.commands.CondAndExpr.new","src/compiler/commands/IfCommand.hx",160,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_19525e40aaa36d10_167_walk,"src.compiler.commands.CondAndExpr","walk",0x329a804e,"src.compiler.commands.CondAndExpr.walk","src/compiler/commands/IfCommand.hx",167,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_19525e40aaa36d10_175_getName,"src.compiler.commands.CondAndExpr","getName",0x40ed97dc,"src.compiler.commands.CondAndExpr.getName","src/compiler/commands/IfCommand.hx",175,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_19525e40aaa36d10_180_getBytecode,"src.compiler.commands.CondAndExpr","getBytecode",0x2f16b646,"src.compiler.commands.CondAndExpr.getBytecode","src/compiler/commands/IfCommand.hx",180,0x08733bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_19525e40aaa36d10_154_fromBytecode,"src.compiler.commands.CondAndExpr","fromBytecode",0x9fc34004,"src.compiler.commands.CondAndExpr.fromBytecode","src/compiler/commands/IfCommand.hx",154,0x08733bf2)
namespace src{
namespace compiler{
namespace commands{

void CondAndExpr_obj::__construct( ::src::compiler::commands::value::ValueCommand cond,::Array< ::Dynamic> code){
            	HX_STACKFRAME(&_hx_pos_19525e40aaa36d10_160_new)
HXLINE( 161)		super::__construct(null());
HXLINE( 162)		this->cond = cond;
HXLINE( 163)		this->code = code;
            	}

Dynamic CondAndExpr_obj::__CreateEmpty() { return new CondAndExpr_obj; }

void *CondAndExpr_obj::_hx_vtable = 0;

Dynamic CondAndExpr_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CondAndExpr_obj > _hx_result = new CondAndExpr_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CondAndExpr_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x7565f89f;
	}
}

::Array< ::Dynamic> CondAndExpr_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_19525e40aaa36d10_167_walk)
HXLINE( 168)		::Array< ::Dynamic> cmds = this->code->copy();
HXLINE( 169)		cmds->push(this->cond);
HXLINE( 170)		return cmds;
            	}


::String CondAndExpr_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_19525e40aaa36d10_175_getName)
HXDLIN( 175)		return HX_("CondAndExpr",ca,c1,2d,62);
            	}


 ::src::compiler::bytecode::Bytecode CondAndExpr_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_19525e40aaa36d10_180_getBytecode)
HXDLIN( 180)		::cpp::VirtualArray _hx_tmp = ::cpp::VirtualArray_obj::__new(2)->init(0,this->cond)->init(1,this->code);
HXDLIN( 180)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(_hx_tmp,this->getCodeID());
            	}


 ::src::compiler::commands::CondAndExpr CondAndExpr_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_19525e40aaa36d10_154_fromBytecode)
HXDLIN( 154)		 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN( 154)		return  ::src::compiler::commands::CondAndExpr_obj::__alloc( HX_CTX ,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CondAndExpr_obj,fromBytecode,return )


hx::ObjectPtr< CondAndExpr_obj > CondAndExpr_obj::__new( ::src::compiler::commands::value::ValueCommand cond,::Array< ::Dynamic> code) {
	hx::ObjectPtr< CondAndExpr_obj > __this = new CondAndExpr_obj();
	__this->__construct(cond,code);
	return __this;
}

hx::ObjectPtr< CondAndExpr_obj > CondAndExpr_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::commands::value::ValueCommand cond,::Array< ::Dynamic> code) {
	CondAndExpr_obj *__this = (CondAndExpr_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CondAndExpr_obj), true, "src.compiler.commands.CondAndExpr"));
	*(void **)__this = CondAndExpr_obj::_hx_vtable;
	__this->__construct(cond,code);
	return __this;
}

CondAndExpr_obj::CondAndExpr_obj()
{
}

void CondAndExpr_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CondAndExpr);
	HX_MARK_MEMBER_NAME(cond,"cond");
	HX_MARK_MEMBER_NAME(code,"code");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CondAndExpr_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cond,"cond");
	HX_VISIT_MEMBER_NAME(code,"code");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CondAndExpr_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cond") ) { return hx::Val( cond ); }
		if (HX_FIELD_EQ(inName,"code") ) { return hx::Val( code ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CondAndExpr_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
	}
	return false;
}

hx::Val CondAndExpr_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cond") ) { cond=inValue.Cast<  ::src::compiler::commands::value::ValueCommand >(); return inValue; }
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CondAndExpr_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cond","\xe2","\xb9","\xc4","\x41"));
	outFields->push(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CondAndExpr_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::commands::value::ValueCommand*/ ,(int)offsetof(CondAndExpr_obj,cond),HX_HCSTRING("cond","\xe2","\xb9","\xc4","\x41")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CondAndExpr_obj,code),HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CondAndExpr_obj_sStaticStorageInfo = 0;
#endif

static ::String CondAndExpr_obj_sMemberFields[] = {
	HX_HCSTRING("cond","\xe2","\xb9","\xc4","\x41"),
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	::String(null()) };

static void CondAndExpr_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CondAndExpr_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CondAndExpr_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CondAndExpr_obj::__mClass,"__mClass");
};

#endif

hx::Class CondAndExpr_obj::__mClass;

static ::String CondAndExpr_obj_sStaticFields[] = {
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void CondAndExpr_obj::__register()
{
	hx::Object *dummy = new CondAndExpr_obj;
	CondAndExpr_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.CondAndExpr","\x49","\x03","\x49","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CondAndExpr_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CondAndExpr_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CondAndExpr_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CondAndExpr_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CondAndExpr_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CondAndExpr_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CondAndExpr_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CondAndExpr_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands