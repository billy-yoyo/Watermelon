// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_src_ast_GlobalProcessor
#include <src/ast/GlobalProcessor.h>
#endif
#ifndef INCLUDED_src_ast_Token
#include <src/ast/Token.h>
#endif
#ifndef INCLUDED_src_ast_base_RootToken
#include <src/ast/base/RootToken.h>
#endif
#ifndef INCLUDED_src_compiler_Core
#include <src/compiler/Core.h>
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
#ifndef INCLUDED_src_compiler_commands_ImportCommand
#include <src/compiler/commands/ImportCommand.h>
#endif
#ifndef INCLUDED_src_compiler_commands_RootCommand
#include <src/compiler/commands/RootCommand.h>
#endif
#ifndef INCLUDED_src_compiler_object_Object
#include <src/compiler/object/Object.h>
#endif
#ifndef INCLUDED_src_compiler_object_ObjectType
#include <src/compiler/object/ObjectType.h>
#endif
#ifndef INCLUDED_src_compiler_object_builtin_ModuleObject
#include <src/compiler/object/builtin/ModuleObject.h>
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
#ifndef INCLUDED_src_compiler_signals_ImportErrorSignal
#include <src/compiler/signals/ImportErrorSignal.h>
#endif
#ifndef INCLUDED_src_compiler_signals_SyntaxErrorSignal
#include <src/compiler/signals/SyntaxErrorSignal.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01c56f4616f7250a_115_new,"src.compiler.commands.ImportCommand","new",0xf8d894f7,"src.compiler.commands.ImportCommand.new","src/compiler/commands/ImportCommand.hx",115,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_123_copy,"src.compiler.commands.ImportCommand","copy",0xbd6bfb3e,"src.compiler.commands.ImportCommand.copy","src/compiler/commands/ImportCommand.hx",123,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_128_getName,"src.compiler.commands.ImportCommand","getName",0x213a7e18,"src.compiler.commands.ImportCommand.getName","src/compiler/commands/ImportCommand.hx",128,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_133_getFriendlyName,"src.compiler.commands.ImportCommand","getFriendlyName",0xe3195d23,"src.compiler.commands.ImportCommand.getFriendlyName","src/compiler/commands/ImportCommand.hx",133,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_137_run,"src.compiler.commands.ImportCommand","run",0xf8dbabe2,"src.compiler.commands.ImportCommand.run","src/compiler/commands/ImportCommand.hx",137,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_144_getBytecode,"src.compiler.commands.ImportCommand","getBytecode",0xdad96a82,"src.compiler.commands.ImportCommand.getBytecode","src/compiler/commands/ImportCommand.hx",144,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_153_reconstruct,"src.compiler.commands.ImportCommand","reconstruct",0xed68199b,"src.compiler.commands.ImportCommand.reconstruct","src/compiler/commands/ImportCommand.hx",153,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_28_fromTokens,"src.compiler.commands.ImportCommand","fromTokens",0x114828ad,"src.compiler.commands.ImportCommand.fromTokens","src/compiler/commands/ImportCommand.hx",28,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_50_fromBytecode,"src.compiler.commands.ImportCommand","fromBytecode",0x3e5e4048,"src.compiler.commands.ImportCommand.fromBytecode","src/compiler/commands/ImportCommand.hx",50,0x0fd1147a)
HX_LOCAL_STACK_FRAME(_hx_pos_01c56f4616f7250a_58_getModule,"src.compiler.commands.ImportCommand","getModule",0x66c28db9,"src.compiler.commands.ImportCommand.getModule","src/compiler/commands/ImportCommand.hx",58,0x0fd1147a)
namespace src{
namespace compiler{
namespace commands{

void ImportCommand_obj::__construct( ::src::compiler::Scope scope,::Array< ::String > dir,::String importAs){
            	HX_STACKFRAME(&_hx_pos_01c56f4616f7250a_115_new)
HXLINE( 116)		super::__construct(scope);
HXLINE( 117)		this->dir = dir;
HXLINE( 118)		::String _hx_tmp;
HXDLIN( 118)		if (hx::IsNull( importAs )) {
HXLINE( 118)			_hx_tmp = dir->__get((dir->length - (int)1));
            		}
            		else {
HXLINE( 118)			_hx_tmp = importAs;
            		}
HXDLIN( 118)		this->importAs = _hx_tmp;
            	}

Dynamic ImportCommand_obj::__CreateEmpty() { return new ImportCommand_obj; }

void *ImportCommand_obj::_hx_vtable = 0;

Dynamic ImportCommand_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImportCommand_obj > _hx_result = new ImportCommand_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ImportCommand_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20538180) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20538180;
	} else {
		return inClassId==(int)0x47ecc45b;
	}
}

 ::src::compiler::commands::Command ImportCommand_obj::copy( ::src::compiler::Scope scope){
            	HX_GC_STACKFRAME(&_hx_pos_01c56f4616f7250a_123_copy)
HXDLIN( 123)		::Array< ::String > _hx_tmp = this->dir->copy();
HXDLIN( 123)		return  ::src::compiler::commands::ImportCommand_obj::__alloc( HX_CTX ,scope,_hx_tmp,this->importAs);
            	}


