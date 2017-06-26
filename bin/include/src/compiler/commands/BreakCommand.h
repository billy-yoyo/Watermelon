// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_BreakCommand
#define INCLUDED_src_compiler_commands_BreakCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,bytecode,Bytecode)
HX_DECLARE_CLASS3(src,compiler,commands,BreakCommand)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS3(src,compiler,object,Object)

namespace src{
namespace compiler{
namespace commands{


class HXCPP_CLASS_ATTRIBUTES BreakCommand_obj : public  ::src::compiler::commands::Command_obj
{
	public:
		typedef  ::src::compiler::commands::Command_obj super;
		typedef BreakCommand_obj OBJ_;
		BreakCommand_obj();

	public:
		enum { _hx_ClassId = 0x160c29f7 };

		void __construct( ::src::compiler::Scope scope);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.BreakCommand")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.BreakCommand"); }
		static hx::ObjectPtr< BreakCommand_obj > __new( ::src::compiler::Scope scope);
		static hx::ObjectPtr< BreakCommand_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BreakCommand_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BreakCommand","\x6c","\x66","\x14","\x58"); }

		static  ::src::compiler::commands::BreakCommand fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr);
		static ::Dynamic fromBytecode_dyn();

		static  ::src::compiler::commands::BreakCommand fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens);
		static ::Dynamic fromTokens_dyn();

		 ::src::compiler::object::Object run();

		::String getName();

		 ::src::compiler::bytecode::Bytecode getBytecode();

		::Array< ::Dynamic> reconstruct();

};

} // end namespace src
} // end namespace compiler
} // end namespace commands

#endif /* INCLUDED_src_compiler_commands_BreakCommand */ 