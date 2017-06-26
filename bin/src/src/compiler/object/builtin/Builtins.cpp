// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_src_Main
#include <src/Main.h>
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
#ifndef INCLUDED_src_compiler_object_builtin_BuiltinFunction
#include <src/compiler/object/builtin/BuiltinFunction.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_Builtins
#include <src/compiler/object/builtin/Builtins.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_FloatObject
#include <src/compiler/object/builtin/FloatObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_FunctionObject
#include <src/compiler/object/builtin/FunctionObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_IntObject
#include <src/compiler/object/builtin/IntObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_IntRangeObject
#include <src/compiler/object/builtin/IntRangeObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_IteratorObject
#include <src/compiler/object/builtin/IteratorObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ListObject
#include <src/compiler/object/builtin/ListObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_MapObject
#include <src/compiler/object/builtin/MapObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_NoneObject
#include <src/compiler/object/builtin/NoneObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ObjectTypeObject
#include <src/compiler/object/builtin/ObjectTypeObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_PairObject
#include <src/compiler/object/builtin/PairObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_RangeObject
#include <src/compiler/object/builtin/RangeObject.h>
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
#ifndef INCLUDED_src_compiler_signals_ExitCodeSignal
#include <src/compiler/signals/ExitCodeSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_InvalidArgumentSignal
#include <src/compiler/signals/InvalidArgumentSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc5ddeb910938c46_35_new,"src.compiler.object.builtin.Builtins","new",0x409728b7,"src.compiler.object.builtin.Builtins.new","src/compiler/object/builtin/Builtins.hx",35,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_45_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",45,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_54_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",54,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_73_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",73,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_78_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",78,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_89_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",89,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_95_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",95,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_114_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",114,0xe9817cb7)
HX_LOCAL_STACK_FRAME(_hx_pos_cc5ddeb910938c46_41_init,"src.compiler.object.builtin.Builtins","init",0x40652ed9,"src.compiler.object.builtin.Builtins.init","src/compiler/object/builtin/Builtins.hx",41,0xe9817cb7)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void Builtins_obj::__construct( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_cc5ddeb910938c46_35_new)
HXLINE(  36)		this->root = scope->getRoot();
HXLINE(  38)		this->init();
            	}

Dynamic Builtins_obj::__CreateEmpty() { return new Builtins_obj; }

void *Builtins_obj::_hx_vtable = 0;

Dynamic Builtins_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Builtins_obj > _hx_result = new Builtins_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builtins_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ed98371;
}

void Builtins_obj::init(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::src::compiler::object::Object _hx_run(::Array< ::Dynamic> args){
            			HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_45_init)
HXLINE(  46)			 ::src::compiler::object::builtin::ListObject obj = hx::TCast<  ::src::compiler::object::builtin::ListObject >::cast(args->shift().StaticCast<  ::src::compiler::object::Object >());
HXLINE(  47)			if ((args->length == (int)0)) {
HXLINE(  47)				HX_STACK_DO_THROW(HX_("Not enough arguments",b3,b6,9e,c1));
            			}
            			else {
HXLINE(  48)				if ((args->length > (int)1)) {
HXLINE(  48)					HX_STACK_DO_THROW(HX_("Too many arguments",c1,50,dc,40));
            				}
            				else {
HXLINE(  50)					::Array< ::Dynamic> obj1 = obj->arr;
HXDLIN(  50)					obj1->push(args->__get((int)0).StaticCast<  ::src::compiler::object::Object >());
            				}
            			}
HXLINE(  52)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::src::compiler::object::Object _hx_run(::Array< ::Dynamic> args1){
            			HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_54_init)
HXLINE(  55)			 ::src::compiler::object::builtin::ListObject obj2 = hx::TCast<  ::src::compiler::object::builtin::ListObject >::cast(args1->shift().StaticCast<  ::src::compiler::object::Object >());
HXLINE(  56)			if ((args1->length == (int)0)) {
HXLINE(  56)				HX_STACK_DO_THROW(HX_("Not enough arguments",b3,b6,9e,c1));
            			}
            			else {
HXLINE(  57)				if ((args1->length > (int)1)) {
HXLINE(  57)					HX_STACK_DO_THROW(HX_("Too many arguments",c1,50,dc,40));
            				}
            				else {
HXLINE(  59)					::Array< ::Dynamic> obj3 = obj2->arr;
HXDLIN(  59)					obj3->remove(args1->__get((int)0).StaticCast<  ::src::compiler::object::Object >());
            				}
            			}
HXLINE(  61)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		 ::src::compiler::object::Object _hx_run(::Array< ::Dynamic> args2){
            			HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_73_init)
HXLINE(  74)			 ::src::compiler::object::builtin::PairObject pair = hx::TCast<  ::src::compiler::object::builtin::PairObject >::cast(args2->shift().StaticCast<  ::src::compiler::object::Object >());
HXLINE(  75)			if ((args2->length > (int)0)) {
HXLINE(  75)				HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,(HX_("Expected 0 arguments, found ",f0,f4,ca,0f) + args2->length)));
            			}
