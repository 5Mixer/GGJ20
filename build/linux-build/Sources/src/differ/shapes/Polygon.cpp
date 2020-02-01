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
#ifndef INCLUDED_differ_sat_SAT2D
#include <hxinc/differ/sat/SAT2D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b69a68bf75bf0812_21_new,"differ.shapes.Polygon","new",0xe0950b4c,"differ.shapes.Polygon.new","differ/shapes/Polygon.hx",21,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_35_test,"differ.shapes.Polygon","test",0xa5cc1be6,"differ.shapes.Polygon.test","differ/shapes/Polygon.hx",35,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_42_testCircle,"differ.shapes.Polygon","testCircle",0xb13cf296,"differ.shapes.Polygon.testCircle","differ/shapes/Polygon.hx",42,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_49_testPolygon,"differ.shapes.Polygon","testPolygon",0x80f1f734,"differ.shapes.Polygon.testPolygon","differ/shapes/Polygon.hx",49,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_56_testRay,"differ.shapes.Polygon","testRay",0x72bc65a4,"differ.shapes.Polygon.testRay","differ/shapes/Polygon.hx",56,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_61_destroy,"differ.shapes.Polygon","destroy",0xd97d4de6,"differ.shapes.Polygon.destroy","differ/shapes/Polygon.hx",61,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_147_get_transformedVertices,"differ.shapes.Polygon","get_transformedVertices",0xa7cad767,"differ.shapes.Polygon.get_transformedVertices","differ/shapes/Polygon.hx",147,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_164_get_vertices,"differ.shapes.Polygon","get_vertices",0xd29d7b96,"differ.shapes.Polygon.get_vertices","differ/shapes/Polygon.hx",164,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_80_create,"differ.shapes.Polygon","create",0x6cccc790,"differ.shapes.Polygon.create","differ/shapes/Polygon.hx",80,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_105_rectangle,"differ.shapes.Polygon","rectangle",0x532f081b,"differ.shapes.Polygon.rectangle","differ/shapes/Polygon.hx",105,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_133_square,"differ.shapes.Polygon","square",0x49af6131,"differ.shapes.Polygon.square","differ/shapes/Polygon.hx",133,0xb0f73bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_b69a68bf75bf0812_141_triangle,"differ.shapes.Polygon","triangle",0x310b6c5c,"differ.shapes.Polygon.triangle","differ/shapes/Polygon.hx",141,0xb0f73bc4)
namespace differ{
namespace shapes{

void Polygon_obj::__construct(Float x,Float y,::Array< ::Dynamic> vertices){
            	HX_GC_STACKFRAME(&_hx_pos_b69a68bf75bf0812_21_new)
HXLINE(  23)		super::__construct(x,y);
HXLINE(  25)		this->_hx_set_name(HX_CTX, ((HX_("polygon(sides:",ac,f4,5b,aa) + vertices->length) + HX_(")",29,00,00,00)));
HXLINE(  27)		this->_hx_set__transformedVertices(HX_CTX, ::Array_obj< ::Dynamic>::__new());
HXLINE(  28)		this->_hx_set__vertices(HX_CTX, vertices);
            	}

Dynamic Polygon_obj::__CreateEmpty() { return new Polygon_obj; }

void *Polygon_obj::_hx_vtable = 0;

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Polygon_obj > _hx_result = new Polygon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Polygon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c9cf339) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c9cf339;
	} else {
		return inClassId==(int)0x470ed4ae;
	}
}

 ::differ::data::ShapeCollision Polygon_obj::test( ::differ::shapes::Shape shape, ::differ::data::ShapeCollision into){
            	HX_STACKFRAME(&_hx_pos_b69a68bf75bf0812_35_test)
HXDLIN(  35)		return shape->testPolygon(hx::ObjectPtr<OBJ_>(this),into,true);
            	}


 ::differ::data::ShapeCollision Polygon_obj::testCircle( ::differ::shapes::Circle circle, ::differ::data::ShapeCollision into,hx::Null< bool >  __o_flip){
            		bool flip = __o_flip.Default(false);
            	HX_STACKFRAME(&_hx_pos_b69a68bf75bf0812_42_testCircle)
HXDLIN(  42)		return ::differ::sat::SAT2D_obj::testCircleVsPolygon(circle,hx::ObjectPtr<OBJ_>(this),into,!(flip));
            	}


 ::differ::data::ShapeCollision Polygon_obj::testPolygon( ::differ::shapes::Polygon polygon, ::differ::data::ShapeCollision into,hx::Null< bool >  __o_flip){
            		bool flip = __o_flip.Default(false);
            	HX_STACKFRAME(&_hx_pos_b69a68bf75bf0812_49_testPolygon)
HXDLIN(  49)		return ::differ::sat::SAT2D_obj::testPolygonVsPolygon(hx::ObjectPtr<OBJ_>(this),polygon,into,flip);
            	}


 ::differ::data::RayCollision Polygon_obj::testRay( ::differ::shapes::Ray ray, ::differ::data::RayCollision into){
            	HX_STACKFRAME(&_hx_pos_b69a68bf75bf0812_56_testRay)
HXDLIN(  56)		return ::differ::sat::SAT2D_obj::testRayVsPolygon(ray,hx::ObjectPtr<OBJ_>(this),into);
            	}


