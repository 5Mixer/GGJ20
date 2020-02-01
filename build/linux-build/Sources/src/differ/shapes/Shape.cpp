// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_differ_data_RayCollision
#include <hxinc/differ/data/RayCollision.h>
#endif
#ifndef INCLUDED_differ_data_ShapeCollision
#include <hxinc/differ/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_differ_math_Matrix
#include <hxinc/differ/math/Matrix.h>
#endif
#ifndef INCLUDED_differ_math_Vector
#include <hxinc/differ/math/Vector.h>
#endif
#ifndef INCLUDED_differ_shapes_Circle
#include <hxinc/differ/shapes/Circle.h>
#endif
#ifndef INCLUDED_differ_shapes_Polygon
#include <hxinc/differ/shapes/Polygon.h>
#endif
#ifndef INCLUDED_differ_shapes_Ray
#include <hxinc/differ/shapes/Ray.h>
#endif
#ifndef INCLUDED_differ_shapes_Shape
#include <hxinc/differ/shapes/Shape.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <hxinc/haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa2478e85fae6153_8_new,"differ.shapes.Shape","new",0x7ff35373,"differ.shapes.Shape.new","differ/shapes/Shape.hx",8,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_67_test,"differ.shapes.Shape","test",0x78ecf5df,"differ.shapes.Shape.test","differ/shapes/Shape.hx",67,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_69_testCircle,"differ.shapes.Shape","testCircle",0xc0670d4f,"differ.shapes.Shape.testCircle","differ/shapes/Shape.hx",69,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_71_testPolygon,"differ.shapes.Shape","testPolygon",0xb69f3e5b,"differ.shapes.Shape.testPolygon","differ/shapes/Shape.hx",71,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_73_testRay,"differ.shapes.Shape","testRay",0x677f4d4b,"differ.shapes.Shape.testRay","differ/shapes/Shape.hx",73,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_76_destroy,"differ.shapes.Shape","destroy",0xce40358d,"differ.shapes.Shape.destroy","differ/shapes/Shape.hx",76,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_86_refresh_transform,"differ.shapes.Shape","refresh_transform",0xc6d1211b,"differ.shapes.Shape.refresh_transform","differ/shapes/Shape.hx",86,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_96_get_position,"differ.shapes.Shape","get_position",0xf573573f,"differ.shapes.Shape.get_position","differ/shapes/Shape.hx",96,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_99_set_position,"differ.shapes.Shape","set_position",0x0a6c7ab3,"differ.shapes.Shape.set_position","differ/shapes/Shape.hx",99,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_108_get_x,"differ.shapes.Shape","get_x",0xda355322,"differ.shapes.Shape.get_x","differ/shapes/Shape.hx",108,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_111_set_x,"differ.shapes.Shape","set_x",0xc304492e,"differ.shapes.Shape.set_x","differ/shapes/Shape.hx",111,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_120_get_y,"differ.shapes.Shape","get_y",0xda355323,"differ.shapes.Shape.get_y","differ/shapes/Shape.hx",120,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_123_set_y,"differ.shapes.Shape","set_y",0xc304492f,"differ.shapes.Shape.set_y","differ/shapes/Shape.hx",123,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_132_get_rotation,"differ.shapes.Shape","get_rotation",0x32fef3d4,"differ.shapes.Shape.get_rotation","differ/shapes/Shape.hx",132,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_135_set_rotation,"differ.shapes.Shape","set_rotation",0x47f81748,"differ.shapes.Shape.set_rotation","differ/shapes/Shape.hx",135,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_148_get_scaleX,"differ.shapes.Shape","get_scaleX",0x7e12afa4,"differ.shapes.Shape.get_scaleX","differ/shapes/Shape.hx",148,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_151_set_scaleX,"differ.shapes.Shape","set_scaleX",0x81904e18,"differ.shapes.Shape.set_scaleX","differ/shapes/Shape.hx",151,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_161_get_scaleY,"differ.shapes.Shape","get_scaleY",0x7e12afa5,"differ.shapes.Shape.get_scaleY","differ/shapes/Shape.hx",161,0x222aad7d)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2478e85fae6153_164_set_scaleY,"differ.shapes.Shape","set_scaleY",0x81904e19,"differ.shapes.Shape.set_scaleY","differ/shapes/Shape.hx",164,0x222aad7d)
namespace differ{
namespace shapes{

void Shape_obj::__construct(Float _x,Float _y){
            	HX_GC_STACKFRAME(&_hx_pos_aa2478e85fae6153_8_new)
HXLINE(  40)		this->_transformed = false;
HXLINE(  38)		this->_scaleY = ((Float)1);
HXLINE(  37)		this->_scaleX = ((Float)1);
HXLINE(  34)		this->_rotation_radians = ((Float)0);
HXLINE(  33)		this->_rotation = ((Float)0);
HXLINE(  14)		this->_hx_set_name(HX_CTX, HX_("shape",21,e3,1c,7c));
HXLINE(  12)		this->active = true;
HXLINE(  50)		this->_hx_set_tags(HX_CTX,  ::haxe::ds::StringMap_obj::__alloc( HX_CTX ));
HXLINE(  52)		this->_hx_set__position(HX_CTX,  ::differ::math::Vector_obj::__alloc( HX_CTX ,_x,_y));
HXLINE(  53)		this->_hx_set__scale(HX_CTX,  ::differ::math::Vector_obj::__alloc( HX_CTX ,1,1));
HXLINE(  54)		this->_rotation = ( (Float)(0) );
HXLINE(  56)		this->_scaleX = ( (Float)(1) );
HXLINE(  57)		this->_scaleY = ( (Float)(1) );
HXLINE(  59)		this->_hx_set__transformMatrix(HX_CTX,  ::differ::math::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null()));
HXLINE(  60)		this->_transformMatrix->makeTranslation(this->_position->x,this->_position->y);
            	}

Dynamic Shape_obj::__CreateEmpty() { return new Shape_obj; }

void *Shape_obj::_hx_vtable = 0;

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Shape_obj > _hx_result = new Shape_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Shape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c9cf339;
}

 ::differ::data::ShapeCollision Shape_obj::test( ::differ::shapes::Shape shape, ::differ::data::ShapeCollision into){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_67_test)
