// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_AssignmentCommand
#define INCLUDED_src_compiler_commands_AssignmentCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,bytecode,Bytecode)
HX_DECLARE_CLASS3(src,compiler,commands,AssignmentCommand)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS4(src,compiler,commands,value,ValueCommand)
HX_DECLARE_CLASS4(src,compiler,commands,value,VariableAccess)
HX_DECLARE_CLASS3(src,compiler,object,Object)

namespace src{
namespace compiler{
namespace commands{


class HXCPP_CLASS_ATTRIBUTES AssignmentCommand_obj : public  ::src::compiler::commands::Command_obj
{
	public:
		typedef  ::src::compiler::commands::Command_obj super;
		typedef AssignmentCommand_obj OBJ_;
		AssignmentCommand_obj();

	public:
		enum { _hx_ClassId = 0x260b3757 };

		void __construct( ::src::compiler::Scope scope,::Array< ::Dynamic> variables, ::src::compiler::commands::value::ValueCommand value,int _hx_operator);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.AssignmentCommand")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.AssignmentCommand"); }
		static hx::ObjectPtr< AssignmentCommand_obj > __new( ::src::compiler::Scope scope,::Array< ::Dynamic> variables, ::src::compiler::commands::value::ValueCommand value,int _hx_operator);
		static hx::ObjectPtr< AssignmentCommand_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::Array< ::Dynamic> variables, ::src::compiler::commands::value::ValueCommand value,int _hx_operator);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssignmentCommand_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssignmentCommand","\x5e","\xbd","\xc8","\x6a"); }

		static  ::src::compiler::commands::AssignmentCommand fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens);
		static ::Dynamic fromTokens_dyn();

		static  ::src::compiler::commands::AssignmentCommand fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr);
		static ::Dynamic fromBytecode_dyn();

		static void setVariable( ::src::compiler::commands::value::VariableAccess variable, ::src::compiler::object::Object obj,int _hx_operator);
		static ::Dynamic setVariable_dyn();

		static void assign(::Array< ::Dynamic> variables, ::src::compiler::object::Object obj,int _hx_operator);
		static ::Dynamic assign_dyn();

		::Array< ::Dynamic> variables;
		 ::src::compiler::commands::value::ValueCommand value;
		int _hx_operator;
		 ::src::compiler::commands::Command copy( ::src::compiler::Scope scope);

		void setScope( ::src::compiler::Scope scope);

		::Array< ::Dynamic> walk();

		 ::src::compiler::object::Object run();

		::String getName();

		::String getFriendlyName();

		 ::src::compiler::bytecode::Bytecode getBytecode();

		::Array< ::Dynamic> reconstruct();

};

} // end namespace src
} // end namespace compiler
} // end namespace commands

#endif /* INCLUDED_src_compiler_commands_AssignmentCommand */ 
