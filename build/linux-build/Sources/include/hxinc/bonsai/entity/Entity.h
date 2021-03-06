// Generated by Haxe 4.0.5
#ifndef INCLUDED_bonsai_entity_Entity
#define INCLUDED_bonsai_entity_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(bonsai,entity,Entity)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,math,Vector2)

namespace bonsai{
namespace entity{


class HXCPP_CLASS_ATTRIBUTES Entity_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Entity_obj OBJ_;
		Entity_obj();

	public:
		enum { _hx_ClassId = 0x61169fa0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="bonsai.entity.Entity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"bonsai.entity.Entity"); }
		static hx::ObjectPtr< Entity_obj > __new();
		static hx::ObjectPtr< Entity_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Entity",43,87,b0,39); }

		 ::kha::math::Vector2 position;
		inline  ::kha::math::Vector2 _hx_set_position(hx::StackContext *_hx_ctx, ::kha::math::Vector2 _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return position=_hx_v; }
		bool active;
		bool visible;
		virtual void render( ::kha::graphics2::Graphics graphics);
		::Dynamic render_dyn();

		virtual void update(Float dt);
		::Dynamic update_dyn();

};

} // end namespace bonsai
} // end namespace entity

#endif /* INCLUDED_bonsai_entity_Entity */ 