HXLINE(  76)			return pair->_str(pair->getName(),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            		 ::src::compiler::object::Object _hx_run(::Array< ::Dynamic> args3){
            			HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_78_init)
HXLINE(  79)			 ::src::compiler::object::builtin::PairObject pair1 = hx::TCast<  ::src::compiler::object::builtin::PairObject >::cast(args3->shift().StaticCast<  ::src::compiler::object::Object >());
HXLINE(  80)			if ((args3->length > (int)0)) {
HXLINE(  80)				HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,(HX_("Expected 0 arguments, found ",f0,f4,ca,0f) + args3->length)));
            			}
HXLINE(  81)			return pair1->getValue();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            		 ::src::compiler::object::Object _hx_run(::Array< ::Dynamic> args4){
            			HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_89_init)
HXLINE(  90)			::Array< ::String > words = ::Array_obj< ::String >::__new();
HXLINE(  91)			{
HXLINE(  91)				int _g21 = (int)0;
HXDLIN(  91)				while((_g21 < args4->length)){
HXLINE(  91)					 ::src::compiler::object::Object obj4 = args4->__get(_g21).StaticCast<  ::src::compiler::object::Object >();
HXDLIN(  91)					_g21 = (_g21 + (int)1);
HXDLIN(  91)					::String value;
HXDLIN(  91)					if (hx::IsNull( obj4 )) {
HXLINE(  91)						value = HX_("null",87,9e,0e,49);
            					}
            					else {
HXLINE(  91)						value = obj4->rawString();
            					}
HXDLIN(  91)					words->push(value);
            				}
            			}
HXLINE(  92)			 ::Dynamic value1 = hx::ClassOf< ::src::Main >();
HXDLIN(  92)			::String value2 = words->join(HX_(" ",20,00,00,00));
HXDLIN(  92)			::src::Main_obj::print(value2);
HXLINE(  93)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_5, ::src::compiler::object::builtin::Builtins,_gthis) HXARGC(1)
            		 ::src::compiler::object::Object _hx_run(::Array< ::Dynamic> args5){
            			HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_95_init)
HXLINE(  96)			 ::src::compiler::object::Object start = _gthis->intType->createValue((int)0,null());
HXDLIN(  96)			 ::src::compiler::object::Object end = _gthis->intType->createValue((int)0,null());
HXDLIN(  96)			 ::src::compiler::object::Object step = _gthis->intType->createValue((int)1,null());
HXLINE(  97)			if ((args5->length == (int)1)) {
HXLINE(  98)				end = args5->__get((int)0).StaticCast<  ::src::compiler::object::Object >();
            			}
            			else {
HXLINE(  99)				if ((args5->length == (int)2)) {
HXLINE( 100)					start = args5->__get((int)0).StaticCast<  ::src::compiler::object::Object >();
HXLINE( 101)					end = args5->__get((int)1).StaticCast<  ::src::compiler::object::Object >();
            				}
            				else {
HXLINE( 102)					if ((args5->length == (int)3)) {
HXLINE( 103)						start = args5->__get((int)0).StaticCast<  ::src::compiler::object::Object >();
HXLINE( 104)						end = args5->__get((int)1).StaticCast<  ::src::compiler::object::Object >();
HXLINE( 105)						step = args5->__get((int)2).StaticCast<  ::src::compiler::object::Object >();
            					}
            					else {
HXLINE( 106)						HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,(HX_("Expected between 1 and 3 arguments, found ",a3,ee,9c,a3) + args5->length)));
            					}
            				}
            			}
