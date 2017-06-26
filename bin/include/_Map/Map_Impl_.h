// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED__Map_Map_Impl_
#define INCLUDED__Map_Map_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_Map,Map_Impl_)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace _Map{


class HXCPP_CLASS_ATTRIBUTES Map_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Map_Impl__obj OBJ_;
		Map_Impl__obj();

	public:
		enum { _hx_ClassId = 0x691c58ff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="_Map.Map_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"_Map.Map_Impl_"); }

		hx::ObjectPtr< Map_Impl__obj > __new() {
			hx::ObjectPtr< Map_Impl__obj > __this = new Map_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Map_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Map_Impl__obj *__this = (Map_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Map_Impl__obj), false, "_Map.Map_Impl_"));
			*(void **)__this = Map_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Map_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Map_Impl_","\x1c","\x04","\xa7","\x9c"); }

		static void set(::Dynamic this1, ::Dynamic key, ::Dynamic value);
		static ::Dynamic set_dyn();

		static  ::Dynamic get(::Dynamic this1, ::Dynamic key);
		static ::Dynamic get_dyn();

		static bool exists(::Dynamic this1, ::Dynamic key);
		static ::Dynamic exists_dyn();

		static bool remove(::Dynamic this1, ::Dynamic key);
		static ::Dynamic remove_dyn();

		static  ::Dynamic keys(::Dynamic this1);
		static ::Dynamic keys_dyn();

		static  ::Dynamic iterator(::Dynamic this1);
		static ::Dynamic iterator_dyn();

		static ::String toString(::Dynamic this1);
		static ::Dynamic toString_dyn();

		static  ::Dynamic arrayWrite(::Dynamic this1, ::Dynamic k, ::Dynamic v);
		static ::Dynamic arrayWrite_dyn();

		static  ::haxe::ds::StringMap toStringMap(::Dynamic t);
		static ::Dynamic toStringMap_dyn();

		static  ::haxe::ds::IntMap toIntMap(::Dynamic t);
		static ::Dynamic toIntMap_dyn();

		static  ::haxe::ds::EnumValueMap toEnumValueMapMap(::Dynamic t);
		static ::Dynamic toEnumValueMapMap_dyn();

		static  ::haxe::ds::ObjectMap toObjectMap(::Dynamic t);
		static ::Dynamic toObjectMap_dyn();

		static  ::haxe::ds::StringMap fromStringMap( ::haxe::ds::StringMap map);
		static ::Dynamic fromStringMap_dyn();

		static  ::haxe::ds::IntMap fromIntMap( ::haxe::ds::IntMap map);
		static ::Dynamic fromIntMap_dyn();

		static  ::haxe::ds::ObjectMap fromObjectMap( ::haxe::ds::ObjectMap map);
		static ::Dynamic fromObjectMap_dyn();

};

} // end namespace _Map

#endif /* INCLUDED__Map_Map_Impl_ */ 
