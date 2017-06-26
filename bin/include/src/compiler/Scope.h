// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_Scope
#define INCLUDED_src_compiler_Scope

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS3(src,compiler,object,ObjectType)
HX_DECLARE_CLASS4(src,compiler,object,builtin,Builtins)

namespace src{
namespace compiler{


class HXCPP_CLASS_ATTRIBUTES Scope_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Scope_obj OBJ_;
		Scope_obj();

	public:
		enum { _hx_ClassId = 0x60e52135 };

		void __construct(::String name, ::src::compiler::Scope parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.Scope")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.Scope"); }
		static hx::ObjectPtr< Scope_obj > __new(::String name, ::src::compiler::Scope parent);
		static hx::ObjectPtr< Scope_obj > __alloc(hx::Ctx *_hx_ctx,::String name, ::src::compiler::Scope parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scope_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Scope","\x74","\xe1","\x06","\x0c"); }

		 ::src::compiler::Scope root;
		 ::src::compiler::Scope parent;
		::String name;
		 ::haxe::ds::StringMap variables;
		 ::haxe::ds::StringMap types;
		 ::src::compiler::object::builtin::Builtins builtins;
		int indepFuncScopes;
		int indepTypeScopes;
		::Array< ::String > stringPool;
		::Array< ::Dynamic> children;
		::String nextFuncScopeName();
		::Dynamic nextFuncScopeName_dyn();

		::String nextTypeScopeName();
		::Dynamic nextTypeScopeName_dyn();

		 ::src::compiler::object::Object createObject(::String type,::String objName,::Array< ::Dynamic> args);
		::Dynamic createObject_dyn();

		 ::src::compiler::object::builtin::Builtins getBuiltins();
		::Dynamic getBuiltins_dyn();

		 ::src::compiler::Scope getParent();
		::Dynamic getParent_dyn();

		 ::src::compiler::Scope getRoot();
		::Dynamic getRoot_dyn();

		::String getName();
		::Dynamic getName_dyn();

		 ::haxe::ds::StringMap getVariables();
		::Dynamic getVariables_dyn();

		 ::src::compiler::object::Object getVariable(::String name);
		::Dynamic getVariable_dyn();

		 ::src::compiler::Scope setVariable(::String name, ::src::compiler::object::Object obj);
		::Dynamic setVariable_dyn();

		bool hasVariable(::String name);
		::Dynamic hasVariable_dyn();

		bool deleteVariable(::String name);
		::Dynamic deleteVariable_dyn();

		 ::haxe::ds::StringMap getTypes();
		::Dynamic getTypes_dyn();

		 ::src::compiler::object::ObjectType getType(::String name, ::Dynamic obfuscated);
		::Dynamic getType_dyn();

		 ::src::compiler::Scope setType(::String name, ::src::compiler::object::ObjectType type, ::Dynamic obfuscated);
		::Dynamic setType_dyn();

		bool hasType(::String name, ::Dynamic obfuscated);
		::Dynamic hasType_dyn();

		void reset();
		::Dynamic reset_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace src
} // end namespace compiler

#endif /* INCLUDED_src_compiler_Scope */ 
