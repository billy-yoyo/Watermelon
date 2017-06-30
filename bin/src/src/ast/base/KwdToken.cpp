// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_TokenPriority
#include <src/ast/TokenPriority.h>
#endif
#ifndef INCLUDED_src_ast_base_KwdToken
#include <src/ast/base/KwdToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_540961c862483b24_9_new,"src.ast.base.KwdToken","new",0x66aaa17a,"src.ast.base.KwdToken.new","src/ast/base/KwdToken.hx",9,0xbd6e5157)
HX_LOCAL_STACK_FRAME(_hx_pos_540961c862483b24_52_getName,"src.ast.base.KwdToken","getName",0x1c80881b,"src.ast.base.KwdToken.getName","src/ast/base/KwdToken.hx",52,0xbd6e5157)
HX_LOCAL_STACK_FRAME(_hx_pos_540961c862483b24_57_getPriority,"src.ast.base.KwdToken","getPriority",0x10c6b934,"src.ast.base.KwdToken.getPriority","src/ast/base/KwdToken.hx",57,0xbd6e5157)
HX_LOCAL_STACK_FRAME(_hx_pos_540961c862483b24_38_match,"src.ast.base.KwdToken","match",0xc9a414df,"src.ast.base.KwdToken.match","src/ast/base/KwdToken.hx",38,0xbd6e5157)
HX_LOCAL_STACK_FRAME(_hx_pos_540961c862483b24_42_partialMatch,"src.ast.base.KwdToken","partialMatch",0x3d1949aa,"src.ast.base.KwdToken.partialMatch","src/ast/base/KwdToken.hx",42,0xbd6e5157)
HX_LOCAL_STACK_FRAME(_hx_pos_540961c862483b24_12_boot,"src.ast.base.KwdToken","boot",0x66bba9d8,"src.ast.base.KwdToken.boot","src/ast/base/KwdToken.hx",12,0xbd6e5157)
static const ::String _hx_array_data_c0321c88_7[] = {
	HX_("if",dd,5b,00,00),HX_("elif",04,dc,14,43),HX_("else",b9,e4,14,43),HX_("for",09,c7,4d,00),HX_("while",b1,43,bd,c9),HX_("func",44,eb,c4,43),HX_("true",4e,a7,03,4d),HX_("false",a3,35,4f,fb),HX_("none",b8,12,0a,49),HX_("return",b0,a4,2d,09),HX_("break",bf,24,ec,b8),HX_("continue",67,e0,c8,31),HX_("in",e5,5b,00,00),HX_("del",cb,39,4c,00),HX_("type",ba,f2,08,4d),HX_("raise",ec,e4,1b,e4),HX_("try",3b,69,58,00),HX_("catch",3b,7c,21,41),HX_("import",65,a1,82,08),HX_("as",f2,54,00,00),HX_("coro",69,bd,c4,41),
};
namespace src{
namespace ast{
namespace base{

void KwdToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_540961c862483b24_9_new)
HXDLIN(   9)		super::__construct(content);
            	}

Dynamic KwdToken_obj::__CreateEmpty() { return new KwdToken_obj; }

void *KwdToken_obj::_hx_vtable = 0;

Dynamic KwdToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< KwdToken_obj > _hx_result = new KwdToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool KwdToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2302a6b0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2302a6b0;
	} else {
		return inClassId==(int)0x7cd9a4bb;
	}
}

::String KwdToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_540961c862483b24_52_getName)
HXDLIN(  52)		return HX_("KwdToken",c1,aa,4a,b9);
            	}


 ::src::ast::TokenPriority KwdToken_obj::getPriority(){
            	HX_STACKFRAME(&_hx_pos_540961c862483b24_57_getPriority)
HXDLIN(  57)		return ::src::ast::TokenPriority_obj::MAXIMUM_dyn();
            	}


::Array< ::String > KwdToken_obj::kwds;

bool KwdToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_540961c862483b24_38_match)
HXDLIN(  38)		return (::src::ast::base::KwdToken_obj::kwds->indexOf(s,null()) != (int)-1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KwdToken_obj,match,return )

bool KwdToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_540961c862483b24_42_partialMatch)
HXLINE(  43)		if ((s.length == (int)0)) {
HXLINE(  43)			return false;
            		}
HXLINE(  44)		{
HXLINE(  44)			int _g = (int)0;
HXDLIN(  44)			::Array< ::String > _g1 = ::src::ast::base::KwdToken_obj::kwds;
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				::String kwd = _g1->__get(_g);
HXDLIN(  44)				_g = (_g + (int)1);
HXLINE(  45)				if ((kwd.substr((int)0,s.length) == s)) {
HXLINE(  45)					return true;
            				}
            			}
            		}
HXLINE(  47)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KwdToken_obj,partialMatch,return )


hx::ObjectPtr< KwdToken_obj > KwdToken_obj::__new(::String content) {
	hx::ObjectPtr< KwdToken_obj > __this = new KwdToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< KwdToken_obj > KwdToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	KwdToken_obj *__this = (KwdToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(KwdToken_obj), true, "src.ast.base.KwdToken"));
	*(void **)__this = KwdToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

KwdToken_obj::KwdToken_obj()
{
}

hx::Val KwdToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPriority") ) { return hx::Val( getPriority_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool KwdToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kwds") ) { outValue = ( kwds ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { outValue = match_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"partialMatch") ) { outValue = partialMatch_dyn(); return true; }
	}
	return false;
}

bool KwdToken_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kwds") ) { kwds=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *KwdToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo KwdToken_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &KwdToken_obj::kwds,HX_HCSTRING("kwds","\x3b","\x78","\x14","\x47")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String KwdToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getPriority","\x1a","\x3e","\x32","\xe1"),
	::String(null()) };

static void KwdToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KwdToken_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KwdToken_obj::kwds,"kwds");
};

#ifdef HXCPP_VISIT_ALLOCS
static void KwdToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KwdToken_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KwdToken_obj::kwds,"kwds");
};

#endif

hx::Class KwdToken_obj::__mClass;

static ::String KwdToken_obj_sStaticFields[] = {
	HX_HCSTRING("kwds","\x3b","\x78","\x14","\x47"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void KwdToken_obj::__register()
{
	hx::Object *dummy = new KwdToken_obj;
	KwdToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.base.KwdToken","\x88","\x1c","\x32","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KwdToken_obj::__GetStatic;
	__mClass->mSetStaticField = &KwdToken_obj::__SetStatic;
	__mClass->mMarkFunc = KwdToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(KwdToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(KwdToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KwdToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = KwdToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KwdToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KwdToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void KwdToken_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_540961c862483b24_12_boot)
HXDLIN(  12)		kwds = ::Array_obj< ::String >::fromData( _hx_array_data_c0321c88_7,21);
            	}
}

} // end namespace src
} // end namespace ast
} // end namespace base
