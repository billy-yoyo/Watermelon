// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_GlobalProcessor
#include <src/ast/GlobalProcessor.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_TokenProcessor
#include <src/ast/TokenProcessor.h>
#endif
#ifndef INCLUDED_src_ast_base_BlockToken
#include <src/ast/base/BlockToken.h>
#endif
#ifndef INCLUDED_src_ast_base_RootToken
#include <src/ast/base/RootToken.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_RootCommand
#include <src/compiler/commands/RootCommand.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29505663fe340095_26_new,"src.ast.base.RootToken","new",0x90c4bea2,"src.ast.base.RootToken.new","src/ast/base/RootToken.hx",26,0x697021cd)
HX_LOCAL_STACK_FRAME(_hx_pos_29505663fe340095_43_getLength,"src.ast.base.RootToken","getLength",0x4cbe29de,"src.ast.base.RootToken.getLength","src/ast/base/RootToken.hx",43,0x697021cd)
HX_LOCAL_STACK_FRAME(_hx_pos_29505663fe340095_48_getName,"src.ast.base.RootToken","getName",0x02745943,"src.ast.base.RootToken.getName","src/ast/base/RootToken.hx",48,0x697021cd)
HX_LOCAL_STACK_FRAME(_hx_pos_29505663fe340095_52_reconstruct,"src.ast.base.RootToken","reconstruct",0xe2666646,"src.ast.base.RootToken.reconstruct","src/ast/base/RootToken.hx",52,0x697021cd)
HX_LOCAL_STACK_FRAME(_hx_pos_29505663fe340095_14_fromRaw,"src.ast.base.RootToken","fromRaw",0x3ef3dde0,"src.ast.base.RootToken.fromRaw","src/ast/base/RootToken.hx",14,0x697021cd)
HX_LOCAL_STACK_FRAME(_hx_pos_29505663fe340095_22_fromRoot,"src.ast.base.RootToken","fromRoot",0xd678df2a,"src.ast.base.RootToken.fromRoot","src/ast/base/RootToken.hx",22,0x697021cd)
HX_LOCAL_STACK_FRAME(_hx_pos_29505663fe340095_33_match,"src.ast.base.RootToken","match",0x445dcc07,"src.ast.base.RootToken.match","src/ast/base/RootToken.hx",33,0x697021cd)
HX_LOCAL_STACK_FRAME(_hx_pos_29505663fe340095_38_partialMatch,"src.ast.base.RootToken","partialMatch",0x7af64782,"src.ast.base.RootToken.partialMatch","src/ast/base/RootToken.hx",38,0x697021cd)
namespace src{
namespace ast{
namespace base{

void RootToken_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_29505663fe340095_26_new)
HXLINE(  27)		super::__construct(content);
HXLINE(  28)		this->content = ::src::ast::GlobalProcessor_obj::baseProcessor->process(content);
            	}

Dynamic RootToken_obj::__CreateEmpty() { return new RootToken_obj; }

void *RootToken_obj::_hx_vtable = 0;

Dynamic RootToken_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RootToken_obj > _hx_result = new RootToken_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RootToken_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x69b474c0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x69b474c0;
	} else {
		return inClassId==(int)0x7cd9a4bb;
	}
}

int RootToken_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_29505663fe340095_43_getLength)
HXDLIN(  43)		return (int)0;
            	}


::String RootToken_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_29505663fe340095_48_getName)
HXDLIN(  48)		return HX_("RootToken",57,69,c0,6e);
            	}


