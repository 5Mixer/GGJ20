// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <hxinc/kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <hxinc/kha/math/Matrix4.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <hxinc/kha/vr/PoseState.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <hxinc/kha/vr/TimeWarpImage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_685b63c66f33a56d_40_new,"kha.vr.TimeWarpImage","new",0x6279a4d0,"kha.vr.TimeWarpImage.new","kha/vr/TimeWarpImage.hx",40,0xd76b5b40)
namespace kha{
namespace vr{

void TimeWarpImage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_685b63c66f33a56d_40_new)
            	}

Dynamic TimeWarpImage_obj::__CreateEmpty() { return new TimeWarpImage_obj; }

void *TimeWarpImage_obj::_hx_vtable = 0;

Dynamic TimeWarpImage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TimeWarpImage_obj > _hx_result = new TimeWarpImage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TimeWarpImage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x523be326;
}


TimeWarpImage_obj::TimeWarpImage_obj()
{
}

void TimeWarpImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimeWarpImage);
	HX_MARK_MEMBER_NAME(Image,"Image");
	HX_MARK_MEMBER_NAME(TexCoordsFromTanAngles,"TexCoordsFromTanAngles");
	HX_MARK_MEMBER_NAME(Pose,"Pose");
	HX_MARK_END_CLASS();
}

void TimeWarpImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Image,"Image");
	HX_VISIT_MEMBER_NAME(TexCoordsFromTanAngles,"TexCoordsFromTanAngles");
	HX_VISIT_MEMBER_NAME(Pose,"Pose");
}

hx::Val TimeWarpImage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { return hx::Val( Pose ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Image") ) { return hx::Val( Image ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TexCoordsFromTanAngles") ) { return hx::Val( TexCoordsFromTanAngles ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TimeWarpImage_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { _hx_set_Pose(HX_CTX_GET,inValue.Cast<  ::kha::vr::PoseState >()); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Image") ) { _hx_set_Image(HX_CTX_GET,inValue.Cast<  ::kha::Image >()); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TexCoordsFromTanAngles") ) { _hx_set_TexCoordsFromTanAngles(HX_CTX_GET,inValue.Cast<  ::kha::math::Matrix4 >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimeWarpImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("Image",3b,8f,96,50));
	outFields->push(HX_("TexCoordsFromTanAngles",32,0b,d0,e1));
	outFields->push(HX_("Pose",71,b0,35,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TimeWarpImage_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::Image */ ,(int)offsetof(TimeWarpImage_obj,Image),HX_("Image",3b,8f,96,50)},
	{hx::fsObject /*  ::kha::math::Matrix4 */ ,(int)offsetof(TimeWarpImage_obj,TexCoordsFromTanAngles),HX_("TexCoordsFromTanAngles",32,0b,d0,e1)},
	{hx::fsObject /*  ::kha::vr::PoseState */ ,(int)offsetof(TimeWarpImage_obj,Pose),HX_("Pose",71,b0,35,35)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TimeWarpImage_obj_sStaticStorageInfo = 0;
#endif

static ::String TimeWarpImage_obj_sMemberFields[] = {
	HX_("Image",3b,8f,96,50),
	HX_("TexCoordsFromTanAngles",32,0b,d0,e1),
	HX_("Pose",71,b0,35,35),
	::String(null()) };

hx::Class TimeWarpImage_obj::__mClass;

void TimeWarpImage_obj::__register()
{
	TimeWarpImage_obj _hx_dummy;
	TimeWarpImage_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.vr.TimeWarpImage",de,3c,7b,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TimeWarpImage_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimeWarpImage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimeWarpImage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimeWarpImage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace vr
