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
#ifndef INCLUDED_src_compiler_object_builtin_NoneObject
#include <src/compiler/object/builtin/NoneObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_StringObject
#include <src/compiler/object/builtin/StringObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dae5fce86c0e06c6_12_new,"src.compiler.object.builtin.NoneObject","new",0xfa1e1a9e,"src.compiler.object.builtin.NoneObject.new","src/compiler/object/builtin/NoneObject.hx",12,0xa694c830)
HX_LOCAL_STACK_FRAME(_hx_pos_dae5fce86c0e06c6_16_bool,"src.compiler.object.builtin.NoneObject","bool",0xd852302c,"src.compiler.object.builtin.NoneObject.bool","src/compiler/object/builtin/NoneObject.hx",16,0xa694c830)
HX_LOCAL_STACK_FRAME(_hx_pos_dae5fce86c0e06c6_22_str,"src.compiler.object.builtin.NoneObject","str",0xfa21f2ef,"src.compiler.object.builtin.NoneObject.str","src/compiler/object/builtin/NoneObject.hx",22,0xa694c830)
HX_LOCAL_STACK_FRAME(_hx_pos_dae5fce86c0e06c6_28_int,"src.compiler.object.builtin.NoneObject","int",0xfa1a572d,"src.compiler.object.builtin.NoneObject.int","src/compiler/object/builtin/NoneObject.hx",28,0xa694c830)
HX_LOCAL_STACK_FRAME(_hx_pos_dae5fce86c0e06c6_34_float,"src.compiler.object.builtin.NoneObject","float",0xbb369b5a,"src.compiler.object.builtin.NoneObject.float","src/compiler/object/builtin/NoneObject.hx",34,0xa694c830)
HX_LOCAL_STACK_FRAME(_hx_pos_dae5fce86c0e06c6_41_getHash,"src.compiler.object.builtin.NoneObject","getHash",0x181a20c2,"src.compiler.object.builtin.NoneObject.getHash","src/compiler/object/builtin/NoneObject.hx",41,0xa694c830)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void NoneObject_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_dae5fce86c0e06c6_12_new)
HXDLIN(  12)		super::__construct(scope,type,members,args);
            	}

Dynamic NoneObject_obj::__CreateEmpty() { return new NoneObject_obj; }

void *NoneObject_obj::_hx_vtable = 0;

Dynamic NoneObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NoneObject_obj > _hx_result = new NoneObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool NoneObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15de4261) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x15de4261;
	} else {
		return inClassId==(int)0x21df98d8;
	}
}

 ::src::compiler::object::builtin::BoolObject NoneObject_obj::_hx_bool(){
            	HX_STACKFRAME(&_hx_pos_dae5fce86c0e06c6_16_bool)
HXLINE(  17)		if (this->hasMember(HX_("__bool__",ea,20,54,0a))) {
HXLINE(  17)			return hx::TCast<  ::src::compiler::object::builtin::BoolObject >::cast(this->callMember(HX_("__bool__",ea,20,54,0a),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  18)		return this->_bool(false,null());
            	}


 ::src::compiler::object::builtin::StringObject NoneObject_obj::str(){
            	HX_STACKFRAME(&_hx_pos_dae5fce86c0e06c6_22_str)
HXLINE(  23)		if (this->hasMember(HX_("__str__",f1,a2,76,ee))) {
HXLINE(  23)			return hx::TCast<  ::src::compiler::object::builtin::StringObject >::cast(this->callMember(HX_("__str__",f1,a2,76,ee),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  24)		return this->_str(HX_("none",b8,12,0a,49),null());
            	}


 ::src::compiler::object::builtin::IntObject NoneObject_obj::_hx_int(){
            	HX_STACKFRAME(&_hx_pos_dae5fce86c0e06c6_28_int)
HXLINE(  29)		if (this->hasMember(HX_("__int__",af,12,7f,28))) {
HXLINE(  29)			return hx::TCast<  ::src::compiler::object::builtin::IntObject >::cast(this->callMember(HX_("__int__",af,12,7f,28),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  30)		return this->_int((int)0,null());
            	}


 ::src::compiler::object::builtin::FloatObject NoneObject_obj::_hx_float(){
            	HX_STACKFRAME(&_hx_pos_dae5fce86c0e06c6_34_float)
HXLINE(  35)		if (this->hasMember(HX_("__float__",9c,08,57,6b))) {
HXLINE(  35)			return hx::TCast<  ::src::compiler::object::builtin::FloatObject >::cast(this->callMember(HX_("__float__",9c,08,57,6b),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  36)		return this->_float((int)0,null());
            	}


int NoneObject_obj::getHash(){
            	HX_STACKFRAME(&_hx_pos_dae5fce86c0e06c6_41_getHash)
HXDLIN(  41)		return (int)0;
            	}



hx::ObjectPtr< NoneObject_obj > NoneObject_obj::__new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members,::Array< ::Dynamic> args) {
	hx::ObjectPtr< NoneObject_obj > __this = new NoneObject_obj();
	__this->__construct(scope,type,members,args);
	return __this;
}

hx::ObjectPtr< NoneObject_obj > NoneObject_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members,::Array< ::Dynamic> args) {
	NoneObject_obj *__this = (NoneObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NoneObject_obj), true, "src.compiler.object.builtin.NoneObject"));
	*(void **)__this = NoneObject_obj::_hx_vtable;
	__this->__construct(scope,type,members,args);
	return __this;
}

NoneObject_obj::NoneObject_obj()
{
}

hx::Val NoneObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str_dyn() ); }
		if (HX_FIELD_EQ(inName,"int") ) { return hx::Val( _hx_int_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { return hx::Val( _hx_bool_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return hx::Val( _hx_float_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHash") ) { return hx::Val( getHash_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NoneObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NoneObject_obj_sStaticStorageInfo = 0;
#endif

static ::String NoneObject_obj_sMemberFields[] = {
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("getHash","\x84","\xdf","\x8a","\x17"),
	::String(null()) };

static void NoneObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoneObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NoneObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoneObject_obj::__mClass,"__mClass");
};

#endif

hx::Class NoneObject_obj::__mClass;

void NoneObject_obj::__register()
{
	hx::Object *dummy = new NoneObject_obj;
	NoneObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.NoneObject","\xac","\x33","\x61","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NoneObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NoneObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NoneObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NoneObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoneObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoneObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
