// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_ast_GlobalProcessor
#define INCLUDED_src_ast_GlobalProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(src,ast,GlobalProcessor)
HX_DECLARE_CLASS2(src,ast,Token)
HX_DECLARE_CLASS2(src,ast,TokenProcessor)
HX_DECLARE_CLASS3(src,ast,base,RootToken)

namespace src{
namespace ast{


class HXCPP_CLASS_ATTRIBUTES GlobalProcessor_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GlobalProcessor_obj OBJ_;
		GlobalProcessor_obj();

	public:
		enum { _hx_ClassId = 0x6ae8e5e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="src.ast.GlobalProcessor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"src.ast.GlobalProcessor"); }

		hx::ObjectPtr< GlobalProcessor_obj > __new() {
			hx::ObjectPtr< GlobalProcessor_obj > __this = new GlobalProcessor_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GlobalProcessor_obj > __alloc(hx::Ctx *_hx_ctx) {
			GlobalProcessor_obj *__this = (GlobalProcessor_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlobalProcessor_obj), false, "src.ast.GlobalProcessor"));
			*(void **)__this = GlobalProcessor_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlobalProcessor_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GlobalProcessor","\x4f","\xaf","\x36","\x45"); }

		static void __boot();
		static  ::src::ast::TokenProcessor baseProcessor;
		static  ::src::ast::base::RootToken process(::String s);
		static ::Dynamic process_dyn();

};

} // end namespace src
} // end namespace ast

#endif /* INCLUDED_src_ast_GlobalProcessor */ 
