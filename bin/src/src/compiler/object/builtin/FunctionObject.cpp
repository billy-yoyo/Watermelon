// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_FunctionArgument
#include <src/compiler/object/builtin/FunctionArgument.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_FunctionCode
#include <src/compiler/object/builtin/FunctionCode.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_FunctionObject
#include <src/compiler/object/builtin/FunctionObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ListObject
#include <src/compiler/object/builtin/ListObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_MapObject
#include <src/compiler/object/builtin/MapObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_PairObject
#include <src/compiler/object/builtin/PairObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_StringObject
#include <src/compiler/object/builtin/StringObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif
#ifndef INCLUDED_src_compiler_signals_ExitSignal
#include <src/compiler/signals/ExitSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_InvalidArgumentSignal
#include <src/compiler/signals/InvalidArgumentSignal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7cc1d9a745b9edba_14_new,"src.compiler.object.builtin.FunctionObject","new",0xa49a597e,"src.compiler.object.builtin.FunctionObject.new","src/compiler/object/builtin/FunctionObject.hx",14,0xbef42c50)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc1d9a745b9edba_20_setup,"src.compiler.object.builtin.FunctionObject","setup",0xa4013b1b,"src.compiler.object.builtin.FunctionObject.setup","src/compiler/object/builtin/FunctionObject.hx",20,0xbef42c50)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc1d9a745b9edba_28_getCode,"src.compiler.object.builtin.FunctionObject","getCode",0x7f0bd101,"src.compiler.object.builtin.FunctionObject.getCode","src/compiler/object/builtin/FunctionObject.hx",28,0xbef42c50)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc1d9a745b9edba_32_verifyArgumentIntegrity,"src.compiler.object.builtin.FunctionObject","verifyArgumentIntegrity",0xa4648ab5,"src.compiler.object.builtin.FunctionObject.verifyArgumentIntegrity","src/compiler/object/builtin/FunctionObject.hx",32,0xbef42c50)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc1d9a745b9edba_69_findKwdArg,"src.compiler.object.builtin.FunctionObject","findKwdArg",0x7bf35bb9,"src.compiler.object.builtin.FunctionObject.findKwdArg","src/compiler/object/builtin/FunctionObject.hx",69,0xbef42c50)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc1d9a745b9edba_77_setFunctionArguments,"src.compiler.object.builtin.FunctionObject","setFunctionArguments",0xea97943e,"src.compiler.object.builtin.FunctionObject.setFunctionArguments","src/compiler/object/builtin/FunctionObject.hx",77,0xbef42c50)
HX_LOCAL_STACK_FRAME(_hx_pos_7cc1d9a745b9edba_124_call,"src.compiler.object.builtin.FunctionObject","call",0x5b2b89c0,"src.compiler.object.builtin.FunctionObject.call","src/compiler/object/builtin/FunctionObject.hx",124,0xbef42c50)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void FunctionObject_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_7cc1d9a745b9edba_14_new)
HXDLIN(  14)		super::__construct(scope,type,members,value,args);
            	}

Dynamic FunctionObject_obj::__CreateEmpty() { return new FunctionObject_obj; }

void *FunctionObject_obj::_hx_vtable = 0;

Dynamic FunctionObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FunctionObject_obj > _hx_result = new FunctionObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FunctionObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x782c6273) {
		if (inClassId<=(int)0x15de4261) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15de4261;
		} else {
			return inClassId==(int)0x782c6273;
		}
	} else {
		return inClassId==(int)0x7d543174;
	}
}

void FunctionObject_obj::setup( ::Dynamic code){
            	HX_STACKFRAME(&_hx_pos_7cc1d9a745b9edba_20_setup)
HXLINE(  21)		this->code = ( ( ::src::compiler::object::builtin::FunctionCode)(code) );
HXLINE(  23)		this->verifyArgumentIntegrity();
            	}


 ::src::compiler::object::builtin::FunctionCode FunctionObject_obj::getCode(){
            	HX_STACKFRAME(&_hx_pos_7cc1d9a745b9edba_28_getCode)
HXDLIN(  28)		return this->code;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionObject_obj,getCode,return )

