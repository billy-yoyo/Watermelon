// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_ast_TokenPriority
#define INCLUDED_src_ast_TokenPriority

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(src,ast,TokenPriority)
namespace src{
namespace ast{


class TokenPriority_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TokenPriority_obj OBJ_;

	public:
		TokenPriority_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("src.ast.TokenPriority","\x27","\xb1","\x2f","\x19"); }
		::String __ToString() const { return HX_HCSTRING("TokenPriority.","\x31","\xc6","\x58","\xcf") + _hx_tag; }

		static ::src::ast::TokenPriority HIGH;
		static inline ::src::ast::TokenPriority HIGH_dyn() { return HIGH; }
		static ::src::ast::TokenPriority LOW;
		static inline ::src::ast::TokenPriority LOW_dyn() { return LOW; }
		static ::src::ast::TokenPriority MAXIMUM;
		static inline ::src::ast::TokenPriority MAXIMUM_dyn() { return MAXIMUM; }
		static ::src::ast::TokenPriority MEDIUM;
		static inline ::src::ast::TokenPriority MEDIUM_dyn() { return MEDIUM; }
		static ::src::ast::TokenPriority MINIMUM;
		static inline ::src::ast::TokenPriority MINIMUM_dyn() { return MINIMUM; }
};

} // end namespace src
} // end namespace ast

#endif /* INCLUDED_src_ast_TokenPriority */ 