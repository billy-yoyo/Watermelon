// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

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

HX_DEFINE_STACK_FRAME(_hx_pos_199bbc350cffddea_10_new,"src.compiler.object.builtin.BoolObject","new",0xa1d28e90,"src.compiler.object.builtin.BoolObject.new","src/compiler/object/builtin/BoolObject.hx",10,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_16_setup,"src.compiler.object.builtin.BoolObject","setup",0x877e58ad,"src.compiler.object.builtin.BoolObject.setup","src/compiler/object/builtin/BoolObject.hx",16,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_21_getValue,"src.compiler.object.builtin.BoolObject","getValue",0xc70162cb,"src.compiler.object.builtin.BoolObject.getValue","src/compiler/object/builtin/BoolObject.hx",21,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_25_bool,"src.compiler.object.builtin.BoolObject","bool",0xee832ffa,"src.compiler.object.builtin.BoolObject.bool","src/compiler/object/builtin/BoolObject.hx",25,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_31_not,"src.compiler.object.builtin.BoolObject","not",0xa1d29743,"src.compiler.object.builtin.BoolObject.not","src/compiler/object/builtin/BoolObject.hx",31,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_37_and,"src.compiler.object.builtin.BoolObject","and",0xa1c8b907,"src.compiler.object.builtin.BoolObject.and","src/compiler/object/builtin/BoolObject.hx",37,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_44_or,"src.compiler.object.builtin.BoolObject","or",0xf9d678f3,"src.compiler.object.builtin.BoolObject.or","src/compiler/object/builtin/BoolObject.hx",44,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_51_xor,"src.compiler.object.builtin.BoolObject","xor",0xa1da2dcb,"src.compiler.object.builtin.BoolObject.xor","src/compiler/object/builtin/BoolObject.hx",51,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_61_int,"src.compiler.object.builtin.BoolObject","int",0xa1cecb1f,"src.compiler.object.builtin.BoolObject.int","src/compiler/object/builtin/BoolObject.hx",61,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_67_float,"src.compiler.object.builtin.BoolObject","float",0x0fe56fcc,"src.compiler.object.builtin.BoolObject.float","src/compiler/object/builtin/BoolObject.hx",67,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_73_str,"src.compiler.object.builtin.BoolObject","str",0xa1d666e1,"src.compiler.object.builtin.BoolObject.str","src/compiler/object/builtin/BoolObject.hx",73,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_79_eq,"src.compiler.object.builtin.BoolObject","eq",0xf9d6703c,"src.compiler.object.builtin.BoolObject.eq","src/compiler/object/builtin/BoolObject.hx",79,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_85_neq,"src.compiler.object.builtin.BoolObject","neq",0xa1d28e8a,"src.compiler.object.builtin.BoolObject.neq","src/compiler/object/builtin/BoolObject.hx",85,0x2476987e)
HX_LOCAL_STACK_FRAME(_hx_pos_199bbc350cffddea_92_getHash,"src.compiler.object.builtin.BoolObject","getHash",0x157c75b4,"src.compiler.object.builtin.BoolObject.getHash","src/compiler/object/builtin/BoolObject.hx",92,0x2476987e)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void BoolObject_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_10_new)
HXDLIN(  10)		super::__construct(scope,type,members,value,args);
            	}

Dynamic BoolObject_obj::__CreateEmpty() { return new BoolObject_obj; }

void *BoolObject_obj::_hx_vtable = 0;

Dynamic BoolObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BoolObject_obj > _hx_result = new BoolObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool BoolObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x782c6273) {
		if (inClassId<=(int)0x15de4261) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15de4261;
		} else {
			return inClassId==(int)0x782c6273;
		}
	} else {
		return inClassId==(int)0x7aaaabca;
	}
}

void BoolObject_obj::setup( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_16_setup)
HXDLIN(  16)		this->value = ( (bool)(value) );
            	}


bool BoolObject_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_21_getValue)
HXDLIN(  21)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoolObject_obj,getValue,return )

 ::src::compiler::object::builtin::BoolObject BoolObject_obj::_hx_bool(){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_25_bool)
HXLINE(  26)		if (this->hasMember(HX_("__bool__",ea,20,54,0a))) {
HXLINE(  26)			return hx::TCast<  ::src::compiler::object::builtin::BoolObject >::cast(this->callMember(HX_("__bool__",ea,20,54,0a),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  27)		return hx::ObjectPtr<OBJ_>(this);
            	}


 ::src::compiler::object::Object BoolObject_obj::_hx_not(){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_31_not)
HXLINE(  32)		if (this->hasMember(HX_("__not__",d3,2f,29,0a))) {
HXLINE(  32)			return this->callMember(HX_("__not__",d3,2f,29,0a),::Array_obj< ::Dynamic>::__new(0));
            		}
HXLINE(  33)		return this->_bool(!(this->value),null());
            	}


 ::src::compiler::object::Object BoolObject_obj::_hx_and( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_37_and)
