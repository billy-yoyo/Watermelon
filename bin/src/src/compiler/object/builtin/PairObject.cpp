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
#ifndef INCLUDED_src_compiler_object_builtin_PairObject
#include <src/compiler/object/builtin/PairObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_StringObject
#include <src/compiler/object/builtin/StringObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ValuedObject
#include <src/compiler/object/builtin/ValuedObject.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin__PairObject_Pair
#include <src/compiler/object/builtin/_PairObject/Pair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da1b9bd74c3b455b_11_new,"src.compiler.object.builtin.PairObject","new",0xf1803280,"src.compiler.object.builtin.PairObject.new","src/compiler/object/builtin/PairObject.hx",11,0xd90dc28e)
HX_LOCAL_STACK_FRAME(_hx_pos_da1b9bd74c3b455b_20_setup,"src.compiler.object.builtin.PairObject","setup",0x58d0d89d,"src.compiler.object.builtin.PairObject.setup","src/compiler/object/builtin/PairObject.hx",20,0xd90dc28e)
HX_LOCAL_STACK_FRAME(_hx_pos_da1b9bd74c3b455b_24_getName,"src.compiler.object.builtin.PairObject","getName",0xc45a1421,"src.compiler.object.builtin.PairObject.getName","src/compiler/object/builtin/PairObject.hx",24,0xd90dc28e)
HX_LOCAL_STACK_FRAME(_hx_pos_da1b9bd74c3b455b_28_getValue,"src.compiler.object.builtin.PairObject","getValue",0xa5ab78db,"src.compiler.object.builtin.PairObject.getValue","src/compiler/object/builtin/PairObject.hx",28,0xd90dc28e)
HX_LOCAL_STACK_FRAME(_hx_pos_da1b9bd74c3b455b_32_str,"src.compiler.object.builtin.PairObject","str",0xf1840ad1,"src.compiler.object.builtin.PairObject.str","src/compiler/object/builtin/PairObject.hx",32,0xd90dc28e)
HX_LOCAL_STACK_FRAME(_hx_pos_da1b9bd74c3b455b_14_createPair,"src.compiler.object.builtin.PairObject","createPair",0x9f31bf16,"src.compiler.object.builtin.PairObject.createPair","src/compiler/object/builtin/PairObject.hx",14,0xd90dc28e)
namespace src{
namespace compiler{
namespace object{
namespace builtin{

void PairObject_obj::__construct( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_da1b9bd74c3b455b_11_new)
HXDLIN(  11)		super::__construct(scope,type,members,value,args);
            	}

Dynamic PairObject_obj::__CreateEmpty() { return new PairObject_obj; }

void *PairObject_obj::_hx_vtable = 0;

Dynamic PairObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PairObject_obj > _hx_result = new PairObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool PairObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17db97ba) {
		if (inClassId<=(int)0x15de4261) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15de4261;
		} else {
			return inClassId==(int)0x17db97ba;
		}
	} else {
		return inClassId==(int)0x782c6273;
	}
}

void PairObject_obj::setup( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_da1b9bd74c3b455b_20_setup)
HXDLIN(  20)		this->pair = ( ( ::src::compiler::object::builtin::_PairObject::Pair)(value) );
            	}


::String PairObject_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_da1b9bd74c3b455b_24_getName)
HXDLIN(  24)		return this->pair->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PairObject_obj,getName,return )

 ::src::compiler::object::Object PairObject_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_da1b9bd74c3b455b_28_getValue)
HXDLIN(  28)		return this->pair->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PairObject_obj,getValue,return )

 ::src::compiler::object::builtin::StringObject PairObject_obj::str(){
            	HX_STACKFRAME(&_hx_pos_da1b9bd74c3b455b_32_str)
HXLINE(  33)		if (this->hasMember(HX_("__str__",f1,a2,76,ee))) {
HXLINE(  33)			return hx::TCast<  ::src::compiler::object::builtin::StringObject >::cast(this->callMember(HX_("__str__",f1,a2,76,ee),::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  34)		return this->_str(this->pair->name,null());
            	}


 ::src::compiler::object::builtin::_PairObject::Pair PairObject_obj::createPair(::String name, ::src::compiler::object::Object value){
            	HX_GC_STACKFRAME(&_hx_pos_da1b9bd74c3b455b_14_createPair)
HXDLIN(  14)		return  ::src::compiler::object::builtin::_PairObject::Pair_obj::__alloc( HX_CTX ,name,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PairObject_obj,createPair,return )


hx::ObjectPtr< PairObject_obj > PairObject_obj::__new( ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	hx::ObjectPtr< PairObject_obj > __this = new PairObject_obj();
	__this->__construct(scope,type,members,value,args);
	return __this;
}

hx::ObjectPtr< PairObject_obj > PairObject_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope, ::src::compiler::object::ObjectType type, ::haxe::ds::StringMap members, ::Dynamic value,::Array< ::Dynamic> args) {
	PairObject_obj *__this = (PairObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PairObject_obj), true, "src.compiler.object.builtin.PairObject"));
	*(void **)__this = PairObject_obj::_hx_vtable;
	__this->__construct(scope,type,members,value,args);
	return __this;
}

PairObject_obj::PairObject_obj()
{
}

void PairObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PairObject);
	HX_MARK_MEMBER_NAME(pair,"pair");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PairObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pair,"pair");
	 ::src::compiler::object::builtin::ValuedObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PairObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { return hx::Val( pair ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return hx::Val( setup_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return hx::Val( getValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PairObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"createPair") ) { outValue = createPair_dyn(); return true; }
	}
	return false;
}

hx::Val PairObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { pair=inValue.Cast<  ::src::compiler::object::builtin::_PairObject::Pair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PairObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PairObject_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::src::compiler::object::builtin::_PairObject::Pair*/ ,(int)offsetof(PairObject_obj,pair),HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PairObject_obj_sStaticStorageInfo = 0;
#endif

static ::String PairObject_obj_sMemberFields[] = {
	HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	::String(null()) };

static void PairObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PairObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PairObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PairObject_obj::__mClass,"__mClass");
};

#endif

hx::Class PairObject_obj::__mClass;

static ::String PairObject_obj_sStaticFields[] = {
	HX_HCSTRING("createPair","\x36","\x9d","\xdf","\x5c"),
	::String(null())
};

void PairObject_obj::__register()
{
	hx::Object *dummy = new PairObject_obj;
	PairObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin.PairObject","\x8e","\x32","\x5d","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PairObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PairObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PairObject_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PairObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PairObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PairObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PairObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PairObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
