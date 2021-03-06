// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_value_NegationValueCommand
#define INCLUDED_src_compiler_commands_value_NegationValueCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,bytecode,Bytecode)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS4(src,compiler,commands,value,NegationValueCommand)
HX_DECLARE_CLASS4(src,compiler,commands,value,ValueCommand)
HX_DECLARE_CLASS3(src,compiler,object,Object)

namespace src{
namespace compiler{
namespace commands{
namespace value{


class HXCPP_CLASS_ATTRIBUTES NegationValueCommand_obj : public  ::src::compiler::commands::value::ValueCommand_obj
{
	public:
		typedef  ::src::compiler::commands::value::ValueCommand_obj super;
		typedef NegationValueCommand_obj OBJ_;
		NegationValueCommand_obj();

	public:
		enum { _hx_ClassId = 0x6af815c5 };

		void __construct( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.value.NegationValueCommand")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.value.NegationValueCommand"); }
		static hx::ObjectPtr< NegationValueCommand_obj > __new( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand value);
		static hx::ObjectPtr< NegationValueCommand_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NegationValueCommand_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NegationValueCommand","\xff","\xb5","\x49","\x46"); }

		static  ::src::compiler::commands::value::NegationValueCommand fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens);
		static ::Dynamic fromTokens_dyn();

		static  ::src::compiler::commands::value::NegationValueCommand fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr);
		static ::Dynamic fromBytecode_dyn();

		 ::src::compiler::commands::value::ValueCommand value;
		 ::src::compiler::commands::Command copy( ::src::compiler::Scope scope);

		void setScope( ::src::compiler::Scope scope);

		::String getName();

		::String getFriendlyName();

		 ::src::compiler::object::Object run();

		 ::src::compiler::bytecode::Bytecode getBytecode();

		::Array< ::Dynamic> reconstruct();

};

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value

#endif /* INCLUDED_src_compiler_commands_value_NegationValueCommand */ 
