// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_BoolObject
#include <src/compiler/object/builtin/BoolObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_IntObject
#include <src/compiler/object/builtin/IntObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_IteratorObject
#include <src/compiler/object/builtin/IteratorObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ListObject
#include <src/compiler/object/builtin/ListObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_SpliceObject
#include <src/compiler/object/builtin/SpliceObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_SpliceValue
#include <src/compiler/object/builtin/SpliceValue.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_StringObject
#include <src/compiler/object/builtin/StringObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_TupleObject
#include <src/compiler/object/builtin/TupleObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_IndexOutOfBoundsSignal
#include <src/compiler/signals/IndexOutOfBoundsSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_InvalidFieldAccessSignal
#include <src/compiler/signals/InvalidFieldAccessSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0648d16042b974d1_15_new,"src.compiler.object.builtin.TupleObject","new",0x44d2a524,"src.compiler.object.builtin.TupleObject.new","src/compiler/object/builtin/TupleObject.hx",15,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_20__index,"src.compiler.object.builtin.TupleObject","_index",0x7b07600f,"src.compiler.object.builtin.TupleObject._index","src/compiler/object/builtin/TupleObject.hx",20,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_27_getArray,"src.compiler.object.builtin.TupleObject","getArray",0x3e99e1df,"src.compiler.object.builtin.TupleObject.getArray","src/compiler/object/builtin/TupleObject.hx",27,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_31_get,"src.compiler.object.builtin.TupleObject","get",0x44cd555a,"src.compiler.object.builtin.TupleObject.get","src/compiler/object/builtin/TupleObject.hx",31,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_53_set,"src.compiler.object.builtin.TupleObject","set",0x44d67066,"src.compiler.object.builtin.TupleObject.set","src/compiler/object/builtin/TupleObject.hx",53,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_60_delete,"src.compiler.object.builtin.TupleObject","delete",0x2be43de7,"src.compiler.object.builtin.TupleObject.delete","src/compiler/object/builtin/TupleObject.hx",60,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_68_add,"src.compiler.object.builtin.TupleObject","add",0x44c8c6e5,"src.compiler.object.builtin.TupleObject.add","src/compiler/object/builtin/TupleObject.hx",68,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_81_mult,"src.compiler.object.builtin.TupleObject","mult",0xf2e0beac,"src.compiler.object.builtin.TupleObject.mult","src/compiler/object/builtin/TupleObject.hx",81,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_93_div,"src.compiler.object.builtin.TupleObject","div",0x44cb1215,"src.compiler.object.builtin.TupleObject.div","src/compiler/object/builtin/TupleObject.hx",93,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_106_iter,"src.compiler.object.builtin.TupleObject","iter",0xf03b1bd4,"src.compiler.object.builtin.TupleObject.iter","src/compiler/object/builtin/TupleObject.hx",106,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_112_isin,"src.compiler.object.builtin.TupleObject","isin",0xf03a5d0b,"src.compiler.object.builtin.TupleObject.isin","src/compiler/object/builtin/TupleObject.hx",112,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_118_len,"src.compiler.object.builtin.TupleObject","len",0x44d12099,"src.compiler.object.builtin.TupleObject.len","src/compiler/object/builtin/TupleObject.hx",118,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_124_str,"src.compiler.object.builtin.TupleObject","str",0x44d67d75,"src.compiler.object.builtin.TupleObject.str","src/compiler/object/builtin/TupleObject.hx",124,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_130_tuple,"src.compiler.object.builtin.TupleObject","tuple",0x999729cc,"src.compiler.object.builtin.TupleObject.tuple","src/compiler/object/builtin/TupleObject.hx",130,0x6d940f6e)
HX_LOCAL_STACK_FRAME(_hx_pos_0648d16042b974d1_136_list,"src.compiler.object.builtin.TupleObject","list",0xf22e731a,"src.compiler.object.builtin.TupleObject.list","src/compiler/object/builtin/TupleObject.hx",136,0x6d940f6e)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void TupleObject_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_15_new)
HXLINE(  18)		this->arr = ::Array_obj< ::Dynamic>::__new();
HXLINE(  15)		super::__construct(scope,type,members,value,args);
            	}

Dynamic TupleObject_obj::__CreateEmpty() { return new TupleObject_obj; }

void *TupleObject_obj::_hx_vtable = 0;

Dynamic TupleObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TupleObject_obj > _hx_result = new TupleObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TupleObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x413f66a2) {
		if (inClassId<=(int)0x15de4261) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15de4261;
		} else {
			return inClassId==(int)0x413f66a2;
		}
	} else {
		return inClassId==(int)0x782c6273;
	}
}

