// Generated by Haxe 4.0.5
#ifndef INCLUDED_game_LegPart
#define INCLUDED_game_LegPart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(game,LegPart)
namespace game{


class LegPart_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LegPart_obj OBJ_;

	public:
		LegPart_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("game.LegPart",45,3a,2b,e6); }
		::String __ToString() const { return HX_("LegPart.",4d,e6,36,e2) + _hx_tag; }

		static ::game::LegPart Boots;
		static inline ::game::LegPart Boots_dyn() { return Boots; }
		static ::game::LegPart NaturalLeg;
		static inline ::game::LegPart NaturalLeg_dyn() { return NaturalLeg; }
};

} // end namespace game

#endif /* INCLUDED_game_LegPart */ 
