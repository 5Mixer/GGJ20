// Generated by Haxe 4.0.5
#ifndef INCLUDED_game_BodyPartParticles
#define INCLUDED_game_BodyPartParticles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_bonsai_entity_ParticleSystem
#include <hxinc/bonsai/entity/ParticleSystem.h>
#endif
HX_DECLARE_CLASS2(bonsai,entity,Entity)
HX_DECLARE_CLASS2(bonsai,entity,ParticleSystem)
HX_DECLARE_CLASS2(bonsai,render,AnimatedSprite)
HX_DECLARE_CLASS1(game,BodyPartParticles)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace game{


class HXCPP_CLASS_ATTRIBUTES BodyPartParticles_obj : public  ::bonsai::entity::ParticleSystem_obj
{
	public:
		typedef  ::bonsai::entity::ParticleSystem_obj super;
		typedef BodyPartParticles_obj OBJ_;
		BodyPartParticles_obj();

	public:
		enum { _hx_ClassId = 0x1729fd66 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="game.BodyPartParticles")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"game.BodyPartParticles"); }
		static hx::ObjectPtr< BodyPartParticles_obj > __new();
		static hx::ObjectPtr< BodyPartParticles_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BodyPartParticles_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BodyPartParticles",d8,bc,c6,c5); }

		 ::bonsai::render::AnimatedSprite animatedSprite;
		inline  ::bonsai::render::AnimatedSprite _hx_set_animatedSprite(hx::StackContext *_hx_ctx, ::bonsai::render::AnimatedSprite _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return animatedSprite=_hx_v; }
		 ::haxe::ds::EnumValueMap bodyPartToLayer;
		inline  ::haxe::ds::EnumValueMap _hx_set_bodyPartToLayer(hx::StackContext *_hx_ctx, ::haxe::ds::EnumValueMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return bodyPartToLayer=_hx_v; }
		void update(Float delta);

		void render( ::kha::graphics2::Graphics graphics);

};

} // end namespace game

#endif /* INCLUDED_game_BodyPartParticles */ 
