// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_script_AssignmentToken
#include <src/ast/script/AssignmentToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20cd1b9ff1aa1a2c_8_new,"src.ast.script.AssignmentToken","new",0xf24bb951,"src.ast.script.AssignmentToken.new","src/ast/script/AssignmentToken.hx",8,0xbad856be)
HX_LOCAL_STACK_FRAME(_hx_pos_20cd1b9ff1aa1a2c_23_getName,"src.ast.script.AssignmentToken","getName",0x8f1fd772,"src.ast.script.AssignmentToken.getName","src/ast/script/AssignmentToken.hx",23,0xbad856be)
HX_LOCAL_STACK_FRAME(_hx_pos_20cd1b9ff1aa1a2c_13_match,"src.ast.script.AssignmentToken","match",0x519c1076,"src.ast.script.AssignmentToken.match","src/ast/script/AssignmentToken.hx",13,0xbad856be)
HX_LOCAL_STACK_FRAME(_hx_pos_20cd1b9ff1aa1a2c_18_partialMatch,"src.ast.script.AssignmentToken","partialMatch",0xe4a7fef3,"src.ast.script.AssignmentToken.partialMatch","src/ast/script/AssignmentToken.hx",18,0xbad856be)
namespace src{
namespace ast{
namespace script{

void AssignmentToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_20cd1b9ff1aa1a2c_8_new)
HXDLIN(   8)		super::__construct(content);
            	}

Dynamic AssignmentToken_obj::__CreateEmpty() { return new AssignmentToken_obj; }

void *AssignmentToken_obj::_hx_vtable = 0;

Dynamic AssignmentToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssignmentToken_obj > _hx_result = new AssignmentToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AssignmentToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08d19df3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08d19df3;
	} else {
		return inClassId==(int)0x7cd9a4bb;
	}
}

::String AssignmentToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_20cd1b9ff1aa1a2c_23_getName)
HXDLIN(  23)		return HX_("AssignmentToken",4c,94,e1,56);
            	}


bool AssignmentToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_20cd1b9ff1aa1a2c_13_match)
HXDLIN(  13)		return (s == HX_("=",3d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssignmentToken_obj,match,return )

bool AssignmentToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_20cd1b9ff1aa1a2c_18_partialMatch)
HXDLIN(  18)		return ::src::ast::script::AssignmentToken_obj::match(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssignmentToken_obj,partialMatch,return )


hx::ObjectPtr< AssignmentToken_obj > AssignmentToken_obj::__new(::String content) {
	hx::ObjectPtr< AssignmentToken_obj > __this = new AssignmentToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< AssignmentToken_obj > AssignmentToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	AssignmentToken_obj *__this = (AssignmentToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssignmentToken_obj), true, "src.ast.script.AssignmentToken"));
	*(void **)__this = AssignmentToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

AssignmentToken_obj::AssignmentToken_obj()
{
}

hx::Val AssignmentToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssignmentToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { outValue = match_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"partialMatch") ) { outValue = partialMatch_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssignmentToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AssignmentToken_obj_sStaticStorageInfo = 0;
#endif

static ::String AssignmentToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void AssignmentToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssignmentToken_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssignmentToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssignmentToken_obj::__mClass,"__mClass");
};

#endif

hx::Class AssignmentToken_obj::__mClass;

static ::String AssignmentToken_obj_sStaticFields[] = {
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void AssignmentToken_obj::__register()
{
	hx::Object *dummy = new AssignmentToken_obj;
	AssignmentToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.script.AssignmentToken","\xdf","\xbc","\x26","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssignmentToken_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssignmentToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AssignmentToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssignmentToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssignmentToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssignmentToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssignmentToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssignmentToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace ast
} // end namespace script