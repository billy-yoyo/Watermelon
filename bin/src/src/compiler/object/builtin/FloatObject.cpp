// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
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
#ifndef INCLUDED_src_compiler_object_builtin_BytesObject
#include <src/compiler/object/builtin/BytesObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_FloatObject
#include <src/compiler/object/builtin/FloatObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_IntObject
#include <src/compiler/object/builtin/IntObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_StringObject
#include <src/compiler/object/builtin/StringObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_10_new,"src.compiler.object.builtin.FloatObject","new",0xbb060fb8,"src.compiler.object.builtin.FloatObject.new","src/compiler/object/builtin/FloatObject.hx",10,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_16_setup,"src.compiler.object.builtin.FloatObject","setup",0xf57273d5,"src.compiler.object.builtin.FloatObject.setup","src/compiler/object/builtin/FloatObject.hx",16,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_21_getValue,"src.compiler.object.builtin.FloatObject","getValue",0x7cc0b0a3,"src.compiler.object.builtin.FloatObject.getValue","src/compiler/object/builtin/FloatObject.hx",21,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_25_add,"src.compiler.object.builtin.FloatObject","add",0xbafc3179,"src.compiler.object.builtin.FloatObject.add","src/compiler/object/builtin/FloatObject.hx",25,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_33_sub,"src.compiler.object.builtin.FloatObject","sub",0xbb09e8d8,"src.compiler.object.builtin.FloatObject.sub","src/compiler/object/builtin/FloatObject.hx",33,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_41_rsub,"src.compiler.object.builtin.FloatObject","rsub",0xecf729f6,"src.compiler.object.builtin.FloatObject.rsub","src/compiler/object/builtin/FloatObject.hx",41,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_49_mult,"src.compiler.object.builtin.FloatObject","mult",0xe9aa9598,"src.compiler.object.builtin.FloatObject.mult","src/compiler/object/builtin/FloatObject.hx",49,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_57_div,"src.compiler.object.builtin.FloatObject","div",0xbafe7ca9,"src.compiler.object.builtin.FloatObject.div","src/compiler/object/builtin/FloatObject.hx",57,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_65_rdiv,"src.compiler.object.builtin.FloatObject","rdiv",0xecebbdc7,"src.compiler.object.builtin.FloatObject.rdiv","src/compiler/object/builtin/FloatObject.hx",65,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_73_intdiv,"src.compiler.object.builtin.FloatObject","intdiv",0xfdaf976a,"src.compiler.object.builtin.FloatObject.intdiv","src/compiler/object/builtin/FloatObject.hx",73,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_81_rintdiv,"src.compiler.object.builtin.FloatObject","rintdiv",0x08955d0c,"src.compiler.object.builtin.FloatObject.rintdiv","src/compiler/object/builtin/FloatObject.hx",81,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_89_pow,"src.compiler.object.builtin.FloatObject","pow",0xbb079cf0,"src.compiler.object.builtin.FloatObject.pow","src/compiler/object/builtin/FloatObject.hx",89,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_97_rpow,"src.compiler.object.builtin.FloatObject","rpow",0xecf4de0e,"src.compiler.object.builtin.FloatObject.rpow","src/compiler/object/builtin/FloatObject.hx",97,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_105_mod,"src.compiler.object.builtin.FloatObject","mod",0xbb05561a,"src.compiler.object.builtin.FloatObject.mod","src/compiler/object/builtin/FloatObject.hx",105,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_113_rmod,"src.compiler.object.builtin.FloatObject","rmod",0xecf29738,"src.compiler.object.builtin.FloatObject.rmod","src/compiler/object/builtin/FloatObject.hx",113,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_121_eq,"src.compiler.object.builtin.FloatObject","eq",0xabe34c14,"src.compiler.object.builtin.FloatObject.eq","src/compiler/object/builtin/FloatObject.hx",121,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_127_neq,"src.compiler.object.builtin.FloatObject","neq",0xbb060fb2,"src.compiler.object.builtin.FloatObject.neq","src/compiler/object/builtin/FloatObject.hx",127,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_133_ls,"src.compiler.object.builtin.FloatObject","ls",0xabe3522f,"src.compiler.object.builtin.FloatObject.ls","src/compiler/object/builtin/FloatObject.hx",133,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_139_lseq,"src.compiler.object.builtin.FloatObject","lseq",0xe8ffd45b,"src.compiler.object.builtin.FloatObject.lseq","src/compiler/object/builtin/FloatObject.hx",139,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_145_gr,"src.compiler.object.builtin.FloatObject","gr",0xabe34dd3,"src.compiler.object.builtin.FloatObject.gr","src/compiler/object/builtin/FloatObject.hx",145,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_151_greq,"src.compiler.object.builtin.FloatObject","greq",0xe5b100ff,"src.compiler.object.builtin.FloatObject.greq","src/compiler/object/builtin/FloatObject.hx",151,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_157_int,"src.compiler.object.builtin.FloatObject","int",0xbb024c47,"src.compiler.object.builtin.FloatObject.int","src/compiler/object/builtin/FloatObject.hx",157,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_163_float,"src.compiler.object.builtin.FloatObject","float",0x7dd98af4,"src.compiler.object.builtin.FloatObject.float","src/compiler/object/builtin/FloatObject.hx",163,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_169_str,"src.compiler.object.builtin.FloatObject","str",0xbb09e809,"src.compiler.object.builtin.FloatObject.str","src/compiler/object/builtin/FloatObject.hx",169,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_175_bool,"src.compiler.object.builtin.FloatObject","bool",0xe260b1d2,"src.compiler.object.builtin.FloatObject.bool","src/compiler/object/builtin/FloatObject.hx",175,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_181_bytes,"src.compiler.object.builtin.FloatObject","bytes",0x38dacdc3,"src.compiler.object.builtin.FloatObject.bytes","src/compiler/object/builtin/FloatObject.hx",181,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_189_negate,"src.compiler.object.builtin.FloatObject","negate",0xc643296a,"src.compiler.object.builtin.FloatObject.negate","src/compiler/object/builtin/FloatObject.hx",189,0xcd64135a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd6a0ccbf0daade4_195_getHash,"src.compiler.object.builtin.FloatObject","getHash",0xfd0baadc,"src.compiler.object.builtin.FloatObject.getHash","src/compiler/object/builtin/FloatObject.hx",195,0xcd64135a)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void FloatObject_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_10_new)
HXDLIN(  10)		super::__construct(scope,type,members,value,args);
            	}

