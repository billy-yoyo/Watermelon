// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_TokenPriority
#include <src/ast/TokenPriority.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_db48360a8ae7a969_72_new,"src.ast.Token","new",0x44eecd15,"src.ast.Token.new","src/ast/Token.hx",72,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_77_getContent,"src.ast.Token","getContent",0x6480472e,"src.ast.Token.getContent","src/ast/Token.hx",77,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_82_getLength,"src.ast.Token","getLength",0x570b1091,"src.ast.Token.getLength","src/ast/Token.hx",82,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_87_getName,"src.ast.Token","getName",0xe6d21d36,"src.ast.Token.getName","src/ast/Token.hx",87,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_92_isDisposable,"src.ast.Token","isDisposable",0xcb2dbad5,"src.ast.Token.isDisposable","src/ast/Token.hx",92,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_97_getPriority,"src.ast.Token","getPriority",0x17d877cf,"src.ast.Token.getPriority","src/ast/Token.hx",97,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_102_toString,"src.ast.Token","toString",0x531aa3d7,"src.ast.Token.toString","src/ast/Token.hx",102,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_107_reconstruct,"src.ast.Token","reconstruct",0xc6c09fb9,"src.ast.Token.reconstruct","src/ast/Token.hx",107,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_111_join,"src.ast.Token","join",0x09675595,"src.ast.Token.join","src/ast/Token.hx",111,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_11_createPrefix,"src.ast.Token","createPrefix",0x6bd85e59,"src.ast.Token.createPrefix","src/ast/Token.hx",11,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_20_createTree,"src.ast.Token","createTree",0x5b388e65,"src.ast.Token.createTree","src/ast/Token.hx",20,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_61_match,"src.ast.Token","match",0xe1fe9d3a,"src.ast.Token.match","src/ast/Token.hx",61,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_66_partialMatch,"src.ast.Token","partialMatch",0x658e52af,"src.ast.Token.partialMatch","src/ast/Token.hx",66,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_124_merge,"src.ast.Token","merge",0xe4a1f6ad,"src.ast.Token.merge","src/ast/Token.hx",124,0x986e127d)
HX_LOCAL_STACK_FRAME(_hx_pos_db48360a8ae7a969_139_reconstructTokens,"src.ast.Token","reconstructTokens",0xff003bf3,"src.ast.Token.reconstructTokens","src/ast/Token.hx",139,0x986e127d)
namespace src{
namespace ast{

void Token_obj::__construct(::String content){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_72_new)
HXDLIN(  72)		this->content = content;
            	}

Dynamic Token_obj::__CreateEmpty() { return new Token_obj; }

void *Token_obj::_hx_vtable = 0;

Dynamic Token_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Token_obj > _hx_result = new Token_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7cd9a4bb;
}

 ::Dynamic Token_obj::getContent(){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_77_getContent)
HXDLIN(  77)		return this->content;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Token_obj,getContent,return )

int Token_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_82_getLength)
HXDLIN(  82)		return ( (int)(this->content->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Token_obj,getLength,return )

::String Token_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_87_getName)
HXDLIN(  87)		return HX_("Token",d9,f2,58,a7);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Token_obj,getName,return )

bool Token_obj::isDisposable(){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_92_isDisposable)
HXDLIN(  92)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Token_obj,isDisposable,return )

 ::src::ast::TokenPriority Token_obj::getPriority(){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_97_getPriority)
HXDLIN(  97)		return ::src::ast::TokenPriority_obj::LOW_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Token_obj,getPriority,return )

::String Token_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_102_toString)
HXDLIN( 102)		::String _hx_tmp = ((HX_("",00,00,00,00) + this->getName()) + HX_("(",28,00,00,00));
HXDLIN( 102)		return ((_hx_tmp + ::Std_obj::string(this->content)) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Token_obj,toString,return )

::String Token_obj::reconstruct(::String embed){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_107_reconstruct)
HXDLIN( 107)		return ( (::String)(this->content) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Token_obj,reconstruct,return )

::Array< ::Dynamic> Token_obj::join(::Array< ::Dynamic> tokens, ::Dynamic end){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_111_join)
HXLINE( 112)		tokens = tokens->copy();
HXLINE( 113)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE( 114)		if ((tokens->length > (int)0)) {
HXLINE( 114)			result->push(tokens->shift().StaticCast<  ::src::ast::Token >());
            		}
HXLINE( 115)		while((tokens->length > (int)0)){
HXLINE( 116)			result->push(hx::ObjectPtr<OBJ_>(this));
HXLINE( 117)			result->push(tokens->shift().StaticCast<  ::src::ast::Token >());
            		}
HXLINE( 119)		bool _hx_tmp;
HXDLIN( 119)		if (hx::IsNotNull( end )) {
HXLINE( 119)			_hx_tmp = end;
            		}
            		else {
HXLINE( 119)			_hx_tmp = false;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 119)			result->push(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 120)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Token_obj,join,return )

