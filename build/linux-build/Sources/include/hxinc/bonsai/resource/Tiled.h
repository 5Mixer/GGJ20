// Generated by Haxe 4.0.5
#ifndef INCLUDED_bonsai_resource_Tiled
#define INCLUDED_bonsai_resource_Tiled

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(bonsai,resource,Tiled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(kha,math,Vector2)

namespace bonsai{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES Tiled_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Tiled_obj OBJ_;
		Tiled_obj();

	public:
		enum { _hx_ClassId = 0x3244dece };

		void __construct(::String data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="bonsai.resource.Tiled")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"bonsai.resource.Tiled"); }
		static hx::ObjectPtr< Tiled_obj > __new(::String data);
		static hx::ObjectPtr< Tiled_obj > __alloc(hx::Ctx *_hx_ctx,::String data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tiled_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tiled",56,6d,62,a3); }

		int width;
		int height;
		 ::haxe::ds::StringMap layers;
		inline  ::haxe::ds::StringMap _hx_set_layers(hx::StackContext *_hx_ctx, ::haxe::ds::StringMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return layers=_hx_v; }
		::Array< ::Dynamic> entities;
		inline ::Array< ::Dynamic> _hx_set_entities(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return entities=_hx_v; }
		::Array< ::Dynamic> polygons;
		inline ::Array< ::Dynamic> _hx_set_polygons(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return polygons=_hx_v; }
		::Array< ::Dynamic> rectangles;
		inline ::Array< ::Dynamic> _hx_set_rectangles(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return rectangles=_hx_v; }
		void loadRawData(::String raw);
		::Dynamic loadRawData_dyn();

};

} // end namespace bonsai
} // end namespace resource

#endif /* INCLUDED_bonsai_resource_Tiled */ 