HXLINE(  38)		if (this->hasMember(HX_("__and__",97,4a,3e,8d))) {
HXLINE(  38)			return this->callMember(HX_("__and__",97,4a,3e,8d),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  39)		bool _hx_tmp;
HXDLIN(  39)		if (!(other->isInstance(HX_("BoolType",24,bc,95,8f)))) {
HXLINE(  39)			_hx_tmp = !(other->hasMember(HX_("__or__",23,e6,ad,f8)));
            		}
            		else {
HXLINE(  39)			_hx_tmp = true;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  39)			bool _hx_tmp1;
HXDLIN(  39)			if (!(this->rawBool())) {
HXLINE(  39)				_hx_tmp1 = other->rawBool();
            			}
            			else {
HXLINE(  39)				_hx_tmp1 = true;
            			}
HXDLIN(  39)			return this->_bool(_hx_tmp1,null());
            		}
            		else {
HXLINE(  40)			return other->_hx_or(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  39)		return null();
            	}


 ::src::compiler::object::Object BoolObject_obj::_hx_or( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_44_or)
HXLINE(  45)		if (this->hasMember(HX_("__or__",23,e6,ad,f8))) {
HXLINE(  45)			return this->callMember(HX_("__or__",23,e6,ad,f8),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if (!(other->isInstance(HX_("BoolType",24,bc,95,8f)))) {
HXLINE(  46)			_hx_tmp = !(other->hasMember(HX_("__or__",23,e6,ad,f8)));
            		}
            		else {
HXLINE(  46)			_hx_tmp = true;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  46)			bool _hx_tmp1;
HXDLIN(  46)			if (!(this->rawBool())) {
HXLINE(  46)				_hx_tmp1 = other->rawBool();
            			}
            			else {
HXLINE(  46)				_hx_tmp1 = true;
            			}
HXDLIN(  46)			return this->_bool(_hx_tmp1,null());
            		}
            		else {
HXLINE(  47)			return other->_hx_or(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  46)		return null();
            	}


 ::src::compiler::object::Object BoolObject_obj::_hx_xor( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_51_xor)
HXLINE(  52)		if (this->hasMember(HX_("__xor__",5b,78,29,cc))) {
HXLINE(  52)			return this->callMember(HX_("__xor__",5b,78,29,cc),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  53)		bool _hx_tmp;
HXDLIN(  53)		if (!(other->isInstance(HX_("BoolType",24,bc,95,8f)))) {
HXLINE(  53)			_hx_tmp = !(other->hasMember(HX_("__xor__",5b,78,29,cc)));
            		}
            		else {
HXLINE(  53)			_hx_tmp = true;
            		}
HXDLIN(  53)		if (_hx_tmp) {
HXLINE(  54)			bool b0 = this->rawBool();
HXDLIN(  54)			bool b1 = other->rawBool();
HXLINE(  55)			bool _hx_tmp1;
HXDLIN(  55)			bool _hx_tmp2;
HXDLIN(  55)			if (!(b0)) {
HXLINE(  55)				_hx_tmp2 = b1;
            			}
            			else {
HXLINE(  55)				_hx_tmp2 = true;
            			}
HXDLIN(  55)			if (_hx_tmp2) {
HXLINE(  55)				bool _hx_tmp3;
HXDLIN(  55)				if (b0) {
HXLINE(  55)					_hx_tmp3 = b1;
            				}
            				else {
HXLINE(  55)					_hx_tmp3 = false;
            				}
HXDLIN(  55)				_hx_tmp1 = !(_hx_tmp3);
            			}
            			else {
HXLINE(  55)				_hx_tmp1 = false;
            			}
HXDLIN(  55)			return this->_bool(_hx_tmp1,null());
            		}
            		else {
HXLINE(  57)			return other->_hx_xor(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  53)		return null();
            	}


 ::src::compiler::object::builtin::IntObject BoolObject_obj::_hx_int(){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_61_int)
HXLINE(  62)		if (this->hasMember(HX_("__int__",af,12,7f,28))) {
HXLINE(  62)			return hx::TCast<  ::src::compiler::object::builtin::IntObject >::cast(this->callMember(HX_("__int__",af,12,7f,28),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  63)		int _hx_tmp;
HXDLIN(  63)		if (this->value) {
HXLINE(  63)			_hx_tmp = (int)1;
            		}
            		else {
HXLINE(  63)			_hx_tmp = (int)0;
            		}
HXDLIN(  63)		return this->_int(_hx_tmp,null());
            	}


 ::src::compiler::object::builtin::FloatObject BoolObject_obj::_hx_float(){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_67_float)
HXLINE(  68)		if (this->hasMember(HX_("__float__",9c,08,57,6b))) {
HXLINE(  68)			return hx::TCast<  ::src::compiler::object::builtin::FloatObject >::cast(this->callMember(HX_("__float__",9c,08,57,6b),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  69)		Float _hx_tmp;
HXDLIN(  69)		if (this->value) {
HXLINE(  69)			_hx_tmp = (int)1;
            		}
            		else {
HXLINE(  69)			_hx_tmp = (int)0;
            		}
HXDLIN(  69)		return this->_float(_hx_tmp,null());
            	}


 ::src::compiler::object::builtin::StringObject BoolObject_obj::str(){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_73_str)
HXLINE(  74)		if (this->hasMember(HX_("__str__",f1,a2,76,ee))) {
HXLINE(  74)			return hx::TCast<  ::src::compiler::object::builtin::StringObject >::cast(this->callMember(HX_("__str__",f1,a2,76,ee),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  75)		return this->_str(::Std_obj::string(this->value),null());
            	}


 ::src::compiler::object::Object BoolObject_obj::eq( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_79_eq)
HXLINE(  80)		if (this->hasMember(HX_("__eq__",ac,01,11,f2))) {
HXLINE(  80)			return this->callMember(HX_("__eq__",ac,01,11,f2),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  81)		bool _hx_tmp = this->rawBool();
HXDLIN(  81)		return this->_bool((_hx_tmp == other->rawBool()),null());
            	}


 ::src::compiler::object::Object BoolObject_obj::neq( ::src::compiler::object::Object other){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_85_neq)
HXLINE(  86)		if (this->hasMember(HX_("__neq__",da,c6,8a,03))) {
HXLINE(  86)			return this->callMember(HX_("__neq__",da,c6,8a,03),::Array_obj< ::Dynamic>::__new(1)->init(0,other));
            		}
HXLINE(  87)		bool _hx_tmp = this->rawBool();
HXDLIN(  87)		return this->_bool((_hx_tmp != other->rawBool()),null());
            	}


::String BoolObject_obj::getHash(){
            	HX_STACKFRAME(&_hx_pos_199bbc350cffddea_92_getHash)
HXDLIN(  92)		return ::Std_obj::string(this->_hx_int());
            	}



hx::ObjectPtr< BoolObject_obj > BoolObject_obj::__new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	hx::ObjectPtr< BoolObject_obj > __this = new BoolObject_obj();
	__this->__construct(scope,type,members,value,args);
	return __this;
}

hx::ObjectPtr< BoolObject_obj > BoolObject_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	BoolObject_obj *__this = (BoolObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BoolObject_obj), true, "src.compiler.object.builtin.BoolObject"));
	*(void **)__this = BoolObject_obj::_hx_vtable;
	__this->__construct(scope,type,members,value,args);
	return __this;
}

