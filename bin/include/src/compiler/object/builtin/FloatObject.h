// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_FloatObject
#define INCLUDED_src_compiler_object_builtin_FloatObject

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


class HXCPP_CLASS_ATTRIBUTES FloatObject_obj : public  ::src::compiler::object::builtin::ValuedObject_obj
{
	public:
		typedef  ::src::compiler::object::builtin::ValuedObject_obj super;
		typedef FloatObject_obj OBJ_;
		FloatObject_obj();

	public:
		enum { _hx_ClassId = 0x3a31b952 };

		void __construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.FloatObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.FloatObject"); }
		static hx::ObjectPtr< FloatObject_obj > __new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		static hx::ObjectPtr< FloatObject_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FloatObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FloatObject","\x5b","\x6d","\x93","\xa0"); }

		int value;
		void setup( ::Dynamic value);

		int getValue();
		::Dynamic getValue_dyn();

		 ::src::compiler::object::Object add( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object sub( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object rsub( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object mult( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object div( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object rdiv( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object intdiv( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object rintdiv( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object pow( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object rpow( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object mod( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object rmod( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object eq( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object neq( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object ls( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object lseq( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object gr( ::src::compiler::object::Object other);

		 ::src::compiler::object::Object greq( ::src::compiler::object::Object other);

		 ::src::compiler::object::builtin::IntObject _hx_int();

		 ::src::compiler::object::builtin::FloatObject _hx_float();

		 ::src::compiler::object::builtin::StringObject str();

		 ::src::compiler::object::builtin::BoolObject _hx_bool();

		::String getHash();

};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_FloatObject */ 
