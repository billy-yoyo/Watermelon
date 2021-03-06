// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_bytecode_BytecodeMap
#define INCLUDED_src_compiler_bytecode_BytecodeMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,bytecode,Bytecode)
HX_DECLARE_CLASS3(src,compiler,bytecode,BytecodeMap)
HX_DECLARE_CLASS3(src,compiler,commands,Command)

namespace src{
namespace compiler{
namespace bytecode{


class HXCPP_CLASS_ATTRIBUTES BytecodeMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BytecodeMap_obj OBJ_;
		BytecodeMap_obj();

	public:
		enum { _hx_ClassId = 0x29a2c88f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="src.compiler.bytecode.BytecodeMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"src.compiler.bytecode.BytecodeMap"); }

		hx::ObjectPtr< BytecodeMap_obj > __new() {
			hx::ObjectPtr< BytecodeMap_obj > __this = new BytecodeMap_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BytecodeMap_obj > __alloc(hx::Ctx *_hx_ctx) {
			BytecodeMap_obj *__this = (BytecodeMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BytecodeMap_obj), false, "src.compiler.bytecode.BytecodeMap"));
			*(void **)__this = BytecodeMap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytecodeMap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BytecodeMap","\x47","\x35","\x4e","\x90"); }

		static void __boot();
		static ::Array< ::String > codeMap;
		static  ::haxe::ds::StringMap fromBytecodeMap;
		static int fromCommand( ::src::compiler::commands::Command command);
		static ::Dynamic fromCommand_dyn();

		static int fromString(::String s);
		static ::Dynamic fromString_dyn();

		static ::String getCommand(int code);
		static ::Dynamic getCommand_dyn();

		static  ::Dynamic getConverter(::String cmd);
		static ::Dynamic getConverter_dyn();

		static  ::Dynamic getConverterFromID(int code);
		static ::Dynamic getConverterFromID_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace bytecode

#endif /* INCLUDED_src_compiler_bytecode_BytecodeMap */ 