HXLINE( 107)			bool value3;
HXDLIN( 107)			bool value4;
HXDLIN( 107)			if (start->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE( 107)				value4 = end->isInstance(HX_("IntType",29,f7,3d,d9));
            			}
            			else {
HXLINE( 107)				value4 = false;
            			}
HXDLIN( 107)			if (value4) {
HXLINE( 107)				value3 = step->isInstance(HX_("IntType",29,f7,3d,d9));
            			}
            			else {
HXLINE( 107)				value3 = false;
            			}
HXDLIN( 107)			if (value3) {
HXLINE( 108)				 ::src::compiler::Scope value5 = start->getScope();
HXDLIN( 108)				 ::src::compiler::object::ObjectType _gthis1 = _gthis->iteratorType;
HXDLIN( 108)				int value6 = start->rawInt();
HXDLIN( 108)				int value7 = end->rawInt();
HXDLIN( 108)				return  ::src::compiler::object::builtin::IntRangeObject_obj::__alloc( HX_CTX ,value5,_gthis1,value6,value7,step->rawInt());
            			}
            			else {
HXLINE( 110)				 ::src::compiler::Scope value8 = start->getScope();
HXDLIN( 110)				 ::src::compiler::object::ObjectType _gthis2 = _gthis->iteratorType;
HXDLIN( 110)				Float value9 = start->rawFloat();
HXDLIN( 110)				Float value10 = end->rawFloat();
HXDLIN( 110)				return  ::src::compiler::object::builtin::RangeObject_obj::__alloc( HX_CTX ,value8,_gthis2,value9,value10,step->rawFloat());
            			}
HXLINE( 107)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_6) HXARGC(1)
            		 ::src::compiler::object::Object _hx_run(::Array< ::Dynamic> args6){
            			HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_114_init)
