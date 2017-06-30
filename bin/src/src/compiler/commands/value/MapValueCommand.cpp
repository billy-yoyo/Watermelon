// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_compiler_Scope
#include <src/compiler/Scope.h>
#endif
#ifndef INCLUDED_src_compiler_bytecode_Bytecode
#include <src/compiler/bytecode/Bytecode.h>
#endif
#ifndef INCLUDED_src_compiler_commands_Command
#include <src/compiler/commands/Command.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_MapValueCommand
#include <src/compiler/commands/value/MapValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommand
#include <src/compiler/commands/value/ValueCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_value_ValueCommandPair
#include <src/compiler/commands/value/ValueCommandPair.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_MapObject
#include <src/compiler/object/builtin/MapObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_48_new,"src.compiler.commands.value.MapValueCommand","new",0xbb215aaa,"src.compiler.commands.value.MapValueCommand.new","src/compiler/commands/value/MapValueCommand.hx",48,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_54_copy,"src.compiler.commands.value.MapValueCommand","copy",0xfad0322b,"src.compiler.commands.value.MapValueCommand.copy","src/compiler/commands/value/MapValueCommand.hx",54,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_61_setScope,"src.compiler.commands.value.MapValueCommand","setScope",0x5b54c408,"src.compiler.commands.value.MapValueCommand.setScope","src/compiler/commands/value/MapValueCommand.hx",61,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_67_walk,"src.compiler.commands.value.MapValueCommand","walk",0x07fdd37f,"src.compiler.commands.value.MapValueCommand.walk","src/compiler/commands/value/MapValueCommand.hx",67,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_74_run,"src.compiler.commands.value.MapValueCommand","run",0xbb247195,"src.compiler.commands.value.MapValueCommand.run","src/compiler/commands/value/MapValueCommand.hx",74,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_84_getName,"src.compiler.commands.value.MapValueCommand","getName",0xa883994b,"src.compiler.commands.value.MapValueCommand.getName","src/compiler/commands/value/MapValueCommand.hx",84,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_89_getFriendlyName,"src.compiler.commands.value.MapValueCommand","getFriendlyName",0xd78d6356,"src.compiler.commands.value.MapValueCommand.getFriendlyName","src/compiler/commands/value/MapValueCommand.hx",89,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_93_getBytecode,"src.compiler.commands.value.MapValueCommand","getBytecode",0x69bb9b35,"src.compiler.commands.value.MapValueCommand.getBytecode","src/compiler/commands/value/MapValueCommand.hx",93,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_104_reconstruct,"src.compiler.commands.value.MapValueCommand","reconstruct",0x7c4a4a4e,"src.compiler.commands.value.MapValueCommand.reconstruct","src/compiler/commands/value/MapValueCommand.hx",104,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_21_getValueCommandPairFromBytes,"src.compiler.commands.value.MapValueCommand","getValueCommandPairFromBytes",0x3c0471ed,"src.compiler.commands.value.MapValueCommand.getValueCommandPairFromBytes","src/compiler/commands/value/MapValueCommand.hx",21,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_25_fromTokens,"src.compiler.commands.value.MapValueCommand","fromTokens",0x7817cf5a,"src.compiler.commands.value.MapValueCommand.fromTokens","src/compiler/commands/value/MapValueCommand.hx",25,0x37dd6368)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3664ae4f06aa80_40_fromBytecode,"src.compiler.commands.value.MapValueCommand","fromBytecode",0xb566ac35,"src.compiler.commands.value.MapValueCommand.fromBytecode","src/compiler/commands/value/MapValueCommand.hx",40,0x37dd6368)
namespace src{
namespace compiler{
namespace commands{
namespace value{

void MapValueCommand_obj::__construct( ::src::compiler::Scope scope,::Array< ::Dynamic> cmds){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_48_new)
HXLINE(  49)		super::__construct(scope);
HXLINE(  50)		this->cmds = cmds;
            	}

Dynamic MapValueCommand_obj::__CreateEmpty() { return new MapValueCommand_obj; }

void *MapValueCommand_obj::_hx_vtable = 0;

Dynamic MapValueCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MapValueCommand_obj > _hx_result = new MapValueCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MapValueCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		if (inClassId<=(int)0x1020cfc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1020cfc0;
		} else {
			return inClassId==(int)0x20538180;
		}
	} else {
		return inClassId==(int)0x23c6e870;
	}
}

 ::src::compiler::commands::Command MapValueCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_54_copy)
HXLINE(  55)		::Array< ::Dynamic> newCmds = ::Array_obj< ::Dynamic>::__new();
HXLINE(  56)		{
HXLINE(  56)			int _g = (int)0;
HXDLIN(  56)			::Array< ::Dynamic> _g1 = this->cmds;
HXDLIN(  56)			while((_g < _g1->length)){
HXLINE(  56)				 ::src::compiler::commands::value::ValueCommandPair cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::ValueCommandPair >();
HXDLIN(  56)				_g = (_g + (int)1);
HXDLIN(  56)				newCmds->push(Dynamic( cmd->copy(scope)).StaticCast<  ::src::compiler::commands::value::ValueCommandPair >());
            			}
            		}
