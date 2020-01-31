// Generated by Haxe 4.0.5
#ifndef INCLUDED_game_Body
#define INCLUDED_game_Body

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_bonsai_entity_Entity
#include <hxinc/bonsai/entity/Entity.h>
#endif
HX_DECLARE_CLASS2(bonsai,entity,Entity)
HX_DECLARE_CLASS2(bonsai,render,AnimatedSprite)
HX_DECLARE_CLASS1(game,ArmPart)
HX_DECLARE_CLASS1(game,Body)
HX_DECLARE_CLASS1(game,BodyPart)
HX_DECLARE_CLASS1(game,ChestPart)
HX_DECLARE_CLASS1(game,HeadPart)
HX_DECLARE_CLASS1(game,LegPart)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace game{


class HXCPP_CLASS_ATTRIBUTES Body_obj : public  ::bonsai::entity::Entity_obj
{
	public:
		typedef  ::bonsai::entity::Entity_obj super;
		typedef Body_obj OBJ_;
		Body_obj();

	public:
		enum { _hx_ClassId = 0x26a89458 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="game.Body")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"game.Body"); }
		static hx::ObjectPtr< Body_obj > __new();
		static hx::ObjectPtr< Body_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Body_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Body",c2,a6,f4,2b); }

		 ::game::HeadPart head;
		inline  ::game::HeadPart _hx_set_head(hx::StackContext *_hx_ctx, ::game::HeadPart _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return head=_hx_v; }
		 ::game::ChestPart chest;
		inline  ::game::ChestPart _hx_set_chest(hx::StackContext *_hx_ctx, ::game::ChestPart _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return chest=_hx_v; }
		 ::game::ArmPart leftArm;
		inline  ::game::ArmPart _hx_set_leftArm(hx::StackContext *_hx_ctx, ::game::ArmPart _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return leftArm=_hx_v; }
		 ::game::ArmPart rightArm;
		inline  ::game::ArmPart _hx_set_rightArm(hx::StackContext *_hx_ctx, ::game::ArmPart _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return rightArm=_hx_v; }
		 ::game::LegPart leftLeg;
		inline  ::game::LegPart _hx_set_leftLeg(hx::StackContext *_hx_ctx, ::game::LegPart _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return leftLeg=_hx_v; }
		 ::game::LegPart rightLeg;
		inline  ::game::LegPart _hx_set_rightLeg(hx::StackContext *_hx_ctx, ::game::LegPart _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return rightLeg=_hx_v; }
		 ::haxe::ds::EnumValueMap headLayers;
		inline  ::haxe::ds::EnumValueMap _hx_set_headLayers(hx::StackContext *_hx_ctx, ::haxe::ds::EnumValueMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return headLayers=_hx_v; }
		 ::haxe::ds::EnumValueMap chestLayers;
		inline  ::haxe::ds::EnumValueMap _hx_set_chestLayers(hx::StackContext *_hx_ctx, ::haxe::ds::EnumValueMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return chestLayers=_hx_v; }
		 ::haxe::ds::EnumValueMap armLayers;
		inline  ::haxe::ds::EnumValueMap _hx_set_armLayers(hx::StackContext *_hx_ctx, ::haxe::ds::EnumValueMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return armLayers=_hx_v; }
		 ::haxe::ds::EnumValueMap legLayers;
		inline  ::haxe::ds::EnumValueMap _hx_set_legLayers(hx::StackContext *_hx_ctx, ::haxe::ds::EnumValueMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return legLayers=_hx_v; }
		 ::bonsai::render::AnimatedSprite animatedSprite;
		inline  ::bonsai::render::AnimatedSprite _hx_set_animatedSprite(hx::StackContext *_hx_ctx, ::bonsai::render::AnimatedSprite _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return animatedSprite=_hx_v; }
		void render( ::kha::graphics2::Graphics graphics);

		 ::game::BodyPart getHeadDrop();
		::Dynamic getHeadDrop_dyn();

		 ::game::BodyPart getChestDrop();
		::Dynamic getChestDrop_dyn();

		 ::game::BodyPart getLeftArmDrop();
		::Dynamic getLeftArmDrop_dyn();

		 ::game::BodyPart getRightArmDrop();
		::Dynamic getRightArmDrop_dyn();

		 ::game::BodyPart getLeftLegDrop();
		::Dynamic getLeftLegDrop_dyn();

		 ::game::BodyPart getRightLegDrop();
		::Dynamic getRightLegDrop_dyn();

};

} // end namespace game

#endif /* INCLUDED_game_Body */ 
