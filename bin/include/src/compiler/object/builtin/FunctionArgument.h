// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_FunctionArgument
#define INCLUDED_src_compiler_object_builtin_FunctionArgument

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS4(src,compiler,object,builtin,FunctionArgument)

namespace src{
namespace compiler{
namespace object{
namespace builtin{


class HXCPP_CLASS_ATTRIBUTES FunctionArgument_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FunctionArgument_obj OBJ_;
		FunctionArgument_obj();

	public:
		enum { _hx_ClassId = 0x01db661a };

		void __construct(::String name,bool kwd,bool collector, ::src::compiler::object::Object _default);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.FunctionArgument")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.FunctionArgument"); }
		static hx::ObjectPtr< FunctionArgument_obj > __new(::String name,bool kwd,bool collector, ::src::compiler::object::Object _default);
		static hx::ObjectPtr< FunctionArgument_obj > __alloc(hx::Ctx *_hx_ctx,::String name,bool kwd,bool collector, ::src::compiler::object::Object _default);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FunctionArgument_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FunctionArgument","\xd5","\x89","\x6d","\xb7"); }

		::String name;
		bool kwd;
		bool collector;
		 ::src::compiler::object::Object _default;
		 ::src::compiler::object::Object getDefault();
		::Dynamic getDefault_dyn();

		::String getName();
		::Dynamic getName_dyn();

		bool isKwd();
		::Dynamic isKwd_dyn();

		bool isCollector();
		::Dynamic isCollector_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_FunctionArgument */ 