HXLINE( 114)			HX_STACK_DO_THROW( ::src::compiler::signals::ExitCodeSignal_obj::__alloc( HX_CTX ));
HXDLIN( 114)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_cc5ddeb910938c46_41_init)
HXDLIN(  41)		 ::src::compiler::object::builtin::Builtins _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  42)		this->builtinFuncType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("BuiltinFunctionType",15,e5,45,c3),null(),hx::ClassOf< ::src::compiler::object::builtin::BuiltinFunction >(),null());
HXLINE(  43)		this->functionType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("FunctionType",12,82,16,fc),null(),hx::ClassOf< ::src::compiler::object::builtin::FunctionObject >(),null());
HXLINE(  44)		 ::src::compiler::Scope _hx_tmp = this->root;
HXDLIN(  44)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  44)		_g->set(HX_("append",da,e1,d3,8f),this->builtinFuncType->createValue( ::Dynamic(new _hx_Closure_0()),null()));
HXDLIN(  44)		_g->set(HX_("remove",44,9c,88,04),this->builtinFuncType->createValue( ::Dynamic(new _hx_Closure_1()),null()));
HXDLIN(  44)		this->listType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,_hx_tmp,HX_("ListType",58,7e,af,06),_g,hx::ClassOf< ::src::compiler::object::builtin::ListObject >(),null());
HXLINE(  64)		this->tupleType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("TupleType",c2,3e,8e,1a),null(),hx::ClassOf< ::src::compiler::object::builtin::TupleObject >(),null());
HXLINE(  65)		this->mapType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("MapType",56,cf,55,ff),null(),hx::ClassOf< ::src::compiler::object::builtin::MapObject >(),null());
HXLINE(  66)		this->stringType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("StringType",4b,88,b6,f5),null(),hx::ClassOf< ::src::compiler::object::builtin::StringObject >(),null());
HXLINE(  67)		this->intType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("IntType",29,f7,3d,d9),null(),hx::ClassOf< ::src::compiler::object::builtin::IntObject >(),null());
HXLINE(  68)		this->floatType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("FloatType",56,c2,14,a2),null(),hx::ClassOf< ::src::compiler::object::builtin::FloatObject >(),null());
HXLINE(  69)		this->boolType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("BoolType",24,bc,95,8f),null(),hx::ClassOf< ::src::compiler::object::builtin::BoolObject >(),null());
HXLINE(  70)		this->noneType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("NoneType",b2,a9,c9,cf),null(),hx::ClassOf< ::src::compiler::object::builtin::NoneObject >(),null());
HXLINE(  71)		this->objTypeType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("ObjectTypeType",93,1c,e6,5d),null(),hx::ClassOf< ::src::compiler::object::builtin::ObjectTypeObject >(),null());
HXLINE(  72)		 ::src::compiler::Scope _hx_tmp1 = this->root;
HXDLIN(  72)		 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  72)		_g1->set(HX_("name",4b,72,ff,48),this->builtinFuncType->createValue( ::Dynamic(new _hx_Closure_2()),null()));
HXDLIN(  72)		_g1->set(HX_("value",71,7f,b8,31),this->builtinFuncType->createValue( ::Dynamic(new _hx_Closure_3()),null()));
HXDLIN(  72)		this->pairType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,_hx_tmp1,HX_("PairType",14,cc,6e,78),_g1,hx::ClassOf< ::src::compiler::object::builtin::PairObject >(),null());
HXLINE(  84)		this->iteratorType =  ::src::compiler::object::ObjectType_obj::__alloc( HX_CTX ,this->root,HX_("IteratorType",e8,43,45,b2),null(),hx::ClassOf< ::src::compiler::object::builtin::IteratorObject >(),null());
HXLINE(  86)		this->types = ::Array_obj< ::Dynamic>::__new(13)->init(0,this->builtinFuncType)->init(1,this->functionType)->init(2,this->listType)->init(3,this->tupleType)->init(4,this->mapType)->init(5,this->stringType)->init(6,this->intType)->init(7,this->floatType)->init(8,this->boolType)->init(9,this->noneType)->init(10,this->objTypeType)->init(11,this->pairType)->init(12,this->iteratorType);
HXLINE(  88)		 ::haxe::ds::StringMap _g2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  88)		_g2->set(HX_("print",2d,58,8b,c8),this->builtinFuncType->createValue( ::Dynamic(new _hx_Closure_4()),null()));
HXDLIN(  88)		_g2->set(HX_("range",bd,a5,1f,e4),this->builtinFuncType->createValue( ::Dynamic(new _hx_Closure_5(_gthis)),null()));
HXDLIN(  88)		_g2->set(HX_("exit",1e,f7,1d,43),this->builtinFuncType->createValue( ::Dynamic(new _hx_Closure_6()),null()));
HXDLIN(  88)		this->objects = _g2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Builtins_obj,init,(void))


hx::ObjectPtr< Builtins_obj > Builtins_obj::__new( ::src::compiler::Scope scope) {
	hx::ObjectPtr< Builtins_obj > __this = new Builtins_obj();
	__this->__construct(scope);
	return __this;
}

hx::ObjectPtr< Builtins_obj > Builtins_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope) {
	Builtins_obj *__this = (Builtins_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Builtins_obj), true, "src.compiler.object.builtin.Builtins"));
	*(void **)__this = Builtins_obj::_hx_vtable;
	__this->__construct(scope);
	return __this;
}

Builtins_obj::Builtins_obj()
{
}

