// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_commands_coroutine_PipeReadCommand
#define INCLUDED_src_compiler_commands_coroutine_PipeReadCommand

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
HX_DECLARE_CLASS4(src,compiler,commands,coroutine,PipeReadCommand)
HX_DECLARE_CLASS4(src,compiler,commands,value,ValueCommand)
HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS5(src,compiler,object,builtin,coroutine,CoroutineObject)

namespace src{
namespace compiler{
namespace commands{
namespace coroutine{


class HXCPP_CLASS_ATTRIBUTES PipeReadCommand_obj : public  ::src::compiler::commands::Command_obj
{
	public:
		typedef  ::src::compiler::commands::Command_obj super;
		typedef PipeReadCommand_obj OBJ_;
		PipeReadCommand_obj();

	public:
		enum { _hx_ClassId = 0x7e44441a };

		void __construct( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand source,::Array< ::String > vars,::String wildcard, ::src::compiler::commands::value::ValueCommand timeLock);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.commands.coroutine.PipeReadCommand")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.commands.coroutine.PipeReadCommand"); }
		static hx::ObjectPtr< PipeReadCommand_obj > __new( ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand source,::Array< ::String > vars,::String wildcard, ::src::compiler::commands::value::ValueCommand timeLock);
		static hx::ObjectPtr< PipeReadCommand_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::commands::value::ValueCommand source,::Array< ::String > vars,::String wildcard, ::src::compiler::commands::value::ValueCommand timeLock);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PipeReadCommand_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PipeReadCommand","\xe7","\xe2","\x01","\x95"); }

		static  ::src::compiler::commands::coroutine::PipeReadCommand fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens);
		static ::Dynamic fromTokens_dyn();

		static  ::src::compiler::commands::coroutine::PipeReadCommand fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr);
		static ::Dynamic fromBytecode_dyn();

		 ::src::compiler::object::builtin::coroutine::CoroutineObject cachedSource;
		bool cacheEnabled;
		 ::src::compiler::commands::value::ValueCommand source;
		::Array< ::String > vars;
		::String wildcard;
		 ::src::compiler::commands::value::ValueCommand timeLock;
		::Array< ::String > getVars();
		::Dynamic getVars_dyn();

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
} // end namespace coroutine

#endif /* INCLUDED_src_compiler_commands_coroutine_PipeReadCommand */ 
