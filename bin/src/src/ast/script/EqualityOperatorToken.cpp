// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_script_EqualityOperatorToken
#include <src/ast/script/EqualityOperatorToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0494b827133ca798_8_new,"src.ast.script.EqualityOperatorToken","new",0x39e5de00,"src.ast.script.EqualityOperatorToken.new","src/ast/script/EqualityOperatorToken.hx",8,0x283fc62f)
HX_LOCAL_STACK_FRAME(_hx_pos_0494b827133ca798_23_getName,"src.ast.script.EqualityOperatorToken","getName",0xdbbb7fa1,"src.ast.script.EqualityOperatorToken.getName","src/ast/script/EqualityOperatorToken.hx",23,0x283fc62f)
HX_LOCAL_STACK_FRAME(_hx_pos_0494b827133ca798_13_match,"src.ast.script.EqualityOperatorToken","match",0x4f8bfee5,"src.ast.script.EqualityOperatorToken.match","src/ast/script/EqualityOperatorToken.hx",13,0x283fc62f)
HX_LOCAL_STACK_FRAME(_hx_pos_0494b827133ca798_18_partialMatch,"src.ast.script.EqualityOperatorToken","partialMatch",0xc5914c64,"src.ast.script.EqualityOperatorToken.partialMatch","src/ast/script/EqualityOperatorToken.hx",18,0x283fc62f)
namespace src{
namespace ast{
namespace script{

void EqualityOperatorToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_0494b827133ca798_8_new)
HXDLIN(   8)		super::__construct(content);
            	}

Dynamic EqualityOperatorToken_obj::__CreateEmpty() { return new EqualityOperatorToken_obj; }

void *EqualityOperatorToken_obj::_hx_vtable = 0;

Dynamic EqualityOperatorToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EqualityOperatorToken_obj > _hx_result = new EqualityOperatorToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EqualityOperatorToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b938206) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b938206;
	} else {
		return inClassId==(int)0x7cd9a4bb;
	}
}

::String EqualityOperatorToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_0494b827133ca798_23_getName)
HXDLIN(  23)		return HX_("EqualityOperatorToken",3b,c5,40,33);
            	}


bool EqualityOperatorToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_0494b827133ca798_13_match)
HXDLIN(  13)		bool _hx_tmp;
HXDLIN(  13)		bool _hx_tmp1;
HXDLIN(  13)		bool _hx_tmp2;
HXDLIN(  13)		bool _hx_tmp3;
HXDLIN(  13)		if ((s != HX_("==",60,35,00,00))) {
HXDLIN(  13)			_hx_tmp3 = (s == HX_("!=",fc,1c,00,00));
            		}
            		else {
HXDLIN(  13)			_hx_tmp3 = true;
            		}
HXDLIN(  13)		if (!(_hx_tmp3)) {
HXDLIN(  13)			_hx_tmp2 = (s == HX_(">=",3f,36,00,00));
            		}
            		else {
HXDLIN(  13)			_hx_tmp2 = true;
            		}
HXDLIN(  13)		if (!(_hx_tmp2)) {
HXDLIN(  13)			_hx_tmp1 = (s == HX_("<=",81,34,00,00));
            		}
            		else {
HXDLIN(  13)			_hx_tmp1 = true;
            		}
HXDLIN(  13)		if (!(_hx_tmp1)) {
HXDLIN(  13)			_hx_tmp = (s == HX_("<",3c,00,00,00));
            		}
            		else {
HXDLIN(  13)			_hx_tmp = true;
            		}
HXDLIN(  13)		if (!(_hx_tmp)) {
HXDLIN(  13)			return (s == HX_(">",3e,00,00,00));
            		}
            		else {
HXDLIN(  13)			return true;
            		}
HXDLIN(  13)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EqualityOperatorToken_obj,match,return )

bool EqualityOperatorToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_0494b827133ca798_18_partialMatch)
HXDLIN(  18)		bool _hx_tmp;
HXDLIN(  18)		if ((s != HX_("=",3d,00,00,00))) {
HXDLIN(  18)			_hx_tmp = (s == HX_("!",21,00,00,00));
            		}
            		else {
HXDLIN(  18)			_hx_tmp = true;
            		}
HXDLIN(  18)		if (!(_hx_tmp)) {
HXDLIN(  18)			return ::src::ast::script::EqualityOperatorToken_obj::match(s);
            		}
            		else {
HXDLIN(  18)			return true;
            		}
HXDLIN(  18)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EqualityOperatorToken_obj,partialMatch,return )


hx::ObjectPtr< EqualityOperatorToken_obj > EqualityOperatorToken_obj::__new(::String content) {
	hx::ObjectPtr< EqualityOperatorToken_obj > __this = new EqualityOperatorToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< EqualityOperatorToken_obj > EqualityOperatorToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	EqualityOperatorToken_obj *__this = (EqualityOperatorToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EqualityOperatorToken_obj), true, "src.ast.script.EqualityOperatorToken"));
	*(void **)__this = EqualityOperatorToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

EqualityOperatorToken_obj::EqualityOperatorToken_obj()
{
}

hx::Val EqualityOperatorToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool EqualityOperatorToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *EqualityOperatorToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *EqualityOperatorToken_obj_sStaticStorageInfo = 0;
#endif

static ::String EqualityOperatorToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void EqualityOperatorToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EqualityOperatorToken_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EqualityOperatorToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EqualityOperatorToken_obj::__mClass,"__mClass");
};

#endif

hx::Class EqualityOperatorToken_obj::__mClass;

static ::String EqualityOperatorToken_obj_sStaticFields[] = {
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void EqualityOperatorToken_obj::__register()
{
	hx::Object *dummy = new EqualityOperatorToken_obj;
	EqualityOperatorToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.script.EqualityOperatorToken","\x0e","\x1e","\xa7","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EqualityOperatorToken_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EqualityOperatorToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EqualityOperatorToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EqualityOperatorToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EqualityOperatorToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EqualityOperatorToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EqualityOperatorToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EqualityOperatorToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace ast
} // end namespace script