HXLINE(  57)		return  ::src::compiler::commands::value::MapValueCommand_obj::__alloc( HX_CTX ,scope,newCmds);
            	}


void MapValueCommand_obj::setScope( ::src::compiler::Scope scope){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_61_setScope)
HXLINE(  62)		this->super::setScope(scope);
HXLINE(  63)		{
HXLINE(  63)			int _g = (int)0;
HXDLIN(  63)			::Array< ::Dynamic> _g1 = this->cmds;
HXDLIN(  63)			while((_g < _g1->length)){
HXLINE(  63)				 ::src::compiler::commands::value::ValueCommandPair cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::ValueCommandPair >();
HXDLIN(  63)				_g = (_g + (int)1);
HXDLIN(  63)				cmd->setScope(scope);
            			}
            		}
            	}


::Array< ::Dynamic> MapValueCommand_obj::walk(){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_67_walk)
HXLINE(  68)		::Array< ::Dynamic> cmds = ::Array_obj< ::Dynamic>::__new();
HXLINE(  69)		{
HXLINE(  69)			int _g = (int)0;
HXDLIN(  69)			while((_g < cmds->length)){
HXLINE(  69)				 ::src::compiler::commands::Command x = cmds->__get(_g).StaticCast<  ::src::compiler::commands::Command >();
HXDLIN(  69)				_g = (_g + (int)1);
HXDLIN(  69)				cmds->push(x);
            			}
            		}
HXLINE(  70)		return cmds;
            	}


 ::src::compiler::object::Object MapValueCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_74_run)
HXLINE(  75)		 ::src::compiler::object::builtin::MapObject map = hx::TCast<  ::src::compiler::object::builtin::MapObject >::cast(this->scope->getType(HX_("MapType",56,cf,55,ff),null())->createObject(this->scope,null()));
HXLINE(  76)		{
HXLINE(  76)			int _g = (int)0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = this->cmds;
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				 ::src::compiler::commands::value::ValueCommandPair pair = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::ValueCommandPair >();
HXDLIN(  76)				_g = (_g + (int)1);
HXLINE(  77)				 ::src::compiler::object::Object _hx_tmp = pair->left->run();
HXDLIN(  77)				map->set(_hx_tmp,pair->right->run());
            			}
            		}
HXLINE(  79)		return map;
            	}


::String MapValueCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_84_getName)
HXDLIN(  84)		return HX_("MapValueCommand",76,32,8d,69);
            	}


::String MapValueCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_89_getFriendlyName)
HXDLIN(  89)		return HX_("map",9c,0a,53,00);
            	}


 ::src::compiler::bytecode::Bytecode MapValueCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_93_getBytecode)
HXLINE(  94)		::Array< ::Dynamic> arr = ::Array_obj< ::Dynamic>::__new();
HXLINE(  95)		{
HXLINE(  95)			int _g = (int)0;
HXDLIN(  95)			::Array< ::Dynamic> _g1 = this->cmds;
HXDLIN(  95)			while((_g < _g1->length)){
HXLINE(  95)				 ::src::compiler::commands::value::ValueCommandPair cmd = _g1->__get(_g).StaticCast<  ::src::compiler::commands::value::ValueCommandPair >();
HXDLIN(  95)				_g = (_g + (int)1);
HXLINE(  96)				arr->push(cmd->left);
HXLINE(  97)				arr->push(cmd->right);
            			}
            		}
HXLINE(  99)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(arr,this->getCodeID());
            	}


::Array< ::Dynamic> MapValueCommand_obj::reconstruct(){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_104_reconstruct)
HXDLIN( 104)		return ::src::compiler::commands::Command_obj::reconstructCommands(this->cmds);
            	}


 ::Dynamic MapValueCommand_obj::getValueCommandPairFromBytes(){
            	HX_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_21_getValueCommandPairFromBytes)
HXDLIN(  21)		return ::src::compiler::commands::value::ValueCommandPair_obj::fromBytecode_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MapValueCommand_obj,getValueCommandPairFromBytes,return )

 ::src::compiler::commands::value::MapValueCommand MapValueCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_25_fromTokens)
