// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_bytecode_MatchFound
#define INCLUDED_src_compiler_bytecode_MatchFound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bbaf458bb73166d1_119_new)
HX_DECLARE_CLASS3(src,compiler,bytecode,MatchFound)

namespace src{
namespace compiler{
namespace bytecode{


class HXCPP_CLASS_ATTRIBUTES MatchFound_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MatchFound_obj OBJ_;
		MatchFound_obj();

	public:
		enum { _hx_ClassId = 0x6d14e095 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="src.compiler.bytecode.MatchFound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"src.compiler.bytecode.MatchFound"); }

		hx::ObjectPtr< MatchFound_obj > __new() {
			hx::ObjectPtr< MatchFound_obj > __this = new MatchFound_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< MatchFound_obj > __alloc(hx::Ctx *_hx_ctx) {
			MatchFound_obj *__this = (MatchFound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MatchFound_obj), false, "src.compiler.bytecode.MatchFound"));
			*(void **)__this = MatchFound_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bbaf458bb73166d1_119_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatchFound_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MatchFound","\xdd","\x72","\x69","\xf0"); }

};

} // end namespace src
} // end namespace compiler
} // end namespace bytecode

#endif /* INCLUDED_src_compiler_bytecode_MatchFound */ 