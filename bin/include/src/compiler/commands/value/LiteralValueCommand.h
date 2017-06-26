// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_value_LiteralValueCommand
#define INCLUDED_src_compiler_commands_value_LiteralValueCommand

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
HX_DECLARE_CLASS4(src,compiler,commands,value,LiteralValueCommand)
HX_DECLARE_CLASS4(src,compiler,commands,value,ValueCommand)
HX_DECLARE_CLASS3(src,compiler,object,Object)

namespace src{
namespace compiler{
namespace commands{
namespace value{


class HXCPP_CLASS_ATTRIBUTES LiteralValueCommand_obj : public  ::src::compiler::commands::value::ValueCommand_obj
{
	public:
		typedef  ::src::compiler::commands::value::ValueCommand_obj super;
		typedef LiteralValueCommand_obj OBJ_;
		LiteralValueCommand_obj();

	public:
		enum { _hx_ClassId = 0x1628ecc3 };

		void __construct( ::src::compiler::Scope scope,::String content);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.value.LiteralValueCommand")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.value.LiteralValueCommand"); }
		static hx::ObjectPtr< LiteralValueCommand_obj > __new( ::src::compiler::Scope scope,::String content);
		static hx::ObjectPtr< LiteralValueCommand_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::String content);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LiteralValueCommand_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LiteralValueCommand","\xc9","\xb1","\x43","\xd2"); }

		::String content;
		::String getContent();
		::Dynamic getContent_dyn();

		void setContent(::String content);
		::Dynamic setContent_dyn();

		 ::src::compiler::object::Object run();

		::String getName();

		 ::src::compiler::bytecode::Bytecode getBytecode();

		::Array< ::Dynamic> reconstruct();

};

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value

#endif /* INCLUDED_src_compiler_commands_value_LiteralValueCommand */ 