::String ImportCommand_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_01c56f4616f7250a_128_getName)
HXDLIN( 128)		return HX_("ImportCommand",46,6e,19,cd);
            	}


::String ImportCommand_obj::getFriendlyName(){
            	HX_STACKFRAME(&_hx_pos_01c56f4616f7250a_133_getFriendlyName)
HXDLIN( 133)		return HX_("import",65,a1,82,08);
            	}


 ::src::compiler::object::Object ImportCommand_obj::run(){
            	HX_STACKFRAME(&_hx_pos_01c56f4616f7250a_137_run)
HXLINE( 138)		 ::src::compiler::object::builtin::ModuleObject module = ::src::compiler::commands::ImportCommand_obj::getModule(this->scope,this->dir,this->importAs);
HXLINE( 139)		this->scope->getRoot()->setVariable(this->importAs,module);
HXLINE( 140)		return null();
            	}


 ::src::compiler::bytecode::Bytecode ImportCommand_obj::getBytecode(){
            	HX_STACKFRAME(&_hx_pos_01c56f4616f7250a_144_getBytecode)
HXLINE( 145)		::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE( 146)		arr->push(this->importAs);
HXLINE( 147)		{
HXLINE( 147)			int _g = (int)0;
HXDLIN( 147)			::Array< ::String > _g1 = this->dir;
HXDLIN( 147)			while((_g < _g1->length)){
HXLINE( 147)				::String x = _g1->__get(_g);
HXDLIN( 147)				_g = (_g + (int)1);
HXDLIN( 147)				arr->push(x);
            			}
            		}
HXLINE( 148)		return ::src::compiler::bytecode::Bytecode_obj::fromArray(arr,this->getCodeID());
            	}


::Array< ::Dynamic> ImportCommand_obj::reconstruct(){
            	HX_STACKFRAME(&_hx_pos_01c56f4616f7250a_153_reconstruct)
HXDLIN( 153)		return this->super::reconstruct();
            	}


 ::src::compiler::commands::ImportCommand ImportCommand_obj::fromTokens( ::src::compiler::Scope scope,::Array< ::Dynamic> tokens){
            	HX_GC_STACKFRAME(&_hx_pos_01c56f4616f7250a_28_fromTokens)
HXLINE(  29)		if ((tokens->pop().StaticCast<  ::src::ast::Token >()->getName() != HX_("EndLineToken",2a,db,3a,32))) {
HXLINE(  29)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Import must end with an endline",15,b9,fd,f0)));
            		}
HXLINE(  30)		::String importAs = null();
HXDLIN(  30)		::Array< ::String > dir = ::Array_obj< ::String >::__new();
HXLINE(  31)		 ::src::ast::Token start = tokens->shift().StaticCast<  ::src::ast::Token >();
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if ((start->getName() == HX_("KwdToken",c1,aa,4a,b9))) {
HXLINE(  32)			_hx_tmp = hx::IsNotEq( start->getContent(),HX_("import",65,a1,82,08) );
            		}
            		else {
HXLINE(  32)			_hx_tmp = true;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  32)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("import must start with import keyword",ce,be,66,80)));
            		}