HXLINE(  26)		::Array< ::Dynamic> spl = ::src::compiler::commands::Command_obj::splitTokens(tokens,HX_("CommaToken",04,01,3f,49),null(),null());
HXLINE(  27)		::Array< ::Dynamic> cmds = ::Array_obj< ::Dynamic>::__new();
HXLINE(  28)		{
HXLINE(  28)			int _g = (int)0;
HXDLIN(  28)			while((_g < spl->length)){
HXLINE(  28)				::Array< ::Dynamic> subtokens = spl->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  28)				_g = (_g + (int)1);
HXLINE(  29)				::Array< ::Dynamic> pair = ::src::compiler::commands::Command_obj::splitTokens(subtokens,HX_("AssignmentToken",4c,94,e1,56),null(),null());
HXLINE(  30)				if ((pair->length < (int)2)) {
HXLINE(  30)					HX_STACK_DO_THROW(HX_("No assignment in map",d5,99,0d,c4));
            				}
            				else {
HXLINE(  31)					if ((pair->length > (int)2)) {
HXLINE(  31)						HX_STACK_DO_THROW(HX_("Double assignment in map",a5,e8,eb,22));
            					}
            					else {
HXLINE(  33)						 ::src::compiler::commands::value::ValueCommand _hx_tmp = ::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,pair->__get((int)0).StaticCast< ::Array< ::Dynamic> >());
HXDLIN(  33)						cmds->push( ::src::compiler::commands::value::ValueCommandPair_obj::__alloc( HX_CTX ,_hx_tmp,::src::compiler::commands::value::ValueCommand_obj::fromTokens(scope,pair->__get((int)1).StaticCast< ::Array< ::Dynamic> >())));
            					}
            				}
            			}
            		}
HXLINE(  36)		return  ::src::compiler::commands::value::MapValueCommand_obj::__alloc( HX_CTX ,scope,cmds);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MapValueCommand_obj,fromTokens,return )

 ::src::compiler::commands::value::MapValueCommand MapValueCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_bb3664ae4f06aa80_40_fromBytecode)
HXLINE(  41)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE(  42)		while((arr->length > (int)0)){
HXLINE(  42)			 ::Dynamic _hx_tmp = arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope);
HXDLIN(  42)			result->push( ::src::compiler::commands::value::ValueCommandPair_obj::__alloc( HX_CTX ,_hx_tmp,arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope)));
            		}
HXLINE(  43)		return  ::src::compiler::commands::value::MapValueCommand_obj::__alloc( HX_CTX ,scope,result);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MapValueCommand_obj,fromBytecode,return )


hx::ObjectPtr< MapValueCommand_obj > MapValueCommand_obj::__new( ::src::compiler::Scope scope,::Array< ::Dynamic> cmds) {
	hx::ObjectPtr< MapValueCommand_obj > __this = new MapValueCommand_obj();
	__this->__construct(scope,cmds);
	return __this;
}

hx::ObjectPtr< MapValueCommand_obj > MapValueCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::Array< ::Dynamic> cmds) {
	MapValueCommand_obj *__this = (MapValueCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MapValueCommand_obj), true, "src.compiler.commands.value.MapValueCommand"));
	*(void **)__this = MapValueCommand_obj::_hx_vtable;
	__this->__construct(scope,cmds);
	return __this;
}

MapValueCommand_obj::MapValueCommand_obj()
{
}

void MapValueCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapValueCommand);
	HX_MARK_MEMBER_NAME(cmds,"cmds");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MapValueCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cmds,"cmds");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MapValueCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cmds") ) { return hx::Val( cmds ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"walk") ) { return hx::Val( walk_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScope") ) { return hx::Val( setScope_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBytecode") ) { return hx::Val( getBytecode_dyn() ); }
		if (HX_FIELD_EQ(inName,"reconstruct") ) { return hx::Val( reconstruct_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFriendlyName") ) { return hx::Val( getFriendlyName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MapValueCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromTokens") ) { outValue = fromTokens_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"getValueCommandPairFromBytes") ) { outValue = getValueCommandPairFromBytes_dyn(); return true; }
	}
	return false;
}

hx::Val MapValueCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cmds") ) { cmds=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapValueCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cmds","\xb9","\x2c","\xc3","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MapValueCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapValueCommand_obj,cmds),HX_HCSTRING("cmds","\xb9","\x2c","\xc3","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MapValueCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String MapValueCommand_obj_sMemberFields[] = {
	HX_HCSTRING("cmds","\xb9","\x2c","\xc3","\x41"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("setScope","\x92","\xda","\x0d","\x87"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void MapValueCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapValueCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MapValueCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapValueCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class MapValueCommand_obj::__mClass;

static ::String MapValueCommand_obj_sStaticFields[] = {
	HX_HCSTRING("getValueCommandPairFromBytes","\x77","\xc9","\x71","\x7b"),
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	::String(null())
};

void MapValueCommand_obj::__register()
{
	hx::Object *dummy = new MapValueCommand_obj;
	MapValueCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.value.MapValueCommand","\xb8","\x7d","\x28","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MapValueCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MapValueCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MapValueCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MapValueCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapValueCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MapValueCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MapValueCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MapValueCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
} // end namespace value
