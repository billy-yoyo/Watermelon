// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_bytecode_StringPool
#define INCLUDED_src_compiler_bytecode_StringPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(src,compiler,bytecode,StringPool)
HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS3(src,compiler,commands,RootCommand)

namespace src{
namespace compiler{
namespace bytecode{


class HXCPP_CLASS_ATTRIBUTES StringPool_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StringPool_obj OBJ_;
		StringPool_obj();

	public:
		enum { _hx_ClassId = 0x6fb58425 };

		void __construct( ::src::compiler::commands::RootCommand root);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.bytecode.StringPool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.bytecode.StringPool"); }
		static hx::ObjectPtr< StringPool_obj > __new( ::src::compiler::commands::RootCommand root);
		static hx::ObjectPtr< StringPool_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::commands::RootCommand root);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringPool_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StringPool","\x6d","\x16","\x0a","\xf3"); }

		static ::Array< ::String > getBestMatches(::Array< ::String > strings);
		static ::Dynamic getBestMatches_dyn();

		static ::Array< ::String > getStrings( ::src::compiler::commands::RootCommand root);
		static ::Dynamic getStrings_dyn();

		static ::Array< ::String > getMatches(::Array< ::String > strings);
		static ::Dynamic getMatches_dyn();

		static ::String getBest(::Array< ::String > strings,::Array< ::String > matches);
		static ::Dynamic getBest_dyn();

		::Array< ::String > pool;
		::Array< ::String > getPool();
		::Dynamic getPool_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace bytecode

#endif /* INCLUDED_src_compiler_bytecode_StringPool */ 