HXLINE(  33)		bool _hx_tmp1;
HXDLIN(  33)		if ((tokens->length > (int)2)) {
HXLINE(  33)			_hx_tmp1 = (tokens->__get((tokens->length - (int)2)).StaticCast<  ::src::ast::Token >()->getName() == HX_("KwdToken",c1,aa,4a,b9));
            		}
            		else {
HXLINE(  33)			_hx_tmp1 = false;
            		}
HXDLIN(  33)		if (_hx_tmp1) {
HXLINE(  34)			 ::src::ast::Token nameToken = tokens->pop().StaticCast<  ::src::ast::Token >();
HXLINE(  35)			 ::src::ast::Token end = tokens->pop().StaticCast<  ::src::ast::Token >();
HXLINE(  36)			if (hx::IsNotEq( end->getContent(),HX_("as",f2,54,00,00) )) {
HXLINE(  36)				HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("invalid keyword (import as name must be a single word)",26,d4,42,2c)));
            			}
HXLINE(  37)			if ((nameToken->getName() != HX_("VariableToken",fd,96,04,01))) {
HXLINE(  37)				HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("invalid import as name",87,dd,1f,5e)));
            			}
HXLINE(  38)			importAs = ( (::String)(nameToken->getContent()) );
            		}
HXLINE(  40)		::Array< ::Dynamic> dirTokens = ::src::compiler::commands::Command_obj::splitTokens(tokens,HX_("AccessToken",95,02,10,8a),null(),null());
HXLINE(  41)		{
HXLINE(  41)			int _g = (int)0;
HXDLIN(  41)			while((_g < dirTokens->length)){
HXLINE(  41)				::Array< ::Dynamic> subtokens = dirTokens->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  41)				_g = (_g + (int)1);
HXLINE(  42)				bool _hx_tmp2;
HXDLIN(  42)				if ((subtokens->length == (int)1)) {
HXLINE(  42)					_hx_tmp2 = (subtokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getName() != HX_("VariableToken",fd,96,04,01));
            				}
            				else {
HXLINE(  42)					_hx_tmp2 = true;
            				}
HXDLIN(  42)				if (_hx_tmp2) {
HXLINE(  42)					HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Invalid import",8e,8f,fa,d5)));
            				}
HXLINE(  43)				dir->push(subtokens->__get((int)0).StaticCast<  ::src::ast::Token >()->getContent());
            			}
            		}
HXLINE(  45)		if ((dir->length == (int)0)) {
HXLINE(  45)			HX_STACK_DO_THROW( ::src::compiler::signals::SyntaxErrorSignal_obj::__alloc( HX_CTX ,HX_("Empty import directory",05,2b,8a,06)));
            		}
HXLINE(  46)		return  ::src::compiler::commands::ImportCommand_obj::__alloc( HX_CTX ,scope,dir,importAs);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImportCommand_obj,fromTokens,return )

 ::src::compiler::commands::ImportCommand ImportCommand_obj::fromBytecode( ::src::compiler::Scope scope,::Array< ::Dynamic> arr){
            	HX_GC_STACKFRAME(&_hx_pos_01c56f4616f7250a_50_fromBytecode)
HXLINE(  51)		::String importAs = ( (::String)(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope)) );
HXLINE(  52)		::Array< ::String > dir = ::Array_obj< ::String >::__new();
HXLINE(  53)		while((arr->length > (int)0)){
HXLINE(  53)			dir->push(arr->shift().StaticCast<  ::src::compiler::bytecode::Bytecode >()->convert(scope));
            		}
HXLINE(  54)		return  ::src::compiler::commands::ImportCommand_obj::__alloc( HX_CTX ,scope,dir,importAs);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImportCommand_obj,fromBytecode,return )

 ::src::compiler::object::builtin::ModuleObject ImportCommand_obj::getModule( ::src::compiler::Scope scope,::Array< ::String > dir,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_01c56f4616f7250a_58_getModule)
