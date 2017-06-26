// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_RangeObject
#define INCLUDED_src_compiler_object_builtin_RangeObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS3(src,compiler,object,ObjectType)
HX_DECLARE_CLASS4(src,compiler,object,builtin,BoolObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,RangeObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,ValuedObject)

namespace src{
namespace compiler{
namespace object{
namespace builtin{


class HXCPP_CLASS_ATTRIBUTES RangeObject_obj : public  ::src::compiler::object::Object_obj
{
	public:
		typedef  ::src::compiler::object::Object_obj super;
		typedef RangeObject_obj OBJ_;
		RangeObject_obj();

	public:
		enum { _hx_ClassId = 0x75d22617 };

		void __construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type,Float start,Float end,Float step);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.RangeObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.RangeObject"); }
		static hx::ObjectPtr< RangeObject_obj > __new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type,Float start,Float end,Float step);
		static hx::ObjectPtr< RangeObject_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type,Float start,Float end,Float step);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RangeObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RangeObject","\x3c","\x9c","\x48","\x7c"); }

		Float start;
		Float end;
		Float step;
		Float progress;
		 ::src::compiler::object::Object next();

		 ::src::compiler::object::builtin::BoolObject hasNext();

};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_RangeObject */ 
