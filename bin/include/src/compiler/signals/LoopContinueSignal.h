// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_signals_LoopContinueSignal
#define INCLUDED_src_compiler_signals_LoopContinueSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_bc2421f498fc0bfd_10_new)
HX_DECLARE_CLASS3(src,compiler,signals,ExitSignal)
HX_DECLARE_CLASS3(src,compiler,signals,LoopContinueSignal)

namespace src{
namespace compiler{
namespace signals{


class HXCPP_CLASS_ATTRIBUTES LoopContinueSignal_obj : public  ::src::compiler::signals::ExitSignal_obj
{
	public:
		typedef  ::src::compiler::signals::ExitSignal_obj super;
		typedef LoopContinueSignal_obj OBJ_;
		LoopContinueSignal_obj();

	public:
		enum { _hx_ClassId = 0x0db3aa3b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.signals.LoopContinueSignal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.signals.LoopContinueSignal"); }

		hx::ObjectPtr< LoopContinueSignal_obj > __new() {
			hx::ObjectPtr< LoopContinueSignal_obj > __this = new LoopContinueSignal_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< LoopContinueSignal_obj > __alloc(hx::Ctx *_hx_ctx) {
			LoopContinueSignal_obj *__this = (LoopContinueSignal_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LoopContinueSignal_obj), true, "src.compiler.signals.LoopContinueSignal"));
			*(void **)__this = LoopContinueSignal_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bc2421f498fc0bfd_10_new)
HXDLIN(  10)		__this->super::__construct(HX_("",00,00,00,00));
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoopContinueSignal_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LoopContinueSignal","\xd3","\x8f","\x9e","\x97"); }

		::String getName();

};

} // end namespace src
} // end namespace compiler
} // end namespace signals

#endif /* INCLUDED_src_compiler_signals_LoopContinueSignal */ 