int TupleObject_obj::_index(int i){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_20__index)
HXLINE(  21)		if ((i < (int)0)) {
HXLINE(  21)			return (i + this->arr->length);
            		}
HXLINE(  22)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TupleObject_obj,_index,return )

::Array< ::Dynamic> TupleObject_obj::getArray(){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_27_getArray)
HXDLIN(  27)		return this->arr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TupleObject_obj,getArray,return )

 ::src::compiler::object::Object TupleObject_obj::get( ::src::compiler::object::Object index){
            	HX_GC_STACKFRAME(&_hx_pos_0648d16042b974d1_31_get)
HXLINE(  32)		if (this->hasMember(HX_("__get__",16,fe,be,fb))) {
HXLINE(  32)			return this->callMember(HX_("__get__",16,fe,be,fb),::Array_obj< ::Dynamic>::__new(1)->init(0,index));
            		}
HXLINE(  33)		if (index->isInstance(HX_("SpliceType",76,16,08,c6))) {
HXLINE(  34)			 ::src::compiler::object::builtin::SpliceValue splice = hx::TCast<  ::src::compiler::object::builtin::SpliceObject >::cast(index)->getValue(this->arr->length);
HXLINE(  35)			::Array< ::Dynamic> newArr = ::Array_obj< ::Dynamic>::__new();
HXLINE(  36)			int i = splice->start;
HXLINE(  38)			while((i < splice->end)){
HXLINE(  39)				newArr->push(this->arr->__get(i).StaticCast<  ::src::compiler::object::Object >());
HXLINE(  40)				i = (i + splice->step);
            			}
HXLINE(  42)			return this->_tuple(newArr,null());
            		}
HXLINE(  44)		int i1 = this->_index(index->rawInt());
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if ((i1 >= (int)0)) {
HXLINE(  45)			_hx_tmp = (i1 < this->arr->length);
            		}
            		else {
HXLINE(  45)			_hx_tmp = false;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  46)			return this->arr->__get(i1).StaticCast<  ::src::compiler::object::Object >();
            		}
            		else {
HXLINE(  48)			HX_STACK_DO_THROW( ::src::compiler::signals::IndexOutOfBoundsSignal_obj::__alloc( HX_CTX ,(((HX_("Index ",ee,88,87,c8) + i1) + HX_(" is out of bounds, should be between 0 and ",eb,88,ef,1e)) + this->arr->length)));
            		}
HXLINE(  45)		return null();
            	}


void TupleObject_obj::set( ::src::compiler::object::Object index, ::src::compiler::object::Object obj){
            	HX_GC_STACKFRAME(&_hx_pos_0648d16042b974d1_53_set)
HXLINE(  54)		if (this->hasMember(HX_("__set__",22,f4,8d,e4))) {
HXLINE(  54)			this->callMember(HX_("__set__",22,f4,8d,e4),::Array_obj< ::Dynamic>::__new(1)->init(0,index));
HXDLIN(  54)			return;
            		}
HXLINE(  55)		HX_STACK_DO_THROW( ::src::compiler::signals::InvalidFieldAccessSignal_obj::__alloc( HX_CTX ,HX_("Tuples are immutable (cannot set index of tuple)",0a,c0,b9,f3)));
            	}


void TupleObject_obj::_hx_delete( ::src::compiler::object::Object index){
            	HX_GC_STACKFRAME(&_hx_pos_0648d16042b974d1_60_delete)
HXLINE(  61)		if (this->hasMember(HX_("__delete__",2b,27,e2,05))) {
HXLINE(  61)			this->callMember(HX_("__delete__",2b,27,e2,05),::Array_obj< ::Dynamic>::__new(1)->init(0,index));
HXDLIN(  61)			return;
            		}
HXLINE(  62)		HX_STACK_DO_THROW( ::src::compiler::signals::InvalidFieldAccessSignal_obj::__alloc( HX_CTX ,HX_("Tuples are immutable (cannot delete index of tuple)",fb,e5,ca,a4)));
            	}


 ::src::compiler::object::Object TupleObject_obj::add( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_68_add)