HXDLIN(  67)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shape_obj,test,return )

 ::differ::data::ShapeCollision Shape_obj::testCircle( ::differ::shapes::Circle circle, ::differ::data::ShapeCollision into,hx::Null< bool >  __o_flip){
            		bool flip = __o_flip.Default(false);
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_69_testCircle)
HXDLIN(  69)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Shape_obj,testCircle,return )

 ::differ::data::ShapeCollision Shape_obj::testPolygon( ::differ::shapes::Polygon polygon, ::differ::data::ShapeCollision into,hx::Null< bool >  __o_flip){
            		bool flip = __o_flip.Default(false);
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_71_testPolygon)
HXDLIN(  71)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Shape_obj,testPolygon,return )

 ::differ::data::RayCollision Shape_obj::testRay( ::differ::shapes::Ray ray, ::differ::data::RayCollision into){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_73_testRay)
HXDLIN(  73)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shape_obj,testRay,return )

void Shape_obj::destroy(){
            	HX_GC_STACKFRAME(&_hx_pos_aa2478e85fae6153_76_destroy)
HXLINE(  78)		this->_hx_set__position(HX_CTX, null());
HXLINE(  79)		this->_hx_set__scale(HX_CTX, null());
HXLINE(  80)		this->_hx_set__transformMatrix(HX_CTX, null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,destroy,(void))

void Shape_obj::refresh_transform(){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_86_refresh_transform)
HXLINE(  88)		this->_transformMatrix->compose(this->_position,this->_rotation_radians,this->_scale);
HXLINE(  89)		this->_transformed = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,refresh_transform,(void))

 ::differ::math::Vector Shape_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_96_get_position)
HXDLIN(  96)		return this->_position;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_position,return )

 ::differ::math::Vector Shape_obj::set_position( ::differ::math::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_aa2478e85fae6153_99_set_position)
HXLINE( 100)		this->_hx_set__position(HX_CTX, v);
HXLINE( 101)		this->refresh_transform();
HXLINE( 102)		return this->_position;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_position,return )

Float Shape_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_108_get_x)
HXDLIN( 108)		return this->_position->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_x,return )

Float Shape_obj::set_x(Float x){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_111_set_x)
HXLINE( 112)		this->_position->x = x;
HXLINE( 113)		this->refresh_transform();
HXLINE( 114)		return this->_position->x;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_x,return )

