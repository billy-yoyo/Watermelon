// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_Builtins
#define INCLUDED_src_compiler_object_builtin_Builtins

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,object,ObjectType)
HX_DECLARE_CLASS4(src,compiler,object,builtin,Builtins)

namespace src{
namespace compiler{
namespace object{
namespace builtin{


class HXCPP_CLASS_ATTRIBUTES Builtins_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Builtins_obj OBJ_;
		Builtins_obj();

	public:
		enum { _hx_ClassId = 0x5ed98371 };

		void __construct( ::src::compiler::Scope scope);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.Builtins")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.Builtins"); }
		static hx::ObjectPtr< Builtins_obj > __new( ::src::compiler::Scope scope);
		static hx::ObjectPtr< Builtins_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Builtins_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Builtins","\x90","\x08","\x0d","\x38"); }

		 ::src::compiler::object::ObjectType builtinFuncType;
		 ::src::compiler::object::ObjectType functionType;
		 ::src::compiler::object::ObjectType listType;
		 ::src::compiler::object::ObjectType tupleType;
		 ::src::compiler::object::ObjectType mapType;
		 ::src::compiler::object::ObjectType stringType;
		 ::src::compiler::object::ObjectType intType;
		 ::src::compiler::object::ObjectType floatType;
		 ::src::compiler::object::ObjectType boolType;
		 ::src::compiler::object::ObjectType noneType;
		 ::src::compiler::object::ObjectType objTypeType;
		 ::src::compiler::object::ObjectType pairType;
		 ::src::compiler::object::ObjectType iteratorType;
		 ::src::compiler::object::ObjectType bytesType;
		 ::src::compiler::object::ObjectType spliceType;
		 ::src::compiler::object::ObjectType moduleType;
		 ::src::compiler::object::ObjectType signalType;
		 ::src::compiler::object::ObjectType coroType;
		 ::src::compiler::object::ObjectType coroFuncType;
		 ::src::compiler::object::ObjectType coroLoopType;
		 ::src::compiler::object::ObjectType yieldType;
		::Array< ::Dynamic> types;
		 ::haxe::ds::StringMap objects;
		 ::src::compiler::Scope root;
		void init();
		::Dynamic init_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_Builtins */ 
