// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_maths_HexToken
#include <src/ast/maths/HexToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9addce771fe971fc_7_new,"src.ast.maths.HexToken","new",0x7f28d8c9,"src.ast.maths.HexToken.new","src/ast/maths/HexToken.hx",7,0x97ddb9a4)
HX_LOCAL_STACK_FRAME(_hx_pos_9addce771fe971fc_24_getName,"src.ast.maths.HexToken","getName",0xd28e12ea,"src.ast.maths.HexToken.getName","src/ast/maths/HexToken.hx",24,0x97ddb9a4)
HX_LOCAL_STACK_FRAME(_hx_pos_9addce771fe971fc_14_match,"src.ast.maths.HexToken","match",0xa799fdee,"src.ast.maths.HexToken.match","src/ast/maths/HexToken.hx",14,0x97ddb9a4)
HX_LOCAL_STACK_FRAME(_hx_pos_9addce771fe971fc_19_partialMatch,"src.ast.maths.HexToken","partialMatch",0x7b97307b,"src.ast.maths.HexToken.partialMatch","src/ast/maths/HexToken.hx",19,0x97ddb9a4)
HX_LOCAL_STACK_FRAME(_hx_pos_9addce771fe971fc_10_boot,"src.ast.maths.HexToken","boot",0xbcadd7a9,"src.ast.maths.HexToken.boot","src/ast/maths/HexToken.hx",10,0x97ddb9a4)
namespace src{
namespace ast{
namespace maths{

void HexToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_9addce771fe971fc_7_new)
HXDLIN(   7)		super::__construct(content);
            	}

Dynamic HexToken_obj::__CreateEmpty() { return new HexToken_obj; }

void *HexToken_obj::_hx_vtable = 0;

Dynamic HexToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HexToken_obj > _hx_result = new HexToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HexToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x259ef6cb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x259ef6cb;
	} else {
		return inClassId==(int)0x7cd9a4bb;
	}
}

::String HexToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_9addce771fe971fc_24_getName)
HXDLIN(  24)		return HX_("HexToken",3e,32,54,20);
            	}


 ::EReg HexToken_obj::regex;

bool HexToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_9addce771fe971fc_14_match)
HXDLIN(  14)		return ::src::ast::maths::HexToken_obj::regex->match(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HexToken_obj,match,return )

bool HexToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_9addce771fe971fc_19_partialMatch)
HXDLIN(  19)		bool _hx_tmp;
HXDLIN(  19)		if ((s != HX_("0",30,00,00,00))) {
HXDLIN(  19)			_hx_tmp = (s == HX_("0x",48,2a,00,00));
            		}
            		else {
HXDLIN(  19)			_hx_tmp = true;
            		}
HXDLIN(  19)		if (!(_hx_tmp)) {
HXDLIN(  19)			return ::src::ast::maths::HexToken_obj::match(s);
            		}
            		else {
HXDLIN(  19)			return true;
            		}
HXDLIN(  19)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HexToken_obj,partialMatch,return )


hx::ObjectPtr< HexToken_obj > HexToken_obj::__new(::String content) {
	hx::ObjectPtr< HexToken_obj > __this = new HexToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< HexToken_obj > HexToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	HexToken_obj *__this = (HexToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HexToken_obj), true, "src.ast.maths.HexToken"));
	*(void **)__this = HexToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

HexToken_obj::HexToken_obj()
{
}

hx::Val HexToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HexToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

bool HexToken_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"regex") ) { regex=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HexToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo HexToken_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &HexToken_obj::regex,HX_HCSTRING("regex","\xc7","\x2e","\xbf","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String HexToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void HexToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HexToken_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HexToken_obj::regex,"regex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HexToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HexToken_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HexToken_obj::regex,"regex");
};

#endif

hx::Class HexToken_obj::__mClass;

static ::String HexToken_obj_sStaticFields[] = {
	HX_HCSTRING("regex","\xc7","\x2e","\xbf","\xe6"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void HexToken_obj::__register()
{
	hx::Object *dummy = new HexToken_obj;
	HexToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.maths.HexToken","\x57","\xc0","\x30","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HexToken_obj::__GetStatic;
	__mClass->mSetStaticField = &HexToken_obj::__SetStatic;
	__mClass->mMarkFunc = HexToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HexToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HexToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HexToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HexToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HexToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HexToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HexToken_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_9addce771fe971fc_10_boot)
HXDLIN(  10)		regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("^0x([0-9]+)$",6c,b4,13,95),HX_("",00,00,00,00));
            	}
}

} // end namespace src
} // end namespace ast
} // end namespace maths