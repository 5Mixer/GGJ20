// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_game_HeadPart
#include <hxinc/game/HeadPart.h>
#endif
namespace game{

::game::HeadPart HeadPart_obj::NaturalHead;

bool HeadPart_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NaturalHead",89,b3,c5,85)) { outValue = HeadPart_obj::NaturalHead; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(HeadPart_obj)

int HeadPart_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NaturalHead",89,b3,c5,85)) return 0;
	return super::__FindIndex(inName);
}

int HeadPart_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NaturalHead",89,b3,c5,85)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val HeadPart_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NaturalHead",89,b3,c5,85)) return NaturalHead;
	return super::__Field(inName,inCallProp);
}

static ::String HeadPart_obj_sStaticFields[] = {
	HX_("NaturalHead",89,b3,c5,85),
	::String(null())
};

hx::Class HeadPart_obj::__mClass;

Dynamic __Create_HeadPart_obj() { return new HeadPart_obj; }

void HeadPart_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("game.HeadPart",4f,e1,73,ad), hx::TCanCast< HeadPart_obj >,HeadPart_obj_sStaticFields,0,
	&__Create_HeadPart_obj, &__Create,
	&super::__SGetClass(), &CreateHeadPart_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &HeadPart_obj::__GetStatic;
}

void HeadPart_obj::__boot()
{
NaturalHead = hx::CreateConstEnum< HeadPart_obj >(HX_("NaturalHead",89,b3,c5,85),0);
}


} // end namespace game
