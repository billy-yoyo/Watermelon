// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_WhitespaceToken
#include <src/ast/base/WhitespaceToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f695c13fd3d16501_8_new,"src.ast.base.WhitespaceToken","new",0x00393ca7,"src.ast.base.WhitespaceToken.new","src/ast/base/WhitespaceToken.hx",8,0x6d5824a8)
HX_LOCAL_STACK_FRAME(_hx_pos_f695c13fd3d16501_25_getName,"src.ast.base.WhitespaceToken","getName",0x9a00bdc8,"src.ast.base.WhitespaceToken.getName","src/ast/base/WhitespaceToken.hx",25,0x6d5824a8)
HX_LOCAL_STACK_FRAME(_hx_pos_f695c13fd3d16501_30_isDisposable,"src.ast.base.WhitespaceToken","isDisposable",0x4b15c903,"src.ast.base.WhitespaceToken.isDisposable","src/ast/base/WhitespaceToken.hx",30,0x6d5824a8)
HX_LOCAL_STACK_FRAME(_hx_pos_f695c13fd3d16501_15_match,"src.ast.base.WhitespaceToken","match",0xd871954c,"src.ast.base.WhitespaceToken.match","src/ast/base/WhitespaceToken.hx",15,0x6d5824a8)
HX_LOCAL_STACK_FRAME(_hx_pos_f695c13fd3d16501_20_partialMatch,"src.ast.base.WhitespaceToken","partialMatch",0xe57660dd,"src.ast.base.WhitespaceToken.partialMatch","src/ast/base/WhitespaceToken.hx",20,0x6d5824a8)
HX_LOCAL_STACK_FRAME(_hx_pos_f695c13fd3d16501_11_boot,"src.ast.base.WhitespaceToken","boot",0x29f4d60b,"src.ast.base.WhitespaceToken.boot","src/ast/base/WhitespaceToken.hx",11,0x6d5824a8)
namespace src{
namespace ast{
namespace base{

void WhitespaceToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_f695c13fd3d16501_8_new)
HXDLIN(   8)		super::__construct(content);
            	}

Dynamic WhitespaceToken_obj::__CreateEmpty() { return new WhitespaceToken_obj; }

void *WhitespaceToken_obj::_hx_vtable = 0;

Dynamic WhitespaceToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WhitespaceToken_obj > _hx_result = new WhitespaceToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WhitespaceToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7cd9a4bb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7cd9a4bb;
	} else {
		return inClassId==(int)0x7f5f5995;
	}
}

::String WhitespaceToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_f695c13fd3d16501_25_getName)
HXDLIN(  25)		return HX_("WhitespaceToken",1c,f8,be,6b);
            	}


bool WhitespaceToken_obj::isDisposable(){
            	HX_STACKFRAME(&_hx_pos_f695c13fd3d16501_30_isDisposable)
HXDLIN(  30)		return true;
            	}


 ::EReg WhitespaceToken_obj::regex;

bool WhitespaceToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_f695c13fd3d16501_15_match)
HXDLIN(  15)		return ::src::ast::base::WhitespaceToken_obj::regex->match(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WhitespaceToken_obj,match,return )

bool WhitespaceToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_f695c13fd3d16501_20_partialMatch)
HXDLIN(  20)		return ::src::ast::base::WhitespaceToken_obj::match(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WhitespaceToken_obj,partialMatch,return )


hx::ObjectPtr< WhitespaceToken_obj > WhitespaceToken_obj::__new(::String content) {
	hx::ObjectPtr< WhitespaceToken_obj > __this = new WhitespaceToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< WhitespaceToken_obj > WhitespaceToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	WhitespaceToken_obj *__this = (WhitespaceToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WhitespaceToken_obj), true, "src.ast.base.WhitespaceToken"));
	*(void **)__this = WhitespaceToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

WhitespaceToken_obj::WhitespaceToken_obj()
{
}

hx::Val WhitespaceToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isDisposable") ) { return hx::Val( isDisposable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WhitespaceToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"regex") ) { outValue = ( regex ); return true; }
		if (HX_FIELD_EQ(inName,"match") ) { outValue = match_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"partialMatch") ) { outValue = partialMatch_dyn(); return true; }
	}
	return false;
}

bool WhitespaceToken_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"regex") ) { regex=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WhitespaceToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo WhitespaceToken_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &WhitespaceToken_obj::regex,HX_HCSTRING("regex","\xc7","\x2e","\xbf","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String WhitespaceToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("isDisposable","\x2a","\x76","\x61","\x30"),
	::String(null()) };

static void WhitespaceToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WhitespaceToken_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WhitespaceToken_obj::regex,"regex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WhitespaceToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WhitespaceToken_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WhitespaceToken_obj::regex,"regex");
};

#endif

hx::Class WhitespaceToken_obj::__mClass;

static ::String WhitespaceToken_obj_sStaticFields[] = {
	HX_HCSTRING("regex","\xc7","\x2e","\xbf","\xe6"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void WhitespaceToken_obj::__register()
{
	hx::Object *dummy = new WhitespaceToken_obj;
	WhitespaceToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.base.WhitespaceToken","\x35","\x5d","\x4e","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WhitespaceToken_obj::__GetStatic;
	__mClass->mSetStaticField = &WhitespaceToken_obj::__SetStatic;
	__mClass->mMarkFunc = WhitespaceToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WhitespaceToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WhitespaceToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WhitespaceToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WhitespaceToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WhitespaceToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WhitespaceToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WhitespaceToken_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f695c13fd3d16501_11_boot)
HXDLIN(  11)		regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\s$",0f,42,68,3e),HX_("",00,00,00,00));
            	}
}

} // end namespace src
} // end namespace ast
} // end namespace base