::String Token_obj::createPrefix(int len){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_11_createPrefix)
HXLINE(  12)		::String s = HX_("",00,00,00,00);
HXLINE(  13)		while((s.length < len)){
HXLINE(  14)			s = (s + HX_(" ",20,00,00,00));
            		}
HXLINE(  16)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,createPrefix,return )

::Array< ::String > Token_obj::createTree( ::src::ast::Token t){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_20_createTree)
HXLINE(  21)		 ::Dynamic content = t->getContent();
HXLINE(  22)		if (::Type_obj::enumEq(::Type_obj::_hx_typeof(content),::ValueType_obj::TClass(hx::ArrayBase::__mClass))) {
HXLINE(  24)			::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(content) );
HXLINE(  25)			if ((arr->length == (int)0)) {
HXLINE(  25)				return ::Array_obj< ::String >::__new(1)->init(0,t->getName());
            			}
            			else {
HXLINE(  27)				::String text = t->getName();
HXLINE(  29)				::Array< ::String > tree = ::Array_obj< ::String >::__new();
HXLINE(  30)				int middle;
HXDLIN(  30)				::Array< ::String > lines;
HXLINE(  31)				int treeMiddle = ::Math_obj::floor(((Float)arr->length / (Float)(int)2));
HXLINE(  32)				::String start;
HXLINE(  33)				::String prefix = ::src::ast::Token_obj::createPrefix(text.length);
HXLINE(  34)				{
HXLINE(  34)					int _g1 = (int)0;
HXDLIN(  34)					int _g = arr->length;
HXDLIN(  34)					while((_g1 < _g)){
HXLINE(  34)						_g1 = (_g1 + (int)1);
HXDLIN(  34)						int ti = (_g1 - (int)1);
HXLINE(  35)						start = ((HX_(" ",20,00,00,00) + prefix) + HX_(" ",20,00,00,00));
HXLINE(  36)						if ((ti == treeMiddle)) {
HXLINE(  36)							start = ((HX_("",00,00,00,00) + text) + HX_(" -",0d,1c,00,00));
            						}
HXLINE(  37)						lines = ::src::ast::Token_obj::createTree(arr->__get(ti).StaticCast<  ::src::ast::Token >());
HXLINE(  38)						middle = ::Math_obj::floor(((Float)lines->length / (Float)(int)2));
HXLINE(  39)						{
HXLINE(  39)							int _g3 = (int)0;
HXDLIN(  39)							int _g2 = lines->length;
HXDLIN(  39)							while((_g3 < _g2)){
HXLINE(  39)								_g3 = (_g3 + (int)1);
HXDLIN(  39)								int i = (_g3 - (int)1);
HXLINE(  40)								if ((lines->__get(i).charAt((int)0) != HX_(" ",20,00,00,00))) {
HXLINE(  41)									middle = i;
HXDLIN(  41)									goto _hx_goto_13;
            								}
            							}
            							_hx_goto_13:;
            						}
HXLINE(  44)						{
HXLINE(  44)							int _g31 = (int)0;
HXDLIN(  44)							int _g21 = lines->length;
HXDLIN(  44)							while((_g31 < _g21)){
HXLINE(  44)								_g31 = (_g31 + (int)1);
HXDLIN(  44)								int i1 = (_g31 - (int)1);
HXLINE(  45)								if ((i1 == middle)) {
HXLINE(  45)									tree->push((((HX_("",00,00,00,00) + start) + HX_("+- ",3e,c8,20,00)) + lines->__get(i1)));
            								}
            								else {
HXLINE(  46)									bool _hx_tmp;
HXDLIN(  46)									bool _hx_tmp1;
HXDLIN(  46)									bool _hx_tmp2;
HXDLIN(  46)									if ((ti == (int)0)) {
HXLINE(  46)										_hx_tmp2 = (i1 > middle);
            									}
            									else {
HXLINE(  46)										_hx_tmp2 = false;
            									}
HXDLIN(  46)									if (!(_hx_tmp2)) {
HXLINE(  46)										if ((ti == (arr->length - (int)1))) {
HXLINE(  46)											_hx_tmp1 = (i1 < middle);
            										}
            										else {
HXLINE(  46)											_hx_tmp1 = false;
            										}
            									}
            									else {
HXLINE(  46)										_hx_tmp1 = true;
            									}
HXDLIN(  46)									if (!(_hx_tmp1)) {
HXLINE(  46)										if ((ti != (int)0)) {
HXLINE(  46)											_hx_tmp = (ti != (arr->length - (int)1));
            										}
            										else {
HXLINE(  46)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE(  46)										_hx_tmp = true;
            									}
HXDLIN(  46)									if (_hx_tmp) {
HXLINE(  47)										tree->push((((HX_(" ",20,00,00,00) + prefix) + HX_(" |  ",5c,07,85,15)) + lines->__get(i1)));
            									}
            									else {
HXLINE(  48)										tree->push((((HX_(" ",20,00,00,00) + prefix) + HX_("    ",00,38,3f,15)) + lines->__get(i1)));
            									}
            								}
            							}
            						}
            					}
            				}
HXLINE(  52)				return tree;
            			}
            		}
            		else {
HXLINE(  55)			return ::Array_obj< ::String >::__new(1)->init(0,t->getName());
            		}
