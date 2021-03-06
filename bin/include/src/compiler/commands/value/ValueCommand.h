// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#define INCLUDED_src_compiler_commands_value_ValueCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS4(src,compiler,commands,value,ValueCommand)

namespace src{
namespace compiler{
namespace commands{
namespace value{


class HXCPP_CLASS_ATTRIBUTES ValueCommand_obj : public  ::src::compiler::commands::Command_obj
{
	public:
		typedef  ::src::compiler::commands::Command_obj super;
		typedef ValueCommand_obj OBJ_;
		ValueCommand_obj();

	public:
		enum { _hx_ClassId = 0x1020cfc0 };

		void __construct( ::src::compiler::Scope scope);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.value.ValueCommand")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.value.ValueCommand"); }
		static hx::ObjectPtr< ValueCommand_obj > __new( ::src::compiler::Scope scope);
		static hx::ObjectPtr< ValueCommand_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ValueCommand_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ValueCommand","\xfa","\xa5","\xfa","\x51"); }

		static ::String processStringEscapes(::String content);
		static ::Dynamic processStringEscapes_dyn();

		static ::Array< ::Dynamic> splitTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens,::String splitToken, ::Dynamic singular,::String content);
		static ::Dynamic splitTokens_dyn();

		static  ::src::compiler::commands::value::ValueCommand fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens);
		static ::Dynamic fromTokens_dyn();

		static  ::src::compiler::commands::value::ValueCommand fromToken( ::src::compiler::Scope scope, ::src::ast::Token token);
		static ::Dynamic fromToken_dyn();

		static ::Array< ::Dynamic> copyArray( ::src::compiler::Scope scope,::Array< ::Dynamic> arr);
		static ::Dynamic copyArray_dyn();

		virtual ::String getName();

		virtual ::String getFriendlyName();

};

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value

#endif /* INCLUDED_src_compiler_commands_value_ValueCommand */ 
