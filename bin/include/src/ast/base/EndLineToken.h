// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_ast_base_EndLineToken
#define INCLUDED_src_ast_base_EndLineToken

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS3(src,ast,base,EndLineToken)

namespace src{
namespace ast{
namespace base{


class HXCPP_CLASS_ATTRIBUTES EndLineToken_obj : public  ::src::ast::Token_obj
{
	public:
		typedef  ::src::ast::Token_obj super;
		typedef EndLineToken_obj OBJ_;
		EndLineToken_obj();

	public:
		enum { _hx_ClassId = 0x73d0fa99 };

		void __construct(::String content);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.ast.base.EndLineToken")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.ast.base.EndLineToken"); }
		static hx::ObjectPtr< EndLineToken_obj > __new(::String content);
		static hx::ObjectPtr< EndLineToken_obj > __alloc(hx::Ctx *_hx_ctx,::String content);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EndLineToken_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EndLineToken","\x2a","\xdb","\x3a","\x32"); }

		static bool match(::String s);
		static ::Dynamic match_dyn();

		static bool partialMatch(::String s);
		static ::Dynamic partialMatch_dyn();

		::String getName();

};

} // end namespace src
} // end namespace ast
} // end namespace base

#endif /* INCLUDED_src_ast_base_EndLineToken */ 