HXDLIN(  68)		if (other->isInstance(HX_("ListType",58,7e,af,06))) {
HXDLIN(  68)			::Array< ::Dynamic> _hx_tmp = this->arr;
HXDLIN(  68)			return this->_tuple(_hx_tmp->concat(other->list()->arr),null());
            		}
            		else {
HXLINE(  69)			if (other->isInstance(HX_("TupleType",c2,3e,8e,1a))) {
HXLINE(  69)				::Array< ::Dynamic> _hx_tmp1 = this->arr;
HXDLIN(  69)				return this->_tuple(_hx_tmp1->concat(other->tuple()->arr),null());
            			}
            			else {
HXLINE(  70)				bool _hx_tmp2;
HXDLIN(  70)				if (!(other->hasMember(HX_("__iter__",58,f9,3c,b1)))) {
HXLINE(  70)					_hx_tmp2 = other->hasMember(HX_("__next__",f3,a5,93,1a));
            				}
            				else {
HXLINE(  70)					_hx_tmp2 = true;
            				}
HXDLIN(  70)				if (_hx_tmp2) {
HXLINE(  71)					if (!(other->hasMember(HX_("__next__",f3,a5,93,1a)))) {
HXLINE(  71)						other = other->iter();
            					}
HXLINE(  72)					::Array< ::Dynamic> newArr = this->arr->copy();
HXLINE(  73)					while(other->hasNext()->rawBool()){
HXLINE(  74)						newArr->push(other->next());
            					}
HXLINE(  76)					return this->_tuple(newArr,null());
            				}
            				else {
HXLINE(  77)					return this->_tuple(this->arr->concat(::Array_obj< ::Dynamic>::__new(1)->init(0,other)),null());
            				}
            			}
            		}
HXLINE(  68)		return null();
            	}


 ::src::compiler::object::Object TupleObject_obj::mult( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_81_mult)
