// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bf1ff747287569c6_17_new,"src.compiler.object.ObjectType","new",0x92a551b5,"src.compiler.object.ObjectType.new","src/compiler/object/ObjectType.hx",17,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_46_getObjectClass,"src.compiler.object.ObjectType","getObjectClass",0xe7416cce,"src.compiler.object.ObjectType.getObjectClass","src/compiler/object/ObjectType.hx",46,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_51_isType,"src.compiler.object.ObjectType","isType",0xdd73f98f,"src.compiler.object.ObjectType.isType","src/compiler/object/ObjectType.hx",51,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_55_inheritsType,"src.compiler.object.ObjectType","inheritsType",0x80668efd,"src.compiler.object.ObjectType.inheritsType","src/compiler/object/ObjectType.hx",55,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_65_getMembers,"src.compiler.object.ObjectType","getMembers",0x9ce2362e,"src.compiler.object.ObjectType.getMembers","src/compiler/object/ObjectType.hx",65,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_70_setMember,"src.compiler.object.ObjectType","setMember",0x28e606b1,"src.compiler.object.ObjectType.setMember","src/compiler/object/ObjectType.hx",70,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_75_getMember,"src.compiler.object.ObjectType","getMember",0x45951aa5,"src.compiler.object.ObjectType.getMember","src/compiler/object/ObjectType.hx",75,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_80_deleteMember,"src.compiler.object.ObjectType","deleteMember",0xe5fe34f0,"src.compiler.object.ObjectType.deleteMember","src/compiler/object/ObjectType.hx",80,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_85_hasMember,"src.compiler.object.ObjectType","hasMember",0x0a274469,"src.compiler.object.ObjectType.hasMember","src/compiler/object/ObjectType.hx",85,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_89_createObject,"src.compiler.object.ObjectType","createObject",0xb244eae6,"src.compiler.object.ObjectType.createObject","src/compiler/object/ObjectType.hx",89,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_97_createValue,"src.compiler.object.ObjectType","createValue",0xd696152a,"src.compiler.object.ObjectType.createValue","src/compiler/object/ObjectType.hx",97,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_107_getScope,"src.compiler.object.ObjectType","getScope",0x46a10ba9,"src.compiler.object.ObjectType.getScope","src/compiler/object/ObjectType.hx",107,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_112_getName,"src.compiler.object.ObjectType","getName",0x4c3771d6,"src.compiler.object.ObjectType.getName","src/compiler/object/ObjectType.hx",112,0x182e169a)
HX_LOCAL_STACK_FRAME(_hx_pos_bf1ff747287569c6_117_toString,"src.compiler.object.ObjectType","toString",0xa65f5b37,"src.compiler.object.ObjectType.toString","src/compiler/object/ObjectType.hx",117,0x182e169a)
namespace src{
namespace compiler{
namespace object{

void ObjectType_obj::__construct( ::src::compiler::Scope scope,::String name, ::haxe::ds::StringMap members,hx::Class objectClass,::Array< ::Dynamic> parentTypes){
            	HX_GC_STACKFRAME(&_hx_pos_bf1ff747287569c6_17_new)
HXLINE(  18)		this->scope = scope;
HXLINE(  19)		this->name = name;
HXLINE(  20)		this->members = members;
HXLINE(  21)		if (hx::IsNull( members )) {
HXLINE(  21)			this->members =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  23)		if (hx::IsNull( parentTypes )) {
HXLINE(  23)			this->parentTypes = ::Array_obj< ::Dynamic>::__new();
            		}
            		else {
HXLINE(  25)			this->parentTypes = parentTypes;
HXLINE(  26)			{
HXLINE(  26)				int _g = (int)0;
HXDLIN(  26)				while((_g < parentTypes->length)){
HXLINE(  26)					 ::src::compiler::object::ObjectType parent = parentTypes->__get(_g).StaticCast<  ::src::compiler::object::ObjectType >();
HXDLIN(  26)					_g = (_g + (int)1);
HXLINE(  27)					{
HXLINE(  27)						 ::Dynamic key = parent->getMembers()->keys();
HXDLIN(  27)						while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  27)							::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  28)							if (!(members->exists(key1))) {
HXLINE(  28)								members->set(key1,parent->getMembers()->get(key1).StaticCast<  ::src::compiler::object::Object >());
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  33)		this->objectClass = objectClass;
HXLINE(  34)		if (hx::IsNull( objectClass )) {
HXLINE(  35)			int _g1 = (int)0;
HXDLIN(  35)			::Array< ::Dynamic> _g11 = this->parentTypes;
HXDLIN(  35)			while((_g1 < _g11->length)){
HXLINE(  35)				 ::src::compiler::object::ObjectType type = _g11->__get(_g1).StaticCast<  ::src::compiler::object::ObjectType >();
HXDLIN(  35)				_g1 = (_g1 + (int)1);
HXLINE(  36)				if (hx::IsNotNull( type->getObjectClass() )) {
HXLINE(  37)					this->objectClass = type->getObjectClass();
HXLINE(  38)					goto _hx_goto_2;
            				}
            			}
            			_hx_goto_2:;
            		}
            	}

Dynamic ObjectType_obj::__CreateEmpty() { return new ObjectType_obj; }

void *ObjectType_obj::_hx_vtable = 0;

Dynamic ObjectType_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectType_obj > _hx_result = new ObjectType_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ObjectType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0269ecd7;
}

hx::Class ObjectType_obj::getObjectClass(){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_46_getObjectClass)
HXDLIN(  46)		return this->objectClass;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectType_obj,getObjectClass,return )

bool ObjectType_obj::isType(::String type){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_51_isType)
HXDLIN(  51)		return (this->name == type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectType_obj,isType,return )

bool ObjectType_obj::inheritsType(::String type){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_55_inheritsType)
HXLINE(  56)		if (this->isType(type)) {
HXLINE(  56)			return true;
            		}
HXLINE(  57)		{
HXLINE(  57)			int _g = (int)0;
HXDLIN(  57)			::Array< ::Dynamic> _g1 = this->parentTypes;
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				 ::src::compiler::object::ObjectType parent = _g1->__get(_g).StaticCast<  ::src::compiler::object::ObjectType >();
HXDLIN(  57)				_g = (_g + (int)1);
HXLINE(  58)				if (parent->inheritsType(type)) {
HXLINE(  58)					return true;
            				}
            			}
            		}
HXLINE(  60)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectType_obj,inheritsType,return )