::String RootToken_obj::reconstruct(::String embed){
            	HX_STACKFRAME(&_hx_pos_29505663fe340095_52_reconstruct)
HXLINE(  53)		::String reconstructed = HX_("",00,00,00,00);
HXLINE(  54)		::Array< ::Dynamic> tokens = ( (::Array< ::Dynamic>)(this->content) );
HXDLIN(  54)		::String s;
HXLINE(  55)		bool first = true;
HXLINE(  56)		{
HXLINE(  56)			int _g = (int)0;
HXDLIN(  56)			while((_g < tokens->length)){
HXLINE(  56)				 ::src::ast::Token token = tokens->__get(_g).StaticCast<  ::src::ast::Token >();
HXDLIN(  56)				_g = (_g + (int)1);
HXLINE(  57)				s = token->reconstruct(null());
HXLINE(  58)				bool _hx_tmp;
HXDLIN(  58)				if ((token->getName() != HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  58)					if ((token->getName() == HX_("BlockToken",8c,2a,40,e2))) {
HXLINE(  58)						_hx_tmp = !(hx::TCast<  ::src::ast::base::BlockToken >::cast(token)->isMap());
            					}
            					else {
HXLINE(  58)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(  58)					_hx_tmp = true;
            				}
HXDLIN(  58)				if (_hx_tmp) {
HXLINE(  59)					s = (s + HX_("\n",0a,00,00,00));
HXLINE(  60)					first = true;
            				}
            				else {
HXLINE(  61)					bool _hx_tmp1;
HXDLIN(  61)					bool _hx_tmp2;
HXDLIN(  61)					bool _hx_tmp3;
HXDLIN(  61)					bool _hx_tmp4;
HXDLIN(  61)					bool _hx_tmp5;
HXDLIN(  61)					bool _hx_tmp6;
HXDLIN(  61)					bool _hx_tmp7;
HXDLIN(  61)					bool _hx_tmp8;
HXDLIN(  61)					if ((token->getName() != HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  61)						_hx_tmp8 = (token->getName() == HX_("FloatToken",dd,5b,75,29));
            					}
            					else {
HXLINE(  61)						_hx_tmp8 = true;
            					}
HXDLIN(  61)					if (!(_hx_tmp8)) {
HXLINE(  61)						_hx_tmp7 = (token->getName() == HX_("IntegerToken",7b,f0,70,21));
            					}
            					else {
HXLINE(  61)						_hx_tmp7 = true;
            					}
HXDLIN(  61)					if (!(_hx_tmp7)) {
HXLINE(  61)						_hx_tmp6 = (token->getName() == HX_("VariableToken",fd,96,04,01));
            					}
            					else {
HXLINE(  61)						_hx_tmp6 = true;
            					}
HXDLIN(  61)					if (!(_hx_tmp6)) {
HXLINE(  61)						_hx_tmp5 = (token->getName() == HX_("VariableAccessToken",b9,59,13,8f));
            					}
            					else {
HXLINE(  61)						_hx_tmp5 = true;
            					}
HXDLIN(  61)					if (!(_hx_tmp5)) {
HXLINE(  61)						_hx_tmp4 = (token->getName() == HX_("AssignmentToken",4c,94,e1,56));
            					}
            					else {
HXLINE(  61)						_hx_tmp4 = true;
            					}
HXDLIN(  61)					if (!(_hx_tmp4)) {
HXLINE(  61)						_hx_tmp3 = (token->getName() == HX_("MathsOperatorToken",2a,dc,94,41));
            					}
            					else {
HXLINE(  61)						_hx_tmp3 = true;
            					}
HXDLIN(  61)					if (!(_hx_tmp3)) {
HXLINE(  61)						_hx_tmp2 = (token->getName() == HX_("BooleanOperatorToken",0d,6d,dc,5d));
            					}
            					else {
HXLINE(  61)						_hx_tmp2 = true;
            					}
HXDLIN(  61)					if (!(_hx_tmp2)) {
HXLINE(  61)						_hx_tmp1 = (token->getName() == HX_("EqualityOperatorToken",3b,c5,40,33));
            					}
            					else {
HXLINE(  61)						_hx_tmp1 = true;
            					}
HXDLIN(  61)					if (_hx_tmp1) {
HXLINE(  66)						if (!(first)) {
HXLINE(  66)							s = (HX_(" ",20,00,00,00) + s);
            						}
HXLINE(  67)						first = false;
            					}
            					else {
HXLINE(  68)						first = false;
            					}
            				}
HXLINE(  69)				reconstructed = (reconstructed + s);
            			}
            		}
HXLINE(  71)		return reconstructed;
            	}


 ::src::ast::base::RootToken RootToken_obj::fromRaw(::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_29505663fe340095_14_fromRaw)
HXLINE(  15)		 ::src::ast::base::RootToken token =  ::src::ast::base::RootToken_obj::__alloc( HX_CTX ,HX_("",00,00,00,00));
HXLINE(  16)		token->content = tokens;
HXLINE(  17)		return token;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RootToken_obj,fromRaw,return )

 ::src::ast::base::RootToken RootToken_obj::fromRoot( ::src::compiler::commands::RootCommand cmd){
            	HX_STACKFRAME(&_hx_pos_29505663fe340095_22_fromRoot)
HXDLIN(  22)		return ::src::ast::base::RootToken_obj::fromRaw(cmd->reconstruct());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RootToken_obj,fromRoot,return )

bool RootToken_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_29505663fe340095_33_match)
HXDLIN(  33)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RootToken_obj,match,return )

bool RootToken_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_29505663fe340095_38_partialMatch)
HXDLIN(  38)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RootToken_obj,partialMatch,return )


hx::ObjectPtr< RootToken_obj > RootToken_obj::__new(::String content) {
	hx::ObjectPtr< RootToken_obj > __this = new RootToken_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< RootToken_obj > RootToken_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	RootToken_obj *__this = (RootToken_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RootToken_obj), true, "src.ast.base.RootToken"));
	*(void **)__this = RootToken_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

RootToken_obj::RootToken_obj()
{
}

hx::Val RootToken_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return hx::Val( getLength_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RootToken_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { outValue = match_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromRaw") ) { outValue = fromRaw_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromRoot") ) { outValue = fromRoot_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"partialMatch") ) { outValue = partialMatch_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RootToken_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RootToken_obj_sStaticStorageInfo = 0;
#endif

static ::String RootToken_obj_sMemberFields[] = {
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void RootToken_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RootToken_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RootToken_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RootToken_obj::__mClass,"__mClass");
};

#endif

hx::Class RootToken_obj::__mClass;

static ::String RootToken_obj_sStaticFields[] = {
	HX_HCSTRING("fromRaw","\x9e","\xa6","\x01","\x58"),
	HX_HCSTRING("fromRoot","\xac","\xbc","\x7a","\xa9"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	::String(null())
};

void RootToken_obj::__register()
{
	hx::Object *dummy = new RootToken_obj;
	RootToken_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.base.RootToken","\xb0","\x85","\x5c","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RootToken_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RootToken_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RootToken_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RootToken_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RootToken_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RootToken_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RootToken_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RootToken_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace ast
} // end namespace base