void Polygon_obj::destroy(){
            	HX_GC_STACKFRAME(&_hx_pos_b69a68bf75bf0812_61_destroy)
HXLINE(  63)		int _count = this->_vertices->length;
HXLINE(  65)		{
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			int _g1 = _count;
HXDLIN(  65)			while((_g < _g1)){
HXLINE(  65)				_g = (_g + 1);
HXDLIN(  65)				int i = (_g - 1);
HXLINE(  66)				this->_vertices->setCtx( HX_CTX, i,null());
            			}
            		}
HXLINE(  69)		this->_hx_set__transformedVertices(HX_CTX, null());
HXLINE(  70)		this->_hx_set__vertices(HX_CTX, null());
HXLINE(  72)		this->super::destroy();
            	}


::Array< ::Dynamic> Polygon_obj::get_transformedVertices(){
            	HX_GC_STACKFRAME(&_hx_pos_b69a68bf75bf0812_147_get_transformedVertices)
HXLINE( 149)		if (!(this->_transformed)) {
HXLINE( 150)			this->_hx_set__transformedVertices(HX_CTX, ::Array_obj< ::Dynamic>::__new());
HXLINE( 151)			this->_transformed = true;
HXLINE( 153)			int _count = this->_vertices->length;
HXLINE( 155)			{
HXLINE( 155)				int _g = 0;
HXDLIN( 155)				int _g1 = _count;
HXDLIN( 155)				while((_g < _g1)){
HXLINE( 155)					_g = (_g + 1);
HXDLIN( 155)					int i = (_g - 1);
HXLINE( 156)					::Array< ::Dynamic> _hx_tmp = this->_transformedVertices;
HXDLIN( 156)					 ::differ::math::Vector _this = this->_vertices->__get(i).StaticCast<  ::differ::math::Vector >();
HXDLIN( 156)					 ::differ::math::Vector _hx_tmp1 =  ::differ::math::Vector_obj::__alloc( HX_CTX ,_this->x,_this->y);
HXDLIN( 156)					_hx_tmp->push(_hx_tmp1->transform(this->_transformMatrix));
            				}
            			}
            		}
HXLINE( 160)		return this->_transformedVertices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_transformedVertices,return )

::Array< ::Dynamic> Polygon_obj::get_vertices(){
            	HX_STACKFRAME(&_hx_pos_b69a68bf75bf0812_164_get_vertices)
HXDLIN( 164)		return this->_vertices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_vertices,return )

 ::differ::shapes::Polygon Polygon_obj::create(Float x,Float y,int sides,hx::Null< Float >  __o_radius){
            		Float radius = __o_radius.Default(100);
            	HX_GC_STACKFRAME(&_hx_pos_b69a68bf75bf0812_80_create)
HXLINE(  82)		if ((sides < 3)) {
HXLINE(  83)			HX_STACK_DO_THROW(HX_("Polygon - Needs at least 3 sides",07,3f,1e,8d));
            		}
HXLINE(  86)		Float rotation = ((::Math_obj::PI * ( (Float)(2) )) / ( (Float)(sides) ));
HXLINE(  87)		Float angle;
HXLINE(  88)		 ::differ::math::Vector vector;
HXLINE(  89)		::Array< ::Dynamic> vertices = ::Array_obj< ::Dynamic>::__new();
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			int _g1 = sides;
HXDLIN(  91)			while((_g < _g1)){
HXLINE(  91)				_g = (_g + 1);
HXDLIN(  91)				int i = (_g - 1);
HXLINE(  92)				angle = ((( (Float)(i) ) * rotation) + ((::Math_obj::PI - rotation) * ((Float)0.5)));
HXLINE(  93)				vector =  ::differ::math::Vector_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  94)				vector->x = (::Math_obj::cos(angle) * radius);
HXLINE(  95)				vector->y = (::Math_obj::sin(angle) * radius);
HXLINE(  96)				vertices->push(vector);
            			}
            		}
HXLINE(  99)		return  ::differ::shapes::Polygon_obj::__alloc( HX_CTX ,x,y,vertices);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,create,return )

 ::differ::shapes::Polygon Polygon_obj::rectangle(Float x,Float y,Float width,Float height,hx::Null< bool >  __o_centered){
            		bool centered = __o_centered.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_b69a68bf75bf0812_105_rectangle)
