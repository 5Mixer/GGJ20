// Generated by Haxe 4.0.5
#ifndef INCLUDED_game_SummonCircle
#define INCLUDED_game_SummonCircle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_bonsai_entity_Entity
#include <hxinc/bonsai/entity/Entity.h>
#endif
HX_DECLARE_CLASS2(bonsai,entity,Entity)
HX_DECLARE_CLASS2(bonsai,render,AnimatedSprite)
HX_DECLARE_CLASS1(game,SummonCircle)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace game{


class HXCPP_CLASS_ATTRIBUTES SummonCircle_obj : public  ::bonsai::entity::Entity_obj
{
	public:
		typedef  ::bonsai::entity::Entity_obj super;
		typedef SummonCircle_obj OBJ_;
		SummonCircle_obj();

	public:
		enum { _hx_ClassId = 0x7ebcd057 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="game.SummonCircle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"game.SummonCircle"); }
		static hx::ObjectPtr< SummonCircle_obj > __new();
		static hx::ObjectPtr< SummonCircle_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SummonCircle_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SummonCircle",31,b7,f0,1c); }

		int width;
		int height;
		 ::bonsai::render::AnimatedSprite animation;
		inline  ::bonsai::render::AnimatedSprite _hx_set_animation(hx::StackContext *_hx_ctx, ::bonsai::render::AnimatedSprite _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return animation=_hx_v; }
		void render( ::kha::graphics2::Graphics graphics);

		void update(Float dt);

};

} // end namespace game

#endif /* INCLUDED_game_SummonCircle */ 
