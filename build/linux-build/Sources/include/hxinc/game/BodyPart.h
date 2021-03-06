// Generated by Haxe 4.0.5
#ifndef INCLUDED_game_BodyPart
#define INCLUDED_game_BodyPart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(game,BodyPart)
namespace game{


class BodyPart_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BodyPart_obj OBJ_;

	public:
		BodyPart_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("game.BodyPart",d1,1b,98,40); }
		::String __ToString() const { return HX_("BodyPart.",b9,9a,30,1f) + _hx_tag; }

		static ::game::BodyPart Axe;
		static inline ::game::BodyPart Axe_dyn() { return Axe; }
		static ::game::BodyPart Boots;
		static inline ::game::BodyPart Boots_dyn() { return Boots; }
		static ::game::BodyPart Knife;
		static inline ::game::BodyPart Knife_dyn() { return Knife; }
		static ::game::BodyPart NaturalArm;
		static inline ::game::BodyPart NaturalArm_dyn() { return NaturalArm; }
		static ::game::BodyPart NaturalChest;
		static inline ::game::BodyPart NaturalChest_dyn() { return NaturalChest; }
		static ::game::BodyPart NaturalHead;
		static inline ::game::BodyPart NaturalHead_dyn() { return NaturalHead; }
		static ::game::BodyPart NaturalHeadDown;
		static inline ::game::BodyPart NaturalHeadDown_dyn() { return NaturalHeadDown; }
		static ::game::BodyPart NaturalHeadLeft;
		static inline ::game::BodyPart NaturalHeadLeft_dyn() { return NaturalHeadLeft; }
		static ::game::BodyPart NaturalHeadRight;
		static inline ::game::BodyPart NaturalHeadRight_dyn() { return NaturalHeadRight; }
		static ::game::BodyPart NaturalHeadUp;
		static inline ::game::BodyPart NaturalHeadUp_dyn() { return NaturalHeadUp; }
		static ::game::BodyPart NaturalLeg;
		static inline ::game::BodyPart NaturalLeg_dyn() { return NaturalLeg; }
		static ::game::BodyPart Sword;
		static inline ::game::BodyPart Sword_dyn() { return Sword; }
};

} // end namespace game

#endif /* INCLUDED_game_BodyPart */ 