void FunctionObject_obj::verifyArgumentIntegrity(){
            	HX_STACKFRAME(&_hx_pos_7cc1d9a745b9edba_32_verifyArgumentIntegrity)
HXLINE(  33)		int stage = (int)0;
HXLINE(  34)		{
HXLINE(  34)			int _g = (int)0;
HXDLIN(  34)			::Array< ::Dynamic> _g1 = this->code->args;
HXDLIN(  34)			while((_g < _g1->length)){
HXLINE(  34)				 ::src::compiler::object::builtin::FunctionArgument arg = _g1->__get(_g).StaticCast<  ::src::compiler::object::builtin::FunctionArgument >();
HXDLIN(  34)				_g = (_g + (int)1);
HXLINE(  35)				if ((stage == (int)0)) {
HXLINE(  36)					bool _hx_tmp;
HXDLIN(  36)					if (arg->isCollector()) {
HXLINE(  36)						_hx_tmp = !(arg->isKwd());
            					}
            					else {
HXLINE(  36)						_hx_tmp = false;
            					}
HXDLIN(  36)					if (_hx_tmp) {
HXLINE(  37)						stage = (int)1;
HXLINE(  38)						this->positionalCollectorArg = arg;
            					}
            					else {
HXLINE(  40)						bool _hx_tmp1;
HXDLIN(  40)						if (arg->isCollector()) {
HXLINE(  40)							_hx_tmp1 = arg->isKwd();
            						}
            						else {
HXLINE(  40)							_hx_tmp1 = false;
            						}
HXDLIN(  40)						if (_hx_tmp1) {
HXLINE(  41)							stage = (int)3;
HXLINE(  42)							this->keywordCollectorArg = arg;
            						}
            						else {
HXLINE(  44)							if (arg->isKwd()) {
HXLINE(  44)								stage = (int)2;
            							}
            						}
            					}
            				}
            				else {
HXLINE(  45)					if ((stage == (int)1)) {
HXLINE(  46)						bool _hx_tmp2;
HXDLIN(  46)						if (arg->isCollector()) {
HXLINE(  46)							_hx_tmp2 = !(arg->isKwd());
            						}
            						else {
HXLINE(  46)							_hx_tmp2 = false;
            						}
HXDLIN(  46)						if (_hx_tmp2) {
HXLINE(  46)							HX_STACK_DO_THROW(HX_("Two positional argument collectors",31,3b,3b,0e));
            						}
            						else {
HXLINE(  47)							if (arg->isCollector()) {
HXLINE(  48)								stage = (int)3;
HXLINE(  49)								this->keywordCollectorArg = arg;
            							}
            							else {
HXLINE(  51)								if (arg->isKwd()) {
HXLINE(  51)									stage = (int)2;
            								}
            								else {
HXLINE(  52)									HX_STACK_DO_THROW(HX_("Required positional argument after argument collector",66,5f,0f,9c));
            								}
            							}
            						}
            					}
            					else {
HXLINE(  53)						if ((stage == (int)2)) {
HXLINE(  54)							bool _hx_tmp3;
HXDLIN(  54)							if (arg->isCollector()) {
HXLINE(  54)								_hx_tmp3 = !(arg->isKwd());
            							}
            							else {
HXLINE(  54)								_hx_tmp3 = false;
            							}
HXDLIN(  54)							if (_hx_tmp3) {
HXLINE(  54)								HX_STACK_DO_THROW(HX_("Positional argument collector after keyword argument",62,5f,2e,20));
            							}
            							else {
HXLINE(  55)								if (arg->isCollector()) {
HXLINE(  56)									stage = (int)3;
HXLINE(  57)									this->keywordCollectorArg = arg;
            								}
            								else {
HXLINE(  58)									if (!(arg->isKwd())) {
HXLINE(  58)										HX_STACK_DO_THROW(HX_("Positional argument after keyword argument",2f,20,05,49));
            									}
            								}
            							}
            						}
            						else {
HXLINE(  59)							if ((stage == (int)3)) {
HXLINE(  60)								bool _hx_tmp4;
HXDLIN(  60)								if (arg->isCollector()) {
HXLINE(  60)									_hx_tmp4 = !(arg->isKwd());
            								}
            								else {
HXLINE(  60)									_hx_tmp4 = false;
            								}
HXDLIN(  60)								if (_hx_tmp4) {
HXLINE(  60)									HX_STACK_DO_THROW(HX_("Positional argument collector after keyword argument collector",0f,6f,04,d1));
            								}
            								else {
HXLINE(  61)									if (arg->isCollector()) {
HXLINE(  61)										HX_STACK_DO_THROW(HX_("Two keyword argument collectors",de,67,66,9c));
            									}
            									else {
HXLINE(  62)										if (arg->isKwd()) {
HXLINE(  62)											HX_STACK_DO_THROW(HX_("Keyword argument after keyword argument collector",31,fb,ae,35));
            										}
            										else {
HXLINE(  63)											HX_STACK_DO_THROW(HX_("Positional argument after keyword argument collector",1c,12,e7,a3));
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunctionObject_obj,verifyArgumentIntegrity,(void))

 ::src::compiler::object::builtin::FunctionArgument FunctionObject_obj::findKwdArg(::String key){
            	HX_STACKFRAME(&_hx_pos_7cc1d9a745b9edba_69_findKwdArg)
HXLINE(  70)		{
HXLINE(  70)			int _g = (int)0;
HXDLIN(  70)			::Array< ::Dynamic> _g1 = this->code->args;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				 ::src::compiler::object::builtin::FunctionArgument arg = _g1->__get(_g).StaticCast<  ::src::compiler::object::builtin::FunctionArgument >();
HXDLIN(  70)				_g = (_g + (int)1);
HXLINE(  71)				if ((arg->getName() == key)) {
HXLINE(  71)					return arg;
            				}
            			}
            		}
HXLINE(  73)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunctionObject_obj,findKwdArg,return )

void FunctionObject_obj::setFunctionArguments( ::src::compiler::Scope fscope,::Array< ::Dynamic> arguments){
            	HX_GC_STACKFRAME(&_hx_pos_7cc1d9a745b9edba_77_setFunctionArguments)
HXLINE(  78)		int index = (int)0;
HXDLIN(  78)		 ::src::compiler::object::builtin::FunctionArgument posArg;
HXLINE(  79)		int positional = (int)0;
HXLINE(  81)		 ::src::compiler::object::builtin::MapObject kwdCollector = null();
HXLINE(  82)		if (hx::IsNotNull( this->keywordCollectorArg )) {
HXLINE(  82)			kwdCollector = hx::TCast<  ::src::compiler::object::builtin::MapObject >::cast(fscope->createObject(HX_("MapType",56,cf,55,ff),this->keywordCollectorArg->getName(),null()));
            		}
HXLINE(  84)		 ::src::compiler::object::builtin::ListObject posCollector = null();
HXLINE(  85)		if (hx::IsNotNull( this->positionalCollectorArg )) {
HXLINE(  85)			posCollector = hx::TCast<  ::src::compiler::object::builtin::ListObject >::cast(fscope->createObject(HX_("ListType",58,7e,af,06),this->positionalCollectorArg->getName(),null()));
            		}
HXLINE(  87)		{
HXLINE(  87)			int _g = (int)0;
HXDLIN(  87)			while((_g < arguments->length)){
HXLINE(  87)				 ::src::compiler::object::Object arg = arguments->__get(_g).StaticCast<  ::src::compiler::object::Object >();
HXDLIN(  87)				_g = (_g + (int)1);
HXLINE(  88)				if (arg->isInstance(HX_("PairType",14,cc,6e,78))) {
HXLINE(  89)					 ::src::compiler::object::builtin::PairObject pair = hx::TCast<  ::src::compiler::object::builtin::PairObject >::cast(arg);
HXLINE(  90)					 ::src::compiler::object::builtin::FunctionArgument kwdArg = this->findKwdArg(pair->getName());
HXLINE(  91)					::String key = kwdArg->getName();
HXLINE(  92)					if (hx::IsNull( kwdArg )) {
HXLINE(  93)						if (hx::IsNotNull( kwdCollector )) {
HXLINE(  94)							 ::src::compiler::object::builtin::StringObject _hx_tmp = this->_str(key,null());
HXDLIN(  94)							kwdCollector->set(_hx_tmp,pair->getValue());
            						}
            						else {
HXLINE(  95)							HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,(HX_("Invalid keyword argument ",83,ff,61,d7) + pair->getName())));
            						}
            					}
            					else {
HXLINE(  96)						if (fscope->getVariables()->exists(key)) {
HXLINE(  96)							HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,((HX_("Keyword argument ",ec,5e,6c,b1) + key) + HX_(" assigned twice (too many positional arguments?)",2b,6b,98,d2))));
            						}
            						else {
HXLINE(  98)							fscope->setVariable(key,pair->getValue());
            						}
            					}
            				}
            				else {
HXLINE( 101)					posArg = this->code->args->__get(index).StaticCast<  ::src::compiler::object::builtin::FunctionArgument >();
HXLINE( 102)					if (hx::IsNull( posArg )) {
HXLINE( 102)						HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,HX_("Too many positional arguments",7f,de,e6,9e)));
            					}
HXLINE( 103)					if (!(posArg->isKwd())) {
HXLINE( 103)						positional = (positional + (int)1);
            					}
HXLINE( 104)					bool _hx_tmp1;
HXDLIN( 104)					if (posArg->isKwd()) {
HXLINE( 104)						_hx_tmp1 = posArg->isCollector();
            					}
            					else {
HXLINE( 104)						_hx_tmp1 = false;
            					}
HXDLIN( 104)					if (_hx_tmp1) {
HXLINE( 104)						HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,(((HX_("Too many positional arguments given, expected between ",70,fb,5e,05) + positional) + HX_(" and ",89,11,44,ad)) + (index - (int)1))));
            					}
            					else {
HXLINE( 105)						if (posArg->isCollector()) {
HXLINE( 106)							posCollector->getArray()->push(arg);
            						}
            						else {
HXLINE( 108)							fscope->setVariable(posArg->getName(),arg);
HXLINE( 109)							index = (index + (int)1);
            						}
            					}
            				}
            			}
            		}
HXLINE( 114)		{
HXLINE( 114)			int _g1 = (int)0;
HXDLIN( 114)			::Array< ::Dynamic> _g11 = this->code->args;
HXDLIN( 114)			while((_g1 < _g11->length)){
HXLINE( 114)				 ::src::compiler::object::builtin::FunctionArgument arg1 = _g11->__get(_g1).StaticCast<  ::src::compiler::object::builtin::FunctionArgument >();
HXDLIN( 114)				_g1 = (_g1 + (int)1);
HXLINE( 115)				if (!(fscope->hasVariable(arg1->getName()))) {
HXLINE( 116)					if (arg1->isKwd()) {
HXLINE( 117)						::String _hx_tmp2 = arg1->getName();
HXDLIN( 117)						fscope->setVariable(_hx_tmp2,arg1->getDefault());
            					}
            					else {
HXLINE( 118)						HX_STACK_DO_THROW( ::src::compiler::signals::InvalidArgumentSignal_obj::__alloc( HX_CTX ,(((HX_("Not enough positional arguments, expected ",07,15,db,32) + this->code->positional) + HX_(", was given ",8e,21,44,8f)) + positional)));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunctionObject_obj,setFunctionArguments,(void))

 ::src::compiler::object::Object FunctionObject_obj::call(::Array< ::Dynamic> arguments){
            	HX_GC_STACKFRAME(&_hx_pos_7cc1d9a745b9edba_124_call)
HXLINE( 125)		if (this->hasMember(HX_("__bound__",be,5f,06,75))) {
HXLINE( 125)			arguments->insert((int)0,this->getMember(HX_("__bound__",be,5f,06,75)));
            		}
HXLINE( 126)		this->setFunctionArguments(this->code->code->getScope(),arguments);
HXLINE( 128)		 ::src::compiler::object::Object object = this->code->code->run();
HXLINE( 133)		 ::src::compiler::commands::Command _hx_tmp = this->code->code;
HXDLIN( 133)		::String _hx_tmp1 = this->code->code->getScope()->getName();
HXDLIN( 133)		 ::src::compiler::Scope _hx_tmp2 = this->code->code->getScope()->getParent();
HXDLIN( 133)		this->code->code = _hx_tmp->copy( ::src::compiler::Scope_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp2));
HXLINE( 135)		return object;
            	}



hx::ObjectPtr< FunctionObject_obj > FunctionObject_obj::__new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	hx::ObjectPtr< FunctionObject_obj > __this = new FunctionObject_obj();
	__this->__construct(scope,type,members,value,args);
	return __this;
}

hx::ObjectPtr< FunctionObject_obj > FunctionObject_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	FunctionObject_obj *__this = (FunctionObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FunctionObject_obj), true, "src.compiler.object.builtin.FunctionObject"));
	*(void **)__this = FunctionObject_obj::_hx_vtable;
	__this->__construct(scope,type,members,value,args);
	return __this;
}

