// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_game_ChestPart
#include <hxinc/game/ChestPart.h>
#endif
namespace game{

::game::ChestPart ChestPart_obj::NaturalChest;

bool ChestPart_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NaturalChest",38,38,35,a8)) { outValue = ChestPart_obj::NaturalChest; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ChestPart_obj)

int ChestPart_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NaturalChest",38,38,35,a8)) return 0;
	return super::__FindIndex(inName);
}

int ChestPart_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NaturalChest",38,38,35,a8)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val ChestPart_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NaturalChest",38,38,35,a8)) return NaturalChest;
	return super::__Field(inName,inCallProp);
}

static ::String ChestPart_obj_sStaticFields[] = {
	HX_("NaturalChest",38,38,35,a8),
	::String(null())
};

hx::Class ChestPart_obj::__mClass;

Dynamic __Create_ChestPart_obj() { return new ChestPart_obj; }

void ChestPart_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("game.ChestPart",b8,2b,a5,f9), hx::TCanCast< ChestPart_obj >,ChestPart_obj_sStaticFields,0,
	&__Create_ChestPart_obj, &__Create,
	&super::__SGetClass(), &CreateChestPart_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ChestPart_obj::__GetStatic;
}

void ChestPart_obj::__boot()
{
NaturalChest = hx::CreateConstEnum< ChestPart_obj >(HX_("NaturalChest",38,38,35,a8),0);
}


} // end namespace game