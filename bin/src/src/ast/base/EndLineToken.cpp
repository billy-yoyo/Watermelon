// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_EndLineToken
#include <src/ast/base/EndLineToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45153fe642fdb9c4_8_new,"src.ast.base.EndLineToken","new",0x34bd69e3,"src.ast.base.EndLineToken.new","src/ast/base/EndLineToken.hx",8,0xbc186d8e)
HX_LOCAL_STACK_FRAME(_hx_pos_45153fe642fdb9c4_23_getName,"src.ast.base.EndLineToken","getName",0xf4aa3904,"src.ast.base.EndLineToken.getName","src/ast/base/EndLineToken.hx",23,0xbc186d8e)
HX_LOCAL_STACK_FRAME(_hx_pos_45153fe642fdb9c4_13_match,"src.ast.base.EndLineToken","match",0x58488988,"src.ast.base.EndLineToken.match","src/ast/base/EndLineToken.hx",13,0xbc186d8e)
HX_LOCAL_STACK_FRAME(_hx_pos_45153fe642fdb9c4_18_partialMatch,"src.ast.base.EndLineToken","partialMatch",0x28f8ac21,"src.ast.base.EndLineToken.partialMatch","src/ast/base/EndLineToken.hx",18,0xbc186d8e)
namespace src{
namespace ast{
namespace base{

void EndLineToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_45153fe642fdb9c4_8_new)
HXDLIN(   8)		super::__construct(content);
            	}

Dynamic EndLineToken_obj::__CreateEmpty() { return new EndLineToken_obj; }

void *EndLineToken_obj::_hx_vtable = 0;

Dynamic EndLineToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EndLineToken_obj > _hx_result = new EndLineToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EndLineToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x73d0fa99) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x73d0fa99;
	} else {
		return inClassId==(int)0x7cd9a4bb;
	}
}

::String EndLineToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_45153fe642fdb9c4_23_getName)
HXDLIN(  23)		return HX_("EndLineToken",2a,db,3a,32);
            	}


bool EndLineToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_45153fe642fdb9c4_13_match)
HXDLIN(  13)		return (s == HX_(";",3b,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EndLineToken_obj,match,return )

bool EndLineToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_45153fe642fdb9c4_18_partialMatch)
HXDLIN(  18)		return ::src::ast::base::EndLineToken_obj::match(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EndLineToken_obj,partialMatch,return )


hx::ObjectPtr< EndLineToken_obj > EndLineToken_obj::__new(::String content) {
	hx::ObjectPtr< EndLineToken_obj > __this = new EndLineToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< EndLineToken_obj > EndLineToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	EndLineToken_obj *__this = (EndLineToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EndLineToken_obj), true, "src.ast.base.EndLineToken"));
	*(void **)__this = EndLineToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

EndLineToken_obj::EndLineToken_obj()
{
}

hx::Val EndLineToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool EndLineToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *EndLineToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *EndLineToken_obj_sStaticStorageInfo = 0;
#endif

static ::String EndLineToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void EndLineToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EndLineToken_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EndLineToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EndLineToken_obj::__mClass,"__mClass");
};

#endif

hx::Class EndLineToken_obj::__mClass;

static ::String EndLineToken_obj_sStaticFields[] = {
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void EndLineToken_obj::__register()
{
	hx::Object *dummy = new EndLineToken_obj;
	EndLineToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.base.EndLineToken","\x71","\x3c","\xec","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EndLineToken_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EndLineToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EndLineToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EndLineToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EndLineToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EndLineToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EndLineToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EndLineToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace ast
} // end namespace base