void Builtins_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builtins);
	HX_MARK_MEMBER_NAME(builtinFuncType,"builtinFuncType");
	HX_MARK_MEMBER_NAME(functionType,"functionType");
	HX_MARK_MEMBER_NAME(listType,"listType");
	HX_MARK_MEMBER_NAME(tupleType,"tupleType");
	HX_MARK_MEMBER_NAME(mapType,"mapType");
	HX_MARK_MEMBER_NAME(stringType,"stringType");
	HX_MARK_MEMBER_NAME(intType,"intType");
	HX_MARK_MEMBER_NAME(floatType,"floatType");
	HX_MARK_MEMBER_NAME(boolType,"boolType");
	HX_MARK_MEMBER_NAME(noneType,"noneType");
	HX_MARK_MEMBER_NAME(objTypeType,"objTypeType");
	HX_MARK_MEMBER_NAME(pairType,"pairType");
	HX_MARK_MEMBER_NAME(iteratorType,"iteratorType");
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void Builtins_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(builtinFuncType,"builtinFuncType");
	HX_VISIT_MEMBER_NAME(functionType,"functionType");
	HX_VISIT_MEMBER_NAME(listType,"listType");
	HX_VISIT_MEMBER_NAME(tupleType,"tupleType");
	HX_VISIT_MEMBER_NAME(mapType,"mapType");
	HX_VISIT_MEMBER_NAME(stringType,"stringType");
	HX_VISIT_MEMBER_NAME(intType,"intType");
	HX_VISIT_MEMBER_NAME(floatType,"floatType");
	HX_VISIT_MEMBER_NAME(boolType,"boolType");
	HX_VISIT_MEMBER_NAME(noneType,"noneType");
	HX_VISIT_MEMBER_NAME(objTypeType,"objTypeType");
	HX_VISIT_MEMBER_NAME(pairType,"pairType");
	HX_VISIT_MEMBER_NAME(iteratorType,"iteratorType");
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(root,"root");
}