Dynamic FloatObject_obj::__CreateEmpty() { return new FloatObject_obj; }

void *FloatObject_obj::_hx_vtable = 0;

Dynamic FloatObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FloatObject_obj > _hx_result = new FloatObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FloatObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a31b952) {
		if (inClassId<=(int)0x15de4261) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15de4261;
		} else {
			return inClassId==(int)0x3a31b952;
		}
	} else {
		return inClassId==(int)0x782c6273;
	}
}

void FloatObject_obj::setup( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_16_setup)
HXDLIN(  16)		this->value = ( (int)(value) );
            	}


int FloatObject_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_21_getValue)
HXDLIN(  21)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatObject_obj,getValue,return )

 ::src::compiler::object::Object FloatObject_obj::add( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_25_add)
HXLINE(  26)		if (this->hasMember(HX_("__add__",61,28,a2,86))) {
HXLINE(  26)			return this->callMember(HX_("__add__",61,28,a2,86),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  27)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  27)			Float _hx_tmp = this->rawFloat();
HXDLIN(  27)			return this->_float((_hx_tmp + other->rawInt()),null());
            		}
            		else {
HXLINE(  28)			bool _hx_tmp1;
HXDLIN(  28)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  28)				_hx_tmp1 = !(other->hasMember(HX_("add",21,f2,49,00)));
            			}
            			else {
HXLINE(  28)				_hx_tmp1 = true;
            			}