HXLINE(  60)		::String path = null();
HXDLIN(  60)		bool compiled = false;
HXLINE(  61)		::String relPath = ::haxe::io::Path_obj::join(dir);
HXLINE(  62)		if (::sys::FileSystem_obj::exists((relPath + HX_(".juc",ca,a5,b8,1e)))) {
HXLINE(  63)			path = (relPath + HX_(".juc",ca,a5,b8,1e));
HXLINE(  64)			compiled = true;
            		}
            		else {
HXLINE(  65)			if (::sys::FileSystem_obj::exists((relPath + HX_(".frt",3a,9a,b5,1e)))) {
HXLINE(  66)				path = (relPath + HX_(".frt",3a,9a,b5,1e));
            			}
            			else {
HXLINE(  68)				::Array< ::String > libDir = dir->copy();
HXLINE(  69)				libDir->insert((int)0,::haxe::io::Path_obj::directory(::Sys_obj::programPath()));
HXLINE(  70)				libDir->insert((int)0,HX_("modules",47,e2,fa,f7));
HXLINE(  71)				::String libPath = ::haxe::io::Path_obj::join(libDir);
HXLINE(  72)				if (::sys::FileSystem_obj::exists((libPath + HX_(".juc",ca,a5,b8,1e)))) {
HXLINE(  73)					path = (libPath + HX_(".juc",ca,a5,b8,1e));
HXLINE(  74)					compiled = true;
            				}
            				else {
HXLINE(  75)					if (::sys::FileSystem_obj::exists((libPath + HX_(".frt",3a,9a,b5,1e)))) {
HXLINE(  76)						path = (libPath + HX_(".frt",3a,9a,b5,1e));
            					}
            				}
            			}
            		}
HXLINE(  84)		if (hx::IsNull( path )) {
HXLINE(  84)			HX_STACK_DO_THROW( ::src::compiler::signals::ImportErrorSignal_obj::__alloc( HX_CTX ,(HX_("Invalid import directory ",65,34,8d,06) + dir->join(HX_(".",2e,00,00,00)))));
            		}
HXLINE(  85)		 ::src::compiler::commands::RootCommand code;
HXLINE(  87)		if (compiled) {
HXLINE(  88)			 ::haxe::io::Bytes bytes = ::sys::io::File_obj::getBytes(path);
HXLINE(  89)			code = ::src::compiler::Core_obj::convertBytes(bytes,scope->getRoot(),name);
            		}
            		else {
HXLINE(  91)			::String lines = ::sys::io::File_obj::getContent(path);
HXLINE(  92)			 ::src::ast::base::RootToken root = ::src::ast::GlobalProcessor_obj::process(lines);
HXLINE(  93)			code = ::src::compiler::Core_obj::convertRoot(root,scope->getRoot(),name);
            		}
HXLINE(  96)		code->handleErrors = false;
HXLINE(  97)		 ::src::compiler::commands::Command command = null();
HXLINE(  98)		try {
            			HX_STACK_CATCHABLE( ::src::compiler::signals::ExitSignal, 0);
HXLINE(  99)			int _g1 = (int)0;
HXDLIN(  99)			int _g = code->commands->length;
HXDLIN(  99)			while((_g1 < _g)){
HXLINE(  99)				_g1 = (_g1 + (int)1);
HXDLIN(  99)				int i = (_g1 - (int)1);
HXLINE( 100)				command = code->commands->__get(i).StaticCast<  ::src::compiler::commands::Command >();
HXLINE( 101)				command->run();
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::src::compiler::signals::ExitSignal >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::src::compiler::signals::ExitSignal e = _hx_e;
HXLINE( 104)				if ((e->getName() == HX_("ExitCodeSignal",53,d4,2f,fa))) {
HXLINE( 104)					HX_STACK_DO_THROW( ::src::compiler::signals::ExitCodeSignal_obj::__alloc( HX_CTX ));
            				}
HXLINE( 105)				::String _hx_tmp = ((HX_("(Error in import ",80,f1,31,e3) + dir->join(HX_(".",2e,00,00,00))) + HX_(") ",d7,23,00,00));
HXDLIN( 105)				::String _hx_tmp1 = ((_hx_tmp + e->getName()) + HX_(": ",a6,32,00,00));
HXDLIN( 105)				::src::compiler::commands::RootCommand_obj::throwUncaughtError(command,(_hx_tmp1 + e->msg));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 107)		 ::src::compiler::object::ObjectType module = scope->getType(HX_("ModuleType",a6,1d,fc,33),null());
HXDLIN( 107)		 ::src::compiler::Scope code1 = code->scope;
HXDLIN( 107)		 ::src::compiler::object::builtin::ModuleObject module1 = hx::TCast<  ::src::compiler::object::builtin::ModuleObject >::cast(module->createValue(code1,scope->getRoot(),null()));
HXLINE( 109)		return module1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImportCommand_obj,getModule,return )


