// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_Signal
#define INCLUDED_src_compiler_object_builtin_Signal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS4(src,compiler,object,builtin,Signal)

namespace src{
namespace compiler{
namespace object{
namespace builtin{


class HXCPP_CLASS_ATTRIBUTES Signal_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Signal_obj OBJ_;
		Signal_obj();

	public:
		enum { _hx_ClassId = 0x3f13668d };

		void __construct(::String type, ::src::compiler::object::Object value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.Signal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.Signal"); }
		static hx::ObjectPtr< Signal_obj > __new(::String type, ::src::compiler::object::Object value);
		static hx::ObjectPtr< Signal_obj > __alloc(hx::Ctx *_hx_ctx,::String type, ::src::compiler::object::Object value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Signal_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Signal","\x88","\xa2","\x1a","\xe9"); }

		::String type;
		 ::src::compiler::object::Object value;
};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin

#endif /* INCLUDED_src_compiler_object_builtin_Signal */ 
