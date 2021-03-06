// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_BoolObject
#define INCLUDED_src_compiler_object_builtin_BoolObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS3(src,compiler,object,ObjectType)
HX_DECLARE_CLASS4(src,compiler,object,builtin,BoolObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,FloatObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,IntObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,StringObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,ValuedObject)

namespace src{
namespace compiler{
namespace object{
namespace builtin{


class HXCPP_CLASS_ATTRIBUTES BoolObject_obj : public  ::src::compiler::object::builtin::ValuedObject_obj
{
	public:
		typedef  ::src::compiler::object::builtin::ValuedObject_obj super;
		typedef BoolObject_obj OBJ_;
		BoolObject_obj();

	public:
		enum { _hx_ClassId = 0x7aaaabca };

		void __construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.BoolObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.BoolObject"); }
		static hx::ObjectPtr< BoolObject_obj > __new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		static hx::ObjectPtr< BoolObject_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoolObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BoolObject","\xa9","\xf6","\xa0","\xab"); }

		bool value;
		void setup( ::Dynamic value);

		bool getValue();
		::Dynamic getValue_dyn();

		 ::src::compiler::object::builtin::BoolObject _hx_bool();

		 ::src::compiler::object::Object _hx_not();

		 ::src::compiler::object::Object _hx_and( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object _hx_or( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object _hx_xor( ::src::compiler::object::Object other);

		 ::src::compiler::object::builtin::IntObject _hx_int();

		 ::src::compiler::object::builtin::FloatObject _hx_float();

		 ::src::compiler::object::builtin::StringObject str();

		 ::src::compiler::object::Object eq( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object neq( ::src::compiler::object::Object other);

		int getHash();

};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_BoolObject */ 
