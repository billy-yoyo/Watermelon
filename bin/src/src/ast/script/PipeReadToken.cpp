// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_script_PipeReadToken
#include <src/ast/script/PipeReadToken.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_53199e5de1473fc1_8_new,"src.ast.script.PipeReadToken","new",0x41ae585a,"src.ast.script.PipeReadToken.new","src/ast/script/PipeReadToken.hx",8,0xc481fe15)
HX_LOCAL_STACK_FRAME(_hx_pos_53199e5de1473fc1_23_getName,"src.ast.script.PipeReadToken","getName",0x1c592efb,"src.ast.script.PipeReadToken.getName","src/ast/script/PipeReadToken.hx",23,0xc481fe15)
HX_LOCAL_STACK_FRAME(_hx_pos_53199e5de1473fc1_13_match,"src.ast.script.PipeReadToken","match",0x362b43bf,"src.ast.script.PipeReadToken.match","src/ast/script/PipeReadToken.hx",13,0xc481fe15)
HX_LOCAL_STACK_FRAME(_hx_pos_53199e5de1473fc1_18_partialMatch,"src.ast.script.PipeReadToken","partialMatch",0x9c17b6ca,"src.ast.script.PipeReadToken.partialMatch","src/ast/script/PipeReadToken.hx",18,0xc481fe15)
namespace src{
namespace ast{
namespace script{

void PipeReadToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_53199e5de1473fc1_8_new)
HXDLIN(   8)		super::__construct(content);
            	}

Dynamic PipeReadToken_obj::__CreateEmpty() { return new PipeReadToken_obj; }

void *PipeReadToken_obj::_hx_vtable = 0;

Dynamic PipeReadToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PipeReadToken_obj > _hx_result = new PipeReadToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PipeReadToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7cd9a4bb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7cd9a4bb;
	} else {
		return inClassId==(int)0x7f797270;
	}
}

::String PipeReadToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_53199e5de1473fc1_23_getName)
HXDLIN(  23)		return HX_("PipeReadToken",95,15,41,89);
            	}


bool PipeReadToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_53199e5de1473fc1_13_match)
HXDLIN(  13)		if ((s != HX_(":>",c4,32,00,00))) {
HXDLIN(  13)			return (s == HX_("!>",fd,1c,00,00));
            		}
            		else {
HXDLIN(  13)			return true;
            		}
HXDLIN(  13)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipeReadToken_obj,match,return )

bool PipeReadToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_53199e5de1473fc1_18_partialMatch)
HXDLIN(  18)		bool _hx_tmp;
HXDLIN(  18)		if ((s != HX_("!",21,00,00,00))) {
HXDLIN(  18)			_hx_tmp = (s == HX_(":",3a,00,00,00));
            		}
            		else {
HXDLIN(  18)			_hx_tmp = true;
            		}
HXDLIN(  18)		if (!(_hx_tmp)) {
HXDLIN(  18)			return ::src::ast::script::PipeReadToken_obj::match(s);
            		}
            		else {
HXDLIN(  18)			return true;
            		}
HXDLIN(  18)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipeReadToken_obj,partialMatch,return )


hx::ObjectPtr< PipeReadToken_obj > PipeReadToken_obj::__new(::String content) {
	hx::ObjectPtr< PipeReadToken_obj > __this = new PipeReadToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< PipeReadToken_obj > PipeReadToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	PipeReadToken_obj *__this = (PipeReadToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PipeReadToken_obj), true, "src.ast.script.PipeReadToken"));
	*(void **)__this = PipeReadToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

PipeReadToken_obj::PipeReadToken_obj()
{
}

hx::Val PipeReadToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PipeReadToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *PipeReadToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PipeReadToken_obj_sStaticStorageInfo = 0;
#endif

static ::String PipeReadToken_obj_sMemberFields[] = {
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void PipeReadToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PipeReadToken_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PipeReadToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PipeReadToken_obj::__mClass,"__mClass");
};

#endif

hx::Class PipeReadToken_obj::__mClass;

static ::String PipeReadToken_obj_sStaticFields[] = {
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void PipeReadToken_obj::__register()
{
	hx::Object *dummy = new PipeReadToken_obj;
	PipeReadToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.script.PipeReadToken","\x68","\xe3","\x98","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PipeReadToken_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PipeReadToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PipeReadToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PipeReadToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PipeReadToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PipeReadToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PipeReadToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PipeReadToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace ast
} // end namespace script