Float Shape_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_120_get_y)
HXDLIN( 120)		return this->_position->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_y,return )

Float Shape_obj::set_y(Float y){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_123_set_y)
HXLINE( 124)		this->_position->y = y;
HXLINE( 125)		this->refresh_transform();
HXLINE( 126)		return this->_position->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_y,return )

Float Shape_obj::get_rotation(){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_132_get_rotation)
HXDLIN( 132)		return this->_rotation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_rotation,return )

Float Shape_obj::set_rotation(Float v){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_135_set_rotation)
HXLINE( 137)		this->_rotation_radians = (v * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 139)		this->refresh_transform();
HXLINE( 141)		return (this->_rotation = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_rotation,return )

Float Shape_obj::get_scaleX(){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_148_get_scaleX)
HXDLIN( 148)		return this->_scaleX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_scaleX,return )

Float Shape_obj::set_scaleX(Float scale){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_151_set_scaleX)
HXLINE( 152)		this->_scaleX = scale;
HXLINE( 153)		this->_scale->x = this->_scaleX;
HXLINE( 154)		this->refresh_transform();
HXLINE( 155)		return this->_scaleX;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_scaleX,return )

Float Shape_obj::get_scaleY(){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_161_get_scaleY)
HXDLIN( 161)		return this->_scaleY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_scaleY,return )

Float Shape_obj::set_scaleY(Float scale){
            	HX_STACKFRAME(&_hx_pos_aa2478e85fae6153_164_set_scaleY)
HXLINE( 165)		this->_scaleY = scale;
HXLINE( 166)		this->_scale->y = this->_scaleY;
HXLINE( 167)		this->refresh_transform();
HXLINE( 168)		return this->_scaleY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_scaleY,return )


hx::ObjectPtr< Shape_obj > Shape_obj::__new(Float _x,Float _y) {
	hx::ObjectPtr< Shape_obj > __this = new Shape_obj();
	__this->__construct(_x,_y);
	return __this;
}

hx::ObjectPtr< Shape_obj > Shape_obj::__alloc(hx::Ctx *_hx_ctx,Float _x,Float _y) {
	Shape_obj *__this = (Shape_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Shape_obj), true, "differ.shapes.Shape"));
	*(void **)__this = Shape_obj::_hx_vtable;
	__this->__construct(_x,_y);
	return __this;
}

Shape_obj::Shape_obj()
{
}

void Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shape);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(tags,"tags");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(_rotation_radians,"_rotation_radians");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(_scaleY,"_scaleY");
	HX_MARK_MEMBER_NAME(_transformed,"_transformed");
	HX_MARK_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_MARK_END_CLASS();
}

void Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(tags,"tags");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(_rotation_radians,"_rotation_radians");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(_scaleY,"_scaleY");
	HX_VISIT_MEMBER_NAME(_transformed,"_transformed");
	HX_VISIT_MEMBER_NAME(_transformMatrix,"_transformMatrix");
}

