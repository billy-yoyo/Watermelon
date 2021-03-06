// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_builtin_coroutine_CoroutinePacket
#define INCLUDED_src_compiler_object_builtin_coroutine_CoroutinePacket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS5(src,compiler,object,builtin,coroutine,CoroutineObject)
HX_DECLARE_CLASS5(src,compiler,object,builtin,coroutine,CoroutinePacket)

namespace src{
namespace compiler{
namespace object{
namespace builtin{
namespace coroutine{


class HXCPP_CLASS_ATTRIBUTES CoroutinePacket_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CoroutinePacket_obj OBJ_;
		CoroutinePacket_obj();

	public:
		enum { _hx_ClassId = 0x6530d715 };

		void __construct( ::src::compiler::object::Object object, ::src::compiler::object::builtin::coroutine::CoroutineObject source);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.builtin.coroutine.CoroutinePacket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.builtin.coroutine.CoroutinePacket"); }
		static hx::ObjectPtr< CoroutinePacket_obj > __new( ::src::compiler::object::Object object, ::src::compiler::object::builtin::coroutine::CoroutineObject source);
		static hx::ObjectPtr< CoroutinePacket_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::object::Object object, ::src::compiler::object::builtin::coroutine::CoroutineObject source);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CoroutinePacket_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CoroutinePacket","\x60","\x77","\xf5","\x98"); }

		 ::src::compiler::object::Object object;
		 ::src::compiler::object::builtin::coroutine::CoroutineObject source;
		 ::src::compiler::object::builtin::coroutine::CoroutineObject readBy;
		Float sent;
		void setTime();
		::Dynamic setTime_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
} // end namespace coroutine

#endif /* INCLUDED_src_compiler_object_builtin_coroutine_CoroutinePacket */ 
