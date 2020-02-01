// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_differ_data_RayCollision
#include <hxinc/differ/data/RayCollision.h>
#endif
#ifndef INCLUDED_differ_data_RayCollisionHelper
#include <hxinc/differ/data/RayCollisionHelper.h>
#endif
#ifndef INCLUDED_differ_math_Vector
#include <hxinc/differ/math/Vector.h>
#endif
#ifndef INCLUDED_differ_shapes_Ray
#include <hxinc/differ/shapes/Ray.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b624bc43be442e83_66_hitStartX,"differ.data.RayCollisionHelper","hitStartX",0xea174bd9,"differ.data.RayCollisionHelper.hitStartX","differ/data/RayCollision.hx",66,0xad474e0e)
HX_LOCAL_STACK_FRAME(_hx_pos_b624bc43be442e83_71_hitStartY,"differ.data.RayCollisionHelper","hitStartY",0xea174bda,"differ.data.RayCollisionHelper.hitStartY","differ/data/RayCollision.hx",71,0xad474e0e)
HX_LOCAL_STACK_FRAME(_hx_pos_b624bc43be442e83_80_hitEndX,"differ.data.RayCollisionHelper","hitEndX",0x1e4f6780,"differ.data.RayCollisionHelper.hitEndX","differ/data/RayCollision.hx",80,0xad474e0e)
HX_LOCAL_STACK_FRAME(_hx_pos_b624bc43be442e83_89_hitEndY,"differ.data.RayCollisionHelper","hitEndY",0x1e4f6781,"differ.data.RayCollisionHelper.hitEndY","differ/data/RayCollision.hx",89,0xad474e0e)
namespace differ{
namespace data{

void RayCollisionHelper_obj::__construct() { }

Dynamic RayCollisionHelper_obj::__CreateEmpty() { return new RayCollisionHelper_obj; }

void *RayCollisionHelper_obj::_hx_vtable = 0;

Dynamic RayCollisionHelper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RayCollisionHelper_obj > _hx_result = new RayCollisionHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RayCollisionHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c3d6c16;
}

Float RayCollisionHelper_obj::hitStartX( ::differ::data::RayCollision data){
            	HX_STACKFRAME(&_hx_pos_b624bc43be442e83_66_hitStartX)
HXDLIN(  66)		Float data1 = data->ray->start->x;
HXDLIN(  66)		return (data1 + (data->ray->get_dir()->x * data->start));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayCollisionHelper_obj,hitStartX,return )

Float RayCollisionHelper_obj::hitStartY( ::differ::data::RayCollision data){
            	HX_STACKFRAME(&_hx_pos_b624bc43be442e83_71_hitStartY)
HXDLIN(  71)		Float data1 = data->ray->start->y;
HXDLIN(  71)		return (data1 + (data->ray->get_dir()->y * data->start));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayCollisionHelper_obj,hitStartY,return )

Float RayCollisionHelper_obj::hitEndX( ::differ::data::RayCollision data){
            	HX_STACKFRAME(&_hx_pos_b624bc43be442e83_80_hitEndX)
HXDLIN(  80)		Float data1 = data->ray->start->x;
HXDLIN(  80)		return (data1 + (data->ray->get_dir()->x * data->end));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayCollisionHelper_obj,hitEndX,return )

Float RayCollisionHelper_obj::hitEndY( ::differ::data::RayCollision data){
            	HX_STACKFRAME(&_hx_pos_b624bc43be442e83_89_hitEndY)
HXDLIN(  89)		Float data1 = data->ray->start->y;
HXDLIN(  89)		return (data1 + (data->ray->get_dir()->y * data->end));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayCollisionHelper_obj,hitEndY,return )


RayCollisionHelper_obj::RayCollisionHelper_obj()
{
}

bool RayCollisionHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitEndX") ) { outValue = hitEndX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hitEndY") ) { outValue = hitEndY_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitStartX") ) { outValue = hitStartX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hitStartY") ) { outValue = hitStartY_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *RayCollisionHelper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RayCollisionHelper_obj_sStaticStorageInfo = 0;
#endif

hx::Class RayCollisionHelper_obj::__mClass;

static ::String RayCollisionHelper_obj_sStaticFields[] = {
	HX_("hitStartX",69,1c,0c,3a),
	HX_("hitStartY",6a,1c,0c,3a),
	HX_("hitEndX",10,f4,9b,d8),
	HX_("hitEndY",11,f4,9b,d8),
	::String(null())
};

void RayCollisionHelper_obj::__register()
{
	RayCollisionHelper_obj _hx_dummy;
	RayCollisionHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("differ.data.RayCollisionHelper",de,e3,2e,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RayCollisionHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RayCollisionHelper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RayCollisionHelper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RayCollisionHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RayCollisionHelper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace differ
} // end namespace data