HXLINE( 107)		::Array< ::Dynamic> vertices = ::Array_obj< ::Dynamic>::__new();
HXLINE( 109)		if (centered) {
HXLINE( 111)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,(-(width) / ( (Float)(2) )),(-(height) / ( (Float)(2) ))));
HXLINE( 112)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,(width / ( (Float)(2) )),(-(height) / ( (Float)(2) ))));
HXLINE( 113)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,(width / ( (Float)(2) )),(height / ( (Float)(2) ))));
HXLINE( 114)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,(-(width) / ( (Float)(2) )),(height / ( (Float)(2) ))));
            		}
            		else {
HXLINE( 118)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,0,0));
HXLINE( 119)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,width,0));
HXLINE( 120)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,width,height));
HXLINE( 121)			vertices->push( ::differ::math::Vector_obj::__alloc( HX_CTX ,0,height));
            		}
HXLINE( 125)		return  ::differ::shapes::Polygon_obj::__alloc( HX_CTX ,x,y,vertices);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,rectangle,return )

 ::differ::shapes::Polygon Polygon_obj::square(Float x,Float y,Float width,hx::Null< bool >  __o_centered){
            		bool centered = __o_centered.Default(true);
            	HX_STACKFRAME(&_hx_pos_b69a68bf75bf0812_133_square)
HXDLIN( 133)		return ::differ::shapes::Polygon_obj::rectangle(x,y,width,width,centered);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,square,return )

 ::differ::shapes::Polygon Polygon_obj::triangle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_b69a68bf75bf0812_141_triangle)
HXDLIN( 141)		return ::differ::shapes::Polygon_obj::create(x,y,3,radius);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,triangle,return )


hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Float x,Float y,::Array< ::Dynamic> vertices) {
	hx::ObjectPtr< Polygon_obj > __this = new Polygon_obj();
	__this->__construct(x,y,vertices);
	return __this;
}

hx::ObjectPtr< Polygon_obj > Polygon_obj::__alloc(hx::Ctx *_hx_ctx,Float x,Float y,::Array< ::Dynamic> vertices) {
	Polygon_obj *__this = (Polygon_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Polygon_obj), true, "differ.shapes.Polygon"));
	*(void **)__this = Polygon_obj::_hx_vtable;
	__this->__construct(x,y,vertices);
	return __this;
}

Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_MARK_MEMBER_NAME(_vertices,"_vertices");
	 ::differ::shapes::Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_VISIT_MEMBER_NAME(_vertices,"_vertices");
	 ::differ::shapes::Shape_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Polygon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return hx::Val( test_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testRay") ) { return hx::Val( testRay_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_vertices() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { return hx::Val( _vertices ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testCircle") ) { return hx::Val( testCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testPolygon") ) { return hx::Val( testPolygon_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { return hx::Val( get_vertices_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"transformedVertices") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_transformedVertices() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { return hx::Val( _transformedVertices ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_transformedVertices") ) { return hx::Val( get_transformedVertices_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Polygon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"square") ) { outValue = square_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triangle") ) { outValue = triangle_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectangle") ) { outValue = rectangle_dyn(); return true; }
	}
	return false;
}

hx::Val Polygon_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { _hx_set__vertices(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { _hx_set__transformedVertices(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("transformedVertices",e4,77,78,19));
	outFields->push(HX_("vertices",f9,bf,15,6a));
	outFields->push(HX_("_transformedVertices",e5,8e,d1,18));
	outFields->push(HX_("_vertices",58,b7,ab,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Polygon_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Polygon_obj,_transformedVertices),HX_("_transformedVertices",e5,8e,d1,18)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Polygon_obj,_vertices),HX_("_vertices",58,b7,ab,b1)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Polygon_obj_sStaticStorageInfo = 0;
#endif

static ::String Polygon_obj_sMemberFields[] = {
	HX_("_transformedVertices",e5,8e,d1,18),
	HX_("_vertices",58,b7,ab,b1),
	HX_("test",52,c8,f9,4c),
	HX_("testCircle",02,b8,01,6f),
	HX_("testPolygon",48,f0,59,cf),
	HX_("testRay",b8,44,c5,bd),
	HX_("destroy",fa,2c,86,24),
	HX_("get_transformedVertices",7b,1e,ce,21),
	HX_("get_vertices",02,74,2f,1f),
	::String(null()) };

hx::Class Polygon_obj::__mClass;

static ::String Polygon_obj_sStaticFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("rectangle",2f,d4,7c,19),
	HX_("square",9d,00,f2,58),
	HX_("triangle",c8,be,c5,8d),
	::String(null())
};

void Polygon_obj::__register()
{
	Polygon_obj _hx_dummy;
	Polygon_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("differ.shapes.Polygon",5a,b5,ca,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Polygon_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Polygon_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Polygon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polygon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polygon_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace differ
} // end namespace shapes