HXDLIN(  28)			if (_hx_tmp1) {
HXLINE(  28)				int _hx_tmp2 = this->rawInt();
HXDLIN(  28)				return this->_float((_hx_tmp2 + other->rawFloat()),null());
            			}
            			else {
HXLINE(  29)				return other->add(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  27)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::sub( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_33_sub)
HXLINE(  34)		if (this->hasMember(HX_("__sub__",80,b5,13,ef))) {
HXLINE(  34)			return this->callMember(HX_("__sub__",80,b5,13,ef),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  35)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  35)			Float _hx_tmp = this->rawFloat();
HXDLIN(  35)			return this->_float((_hx_tmp - other->rawInt()),null());
            		}
            		else {
HXLINE(  36)			bool _hx_tmp1;
HXDLIN(  36)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  36)				_hx_tmp1 = !(other->hasMember(HX_("rsub",4e,fc,b1,4b)));
            			}
            			else {
HXLINE(  36)				_hx_tmp1 = true;
            			}
HXDLIN(  36)			if (_hx_tmp1) {
HXLINE(  36)				Float _hx_tmp2 = this->rawFloat();
HXDLIN(  36)				return this->_float((_hx_tmp2 - other->rawFloat()),null());
            			}
            			else {
HXLINE(  37)				return other->rsub(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  35)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::rsub( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_41_rsub)
HXLINE(  42)		if (this->hasMember(HX_("__rsub__",0e,ea,93,c1))) {
HXLINE(  42)			return this->callMember(HX_("__rsub__",0e,ea,93,c1),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  43)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  43)			int _hx_tmp = other->rawInt();
HXDLIN(  43)			return this->_float((_hx_tmp - this->rawFloat()),null());
            		}
            		else {
HXLINE(  44)			bool _hx_tmp1;
HXDLIN(  44)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  44)				_hx_tmp1 = !(other->hasMember(HX_("sub",80,a9,57,00)));
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = true;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  44)				Float _hx_tmp2 = other->rawFloat();
HXDLIN(  44)				return this->_float((_hx_tmp2 - this->rawFloat()),null());
            			}
            			else {
HXLINE(  45)				return other->sub(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  43)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::mult( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_49_mult)
HXLINE(  50)		if (this->hasMember(HX_("__mult__",30,02,b3,e2))) {
HXLINE(  50)			return this->callMember(HX_("__mult__",30,02,b3,e2),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  51)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  51)			Float _hx_tmp = this->rawFloat();
HXDLIN(  51)			return this->_float((_hx_tmp * other->rawInt()),null());
            		}
            		else {
HXLINE(  52)			bool _hx_tmp1;
HXDLIN(  52)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  52)				_hx_tmp1 = !(other->hasMember(HX_("mult",f0,67,65,48)));
            			}
            			else {
HXLINE(  52)				_hx_tmp1 = true;
            			}
HXDLIN(  52)			if (_hx_tmp1) {
HXLINE(  52)				Float _hx_tmp2 = this->rawFloat();
HXDLIN(  52)				return this->_float((_hx_tmp2 * other->rawFloat()),null());
            			}
            			else {
HXLINE(  53)				return other->mult(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  51)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::div( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_57_div)
HXLINE(  58)		if (this->hasMember(HX_("__div__",91,9f,31,44))) {
HXLINE(  58)			return this->callMember(HX_("__div__",91,9f,31,44),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  59)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  59)			Float _hx_tmp = this->rawFloat();
HXDLIN(  59)			return this->_float(((Float)_hx_tmp / (Float)other->rawInt()),null());
            		}
            		else {
HXLINE(  60)			bool _hx_tmp1;
HXDLIN(  60)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  60)				_hx_tmp1 = !(other->hasMember(HX_("rdiv",1f,90,a6,4b)));
            			}
            			else {
HXLINE(  60)				_hx_tmp1 = true;
            			}
