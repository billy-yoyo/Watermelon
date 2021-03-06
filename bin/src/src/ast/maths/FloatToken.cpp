// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_maths_FloatToken
#include <src/ast/maths/FloatToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_921e36fe455472c1_9_new,"src.ast.maths.FloatToken","new",0x425c5628,"src.ast.maths.FloatToken.new","src/ast/maths/FloatToken.hx",9,0x29687e65)
HX_LOCAL_STACK_FRAME(_hx_pos_921e36fe455472c1_26_getName,"src.ast.maths.FloatToken","getName",0x74d52bc9,"src.ast.maths.FloatToken.getName","src/ast/maths/FloatToken.hx",26,0x29687e65)
HX_LOCAL_STACK_FRAME(_hx_pos_921e36fe455472c1_16_match,"src.ast.maths.FloatToken","match",0x3caed10d,"src.ast.maths.FloatToken.match","src/ast/maths/FloatToken.hx",16,0x29687e65)
HX_LOCAL_STACK_FRAME(_hx_pos_921e36fe455472c1_21_partialMatch,"src.ast.maths.FloatToken","partialMatch",0xf22e8f3c,"src.ast.maths.FloatToken.partialMatch","src/ast/maths/FloatToken.hx",21,0x29687e65)
HX_LOCAL_STACK_FRAME(_hx_pos_921e36fe455472c1_11_boot,"src.ast.maths.FloatToken","boot",0xc6880d6a,"src.ast.maths.FloatToken.boot","src/ast/maths/FloatToken.hx",11,0x29687e65)
HX_LOCAL_STACK_FRAME(_hx_pos_921e36fe455472c1_12_boot,"src.ast.maths.FloatToken","boot",0xc6880d6a,"src.ast.maths.FloatToken.boot","src/ast/maths/FloatToken.hx",12,0x29687e65)
namespace src{
namespace ast{
namespace maths{

void FloatToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_921e36fe455472c1_9_new)
HXDLIN(   9)		super::__construct(content);
            	}

Dynamic FloatToken_obj::__CreateEmpty() { return new FloatToken_obj; }

void *FloatToken_obj::_hx_vtable = 0;

Dynamic FloatToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FloatToken_obj > _hx_result = new FloatToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FloatToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a641daa) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a641daa;
	} else {
		return inClassId==(int)0x7cd9a4bb;
	}
}

::String FloatToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_921e36fe455472c1_26_getName)
HXDLIN(  26)		return HX_("FloatToken",dd,5b,75,29);
            	}


 ::EReg FloatToken_obj::regex;

 ::EReg FloatToken_obj::partialRegex;

bool FloatToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_921e36fe455472c1_16_match)
HXDLIN(  16)		return ::src::ast::maths::FloatToken_obj::regex->match(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatToken_obj,match,return )

bool FloatToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_921e36fe455472c1_21_partialMatch)
HXDLIN(  21)		return ::src::ast::maths::FloatToken_obj::partialRegex->match(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatToken_obj,partialMatch,return )


hx::ObjectPtr< FloatToken_obj > FloatToken_obj::__new(::String content) {
	hx::ObjectPtr< FloatToken_obj > __this = new FloatToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< FloatToken_obj > FloatToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	FloatToken_obj *__this = (FloatToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FloatToken_obj), true, "src.ast.maths.FloatToken"));
	*(void **)__this = FloatToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

FloatToken_obj::FloatToken_obj()
{
}

hx::Val FloatToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FloatToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"regex") ) { outValue = ( regex ); return true; }
		if (HX_FIELD_EQ(inName,"match") ) { outValue = match_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"partialRegex") ) { outValue = ( partialRegex ); return true; }
		if (HX_FIELD_EQ(inName,"partialMatch") ) { outValue = partialMatch_dyn(); return true; }
	}
	return false;
}

bool FloatToken_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"regex") ) { regex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"partialRegex") ) { partialRegex=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FloatToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FloatToken_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &FloatToken_obj::regex,HX_HCSTRING("regex","\xc7","\x2e","\xbf","\xe6")},
	{hx::fsObject /*::EReg*/ ,(void *) &FloatToken_obj::partialRegex,HX_HCSTRING("partialRegex","\x86","\xf3","\x5d","\xae")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FloatToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void FloatToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatToken_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FloatToken_obj::regex,"regex");
	HX_MARK_MEMBER_NAME(FloatToken_obj::partialRegex,"partialRegex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FloatToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatToken_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FloatToken_obj::regex,"regex");
	HX_VISIT_MEMBER_NAME(FloatToken_obj::partialRegex,"partialRegex");
};

#endif

hx::Class FloatToken_obj::__mClass;

static ::String FloatToken_obj_sStaticFields[] = {
	HX_HCSTRING("regex","\xc7","\x2e","\xbf","\xe6"),
	HX_HCSTRING("partialRegex","\x86","\xf3","\x5d","\xae"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void FloatToken_obj::__register()
{
	hx::Object *dummy = new FloatToken_obj;
	FloatToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.maths.FloatToken","\x36","\x62","\x24","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FloatToken_obj::__GetStatic;
	__mClass->mSetStaticField = &FloatToken_obj::__SetStatic;
	__mClass->mMarkFunc = FloatToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FloatToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FloatToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FloatToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FloatToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FloatToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FloatToken_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_921e36fe455472c1_11_boot)
HXDLIN(  11)		regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(([0-9]+)\\.([0-9]+))$",5b,2e,ab,be),HX_("",00,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_921e36fe455472c1_12_boot)
HXDLIN(  12)		partialRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("^[0-9]+(\\.[0-9]*)?$",d3,80,17,2c),HX_("",00,00,00,00));
            	}
}

} // end namespace src
} // end namespace ast
} // end namespace maths