FunctionObject_obj::FunctionObject_obj()
{
}

void FunctionObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionObject);
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(positionalCollectorArg,"positionalCollectorArg");
	HX_MARK_MEMBER_NAME(keywordCollectorArg,"keywordCollectorArg");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FunctionObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(positionalCollectorArg,"positionalCollectorArg");
	HX_VISIT_MEMBER_NAME(keywordCollectorArg,"keywordCollectorArg");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FunctionObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return hx::Val( code ); }
		if (HX_FIELD_EQ(inName,"call") ) { return hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return hx::Val( setup_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getCode") ) { return hx::Val( getCode_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"findKwdArg") ) { return hx::Val( findKwdArg_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"keywordCollectorArg") ) { return hx::Val( keywordCollectorArg ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setFunctionArguments") ) { return hx::Val( setFunctionArguments_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"positionalCollectorArg") ) { return hx::Val( positionalCollectorArg ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"verifyArgumentIntegrity") ) { return hx::Val( verifyArgumentIntegrity_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FunctionObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast<  ::src::compiler::object::builtin::FunctionCode >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"keywordCollectorArg") ) { keywordCollectorArg=inValue.Cast<  ::src::compiler::object::builtin::FunctionArgument >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"positionalCollectorArg") ) { positionalCollectorArg=inValue.Cast<  ::src::compiler::object::builtin::FunctionArgument >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FunctionObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"));
	outFields->push(HX_HCSTRING("positionalCollectorArg","\xfd","\xea","\x3d","\x8a"));
	outFields->push(HX_HCSTRING("keywordCollectorArg","\x92","\xcb","\xed","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FunctionObject_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::object::builtin::FunctionCode*/ ,(int)offsetof(FunctionObject_obj,code),HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41")},
	{hx::fsObject /*::src::compiler::object::builtin::FunctionArgument*/ ,(int)offsetof(FunctionObject_obj,positionalCollectorArg),HX_HCSTRING("positionalCollectorArg","\xfd","\xea","\x3d","\x8a")},
	{hx::fsObject /*::src::compiler::object::builtin::FunctionArgument*/ ,(int)offsetof(FunctionObject_obj,keywordCollectorArg),HX_HCSTRING("keywordCollectorArg","\x92","\xcb","\xed","\xd2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FunctionObject_obj_sStaticStorageInfo = 0;
#endif

static ::String FunctionObject_obj_sMemberFields[] = {
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("positionalCollectorArg","\xfd","\xea","\x3d","\x8a"),
	HX_HCSTRING("keywordCollectorArg","\x92","\xcb","\xed","\xd2"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("getCode","\xe3","\x60","\x47","\x14"),
	HX_HCSTRING("verifyArgumentIntegrity","\x97","\x7e","\x2d","\x6d"),
	HX_HCSTRING("findKwdArg","\x17","\x65","\x7d","\xb8"),
	HX_HCSTRING("setFunctionArguments","\x1c","\x3f","\x12","\x1b"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void FunctionObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunctionObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FunctionObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunctionObject_obj::__mClass,"__mClass");
};

#endif

hx::Class FunctionObject_obj::__mClass;

void FunctionObject_obj::__register()
{
	hx::Object *dummy = new FunctionObject_obj;
	FunctionObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.FunctionObject","\x8c","\x82","\x5c","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FunctionObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FunctionObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FunctionObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FunctionObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FunctionObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FunctionObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