HXDLIN(  60)			if (_hx_tmp1) {
HXLINE(  60)				Float _hx_tmp2 = this->rawFloat();
HXDLIN(  60)				return this->_float(((Float)_hx_tmp2 / (Float)other->rawFloat()),null());
            			}
            			else {
HXLINE(  61)				return other->rdiv(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  59)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::rdiv( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_65_rdiv)
HXLINE(  66)		if (this->hasMember(HX_("__rdiv__",1f,d4,b1,16))) {
HXLINE(  66)			return this->callMember(HX_("__rdiv__",1f,d4,b1,16),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  67)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  67)			int _hx_tmp = other->rawInt();
HXDLIN(  67)			return this->_float(((Float)_hx_tmp / (Float)this->rawFloat()),null());
            		}
            		else {
HXLINE(  68)			bool _hx_tmp1;
HXDLIN(  68)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  68)				_hx_tmp1 = !(other->hasMember(HX_("div",51,3d,4c,00)));
            			}
            			else {
HXLINE(  68)				_hx_tmp1 = true;
            			}
HXDLIN(  68)			if (_hx_tmp1) {
HXLINE(  68)				Float _hx_tmp2 = other->rawFloat();
HXDLIN(  68)				return this->_float(((Float)_hx_tmp2 / (Float)this->rawFloat()),null());
            			}
            			else {
HXLINE(  69)				return other->div(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  67)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::intdiv( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_73_intdiv)
HXLINE(  74)		if (this->hasMember(HX_("__intdiv__",82,6a,5b,32))) {
HXLINE(  74)			return this->callMember(HX_("__intdiv__",82,6a,5b,32),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  75)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  75)			Float _hx_tmp = this->rawFloat();
HXDLIN(  75)			return this->_int(::Math_obj::floor(((Float)_hx_tmp / (Float)other->rawInt())),null());
            		}
            		else {
HXLINE(  76)			bool _hx_tmp1;
HXDLIN(  76)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  76)				_hx_tmp1 = !(other->hasMember(HX_("rintdiv",b4,91,14,23)));
            			}
            			else {
HXLINE(  76)				_hx_tmp1 = true;
            			}
HXDLIN(  76)			if (_hx_tmp1) {
HXLINE(  76)				Float _hx_tmp2 = this->rawFloat();
HXDLIN(  76)				return this->_int(::Math_obj::floor(((Float)_hx_tmp2 / (Float)other->rawFloat())),null());
            			}
            			else {
HXLINE(  77)				return other->rintdiv(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  75)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::rintdiv( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_81_rintdiv)
HXLINE(  82)		if (this->hasMember(HX_("__rintdiv__",b4,02,d0,ac))) {
HXLINE(  82)			return this->callMember(HX_("__rintdiv__",b4,02,d0,ac),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  83)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  83)			int _hx_tmp = other->rawInt();
HXDLIN(  83)			return this->_int(::Math_obj::floor(((Float)_hx_tmp / (Float)this->rawFloat())),null());
            		}
            		else {
HXLINE(  84)			bool _hx_tmp1;
HXDLIN(  84)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  84)				_hx_tmp1 = !(other->hasMember(HX_("intdiv",c2,af,85,9e)));
            			}
            			else {
HXLINE(  84)				_hx_tmp1 = true;
            			}
