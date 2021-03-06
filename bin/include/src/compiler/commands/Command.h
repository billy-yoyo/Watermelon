// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_Command
#define INCLUDED_src_compiler_commands_Command

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,bytecode,Bytecode)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS3(src,compiler,object,Object)

namespace src{
namespace compiler{
namespace commands{


class HXCPP_CLASS_ATTRIBUTES Command_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Command_obj OBJ_;
		Command_obj();

	public:
		enum { _hx_ClassId = 0x20538180 };

		void __construct( ::src::compiler::Scope scope);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.Command")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.Command"); }
		static hx::ObjectPtr< Command_obj > __new( ::src::compiler::Scope scope);
		static hx::ObjectPtr< Command_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Command_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Command","\x2b","\x99","\xbe","\x4e"); }

		static ::Array< ::Dynamic> splitTokens(::Array< ::Dynamic> tokens,::String splitToken,::String content, ::Dynamic checker);
		static ::Dynamic splitTokens_dyn();

		static ::Array< ::Dynamic> reconstructCommands(::cpp::VirtualArray commands);
		static ::Dynamic reconstructCommands_dyn();

		static bool contains(::Array< ::Dynamic> tokens,::String type);
		static ::Dynamic contains_dyn();

		static ::Array< ::Dynamic> copyArray( ::src::compiler::Scope scope,::Array< ::Dynamic> arr);
		static ::Dynamic copyArray_dyn();

		 ::src::compiler::Scope scope;
		virtual  ::src::compiler::commands::Command copy( ::src::compiler::Scope scope);
		::Dynamic copy_dyn();

		virtual  ::src::compiler::object::Object run();
		::Dynamic run_dyn();

		 ::src::compiler::Scope getScope();
		::Dynamic getScope_dyn();

		virtual ::String getName();
		::Dynamic getName_dyn();

		virtual ::String getFriendlyName();
		::Dynamic getFriendlyName_dyn();

		virtual  ::src::compiler::bytecode::Bytecode getBytecode();
		::Dynamic getBytecode_dyn();

		int getCodeID();
		::Dynamic getCodeID_dyn();

		virtual ::Array< ::Dynamic> walk();
		::Dynamic walk_dyn();

		virtual void setScope( ::src::compiler::Scope scope);
		::Dynamic setScope_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual ::Array< ::Dynamic> reconstruct();
		::Dynamic reconstruct_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace commands

#endif /* INCLUDED_src_compiler_commands_Command */ 
