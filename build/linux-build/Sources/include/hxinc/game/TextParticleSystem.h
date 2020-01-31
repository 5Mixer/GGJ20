// Generated by Haxe 4.0.5
#ifndef INCLUDED_game_TextParticleSystem
#define INCLUDED_game_TextParticleSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_bonsai_entity_ParticleSystem
#include <hxinc/bonsai/entity/ParticleSystem.h>
#endif
HX_DECLARE_CLASS2(bonsai,entity,Entity)
HX_DECLARE_CLASS2(bonsai,entity,ParticleSystem)
HX_DECLARE_CLASS1(game,TextParticleSystem)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace game{


class HXCPP_CLASS_ATTRIBUTES TextParticleSystem_obj : public  ::bonsai::entity::ParticleSystem_obj
{
	public:
		typedef  ::bonsai::entity::ParticleSystem_obj super;
		typedef TextParticleSystem_obj OBJ_;
		TextParticleSystem_obj();

	public:
		enum { _hx_ClassId = 0x129b0398 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="game.TextParticleSystem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"game.TextParticleSystem"); }
		static hx::ObjectPtr< TextParticleSystem_obj > __new();
		static hx::ObjectPtr< TextParticleSystem_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextParticleSystem_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextParticleSystem",82,bb,52,a6); }

		void render( ::kha::graphics2::Graphics graphics);

		Float s;
		void update(Float dt);

};

} // end namespace game

#endif /* INCLUDED_game_TextParticleSystem */ 