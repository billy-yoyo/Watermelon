// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_VariableNamePool
#define INCLUDED_src_compiler_VariableNamePool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(src,compiler,VariableNamePool)

namespace src{
namespace compiler{


class HXCPP_CLASS_ATTRIBUTES VariableNamePool_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VariableNamePool_obj OBJ_;
		VariableNamePool_obj();

	public:
		enum { _hx_ClassId = 0x4d26a506 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.VariableNamePool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.VariableNamePool"); }
		static hx::ObjectPtr< VariableNamePool_obj > __new();
		static hx::ObjectPtr< VariableNamePool_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VariableNamePool_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VariableNamePool","\x43","\xe7","\x93","\x62"); }

		static void __boot();
		static ::String alphabet;
		static ::String nameFromID(int id);
		static ::Dynamic nameFromID_dyn();

		static int idFromName(::String name);
		static ::Dynamic idFromName_dyn();

		 ::haxe::ds::StringMap pool;
		int last;
		::String nextName();
		::Dynamic nextName_dyn();

		::String getName(::String variable);
		::Dynamic getName_dyn();

		::String newName(::String variable);
		::Dynamic newName_dyn();

		void add(::String variable,::String name);
		::Dynamic add_dyn();

		::String getVariable(::String name);
		::Dynamic getVariable_dyn();

};

} // end namespace src
} // end namespace compiler

#endif /* INCLUDED_src_compiler_VariableNamePool */ 
