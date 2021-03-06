// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler__Core_OperativeCapture
#define INCLUDED_src_compiler__Core_OperativeCapture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS3(src,compiler,_Core,OperativeCapture)

namespace src{
namespace compiler{
namespace _Core{


class HXCPP_CLASS_ATTRIBUTES OperativeCapture_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OperativeCapture_obj OBJ_;
		OperativeCapture_obj();

	public:
		enum { _hx_ClassId = 0x4672bace };

		void __construct(::Array< ::String > end,::Array< ::String > startContent,::Array< ::String > endContent, ::Dynamic checkOverride);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler._Core.OperativeCapture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler._Core.OperativeCapture"); }
		static hx::ObjectPtr< OperativeCapture_obj > __new(::Array< ::String > end,::Array< ::String > startContent,::Array< ::String > endContent, ::Dynamic checkOverride);
		static hx::ObjectPtr< OperativeCapture_obj > __alloc(hx::Ctx *_hx_ctx,::Array< ::String > end,::Array< ::String > startContent,::Array< ::String > endContent, ::Dynamic checkOverride);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OperativeCapture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OperativeCapture","\x2f","\x0f","\xb9","\xf1"); }

		::Array< ::String > end;
		::Array< ::String > startContent;
		::Array< ::String > endContent;
		 ::Dynamic checkOverride;
		Dynamic checkOverride_dyn() { return checkOverride;}
		 ::Dynamic lastData;
		bool isStart( ::src::ast::Token token);
		::Dynamic isStart_dyn();

		bool isEnd( ::src::ast::Token token, ::src::ast::Token nextToken);
		::Dynamic isEnd_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace _Core

#endif /* INCLUDED_src_compiler__Core_OperativeCapture */ 
