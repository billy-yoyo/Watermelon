// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_ast_base_BracketToken
#define INCLUDED_src_ast_base_BracketToken

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS3(src,ast,base,BracketToken)

namespace src{
namespace ast{
namespace base{


class HXCPP_CLASS_ATTRIBUTES BracketToken_obj : public  ::src::ast::Token_obj
{
	public:
		typedef  ::src::ast::Token_obj super;
		typedef BracketToken_obj OBJ_;
		BracketToken_obj();

	public:
		enum { _hx_ClassId = 0x605b8740 };

		void __construct(::String content);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.ast.base.BracketToken")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.ast.base.BracketToken"); }
		static hx::ObjectPtr< BracketToken_obj > __new(::String content);
		static hx::ObjectPtr< BracketToken_obj > __alloc(hx::Ctx *_hx_ctx,::String content);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BracketToken_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BracketToken","\xd1","\x67","\xc5","\x1e"); }

		static  ::src::ast::base::BracketToken fromRaw(::Array< ::Dynamic> tokens);
		static ::Dynamic fromRaw_dyn();

		static int count(::String s,::String c);
		static ::Dynamic count_dyn();

		static bool match(::String s);
		static ::Dynamic match_dyn();

		static bool partialMatch(::String s);
		static ::Dynamic partialMatch_dyn();

		int originalLength;
		::String getName();

		int getLength();

		::String reconstruct(::String embed);

};

} // end namespace src
} // end namespace ast
} // end namespace base

#endif /* INCLUDED_src_ast_base_BracketToken */ 
