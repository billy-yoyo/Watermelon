// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin__PairObject_Pair
#include <src/compiler/object/builtin/_PairObject/Pair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5fd796debc4d73c3_42_new,"src.compiler.object.builtin._PairObject.Pair","new",0x44a679d7,"src.compiler.object.builtin._PairObject.Pair.new","src/compiler/object/builtin/PairObject.hx",42,0xd90dc28e)
namespace src{
namespace compiler{
namespace object{
namespace builtin{
namespace _PairObject{

void Pair_obj::__construct(::String name, ::src::compiler::object::Object value){
            	HX_STACKFRAME(&_hx_pos_5fd796debc4d73c3_42_new)
HXLINE(  43)		this->name = name;
HXLINE(  44)		this->value = value;
            	}

Dynamic Pair_obj::__CreateEmpty() { return new Pair_obj; }

void *Pair_obj::_hx_vtable = 0;

Dynamic Pair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Pair_obj > _hx_result = new Pair_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Pair_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4204c4cd;
}


hx::ObjectPtr< Pair_obj > Pair_obj::__new(::String name, ::src::compiler::object::Object value) {
	hx::ObjectPtr< Pair_obj > __this = new Pair_obj();
	__this->__construct(name,value);
	return __this;
}

hx::ObjectPtr< Pair_obj > Pair_obj::__alloc(hx::Ctx *_hx_ctx,::String name, ::src::compiler::object::Object value) {
	Pair_obj *__this = (Pair_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Pair_obj), true, "src.compiler.object.builtin._PairObject.Pair"));
	*(void **)__this = Pair_obj::_hx_vtable;
	__this->__construct(name,value);
	return __this;
}

Pair_obj::Pair_obj()
{
}

void Pair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pair);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void Pair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

hx::Val Pair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Pair_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::src::compiler::object::Object >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Pair_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Pair_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::src::compiler::object::Object*/ ,(int)offsetof(Pair_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Pair_obj_sStaticStorageInfo = 0;
#endif

static ::String Pair_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void Pair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pair_obj::__mClass,"__mClass");
};

#endif

hx::Class Pair_obj::__mClass;

void Pair_obj::__register()
{
	hx::Object *dummy = new Pair_obj;
	Pair_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.builtin._PairObject.Pair","\x65","\x42","\xa9","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Pair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Pair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
} // end namespace builtin
} // end namespace _PairObject
