// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_FunctionCode
#define INCLUDED_src_compiler_object_builtin_FunctionCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(src,compiler,commands,Command)
HX_DECLARE_CLASS4(src,compiler,object,builtin,FunctionArgument)
HX_DECLARE_CLASS4(src,compiler,object,builtin,FunctionCode)

namespace src{
namespace compiler{
namespace object{
namespace builtin{


class HXCPP_CLASS_ATTRIBUTES FunctionCode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FunctionCode_obj OBJ_;
		FunctionCode_obj();

	public:
		enum { _hx_ClassId = 0x4fa1564a };

		void __construct( ::src::compiler::commands::Command code,::Array< ::Dynamic> args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.FunctionCode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.FunctionCode"); }
		static hx::ObjectPtr< FunctionCode_obj > __new( ::src::compiler::commands::Command code,::Array< ::Dynamic> args);
		static hx::ObjectPtr< FunctionCode_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::commands::Command code,::Array< ::Dynamic> args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FunctionCode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FunctionCode","\x85","\x40","\xd2","\xf0"); }

		 ::src::compiler::commands::Command code;
		::Array< ::Dynamic> args;
		int positional;
};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_FunctionCode */ 