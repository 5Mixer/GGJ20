// Generated by Haxe 4.0.5
#ifndef INCLUDED_differ_shapes_Polygon
#define INCLUDED_differ_shapes_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_differ_shapes_Shape
#include <hxinc/differ/shapes/Shape.h>
#endif
HX_DECLARE_CLASS2(differ,data,RayCollision)
HX_DECLARE_CLASS2(differ,data,ShapeCollision)
HX_DECLARE_CLASS2(differ,math,Vector)
HX_DECLARE_CLASS2(differ,shapes,Circle)
HX_DECLARE_CLASS2(differ,shapes,Polygon)
HX_DECLARE_CLASS2(differ,shapes,Ray)
HX_DECLARE_CLASS2(differ,shapes,Shape)

namespace differ{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES Polygon_obj : public  ::differ::shapes::Shape_obj
{
	public:
		typedef  ::differ::shapes::Shape_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();

	public:
		enum { _hx_ClassId = 0x470ed4ae };

		void __construct(Float x,Float y,::Array< ::Dynamic> vertices);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="differ.shapes.Polygon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"differ.shapes.Polygon"); }
		static hx::ObjectPtr< Polygon_obj > __new(Float x,Float y,::Array< ::Dynamic> vertices);
		static hx::ObjectPtr< Polygon_obj > __alloc(hx::Ctx *_hx_ctx,Float x,Float y,::Array< ::Dynamic> vertices);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Polygon",5a,2a,e2,df); }

		static  ::differ::shapes::Polygon create(Float x,Float y,int sides,hx::Null< Float >  radius);
		static ::Dynamic create_dyn();

		static  ::differ::shapes::Polygon rectangle(Float x,Float y,Float width,Float height,hx::Null< bool >  centered);
		static ::Dynamic rectangle_dyn();

		static  ::differ::shapes::Polygon square(Float x,Float y,Float width,hx::Null< bool >  centered);
		static ::Dynamic square_dyn();

		static  ::differ::shapes::Polygon triangle(Float x,Float y,Float radius);
		static ::Dynamic triangle_dyn();

		::Array< ::Dynamic> _transformedVertices;
		inline ::Array< ::Dynamic> _hx_set__transformedVertices(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _transformedVertices=_hx_v; }
		::Array< ::Dynamic> _vertices;
		inline ::Array< ::Dynamic> _hx_set__vertices(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _vertices=_hx_v; }
		 ::differ::data::ShapeCollision test( ::differ::shapes::Shape shape, ::differ::data::ShapeCollision into);

		 ::differ::data::ShapeCollision testCircle( ::differ::shapes::Circle circle, ::differ::data::ShapeCollision into,hx::Null< bool >  flip);

		 ::differ::data::ShapeCollision testPolygon( ::differ::shapes::Polygon polygon, ::differ::data::ShapeCollision into,hx::Null< bool >  flip);

		 ::differ::data::RayCollision testRay( ::differ::shapes::Ray ray, ::differ::data::RayCollision into);

		void destroy();

		::Array< ::Dynamic> get_transformedVertices();
		::Dynamic get_transformedVertices_dyn();

		::Array< ::Dynamic> get_vertices();
		::Dynamic get_vertices_dyn();

};

} // end namespace differ
} // end namespace shapes

#endif /* INCLUDED_differ_shapes_Polygon */ 