hx::Val Builtins_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return hx::Val( root ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return hx::Val( types ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapType") ) { return hx::Val( mapType ); }
		if (HX_FIELD_EQ(inName,"intType") ) { return hx::Val( intType ); }
		if (HX_FIELD_EQ(inName,"objects") ) { return hx::Val( objects ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listType") ) { return hx::Val( listType ); }
		if (HX_FIELD_EQ(inName,"boolType") ) { return hx::Val( boolType ); }
		if (HX_FIELD_EQ(inName,"noneType") ) { return hx::Val( noneType ); }
		if (HX_FIELD_EQ(inName,"pairType") ) { return hx::Val( pairType ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tupleType") ) { return hx::Val( tupleType ); }
		if (HX_FIELD_EQ(inName,"floatType") ) { return hx::Val( floatType ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stringType") ) { return hx::Val( stringType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objTypeType") ) { return hx::Val( objTypeType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionType") ) { return hx::Val( functionType ); }
		if (HX_FIELD_EQ(inName,"iteratorType") ) { return hx::Val( iteratorType ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"builtinFuncType") ) { return hx::Val( builtinFuncType ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Builtins_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::src::compiler::Scope >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapType") ) { mapType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intType") ) { intType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listType") ) { listType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boolType") ) { boolType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noneType") ) { noneType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pairType") ) { pairType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tupleType") ) { tupleType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floatType") ) { floatType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stringType") ) { stringType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objTypeType") ) { objTypeType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionType") ) { functionType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iteratorType") ) { iteratorType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"builtinFuncType") ) { builtinFuncType=inValue.Cast<  ::src::compiler::object::ObjectType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builtins_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("builtinFuncType","\xe1","\x95","\x38","\x1a"));
	outFields->push(HX_HCSTRING("functionType","\xf2","\x35","\x04","\x34"));
	outFields->push(HX_HCSTRING("listType","\x38","\xc2","\xfd","\x2c"));
	outFields->push(HX_HCSTRING("tupleType","\xe2","\x5e","\xbb","\x78"));
	outFields->push(HX_HCSTRING("mapType","\x76","\xa7","\x04","\x32"));
	outFields->push(HX_HCSTRING("stringType","\x2b","\x84","\x05","\xff"));
	outFields->push(HX_HCSTRING("intType","\x49","\xcf","\xec","\x0b"));
	outFields->push(HX_HCSTRING("floatType","\x76","\xe2","\x41","\x00"));
	outFields->push(HX_HCSTRING("boolType","\x04","\x00","\xe4","\xb5"));
	outFields->push(HX_HCSTRING("noneType","\x92","\xed","\x17","\xf6"));
	outFields->push(HX_HCSTRING("objTypeType","\xab","\x91","\x6d","\x68"));
	outFields->push(HX_HCSTRING("pairType","\xf4","\x0f","\xbd","\x9e"));
	outFields->push(HX_HCSTRING("iteratorType","\xc8","\xf7","\x32","\xea"));
	outFields->push(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"));
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Builtins_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,builtinFuncType),HX_HCSTRING("builtinFuncType","\xe1","\x95","\x38","\x1a")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,functionType),HX_HCSTRING("functionType","\xf2","\x35","\x04","\x34")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,listType),HX_HCSTRING("listType","\x38","\xc2","\xfd","\x2c")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,tupleType),HX_HCSTRING("tupleType","\xe2","\x5e","\xbb","\x78")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,mapType),HX_HCSTRING("mapType","\x76","\xa7","\x04","\x32")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,stringType),HX_HCSTRING("stringType","\x2b","\x84","\x05","\xff")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,intType),HX_HCSTRING("intType","\x49","\xcf","\xec","\x0b")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,floatType),HX_HCSTRING("floatType","\x76","\xe2","\x41","\x00")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,boolType),HX_HCSTRING("boolType","\x04","\x00","\xe4","\xb5")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,noneType),HX_HCSTRING("noneType","\x92","\xed","\x17","\xf6")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,objTypeType),HX_HCSTRING("objTypeType","\xab","\x91","\x6d","\x68")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,pairType),HX_HCSTRING("pairType","\xf4","\x0f","\xbd","\x9e")},
	{hx::fsObject /*::src::compiler::object::ObjectType*/ ,(int)offsetof(Builtins_obj,iteratorType),HX_HCSTRING("iteratorType","\xc8","\xf7","\x32","\xea")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Builtins_obj,types),HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Builtins_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{hx::fsObject /*::src::compiler::Scope*/ ,(int)offsetof(Builtins_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Builtins_obj_sStaticStorageInfo = 0;
#endif

static ::String Builtins_obj_sMemberFields[] = {
	HX_HCSTRING("builtinFuncType","\xe1","\x95","\x38","\x1a"),
	HX_HCSTRING("functionType","\xf2","\x35","\x04","\x34"),
	HX_HCSTRING("listType","\x38","\xc2","\xfd","\x2c"),
	HX_HCSTRING("tupleType","\xe2","\x5e","\xbb","\x78"),
	HX_HCSTRING("mapType","\x76","\xa7","\x04","\x32"),
	HX_HCSTRING("stringType","\x2b","\x84","\x05","\xff"),
	HX_HCSTRING("intType","\x49","\xcf","\xec","\x0b"),
	HX_HCSTRING("floatType","\x76","\xe2","\x41","\x00"),
	HX_HCSTRING("boolType","\x04","\x00","\xe4","\xb5"),
	HX_HCSTRING("noneType","\x92","\xed","\x17","\xf6"),
	HX_HCSTRING("objTypeType","\xab","\x91","\x6d","\x68"),
	HX_HCSTRING("pairType","\xf4","\x0f","\xbd","\x9e"),
	HX_HCSTRING("iteratorType","\xc8","\xf7","\x32","\xea"),
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void Builtins_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Builtins_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Builtins_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Builtins_obj::__mClass,"__mClass");
};

#endif

hx::Class Builtins_obj::__mClass;

void Builtins_obj::__register()
{
	hx::Object *dummy = new Builtins_obj;
	Builtins_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.Builtins","\x45","\x01","\x21","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Builtins_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Builtins_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Builtins_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Builtins_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builtins_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builtins_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
