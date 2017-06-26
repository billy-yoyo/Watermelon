// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_Core
#define INCLUDED_src_compiler_Core

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS3(src,ast,base,RootToken)
HX_DECLARE_CLASS2(src,compiler,Core)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,_Core,OperativeCapture)
HX_DECLARE_CLASS3(src,compiler,bytecode,Bytecode)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS3(src,compiler,commands,RootCommand)

namespace src{
namespace compiler{


class HXCPP_CLASS_ATTRIBUTES Core_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Core_obj OBJ_;
		Core_obj();

	public:
		enum { _hx_ClassId = 0x7ff6ae7a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="src.compiler.Core")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"src.compiler.Core"); }

		hx::ObjectPtr< Core_obj > __new() {
			hx::ObjectPtr< Core_obj > __this = new Core_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Core_obj > __alloc(hx::Ctx *_hx_ctx) {
			Core_obj *__this = (Core_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Core_obj), false, "src.compiler.Core"));
			*(void **)__this = Core_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Core_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Core","\x7f","\xe9","\x9d","\x2c"); }

		static void __boot();
		static  ::src::compiler::_Core::OperativeCapture _opcap( ::Dynamic end, ::Dynamic startContent, ::Dynamic endContent, ::Dynamic checkOverride);
		static ::Dynamic _opcap_dyn();

		static  ::haxe::ds::StringMap operativeMap;
		static  ::src::compiler::commands::RootCommand convertRoot( ::src::ast::base::RootToken root, ::src::compiler::Scope scope);
		static ::Dynamic convertRoot_dyn();

		static ::Array< ::Dynamic> convert( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens);
		static ::Dynamic convert_dyn();

		static  ::src::compiler::commands::Command convertBlock( ::src::compiler::Scope scope, ::src::ast::Token operative,::Array< ::Dynamic> tokens);
		static ::Dynamic convertBlock_dyn();

		static  ::src::compiler::commands::RootCommand convertBytes( ::haxe::io::Bytes bytes, ::src::compiler::Scope scope);
		static ::Dynamic convertBytes_dyn();

		static  ::src::compiler::bytecode::Bytecode compile( ::src::compiler::commands::RootCommand root, ::Dynamic stringPool);
		static ::Dynamic compile_dyn();

};

} // end namespace src
} // end namespace compiler

#endif /* INCLUDED_src_compiler_Core */ 
