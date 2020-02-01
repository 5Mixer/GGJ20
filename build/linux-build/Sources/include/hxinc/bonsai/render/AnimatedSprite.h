// Generated by Haxe 4.0.5
#ifndef INCLUDED_bonsai_render_AnimatedSprite
#define INCLUDED_bonsai_render_AnimatedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(bonsai,render,AnimatedSprite)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace bonsai{
namespace render{


class HXCPP_CLASS_ATTRIBUTES AnimatedSprite_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AnimatedSprite_obj OBJ_;
		AnimatedSprite_obj();

	public:
		enum { _hx_ClassId = 0x47bfdeb8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="bonsai.render.AnimatedSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"bonsai.render.AnimatedSprite"); }
		static hx::ObjectPtr< AnimatedSprite_obj > __new();
		static hx::ObjectPtr< AnimatedSprite_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimatedSprite_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimatedSprite",28,73,fe,75); }

		 ::haxe::ds::StringMap animations;
		inline  ::haxe::ds::StringMap _hx_set_animations(hx::StackContext *_hx_ctx, ::haxe::ds::StringMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return animations=_hx_v; }
		::Array< int > drawLayers;
		inline ::Array< int > _hx_set_drawLayers(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return drawLayers=_hx_v; }
		::String playing;
		inline ::String _hx_set_playing(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return playing=_hx_v; }
		int frame;
		Float frameTime;
		Float timeUntilNextFrame;
		bool looping;
		void registerAnimation(::String identifier, ::Dynamic animation);
		::Dynamic registerAnimation_dyn();

		void playOnce(::String identifier);
		::Dynamic playOnce_dyn();

		void play(::String identifier);
		::Dynamic play_dyn();

		void update(Float dt);
		::Dynamic update_dyn();

		void render( ::kha::graphics2::Graphics graphics,float x,float y);
		::Dynamic render_dyn();

};

} // end namespace bonsai
} // end namespace render

#endif /* INCLUDED_bonsai_render_AnimatedSprite */ 
