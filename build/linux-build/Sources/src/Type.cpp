// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <hxinc/Type.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_36_getClass,"Type","getClass",0xc4e49bd6,"Type.getClass","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",36,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_61_getClassName,"Type","getClassName",0x8e66dd41,"Type.getClassName","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",61,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_72_resolveClass,"Type","resolveClass",0x23b06bc0,"Type.resolveClass","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",72,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_80_resolveEnum,"Type","resolveEnum",0x26394079,"Type.resolveEnum","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",80,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_96_createEmptyInstance,"Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",96,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_100_createEnum,"Type","createEnum",0xd8d56d31,"Type.createEnum","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",100,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_111_getInstanceFields,"Type","getInstanceFields",0xe970f890,"Type.getInstanceFields","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",111,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_120_getEnumConstructs,"Type","getEnumConstructs",0x7f46cf7f,"Type.getEnumConstructs","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",120,0x82e52d26)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba1f895e3da3460_156_enumParameters,"Type","enumParameters",0xf9e1b41f,"Type.enumParameters","/home/mixer/projects/GGJ20/Kha/Tools/haxe/std/cpp/_std/Type.hx",156,0x82e52d26)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37e21eda;
}

hx::Class Type_obj::getClass( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_36_getClass)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (hx::IsNotNull( o )) {
HXLINE(  37)			_hx_tmp = !(::Reflect_obj::isObject(o));
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  38)			return null();
            		}
HXLINE(  39)		 ::Dynamic c = o->__GetClass();
HXLINE(  40)		::String _hx_switch_0 = ( (::String)(c->toString()) );
            		if (  (_hx_switch_0==HX_("Class",18,e8,85,db)) ){
HXLINE(  44)			return null();
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("__Anon",8c,1a,43,da)) ){
HXLINE(  42)			return null();
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  46)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

::String Type_obj::getClassName(hx::Class c){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_61_getClassName)
HXLINE(  62)		if (hx::IsNull( c )) {
HXLINE(  63)			return null();
            		}
HXLINE(  64)		return c->mName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

hx::Class Type_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_72_resolveClass)
HXLINE(  73)		hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (hx::IsNotNull( result )) {
HXLINE(  74)			_hx_tmp = ( (bool)(result->__IsEnum()) );
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			return null();
            		}
HXLINE(  76)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

hx::Class Type_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_80_resolveEnum)
HXLINE(  81)		hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (hx::IsNotNull( result )) {
HXLINE(  82)			_hx_tmp = !(( (bool)(result->__IsEnum()) ));
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			return null();
            		}
HXLINE(  84)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

 ::Dynamic Type_obj::createEmptyInstance(hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_96_createEmptyInstance)
HXDLIN(  96)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

 ::Dynamic Type_obj::createEnum(hx::Class e,::String constr,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_100_createEnum)
HXDLIN( 100)		return e->ConstructEnum(constr,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

::Array< ::String > Type_obj::getInstanceFields(hx::Class c){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_111_getInstanceFields)
HXDLIN( 111)		return ( (::Array< ::String >)(c->GetInstanceFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getInstanceFields,return )

::Array< ::String > Type_obj::getEnumConstructs(hx::Class e){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_120_getEnumConstructs)
HXDLIN( 120)		return ( (::Array< ::String >)(e->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumConstructs,return )

::cpp::VirtualArray Type_obj::enumParameters( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_4ba1f895e3da3460_156_enumParameters)
HXLINE( 157)		 hx::EnumBase value = ( ( hx::EnumBase)(e) );
HXLINE( 158)		return value->_hx_getParameters();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,enumParameters,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { outValue = createEnum_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumParameters") ) { outValue = enumParameters_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getInstanceFields") ) { outValue = getInstanceFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumConstructs") ) { outValue = getEnumConstructs_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_("getClass",c2,87,2f,a8),
	HX_("getClassName",2d,2f,94,eb),
	HX_("resolveClass",ac,bd,dd,80),
	HX_("resolveEnum",0d,90,51,de),
	HX_("createEmptyInstance",a6,26,85,ce),
	HX_("createEnum",1d,2c,a4,55),
	HX_("getInstanceFields",24,2f,97,ed),
	HX_("getEnumConstructs",13,06,6d,83),
	HX_("enumParameters",0b,59,78,fa),
	::String(null())
};

void Type_obj::__register()
{
	Type_obj _hx_dummy;
	Type_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Type",da,1e,e2,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Type_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