BoolObject_obj::BoolObject_obj()
{
}

hx::Val BoolObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { return hx::Val( _hx_or_dyn() ); }
		if (HX_FIELD_EQ(inName,"eq") ) { return hx::Val( eq_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { return hx::Val( _hx_not_dyn() ); }
		if (HX_FIELD_EQ(inName,"and") ) { return hx::Val( _hx_and_dyn() ); }
		if (HX_FIELD_EQ(inName,"xor") ) { return hx::Val( _hx_xor_dyn() ); }
		if (HX_FIELD_EQ(inName,"int") ) { return hx::Val( _hx_int_dyn() ); }
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str_dyn() ); }
		if (HX_FIELD_EQ(inName,"neq") ) { return hx::Val( neq_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { return hx::Val( _hx_bool_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"setup") ) { return hx::Val( setup_dyn() ); }
		if (HX_FIELD_EQ(inName,"float") ) { return hx::Val( _hx_float_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHash") ) { return hx::Val( getHash_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return hx::Val( getValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BoolObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoolObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BoolObject_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(BoolObject_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BoolObject_obj_sStaticStorageInfo = 0;
#endif

static ::String BoolObject_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("not","\x13","\xd9","\x53","\x00"),
	HX_HCSTRING("and","\xd7","\xfa","\x49","\x00"),
	HX_HCSTRING("or","\x23","\x61","\x00","\x00"),
	HX_HCSTRING("xor","\x9b","\x6f","\x5b","\x00"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("eq","\x6c","\x58","\x00","\x00"),
	HX_HCSTRING("neq","\x5a","\xd0","\x53","\x00"),
	HX_HCSTRING("getHash","\x84","\xdf","\x8a","\x17"),
	::String(null()) };

static void BoolObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoolObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BoolObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoolObject_obj::__mClass,"__mClass");
};

#endif

hx::Class BoolObject_obj::__mClass;

void BoolObject_obj::__register()
{
	hx::Object *dummy = new BoolObject_obj;
	BoolObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.BoolObject","\x9e","\x46","\x2c","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BoolObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BoolObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BoolObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BoolObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoolObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoolObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin