// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_ast_Token
#define INCLUDED_src_ast_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,ast,TokenPriority)

namespace src{
namespace ast{


class HXCPP_CLASS_ATTRIBUTES Token_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Token_obj OBJ_;
		Token_obj();

	public:
		enum { _hx_ClassId = 0x7cd9a4bb };

		void __construct(::String content);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.ast.Token")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.ast.Token"); }
		static hx::ObjectPtr< Token_obj > __new(::String content);
		static hx::ObjectPtr< Token_obj > __alloc(hx::Ctx *_hx_ctx,::String content);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Token_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Token","\xd9","\xf2","\x58","\xa7"); }

		static ::String createPrefix(int len);
		static ::Dynamic createPrefix_dyn();

		static ::Array< ::String > createTree( ::src::ast::Token t);
		static ::Dynamic createTree_dyn();

		static bool match(::String s);
		static ::Dynamic match_dyn();

		static bool partialMatch(::String s);
		static ::Dynamic partialMatch_dyn();

		static ::Array< ::Dynamic> merge(::cpp::VirtualArray els);
		static ::Dynamic merge_dyn();

		static ::String reconstructTokens(::Array< ::Dynamic> tokens);
		static ::Dynamic reconstructTokens_dyn();

		 ::Dynamic content;
		 ::Dynamic getContent();
		::Dynamic getContent_dyn();

		virtual int getLength();
		::Dynamic getLength_dyn();

		virtual ::String getName();
		::Dynamic getName_dyn();

		virtual bool isDisposable();
		::Dynamic isDisposable_dyn();

		virtual  ::src::ast::TokenPriority getPriority();
		::Dynamic getPriority_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual ::String reconstruct(::String embed);
		::Dynamic reconstruct_dyn();

		::Array< ::Dynamic> join(::Array< ::Dynamic> tokens, ::Dynamic end);
		::Dynamic join_dyn();

};

} // end namespace src
} // end namespace ast

#endif /* INCLUDED_src_ast_Token */ 