 ::haxe::ds::StringMap ObjectType_obj::getMembers(){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_65_getMembers)
HXDLIN(  65)		return this->members;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectType_obj,getMembers,return )

void ObjectType_obj::setMember(::String name, ::src::compiler::object::Object obj){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_70_setMember)
HXDLIN(  70)		this->members->set(name,obj);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectType_obj,setMember,(void))

 ::src::compiler::object::Object ObjectType_obj::getMember(::String name){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_75_getMember)
HXDLIN(  75)		return this->members->get(name).StaticCast<  ::src::compiler::object::Object >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectType_obj,getMember,return )

void ObjectType_obj::deleteMember(::String name){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_80_deleteMember)
HXDLIN(  80)		this->members->remove(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectType_obj,deleteMember,(void))

bool ObjectType_obj::hasMember(::String name){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_85_hasMember)
HXDLIN(  85)		return this->members->exists(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectType_obj,hasMember,return )

 ::src::compiler::object::Object ObjectType_obj::createObject( ::src::compiler::Scope scope,::Array< ::Dynamic> args){
            	HX_GC_STACKFRAME(&_hx_pos_bf1ff747287569c6_89_createObject)
HXLINE(  90)		if (hx::IsNull( scope )) {
HXLINE(  90)			scope = this->scope;
            		}
HXLINE(  91)		 ::haxe::ds::StringMap members =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  92)		{
HXLINE(  92)			 ::Dynamic member = this->members->keys();
HXDLIN(  92)			while(( (bool)(member->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  92)				::String member1 = ( (::String)(member->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXDLIN(  92)				members->set(member1,this->members->get(member1).StaticCast<  ::src::compiler::object::Object >()->copy());
            			}
            		}
HXLINE(  93)		hx::Class _hx_tmp;
HXDLIN(  93)		if (hx::IsNull( this->objectClass )) {
HXLINE(  93)			_hx_tmp = hx::ClassOf< ::src::compiler::object::Object >();
            		}
            		else {
HXLINE(  93)			_hx_tmp = this->objectClass;
            		}
HXDLIN(  93)		return ( ( ::src::compiler::object::Object)(::Type_obj::createInstance(_hx_tmp,::cpp::VirtualArray_obj::__new(4)->init(0,scope)->init(1,hx::ObjectPtr<OBJ_>(this))->init(2,members)->init(3,args))) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectType_obj,createObject,return )

 ::src::compiler::object::Object ObjectType_obj::createValue( ::Dynamic value, ::src::compiler::Scope scope,::Array< ::Dynamic> args){
            	HX_GC_STACKFRAME(&_hx_pos_bf1ff747287569c6_97_createValue)
HXLINE(  98)		if (hx::IsNull( scope )) {
HXLINE(  98)			scope = this->scope;
            		}
HXLINE(  99)		 ::haxe::ds::StringMap members =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 100)		{
HXLINE( 100)			 ::Dynamic member = this->members->keys();
HXDLIN( 100)			while(( (bool)(member->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 100)				::String member1 = ( (::String)(member->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXDLIN( 100)				members->set(member1,this->members->get(member1).StaticCast<  ::src::compiler::object::Object >()->copy());
            			}
            		}
HXLINE( 101)		bool _hx_tmp = hx::IsNull( this->objectClass );
HXLINE( 102)		hx::Class _hx_tmp1;
HXDLIN( 102)		if (hx::IsNull( this->objectClass )) {
HXLINE( 102)			_hx_tmp1 = hx::ClassOf< ::src::compiler::object::Object >();
            		}
            		else {
HXLINE( 102)			_hx_tmp1 = this->objectClass;
            		}
HXDLIN( 102)		return ( ( ::src::compiler::object::Object)(::Type_obj::createInstance(_hx_tmp1,::cpp::VirtualArray_obj::__new(5)->init(0,scope)->init(1,hx::ObjectPtr<OBJ_>(this))->init(2,members)->init(3,value)->init(4,args))) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(ObjectType_obj,createValue,return )

 ::src::compiler::Scope ObjectType_obj::getScope(){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_107_getScope)
HXDLIN( 107)		return this->scope;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectType_obj,getScope,return )

::String ObjectType_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_112_getName)
HXDLIN( 112)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectType_obj,getName,return )

::String ObjectType_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_bf1ff747287569c6_117_toString)
HXDLIN( 117)		::String _hx_tmp = ((HX_("",00,00,00,00) + ::Std_obj::string(this->scope)) + HX_(".",2e,00,00,00));
HXDLIN( 117)		return (_hx_tmp + this->getName());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectType_obj,toString,return )


hx::ObjectPtr< ObjectType_obj > ObjectType_obj::__new( ::src::compiler::Scope scope,::String name, ::haxe::ds::StringMap members,hx::Class objectClass,::Array< ::Dynamic> parentTypes) {
	hx::ObjectPtr< ObjectType_obj > __this = new ObjectType_obj();
	__this->__construct(scope,name,members,objectClass,parentTypes);
	return __this;
}

hx::ObjectPtr< ObjectType_obj > ObjectType_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::String name, ::haxe::ds::StringMap members,hx::Class objectClass,::Array< ::Dynamic> parentTypes) {
	ObjectType_obj *__this = (ObjectType_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectType_obj), true, "src.compiler.object.ObjectType"));
	*(void **)__this = ObjectType_obj::_hx_vtable;
	__this->__construct(scope,name,members,objectClass,parentTypes);
	return __this;
}