hx::Val Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_y() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"tags") ) { return hx::Val( tags ); }
		if (HX_FIELD_EQ(inName,"test") ) { return hx::Val( test_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_scaleX() ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_scaleY() ); }
		if (HX_FIELD_EQ(inName,"_scale") ) { return hx::Val( _scale ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { return hx::Val( _scaleX ); }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { return hx::Val( _scaleY ); }
		if (HX_FIELD_EQ(inName,"testRay") ) { return hx::Val( testRay_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_rotation() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { return hx::Val( _position ); }
		if (HX_FIELD_EQ(inName,"_rotation") ) { return hx::Val( _rotation ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testCircle") ) { return hx::Val( testCircle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return hx::Val( get_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return hx::Val( get_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return hx::Val( set_scaleY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testPolygon") ) { return hx::Val( testPolygon_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_transformed") ) { return hx::Val( _transformed ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return hx::Val( set_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return hx::Val( get_rotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return hx::Val( set_rotation_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { return hx::Val( _transformMatrix ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rotation_radians") ) { return hx::Val( _rotation_radians ); }
		if (HX_FIELD_EQ(inName,"refresh_transform") ) { return hx::Val( refresh_transform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Shape_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { _hx_set_name(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { _hx_set_data(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		if (HX_FIELD_EQ(inName,"tags") ) { _hx_set_tags(HX_CTX_GET,inValue.Cast<  ::haxe::ds::StringMap >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_scaleX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_scaleY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_scale") ) { _hx_set__scale(HX_CTX_GET,inValue.Cast<  ::differ::math::Vector >()); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_position(inValue.Cast<  ::differ::math::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rotation(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _hx_set__position(HX_CTX_GET,inValue.Cast<  ::differ::math::Vector >()); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_transformed") ) { _transformed=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { _hx_set__transformMatrix(HX_CTX_GET,inValue.Cast<  ::differ::math::Matrix >()); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rotation_radians") ) { _rotation_radians=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("tags",d9,b4,f6,4c));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("_position",08,98,90,12));
	outFields->push(HX_("_rotation",9d,34,1c,50));
	outFields->push(HX_("_rotation_radians",90,39,26,94));
	outFields->push(HX_("_scale",cb,15,b6,74));
	outFields->push(HX_("_scaleX",2d,fc,9c,aa));
	outFields->push(HX_("_scaleY",2e,fc,9c,aa));
	outFields->push(HX_("_transformed",cc,66,d4,98));
	outFields->push(HX_("_transformMatrix",4e,f3,fc,e1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Shape_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Shape_obj,active),HX_("active",c6,41,46,16)},
	{hx::fsString,(int)offsetof(Shape_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Shape_obj,data),HX_("data",2a,56,63,42)},
	{hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Shape_obj,tags),HX_("tags",d9,b4,f6,4c)},
	{hx::fsObject /*  ::differ::math::Vector */ ,(int)offsetof(Shape_obj,_position),HX_("_position",08,98,90,12)},
	{hx::fsFloat,(int)offsetof(Shape_obj,_rotation),HX_("_rotation",9d,34,1c,50)},
	{hx::fsFloat,(int)offsetof(Shape_obj,_rotation_radians),HX_("_rotation_radians",90,39,26,94)},
	{hx::fsObject /*  ::differ::math::Vector */ ,(int)offsetof(Shape_obj,_scale),HX_("_scale",cb,15,b6,74)},
	{hx::fsFloat,(int)offsetof(Shape_obj,_scaleX),HX_("_scaleX",2d,fc,9c,aa)},
	{hx::fsFloat,(int)offsetof(Shape_obj,_scaleY),HX_("_scaleY",2e,fc,9c,aa)},
	{hx::fsBool,(int)offsetof(Shape_obj,_transformed),HX_("_transformed",cc,66,d4,98)},
	{hx::fsObject /*  ::differ::math::Matrix */ ,(int)offsetof(Shape_obj,_transformMatrix),HX_("_transformMatrix",4e,f3,fc,e1)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Shape_obj_sStaticStorageInfo = 0;
#endif

static ::String Shape_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("name",4b,72,ff,48),
	HX_("data",2a,56,63,42),
	HX_("tags",d9,b4,f6,4c),
	HX_("_position",08,98,90,12),
	HX_("_rotation",9d,34,1c,50),
	HX_("_rotation_radians",90,39,26,94),
	HX_("_scale",cb,15,b6,74),
	HX_("_scaleX",2d,fc,9c,aa),
	HX_("_scaleY",2e,fc,9c,aa),
	HX_("_transformed",cc,66,d4,98),
	HX_("_transformMatrix",4e,f3,fc,e1),
	HX_("test",52,c8,f9,4c),
	HX_("testCircle",02,b8,01,6f),
	HX_("testPolygon",48,f0,59,cf),
	HX_("testRay",b8,44,c5,bd),
	HX_("destroy",fa,2c,86,24),
	HX_("refresh_transform",c8,82,85,fd),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_rotation",47,f1,9f,bd),
	HX_("set_rotation",bb,14,99,d2),
	HX_("get_scaleX",57,5a,ad,2c),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("get_scaleY",58,5a,ad,2c),
	HX_("set_scaleY",cc,f8,2a,30),
	::String(null()) };

hx::Class Shape_obj::__mClass;

void Shape_obj::__register()
{
	Shape_obj _hx_dummy;
	Shape_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("differ.shapes.Shape",01,1e,6a,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Shape_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shape_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace differ
} // end namespace shapes