// Generated by Haxe 4.0.5
#ifndef INCLUDED_bonsai_render_SpriteMap
#define INCLUDED_bonsai_render_SpriteMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(bonsai,render,SpriteMap)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace bonsai{
namespace render{


class HXCPP_CLASS_ATTRIBUTES SpriteMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SpriteMap_obj OBJ_;
		SpriteMap_obj();

	public:
		enum { _hx_ClassId = 0x6a5d2c1f };

		void __construct( ::kha::Image image,int gridWidth,int gridHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="bonsai.render.SpriteMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"bonsai.render.SpriteMap"); }
		static hx::ObjectPtr< SpriteMap_obj > __new( ::kha::Image image,int gridWidth,int gridHeight);
		static hx::ObjectPtr< SpriteMap_obj > __alloc(hx::Ctx *_hx_ctx, ::kha::Image image,int gridWidth,int gridHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SpriteMap",77,57,d7,f7); }

		 ::kha::Image image;
		inline  ::kha::Image _hx_set_image(hx::StackContext *_hx_ctx, ::kha::Image _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return image=_hx_v; }
		int gridWidth;
		int gridHeight;
		void render( ::kha::graphics2::Graphics graphics,float x,float y,int index);
		::Dynamic render_dyn();

};

} // end namespace bonsai
} // end namespace render

#endif /* INCLUDED_bonsai_render_SpriteMap */ 
