// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_signals_CoroutineEmptyReadSignal
#define INCLUDED_src_compiler_signals_CoroutineEmptyReadSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_756e2ec8d6561660_7_new)
HX_DECLARE_CLASS3(src,compiler,signals,CoroutineEmptyReadSignal)
HX_DECLARE_CLASS3(src,compiler,signals,ExitSignal)

namespace src{
namespace compiler{
namespace signals{


class HXCPP_CLASS_ATTRIBUTES CoroutineEmptyReadSignal_obj : public  ::src::compiler::signals::ExitSignal_obj
{
	public:
		typedef  ::src::compiler::signals::ExitSignal_obj super;
		typedef CoroutineEmptyReadSignal_obj OBJ_;
		CoroutineEmptyReadSignal_obj();

	public:
		enum { _hx_ClassId = 0x0462ed27 };

		void __construct(::String msg);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.signals.CoroutineEmptyReadSignal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.signals.CoroutineEmptyReadSignal"); }

		hx::ObjectPtr< CoroutineEmptyReadSignal_obj > __new(::String msg) {
			hx::ObjectPtr< CoroutineEmptyReadSignal_obj > __this = new CoroutineEmptyReadSignal_obj();
			__this->__construct(msg);
			return __this;
		}

		static hx::ObjectPtr< CoroutineEmptyReadSignal_obj > __alloc(hx::Ctx *_hx_ctx,::String msg) {
			CoroutineEmptyReadSignal_obj *__this = (CoroutineEmptyReadSignal_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CoroutineEmptyReadSignal_obj), true, "src.compiler.signals.CoroutineEmptyReadSignal"));
			*(void **)__this = CoroutineEmptyReadSignal_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_756e2ec8d6561660_7_new)
HXDLIN(   7)		__this->super::__construct(msg);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CoroutineEmptyReadSignal_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CoroutineEmptyReadSignal","\x73","\x08","\x37","\x02"); }

		::String getName();

};

} // end namespace src
} // end namespace compiler
} // end namespace signals

#endif /* INCLUDED_src_compiler_signals_CoroutineEmptyReadSignal */ 