ObjectType_obj::ObjectType_obj()
{
}

void ObjectType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectType);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(scope,"scope");
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(objectClass,"objectClass");
	HX_MARK_MEMBER_NAME(parentTypes,"parentTypes");
	HX_MARK_END_CLASS();
}

void ObjectType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(scope,"scope");
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(objectClass,"objectClass");
	HX_VISIT_MEMBER_NAME(parentTypes,"parentTypes");
}

hx::Val ObjectType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scope") ) { return hx::Val( scope ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isType") ) { return hx::Val( isType_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return hx::Val( members ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScope") ) { return hx::Val( getScope_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMember") ) { return hx::Val( setMember_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMember") ) { return hx::Val( getMember_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasMember") ) { return hx::Val( hasMember_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMembers") ) { return hx::Val( getMembers_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { return hx::Val( objectClass ); }
		if (HX_FIELD_EQ(inName,"parentTypes") ) { return hx::Val( parentTypes ); }
		if (HX_FIELD_EQ(inName,"createValue") ) { return hx::Val( createValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inheritsType") ) { return hx::Val( inheritsType_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteMember") ) { return hx::Val( deleteMember_dyn() ); }
		if (HX_FIELD_EQ(inName,"createObject") ) { return hx::Val( createObject_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getObjectClass") ) { return hx::Val( getObjectClass_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectType_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scope") ) { scope=inValue.Cast<  ::src::compiler::Scope >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { objectClass=inValue.Cast< hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentTypes") ) { parentTypes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("scope","\x94","\x71","\xd9","\x78"));
	outFields->push(HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"));
	outFields->push(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"));
	outFields->push(HX_HCSTRING("parentTypes","\xef","\xe2","\x85","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectType_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ObjectType_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::src::compiler::Scope*/ ,(int)offsetof(ObjectType_obj,scope),HX_HCSTRING("scope","\x94","\x71","\xd9","\x78")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ObjectType_obj,members),HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(ObjectType_obj,objectClass),HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectType_obj,parentTypes),HX_HCSTRING("parentTypes","\xef","\xe2","\x85","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectType_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectType_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("scope","\x94","\x71","\xd9","\x78"),
	HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"),
	HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"),
	HX_HCSTRING("parentTypes","\xef","\xe2","\x85","\xab"),
	HX_HCSTRING("getObjectClass","\x03","\xe8","\x25","\x3f"),
	HX_HCSTRING("isType","\xc4","\xb7","\x6f","\x6a"),
	HX_HCSTRING("inheritsType","\xf2","\x62","\xb6","\x05"),
	HX_HCSTRING("getMembers","\xe3","\xb2","\xd1","\x69"),
	HX_HCSTRING("setMember","\x9c","\x57","\x5d","\x64"),
	HX_HCSTRING("getMember","\x90","\x6b","\x0c","\x81"),
	HX_HCSTRING("deleteMember","\xe5","\x08","\x4e","\x6b"),
	HX_HCSTRING("hasMember","\x54","\x95","\x9e","\x45"),
	HX_HCSTRING("createObject","\xdb","\xbe","\x94","\x37"),
	HX_HCSTRING("createValue","\xd5","\xb6","\x33","\x5b"),
	HX_HCSTRING("getScope","\x1e","\x81","\xb0","\xd8"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void ObjectType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectType_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectType_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectType_obj::__mClass;

void ObjectType_obj::__register()
{
	hx::Object *dummy = new ObjectType_obj;
	ObjectType_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.object.ObjectType","\x43","\x53","\x6b","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectType_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectType_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectType_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectType_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectType_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace object
