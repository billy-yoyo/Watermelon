// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_value_ValueCommandPair
#define INCLUDED_src_compiler_commands_value_ValueCommandPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,bytecode,Bytecode)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS4(src,compiler,commands,value,ValueCommand)
HX_DECLARE_CLASS4(src,compiler,commands,value,ValueCommandPair)

namespace src{
namespace compiler{
namespace commands{
namespace value{


class HXCPP_CLASS_ATTRIBUTES ValueCommandPair_obj : public  ::src::compiler::commands::Command_obj
{
	public:
		typedef  ::src::compiler::commands::Command_obj super;
		typedef ValueCommandPair_obj OBJ_;
		ValueCommandPair_obj();

	public:
		enum { _hx_ClassId = 0x544eb7fa };

		void __construct( ::src::compiler::commands::value::ValueCommand left, ::src::compiler::commands::value::ValueCommand right);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.value.ValueCommandPair")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.value.ValueCommandPair"); }
		static hx::ObjectPtr< ValueCommandPair_obj > __new( ::src::compiler::commands::value::ValueCommand left, ::src::compiler::commands::value::ValueCommand right);
		static hx::ObjectPtr< ValueCommandPair_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::commands::value::ValueCommand left, ::src::compiler::commands::value::ValueCommand right);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ValueCommandPair_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ValueCommandPair","\x34","\x33","\x09","\x1c"); }

		static  ::src::compiler::commands::value::ValueCommandPair fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr);
		static ::Dynamic fromBytecode_dyn();

		 ::src::compiler::commands::value::ValueCommand left;
		 ::src::compiler::commands::value::ValueCommand right;
		::Array< ::Dynamic> walk();

		::String getName();

		 ::src::compiler::bytecode::Bytecode getBytecode();

		::Array< ::Dynamic> reconstruct();

};

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value

#endif /* INCLUDED_src_compiler_commands_value_ValueCommandPair */ 