HXLINE(  82)		if (this->hasMember(HX_("__mult__",30,02,b3,e2))) {
HXLINE(  82)			return this->callMember(HX_("__mult__",30,02,b3,e2),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  83)		if (other->hasMember(HX_("__mult__",30,02,b3,e2))) {
HXLINE(  83)			other->mult(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  84)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE(  85)		::Array< ::Dynamic> arr = other->list()->arr;
HXLINE(  86)		{
HXLINE(  86)			int _g1 = (int)0;
HXDLIN(  86)			int _g = other->rawInt();
HXDLIN(  86)			while((_g1 < _g)){
HXLINE(  86)				_g1 = (_g1 + (int)1);
HXDLIN(  86)				int i = (_g1 - (int)1);
HXLINE(  87)				result = result->concat(arr);
            			}
            		}
HXLINE(  89)		return this->_tuple(result,null());
            	}


 ::src::compiler::object::Object TupleObject_obj::div( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_93_div)
HXLINE(  94)		if (this->hasMember(HX_("__div__",91,9f,31,44))) {
HXLINE(  94)			return this->callMember(HX_("__div__",91,9f,31,44),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  95)		if (other->hasMember(HX_("__rdiv__",1f,d4,b1,16))) {
HXLINE(  95)			return other->rdiv(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  96)		int div = other->rawInt();
HXLINE(  97)		 ::src::compiler::object::builtin::TupleObject result = hx::TCast<  ::src::compiler::object::builtin::TupleObject >::cast(this->scope->getType(HX_("TupleType",c2,3e,8e,1a),null())->createObject(this->scope,null()));
HXLINE(  98)		::Array< ::Dynamic> arr = result->getArray();
HXLINE(  99)		{
HXLINE(  99)			int _g1 = (int)0;
HXDLIN(  99)			int _g = ::Math_obj::ceil(((Float)this->arr->length / (Float)div));
HXDLIN(  99)			while((_g1 < _g)){
HXLINE(  99)				_g1 = (_g1 + (int)1);
HXDLIN(  99)				int i = (_g1 - (int)1);
HXLINE( 100)				::Array< ::Dynamic> _hx_tmp = this->arr;
HXDLIN( 100)				arr->push(this->_list(_hx_tmp->slice((i * div),div),null()));
            			}
            		}
HXLINE( 102)		return result;
            	}


 ::src::compiler::object::Object TupleObject_obj::iter(){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_106_iter)
HXLINE( 107)		if (this->hasMember(HX_("__iter__",58,f9,3c,b1))) {
HXLINE( 107)			return this->callMember(HX_("__iter__",58,f9,3c,b1),::Array_obj< ::Dynamic>::__new(0));
            		}
HXLINE( 108)		return this->_iter(this->arr,null());
            	}


 ::src::compiler::object::Object TupleObject_obj::isin( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_112_isin)
HXLINE( 113)		if (this->hasMember(HX_("__isin__",4f,36,78,20))) {
HXLINE( 113)			return this->callMember(HX_("__isin__",4f,36,78,20),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 114)		return this->_bool(::src::compiler::object::builtin::ListObject_obj::objectInArray(other,this->arr),null());
            	}


 ::src::compiler::object::builtin::IntObject TupleObject_obj::len(){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_118_len)
HXLINE( 119)		if (this->hasMember(HX_("__len__",15,57,bb,dc))) {
HXLINE( 119)			return hx::TCast<  ::src::compiler::object::builtin::IntObject >::cast(this->callMember(HX_("__len__",15,57,bb,dc),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 120)		return this->_int(this->arr->length,null());
            	}


 ::src::compiler::object::builtin::StringObject TupleObject_obj::str(){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_124_str)
HXLINE( 125)		if (this->hasMember(HX_("__str__",f1,a2,76,ee))) {
HXLINE( 125)			return hx::TCast<  ::src::compiler::object::builtin::StringObject >::cast(this->callMember(HX_("__str__",f1,a2,76,ee),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 126)		return this->_str((HX_("",00,00,00,00) + ::Std_obj::string(this->arr)),null());
            	}


 ::src::compiler::object::builtin::TupleObject TupleObject_obj::tuple(){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_130_tuple)
HXLINE( 131)		if (this->hasMember(HX_("__tuple__",08,52,5a,e5))) {
HXLINE( 131)			return hx::TCast<  ::src::compiler::object::builtin::TupleObject >::cast(this->callMember(HX_("__tuple__",08,52,5a,e5),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 132)		return hx::ObjectPtr<OBJ_>(this);
            	}


 ::src::compiler::object::builtin::ListObject TupleObject_obj::list(){
            	HX_STACKFRAME(&_hx_pos_0648d16042b974d1_136_list)
HXLINE( 137)		if (this->hasMember(HX_("__list__",1e,2e,29,98))) {
HXLINE( 137)			return hx::TCast<  ::src::compiler::object::builtin::ListObject >::cast(this->callMember(HX_("__list__",1e,2e,29,98),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 138)		 ::src::compiler::object::builtin::ListObject list = hx::TCast<  ::src::compiler::object::builtin::ListObject >::cast(this->scope->getType(HX_("ListType",58,7e,af,06),null())->createObject(this->scope,null()));
HXLINE( 139)		list->arr->concat(this->arr);
HXLINE( 140)		return list;
            	}



hx::ObjectPtr< TupleObject_obj > TupleObject_obj::__new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	hx::ObjectPtr< TupleObject_obj > __this = new TupleObject_obj();
	__this->__construct(scope,type,members,value,args);
	return __this;
}

hx::ObjectPtr< TupleObject_obj > TupleObject_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	TupleObject_obj *__this = (TupleObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TupleObject_obj), true, "src.compiler.object.builtin.TupleObject"));
	*(void **)__this = TupleObject_obj::_hx_vtable;
	__this->__construct(scope,type,members,value,args);
	return __this;
}

TupleObject_obj::TupleObject_obj()
{
}

void TupleObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TupleObject);
	HX_MARK_MEMBER_NAME(arr,"arr");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TupleObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(arr,"arr");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TupleObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arr") ) { return hx::Val( arr ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"div") ) { return hx::Val( div_dyn() ); }
		if (HX_FIELD_EQ(inName,"len") ) { return hx::Val( len_dyn() ); }
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return hx::Val( mult_dyn() ); }
		if (HX_FIELD_EQ(inName,"iter") ) { return hx::Val( iter_dyn() ); }
		if (HX_FIELD_EQ(inName,"isin") ) { return hx::Val( isin_dyn() ); }
		if (HX_FIELD_EQ(inName,"list") ) { return hx::Val( list_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tuple") ) { return hx::Val( tuple_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { return hx::Val( _index_dyn() ); }
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getArray") ) { return hx::Val( getArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TupleObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arr") ) { arr=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TupleObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("arr","\x61","\xfe","\x49","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TupleObject_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TupleObject_obj,arr),HX_HCSTRING("arr","\x61","\xfe","\x49","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TupleObject_obj_sStaticStorageInfo = 0;
#endif

static ::String TupleObject_obj_sMemberFields[] = {
	HX_HCSTRING("arr","\x61","\xfe","\x49","\x00"),
	HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"),
	HX_HCSTRING("getArray","\x23","\x7d","\x66","\x85"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("div","\x51","\x3d","\x4c","\x00"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("isin","\x4f","\x06","\xbf","\x45"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("tuple","\x08","\x9c","\x26","\x18"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	::String(null()) };

static void TupleObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TupleObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TupleObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TupleObject_obj::__mClass,"__mClass");
};

#endif

hx::Class TupleObject_obj::__mClass;

void TupleObject_obj::__register()
{
	hx::Object *dummy = new TupleObject_obj;
	TupleObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.TupleObject","\x32","\x83","\x10","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TupleObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TupleObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TupleObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TupleObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TupleObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TupleObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