HXDLIN(  84)			if (_hx_tmp1) {
HXLINE(  84)				Float _hx_tmp2 = other->rawFloat();
HXDLIN(  84)				return this->_int(::Math_obj::floor(((Float)_hx_tmp2 / (Float)this->rawFloat())),null());
            			}
            			else {
HXLINE(  85)				return other->intdiv(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  83)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::pow( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_89_pow)
HXLINE(  90)		if (this->hasMember(HX_("__pow__",98,9f,f8,30))) {
HXLINE(  90)			return this->callMember(HX_("__pow__",98,9f,f8,30),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  91)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  91)			Float _hx_tmp = this->rawFloat();
HXDLIN(  91)			return this->_float(::Math_obj::pow(_hx_tmp,other->rawInt()),null());
            		}
            		else {
HXLINE(  92)			bool _hx_tmp1;
HXDLIN(  92)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE(  92)				_hx_tmp1 = !(other->hasMember(HX_("rpow",66,b0,af,4b)));
            			}
            			else {
HXLINE(  92)				_hx_tmp1 = true;
            			}
HXDLIN(  92)			if (_hx_tmp1) {
HXLINE(  92)				Float _hx_tmp2 = this->rawFloat();
HXDLIN(  92)				return this->_float(::Math_obj::pow(_hx_tmp2,other->rawFloat()),null());
            			}
            			else {
HXLINE(  93)				return other->rpow(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  91)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::rpow( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_97_rpow)
HXLINE(  98)		if (this->hasMember(HX_("__rpow__",26,d4,78,03))) {
HXLINE(  98)			return this->callMember(HX_("__rpow__",26,d4,78,03),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  99)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE(  99)			int _hx_tmp = other->rawInt();
HXDLIN(  99)			return this->_float(::Math_obj::pow(_hx_tmp,this->rawFloat()),null());
            		}
            		else {
HXLINE( 100)			bool _hx_tmp1;
HXDLIN( 100)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE( 100)				_hx_tmp1 = !(other->hasMember(HX_("pow",98,5d,55,00)));
            			}
            			else {
HXLINE( 100)				_hx_tmp1 = true;
            			}
HXDLIN( 100)			if (_hx_tmp1) {
HXLINE( 100)				Float _hx_tmp2 = other->rawFloat();
HXDLIN( 100)				return this->_float(::Math_obj::pow(_hx_tmp2,this->rawFloat()),null());
            			}
            			else {
HXLINE( 101)				return other->pow(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  99)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::mod( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_105_mod)
HXLINE( 106)		if (this->hasMember(HX_("__mod__",42,77,b6,76))) {
HXLINE( 106)			return this->callMember(HX_("__mod__",42,77,b6,76),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 107)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE( 107)			Float _hx_tmp = this->rawFloat();
HXDLIN( 107)			return this->_float(hx::Mod(_hx_tmp,other->rawInt()),null());
            		}
            		else {
HXLINE( 108)			bool _hx_tmp1;
HXDLIN( 108)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE( 108)				_hx_tmp1 = !(other->hasMember(HX_("rmod",90,69,ad,4b)));
            			}
            			else {
HXLINE( 108)				_hx_tmp1 = true;
            			}
HXDLIN( 108)			if (_hx_tmp1) {
HXLINE( 108)				Float _hx_tmp2 = this->rawFloat();
HXDLIN( 108)				return this->_float(hx::Mod(_hx_tmp2,other->rawFloat()),null());
            			}
            			else {
HXLINE( 109)				return other->rmod(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 107)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::rmod( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_113_rmod)
HXLINE( 114)		if (this->hasMember(HX_("__rmod__",d0,ab,36,49))) {
HXLINE( 114)			return this->callMember(HX_("__rmod__",d0,ab,36,49),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 115)		if (other->isInstance(HX_("IntType",29,f7,3d,d9))) {
HXLINE( 115)			int _hx_tmp = other->rawInt();
HXDLIN( 115)			return this->_float(hx::Mod(_hx_tmp,this->rawFloat()),null());
            		}
            		else {
HXLINE( 116)			bool _hx_tmp1;
HXDLIN( 116)			if (!(other->isInstance(HX_("FloatType",56,c2,14,a2)))) {
HXLINE( 116)				_hx_tmp1 = !(other->hasMember(HX_("mod",c2,16,53,00)));
            			}
            			else {
HXLINE( 116)				_hx_tmp1 = true;
            			}
HXDLIN( 116)			if (_hx_tmp1) {
HXLINE( 116)				Float _hx_tmp2 = other->rawFloat();
HXDLIN( 116)				return this->_float(hx::Mod(_hx_tmp2,this->rawFloat()),null());
            			}
            			else {
HXLINE( 117)				return other->mod(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 115)		return null();
            	}


 ::src::compiler::object::Object FloatObject_obj::eq( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_121_eq)
HXLINE( 122)		if (this->hasMember(HX_("__eq__",ac,01,11,f2))) {
HXLINE( 122)			return this->callMember(HX_("__eq__",ac,01,11,f2),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 123)		Float _hx_tmp = this->rawFloat();
HXDLIN( 123)		return this->_bool((_hx_tmp == other->rawFloat()),null());
            	}


 ::src::compiler::object::Object FloatObject_obj::neq( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_127_neq)
HXLINE( 128)		if (this->hasMember(HX_("__neq__",da,c6,8a,03))) {
HXLINE( 128)			return this->callMember(HX_("__neq__",da,c6,8a,03),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 129)		Float _hx_tmp = this->rawFloat();
HXDLIN( 129)		return this->_bool((_hx_tmp != other->rawFloat()),null());
            	}


 ::src::compiler::object::Object FloatObject_obj::ls( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_133_ls)
HXLINE( 134)		if (this->hasMember(HX_("__ls__",87,04,b3,f6))) {
HXLINE( 134)			return this->callMember(HX_("__ls__",87,04,b3,f6),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 135)		Float _hx_tmp = this->rawFloat();
HXDLIN( 135)		return this->_bool((_hx_tmp < other->rawFloat()),null());
            	}


 ::src::compiler::object::Object FloatObject_obj::lseq( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_139_lseq)
HXLINE( 140)		if (this->hasMember(HX_("__lseq__",b3,b7,e7,50))) {
HXLINE( 140)			return this->callMember(HX_("__lseq__",b3,b7,e7,50),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 141)		Float _hx_tmp = this->rawFloat();
HXDLIN( 141)		return this->_bool((_hx_tmp <= other->rawFloat()),null());
            	}


 ::src::compiler::object::Object FloatObject_obj::gr( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_145_gr)
HXLINE( 146)		if (this->hasMember(HX_("__gr__",2b,31,64,f3))) {
HXLINE( 146)			return this->callMember(HX_("__gr__",2b,31,64,f3),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 147)		Float _hx_tmp = this->rawFloat();
HXDLIN( 147)		return this->_bool((_hx_tmp > other->rawFloat()),null());
            	}


 ::src::compiler::object::Object FloatObject_obj::greq( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_151_greq)
HXLINE( 152)		if (this->hasMember(HX_("__greq__",57,55,b8,bd))) {
HXLINE( 152)			return this->callMember(HX_("__greq__",57,55,b8,bd),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE( 153)		Float _hx_tmp = this->rawFloat();
HXDLIN( 153)		return this->_bool((_hx_tmp >= other->rawFloat()),null());
            	}


 ::src::compiler::object::builtin::IntObject FloatObject_obj::_hx_int(){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_157_int)
HXLINE( 158)		if (this->hasMember(HX_("__int__",af,12,7f,28))) {
HXLINE( 158)			return hx::TCast<  ::src::compiler::object::builtin::IntObject >::cast(this->callMember(HX_("__int__",af,12,7f,28),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 159)		return this->_int(this->value,null());
            	}


 ::src::compiler::object::builtin::FloatObject FloatObject_obj::_hx_float(){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_163_float)
HXLINE( 164)		if (this->hasMember(HX_("__float__",9c,08,57,6b))) {
HXLINE( 164)			return hx::TCast<  ::src::compiler::object::builtin::FloatObject >::cast(this->callMember(HX_("__float__",9c,08,57,6b),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 165)		return hx::ObjectPtr<OBJ_>(this);
            	}


 ::src::compiler::object::builtin::StringObject FloatObject_obj::str(){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_169_str)
HXLINE( 170)		if (this->hasMember(HX_("__str__",f1,a2,76,ee))) {
HXLINE( 170)			return hx::TCast<  ::src::compiler::object::builtin::StringObject >::cast(this->callMember(HX_("__str__",f1,a2,76,ee),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 171)		return this->_str(::Std_obj::string(this->value),null());
            	}


 ::src::compiler::object::builtin::BoolObject FloatObject_obj::_hx_bool(){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_175_bool)
HXLINE( 176)		if (this->hasMember(HX_("__bool__",ea,20,54,0a))) {
HXLINE( 176)			return hx::TCast<  ::src::compiler::object::builtin::BoolObject >::cast(this->callMember(HX_("__bool__",ea,20,54,0a),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 177)		return this->_bool((this->value != (int)0),null());
            	}


 ::src::compiler::object::builtin::BytesObject FloatObject_obj::bytes(){
            	HX_GC_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_181_bytes)
HXLINE( 182)		if (this->hasMember(HX_("__bytes__",2b,dd,49,db))) {
HXLINE( 182)			return hx::TCast<  ::src::compiler::object::builtin::BytesObject >::cast(this->callMember(HX_("__bytes__",2b,dd,49,db),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE( 183)		 ::haxe::io::BytesBuffer buffer =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 184)		buffer->addInt64(::haxe::io::FPHelper_obj::doubleToI64(this->value));
HXLINE( 185)		return this->_bytes(buffer->getBytes(),null());
            	}


 ::src::compiler::object::Object FloatObject_obj::negate(){
            	HX_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_189_negate)
HXLINE( 190)		if (this->hasMember(HX_("__negate__",82,7c,77,f4))) {
HXLINE( 190)			return this->callMember(HX_("__negate__",82,7c,77,f4),::Array_obj< ::Dynamic>::__new(0));
            		}
HXLINE( 191)		return this->_float(-(this->value),null());
            	}


int FloatObject_obj::getHash(){
            	HX_GC_STACKFRAME(&_hx_pos_fd6a0ccbf0daade4_195_getHash)
HXLINE( 196)		 ::haxe::io::BytesBuffer buffer =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 197)		buffer->addInt32(::haxe::io::FPHelper_obj::floatToI32(this->value));
HXLINE( 198)		 ::haxe::io::Bytes _this = buffer->getBytes();
HXDLIN( 198)		int _this1 = _this->b->__get((int)0);
HXDLIN( 198)		int _hx_tmp = ((int)_this1 | (int)((int)_this->b->__get((int)1) << (int)(int)8));
HXDLIN( 198)		int _hx_tmp1 = ((int)_hx_tmp | (int)((int)_this->b->__get((int)2) << (int)(int)16));
HXDLIN( 198)		return ((int)_hx_tmp1 | (int)((int)_this->b->__get((int)3) << (int)(int)24));
            	}



hx::ObjectPtr< FloatObject_obj > FloatObject_obj::__new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	hx::ObjectPtr< FloatObject_obj > __this = new FloatObject_obj();
	__this->__construct(scope,type,members,value,args);
	return __this;
}

hx::ObjectPtr< FloatObject_obj > FloatObject_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	FloatObject_obj *__this = (FloatObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FloatObject_obj), true, "src.compiler.object.builtin.FloatObject"));
	*(void **)__this = FloatObject_obj::_hx_vtable;
	__this->__construct(scope,type,members,value,args);
	return __this;
}

FloatObject_obj::FloatObject_obj()
{
}

hx::Val FloatObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"eq") ) { return hx::Val( eq_dyn() ); }
		if (HX_FIELD_EQ(inName,"ls") ) { return hx::Val( ls_dyn() ); }
		if (HX_FIELD_EQ(inName,"gr") ) { return hx::Val( gr_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"sub") ) { return hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"div") ) { return hx::Val( div_dyn() ); }
		if (HX_FIELD_EQ(inName,"pow") ) { return hx::Val( pow_dyn() ); }
		if (HX_FIELD_EQ(inName,"mod") ) { return hx::Val( mod_dyn() ); }
		if (HX_FIELD_EQ(inName,"neq") ) { return hx::Val( neq_dyn() ); }
		if (HX_FIELD_EQ(inName,"int") ) { return hx::Val( _hx_int_dyn() ); }
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rsub") ) { return hx::Val( rsub_dyn() ); }
		if (HX_FIELD_EQ(inName,"mult") ) { return hx::Val( mult_dyn() ); }
		if (HX_FIELD_EQ(inName,"rdiv") ) { return hx::Val( rdiv_dyn() ); }
		if (HX_FIELD_EQ(inName,"rpow") ) { return hx::Val( rpow_dyn() ); }
		if (HX_FIELD_EQ(inName,"rmod") ) { return hx::Val( rmod_dyn() ); }
		if (HX_FIELD_EQ(inName,"lseq") ) { return hx::Val( lseq_dyn() ); }
		if (HX_FIELD_EQ(inName,"greq") ) { return hx::Val( greq_dyn() ); }
		if (HX_FIELD_EQ(inName,"bool") ) { return hx::Val( _hx_bool_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"setup") ) { return hx::Val( setup_dyn() ); }
		if (HX_FIELD_EQ(inName,"float") ) { return hx::Val( _hx_float_dyn() ); }
		if (HX_FIELD_EQ(inName,"bytes") ) { return hx::Val( bytes_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"intdiv") ) { return hx::Val( intdiv_dyn() ); }
		if (HX_FIELD_EQ(inName,"negate") ) { return hx::Val( negate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rintdiv") ) { return hx::Val( rintdiv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getHash") ) { return hx::Val( getHash_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return hx::Val( getValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FloatObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FloatObject_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FloatObject_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FloatObject_obj_sStaticStorageInfo = 0;
#endif

static ::String FloatObject_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("rsub","\x4e","\xfc","\xb1","\x4b"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("div","\x51","\x3d","\x4c","\x00"),
	HX_HCSTRING("rdiv","\x1f","\x90","\xa6","\x4b"),
	HX_HCSTRING("intdiv","\xc2","\xaf","\x85","\x9e"),
	HX_HCSTRING("rintdiv","\xb4","\x91","\x14","\x23"),
	HX_HCSTRING("pow","\x98","\x5d","\x55","\x00"),
	HX_HCSTRING("rpow","\x66","\xb0","\xaf","\x4b"),
	HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"),
	HX_HCSTRING("rmod","\x90","\x69","\xad","\x4b"),
	HX_HCSTRING("eq","\x6c","\x58","\x00","\x00"),
	HX_HCSTRING("neq","\x5a","\xd0","\x53","\x00"),
	HX_HCSTRING("ls","\x87","\x5e","\x00","\x00"),
	HX_HCSTRING("lseq","\xb3","\xa6","\xba","\x47"),
	HX_HCSTRING("gr","\x2b","\x5a","\x00","\x00"),
	HX_HCSTRING("greq","\x57","\xd3","\x6b","\x44"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("negate","\xc2","\x41","\x19","\x67"),
	HX_HCSTRING("getHash","\x84","\xdf","\x8a","\x17"),
	::String(null()) };

static void FloatObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FloatObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatObject_obj::__mClass,"__mClass");
};

#endif

hx::Class FloatObject_obj::__mClass;

void FloatObject_obj::__register()
{
	hx::Object *dummy = new FloatObject_obj;
	FloatObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.FloatObject","\xc6","\x13","\xee","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FloatObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FloatObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FloatObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FloatObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FloatObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
