// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <hxinc/Main.h>
#endif
#ifndef INCLUDED_bonsai_Engine
#include <hxinc/bonsai/Engine.h>
#endif
#ifndef INCLUDED_bonsai_scene_Scene
#include <hxinc/bonsai/scene/Scene.h>
#endif
#ifndef INCLUDED_game_World
#include <hxinc/game/World.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_10_main,"Main","main",0xed0e206e,"Main.main","Main.hx",10,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_17_onAssetLoad,"Main","onAssetLoad",0xcda78382,"Main.onAssetLoad","Main.hx",17,0x087e5c05)

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x332f6459;
}

 ::bonsai::Engine Main_obj::engine;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_10_main)
HXLINE(  13)		::Main_obj::engine =  ::bonsai::Engine_obj::__alloc( HX_CTX );
HXLINE(  14)		::Main_obj::engine->start(HX_("skull",9d,b0,27,7e),1200,800,::Main_obj::onAssetLoad_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

void Main_obj::onAssetLoad(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_17_onAssetLoad)
HXDLIN(  17)		::Main_obj::engine->_hx_set_currentScene(HX_CTX,  ::game::World_obj::__alloc( HX_CTX ,::Main_obj::engine));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,onAssetLoad,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { outValue = ( engine ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onAssetLoad") ) { outValue = onAssetLoad_dyn(); return true; }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { engine=ioValue.Cast<  ::bonsai::Engine >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::bonsai::Engine */ ,(void *) &Main_obj::engine,HX_("engine",c2,47,84,fc)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::engine,"engine");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::engine,"engine");
};

#endif

hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("engine",c2,47,84,fc),
	HX_("main",39,38,56,48),
	HX_("onAssetLoad",17,cb,a0,ce),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