HXLINE(  22)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,createTree,return )

bool Token_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_61_match)
HXDLIN(  61)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,match,return )

bool Token_obj::partialMatch(::String s){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_66_partialMatch)
HXDLIN(  66)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,partialMatch,return )

::Array< ::Dynamic> Token_obj::merge(::cpp::VirtualArray els){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_124_merge)
HXLINE( 125)		::Array< ::Dynamic> tokens = ::Array_obj< ::Dynamic>::__new();
HXLINE( 126)		{
HXLINE( 126)			int _g = (int)0;
HXDLIN( 126)			while((_g < els->get_length())){
HXLINE( 126)				 ::Dynamic el = els->__get(_g);
HXDLIN( 126)				_g = (_g + (int)1);
HXLINE( 127)				if (hx::IsEq( ::Type_obj::getClass(el),hx::ArrayBase::__mClass )) {
HXLINE( 128)					int _g1 = (int)0;
HXDLIN( 128)					::Array< ::Dynamic> _g2 = ::src::ast::Token_obj::merge(( (::cpp::VirtualArray)(el) ));
HXDLIN( 128)					while((_g1 < _g2->length)){
HXLINE( 128)						 ::src::ast::Token token = _g2->__get(_g1).StaticCast<  ::src::ast::Token >();
HXDLIN( 128)						_g1 = (_g1 + (int)1);
HXLINE( 129)						tokens->push(token);
            					}
            				}
            				else {
HXLINE( 132)					tokens->push(el);
            				}
            			}
            		}
HXLINE( 135)		return tokens;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,merge,return )

::String Token_obj::reconstructTokens(::Array< ::Dynamic> tokens){
            	HX_STACKFRAME(&_hx_pos_db48360a8ae7a969_139_reconstructTokens)
HXLINE( 140)		::String s = HX_("",00,00,00,00);
HXLINE( 141)		{
HXLINE( 141)			int _g = (int)0;
HXDLIN( 141)			while((_g < tokens->length)){
HXLINE( 141)				 ::src::ast::Token token = tokens->__get(_g).StaticCast<  ::src::ast::Token >();
HXDLIN( 141)				_g = (_g + (int)1);
HXLINE( 142)				s = (HX_(" ",20,00,00,00) + token->reconstruct(null()));
            			}
            		}
HXLINE( 144)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,reconstructTokens,return )


hx::ObjectPtr< Token_obj > Token_obj::__new(::String content) {
	hx::ObjectPtr< Token_obj > __this = new Token_obj();
	__this->__construct(content);
	return __this;
}

hx::ObjectPtr< Token_obj > Token_obj::__alloc(hx::Ctx *_hx_ctx,::String content) {
	Token_obj *__this = (Token_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Token_obj), true, "src.ast.Token"));
	*(void **)__this = Token_obj::_hx_vtable;
	__this->__construct(content);
	return __this;
}

Token_obj::Token_obj()
{
}

void Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Token);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_END_CLASS();
}

void Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
}

hx::Val Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"join") ) { return hx::Val( join_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return hx::Val( getLength_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getContent") ) { return hx::Val( getContent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPriority") ) { return hx::Val( getPriority_dyn() ); }
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isDisposable") ) { return hx::Val( isDisposable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Token_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { outValue = match_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createTree") ) { outValue = createTree_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createPrefix") ) { outValue = createPrefix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"partialMatch") ) { outValue = partialMatch_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"reconstructTokens") ) { outValue = reconstructTokens_dyn(); return true; }
	}
	return false;
}

hx::Val Token_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Token_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Token_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Token_obj_sStaticStorageInfo = 0;
#endif

static ::String Token_obj_sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("getContent","\x43","\x13","\xd9","\x68"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("isDisposable","\x2a","\x76","\x61","\x30"),
	HX_HCSTRING("getPriority","\x1a","\x3e","\x32","\xe1"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	::String(null()) };

static void Token_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Token_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Token_obj::__mClass,"__mClass");
};

#endif

hx::Class Token_obj::__mClass;

static ::String Token_obj_sStaticFields[] = {
	HX_HCSTRING("createPrefix","\xae","\x19","\x0c","\xd1"),
	HX_HCSTRING("createTree","\x7a","\x5a","\x91","\x5f"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("partialMatch","\x04","\x0e","\xc2","\xca"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("reconstructTokens","\x7e","\x4c","\xbc","\x99"),
	::String(null())
};

void Token_obj::__register()
{
	hx::Object *dummy = new Token_obj;
	Token_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.ast.Token","\xa3","\x9e","\xbb","\x82");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Token_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Token_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Token_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Token_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Token_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Token_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Token_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace ast
