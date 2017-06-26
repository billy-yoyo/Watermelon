// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_ObjectTypeObject
#define INCLUDED_src_compiler_object_builtin_ObjectTypeObject

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
HX_DECLARE_CLASS4(src,compiler,object,builtin,ObjectTypeObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,StringObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,ValuedObject)

namespace src{
namespace compiler{
namespace object{
namespace builtin{


class HXCPP_CLASS_ATTRIBUTES ObjectTypeObject_obj : public  ::src::compiler::object::builtin::ValuedObject_obj
{
	public:
		typedef  ::src::compiler::object::builtin::ValuedObject_obj super;
		typedef ObjectTypeObject_obj OBJ_;
		ObjectTypeObject_obj();

	public:
		enum { _hx_ClassId = 0x3c2154b9 };

		void __construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.ObjectTypeObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.ObjectTypeObject"); }
		static hx::ObjectPtr< ObjectTypeObject_obj > __new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		static hx::ObjectPtr< ObjectTypeObject_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectTypeObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ObjectTypeObject","\xd8","\x90","\x1d","\xf7"); }

		static bool isSubType(hx::Class t0,hx::Class t1);
		static ::Dynamic isSubType_dyn();

		 ::src::compiler::object::ObjectType value;
		void setup( ::Dynamic value);

		 ::src::compiler::object::ObjectType getValue();
		::Dynamic getValue_dyn();

		 ::haxe::ds::StringMap getMembers();

		void setMember(::String name, ::src::compiler::object::Object obj);

		 ::src::compiler::object::Object getMember(::String name);

		void deleteMember(::String name);

		bool hasMember(::String name);

		 ::src::compiler::object::builtin::StringObject str();

		 ::src::compiler::object::Object call(::Array< ::Dynamic> values);

};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_ObjectTypeObject */ 