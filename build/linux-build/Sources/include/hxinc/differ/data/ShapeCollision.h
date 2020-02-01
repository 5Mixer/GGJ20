// Generated by Haxe 4.0.5
#ifndef INCLUDED_differ_data_ShapeCollision
#define INCLUDED_differ_data_ShapeCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(differ,data,ShapeCollision)
HX_DECLARE_CLASS2(differ,shapes,Shape)

namespace differ{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ShapeCollision_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ShapeCollision_obj OBJ_;
		ShapeCollision_obj();

	public:
		enum { _hx_ClassId = 0x28d71071 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="differ.data.ShapeCollision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"differ.data.ShapeCollision"); }
		static hx::ObjectPtr< ShapeCollision_obj > __new();
		static hx::ObjectPtr< ShapeCollision_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShapeCollision_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShapeCollision",31,4d,ab,19); }

		Float overlap;
		Float separationX;
		Float separationY;
		Float unitVectorX;
		Float unitVectorY;
		Float otherOverlap;
		Float otherSeparationX;
		Float otherSeparationY;
		Float otherUnitVectorX;
		Float otherUnitVectorY;
		 ::differ::shapes::Shape shape1;
		inline  ::differ::shapes::Shape _hx_set_shape1(hx::StackContext *_hx_ctx, ::differ::shapes::Shape _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return shape1=_hx_v; }
		 ::differ::shapes::Shape shape2;
		inline  ::differ::shapes::Shape _hx_set_shape2(hx::StackContext *_hx_ctx, ::differ::shapes::Shape _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return shape2=_hx_v; }
		 ::differ::data::ShapeCollision reset();
		::Dynamic reset_dyn();

		 ::differ::data::ShapeCollision clone();
		::Dynamic clone_dyn();

		void copy_from( ::differ::data::ShapeCollision _other);
		::Dynamic copy_from_dyn();

};

} // end namespace differ
} // end namespace data

#endif /* INCLUDED_differ_data_ShapeCollision */ 