hx::ObjectPtr< ImportCommand_obj > ImportCommand_obj::__new( ::src::compiler::Scope scope,::Array< ::String > dir,::String importAs) {
	hx::ObjectPtr< ImportCommand_obj > __this = new ImportCommand_obj();
	__this->__construct(scope,dir,importAs);
	return __this;
}

hx::ObjectPtr< ImportCommand_obj > ImportCommand_obj::__alloc(hx::Ctx *_hx_ctx, ::src::compiler::Scope scope,::Array< ::String > dir,::String importAs) {
	ImportCommand_obj *__this = (ImportCommand_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImportCommand_obj), true, "src.compiler.commands.ImportCommand"));
	*(void **)__this = ImportCommand_obj::_hx_vtable;
	__this->__construct(scope,dir,importAs);
	return __this;
}

ImportCommand_obj::ImportCommand_obj()
{
}

void ImportCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImportCommand);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(importAs,"importAs");
	 ::src::compiler::commands::Command_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImportCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(importAs,"importAs");
	 ::src::compiler::commands::Command_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ImportCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return hx::Val( dir ); }
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"importAs") ) { return hx::Val( importAs ); }
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

bool ImportCommand_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getModule") ) { outValue = getModule_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromTokens") ) { outValue = fromTokens_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromBytecode") ) { outValue = fromBytecode_dyn(); return true; }
	}
	return false;
}

hx::Val ImportCommand_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"importAs") ) { importAs=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImportCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("importAs","\xb7","\xbd","\x79","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ImportCommand_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ImportCommand_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsString,(int)offsetof(ImportCommand_obj,importAs),HX_HCSTRING("importAs","\xb7","\xbd","\x79","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImportCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String ImportCommand_obj_sMemberFields[] = {
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("importAs","\xb7","\xbd","\x79","\x27"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFriendlyName","\x0c","\x92","\xf4","\xaf"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("getBytecode","\xeb","\xb6","\x8b","\x7d"),
	HX_HCSTRING("reconstruct","\x04","\x66","\x1a","\x90"),
	::String(null()) };

static void ImportCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImportCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImportCommand_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImportCommand_obj::__mClass,"__mClass");
};

#endif

hx::Class ImportCommand_obj::__mClass;

static ::String ImportCommand_obj_sStaticFields[] = {
	HX_HCSTRING("fromTokens","\x64","\x1c","\x2b","\xd5"),
	HX_HCSTRING("fromBytecode","\xbf","\xcf","\xae","\xf7"),
	HX_HCSTRING("getModule","\xe2","\xbd","\x29","\x3d"),
	::String(null())
};

void ImportCommand_obj::__register()
{
	hx::Object *dummy = new ImportCommand_obj;
	ImportCommand_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("src.compiler.commands.ImportCommand","\x85","\x4d","\xa7","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImportCommand_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImportCommand_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ImportCommand_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImportCommand_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImportCommand_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImportCommand_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImportCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImportCommand_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace src
} // end namespace compiler
} // end namespace commands
