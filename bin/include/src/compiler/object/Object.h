// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_src_compiler_object_Object
#define INCLUDED_src_compiler_object_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(src,compiler,Scope)
HX_DECLARE_CLASS3(src,compiler,object,Object)
HX_DECLARE_CLASS3(src,compiler,object,ObjectType)
HX_DECLARE_CLASS4(src,compiler,object,builtin,BoolObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,FloatObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,IntObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,IteratorObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,ListObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,MapObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,StringObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,TupleObject)
HX_DECLARE_CLASS4(src,compiler,object,builtin,ValuedObject)

namespace src{
namespace compiler{
namespace object{


class HXCPP_CLASS_ATTRIBUTES Object_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Object_obj OBJ_;
		Object_obj();

	public:
		enum { _hx_ClassId = 0x15de4261 };

		void __construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members,::Array< ::Dynamic> args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="src.compiler.object.Object")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"src.compiler.object.Object"); }
		static hx::ObjectPtr< Object_obj > __new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members,::Array< ::Dynamic> args);
		static hx::ObjectPtr< Object_obj > __alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members,::Array< ::Dynamic> args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Object_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Object","\xdf","\xf2","\xd3","\x49"); }

		 ::haxe::ds::StringMap members;
		 ::src::compiler::Scope scope;
		 ::src::compiler::object::ObjectType type;
		virtual  ::src::compiler::object::Object copy();
		::Dynamic copy_dyn();

		 ::src::compiler::object::Object _value(::String type, ::Dynamic value,::Array< ::Dynamic> args);
		::Dynamic _value_dyn();

		 ::src::compiler::object::builtin::FloatObject _float(Float value,::Array< ::Dynamic> args);
		::Dynamic _float_dyn();

		 ::src::compiler::object::builtin::IntObject _int(int value,::Array< ::Dynamic> args);
		::Dynamic _int_dyn();

		 ::src::compiler::object::builtin::BoolObject _bool(bool value,::Array< ::Dynamic> args);
		::Dynamic _bool_dyn();

		 ::src::compiler::object::builtin::StringObject _str(::String value,::Array< ::Dynamic> args);
		::Dynamic _str_dyn();

		 ::src::compiler::object::builtin::IteratorObject _iter(::Array< ::Dynamic> value,::Array< ::Dynamic> args);
		::Dynamic _iter_dyn();

		 ::src::compiler::object::builtin::ListObject _list(::Array< ::Dynamic> values,::Array< ::Dynamic> args);
		::Dynamic _list_dyn();

		 ::src::compiler::object::builtin::TupleObject _tuple(::Array< ::Dynamic> values,::Array< ::Dynamic> args);
		::Dynamic _tuple_dyn();

		bool isInstance(::String type);
		::Dynamic isInstance_dyn();

		 ::src::compiler::object::ObjectType getType();
		::Dynamic getType_dyn();

		 ::src::compiler::Scope getScope();
		::Dynamic getScope_dyn();

		virtual  ::haxe::ds::StringMap getMembers();
		::Dynamic getMembers_dyn();

		virtual  ::src::compiler::object::Object getMember(::String name);
		::Dynamic getMember_dyn();

		 ::src::compiler::object::Object callMember(::String name,::Array< ::Dynamic> args);
		::Dynamic callMember_dyn();

		virtual void setMember(::String name, ::src::compiler::object::Object obj);
		::Dynamic setMember_dyn();

		virtual void deleteMember(::String name);
		::Dynamic deleteMember_dyn();

		virtual bool hasMember(::String name);
		::Dynamic hasMember_dyn();

		virtual void init(::Array< ::Dynamic> args);
		::Dynamic init_dyn();

		void bind( ::src::compiler::object::Object obj);
		::Dynamic bind_dyn();

		virtual  ::src::compiler::object::Object call(::Array< ::Dynamic> values);
		::Dynamic call_dyn();

		 ::src::compiler::object::Object getfield( ::src::compiler::object::Object index);
		::Dynamic getfield_dyn();

		 ::src::compiler::object::builtin::BoolObject hasfield( ::src::compiler::object::Object index);
		::Dynamic hasfield_dyn();

		void setfield( ::src::compiler::object::Object index, ::src::compiler::object::Object member);
		::Dynamic setfield_dyn();

		void delfield( ::src::compiler::object::Object index);
		::Dynamic delfield_dyn();

		 ::src::compiler::object::builtin::ListObject getfields();
		::Dynamic getfields_dyn();

		 ::src::compiler::object::builtin::ListObject getmembers();
		::Dynamic getmembers_dyn();

		virtual  ::src::compiler::object::Object get( ::src::compiler::object::Object index);
		::Dynamic get_dyn();

		virtual void set( ::src::compiler::object::Object index, ::src::compiler::object::Object obj);
		::Dynamic set_dyn();

		virtual void _hx_delete( ::src::compiler::object::Object index);
		::Dynamic _hx_delete_dyn();

		virtual  ::src::compiler::object::builtin::IntObject _hx_int();
		::Dynamic _hx_int_dyn();

		virtual  ::src::compiler::object::builtin::FloatObject _hx_float();
		::Dynamic _hx_float_dyn();

		virtual  ::src::compiler::object::builtin::ListObject list();
		::Dynamic list_dyn();

		virtual  ::src::compiler::object::builtin::TupleObject tuple();
		::Dynamic tuple_dyn();

		virtual  ::src::compiler::object::builtin::MapObject map();
		::Dynamic map_dyn();

		virtual  ::src::compiler::object::Object shiftright( ::src::compiler::object::Object other);
		::Dynamic shiftright_dyn();

		virtual  ::src::compiler::object::Object rshiftright( ::src::compiler::object::Object other);
		::Dynamic rshiftright_dyn();

		virtual  ::src::compiler::object::Object shiftleft( ::src::compiler::object::Object other);
		::Dynamic shiftleft_dyn();

		virtual  ::src::compiler::object::Object rshiftleft( ::src::compiler::object::Object other);
		::Dynamic rshiftleft_dyn();

		virtual  ::src::compiler::object::Object add( ::src::compiler::object::Object other);
		::Dynamic add_dyn();

		virtual  ::src::compiler::object::Object sub( ::src::compiler::object::Object other);
		::Dynamic sub_dyn();

		virtual  ::src::compiler::object::Object rsub( ::src::compiler::object::Object other);
		::Dynamic rsub_dyn();

		virtual  ::src::compiler::object::Object mult( ::src::compiler::object::Object other);
		::Dynamic mult_dyn();

		virtual  ::src::compiler::object::Object div( ::src::compiler::object::Object other);
		::Dynamic div_dyn();

		virtual  ::src::compiler::object::Object rdiv( ::src::compiler::object::Object other);
		::Dynamic rdiv_dyn();

		virtual  ::src::compiler::object::Object intdiv( ::src::compiler::object::Object other);
		::Dynamic intdiv_dyn();

		virtual  ::src::compiler::object::Object rintdiv( ::src::compiler::object::Object other);
		::Dynamic rintdiv_dyn();

		virtual  ::src::compiler::object::Object pow( ::src::compiler::object::Object other);
		::Dynamic pow_dyn();

		virtual  ::src::compiler::object::Object rpow( ::src::compiler::object::Object other);
		::Dynamic rpow_dyn();

		virtual  ::src::compiler::object::Object mod( ::src::compiler::object::Object other);
		::Dynamic mod_dyn();

		virtual  ::src::compiler::object::Object rmod( ::src::compiler::object::Object other);
		::Dynamic rmod_dyn();

		virtual  ::src::compiler::object::builtin::IntObject len();
		::Dynamic len_dyn();

		virtual  ::src::compiler::object::builtin::StringObject str();
		::Dynamic str_dyn();

		virtual  ::src::compiler::object::builtin::BoolObject _hx_bool();
		::Dynamic _hx_bool_dyn();

		virtual  ::src::compiler::object::Object _hx_and( ::src::compiler::object::Object other);
		::Dynamic _hx_and_dyn();

		virtual  ::src::compiler::object::Object _hx_or( ::src::compiler::object::Object other);
		::Dynamic _hx_or_dyn();

		virtual  ::src::compiler::object::Object _hx_xor( ::src::compiler::object::Object other);
		::Dynamic _hx_xor_dyn();

		virtual  ::src::compiler::object::Object _hx_not();
		::Dynamic _hx_not_dyn();

		virtual  ::src::compiler::object::Object eq( ::src::compiler::object::Object other);
		::Dynamic eq_dyn();

		virtual  ::src::compiler::object::Object neq( ::src::compiler::object::Object other);
		::Dynamic neq_dyn();

		virtual  ::src::compiler::object::Object ls( ::src::compiler::object::Object other);
		::Dynamic ls_dyn();

		virtual  ::src::compiler::object::Object lseq( ::src::compiler::object::Object other);
		::Dynamic lseq_dyn();

		virtual  ::src::compiler::object::Object gr( ::src::compiler::object::Object other);
		::Dynamic gr_dyn();

		virtual  ::src::compiler::object::Object greq( ::src::compiler::object::Object other);
		::Dynamic greq_dyn();

		virtual  ::src::compiler::object::Object complement();
		::Dynamic complement_dyn();

		virtual  ::src::compiler::object::Object iter();
		::Dynamic iter_dyn();

		virtual  ::src::compiler::object::Object next();
		::Dynamic next_dyn();

		virtual  ::src::compiler::object::builtin::BoolObject hasNext();
		::Dynamic hasNext_dyn();

		virtual  ::src::compiler::object::Object isin( ::src::compiler::object::Object other);
		::Dynamic isin_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		int rawInt();
		::Dynamic rawInt_dyn();

		Float rawFloat();
		::Dynamic rawFloat_dyn();

		bool rawBool();
		::Dynamic rawBool_dyn();

		::String rawString();
		::Dynamic rawString_dyn();

		virtual ::String getHash();
		::Dynamic getHash_dyn();

};

} // end namespace src
} // end namespace compiler
} // end namespace object

#endif /* INCLUDED_src_compiler_object_Object */ 
