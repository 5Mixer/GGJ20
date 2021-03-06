// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_bonsai_render_Transformation
#include <hxinc/bonsai/render/Transformation.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix3
#include <hxinc/kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_kha_math_FastVector2
#include <hxinc/kha/math/FastVector2.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <hxinc/kha/math/Vector2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_91118b6f6a1477d5_11_new,"bonsai.render.Transformation","new",0x55c9a0bf,"bonsai.render.Transformation.new","bonsai/render/Transformation.hx",11,0x51c22571)
HX_LOCAL_STACK_FRAME(_hx_pos_91118b6f6a1477d5_18_apply,"bonsai.render.Transformation","apply",0x1f0d6b8d,"bonsai.render.Transformation.apply","bonsai/render/Transformation.hx",18,0x51c22571)
HX_LOCAL_STACK_FRAME(_hx_pos_91118b6f6a1477d5_28_finish,"bonsai.render.Transformation","finish",0x0356b554,"bonsai.render.Transformation.finish","bonsai/render/Transformation.hx",28,0x51c22571)
HX_LOCAL_STACK_FRAME(_hx_pos_91118b6f6a1477d5_30_transformPoint,"bonsai.render.Transformation","transformPoint",0x10d7ad45,"bonsai.render.Transformation.transformPoint","bonsai/render/Transformation.hx",30,0x51c22571)
HX_LOCAL_STACK_FRAME(_hx_pos_91118b6f6a1477d5_39_untransformPoint,"bonsai.render.Transformation","untransformPoint",0x01ad5f9e,"bonsai.render.Transformation.untransformPoint","bonsai/render/Transformation.hx",39,0x51c22571)
namespace bonsai{
namespace render{

void Transformation_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_91118b6f6a1477d5_11_new)
HXLINE(  12)		this->_hx_set_offset(HX_CTX,  ::kha::math::Vector2_obj::__alloc( HX_CTX ,0,0));
HXLINE(  13)		this->_hx_set_scale(HX_CTX,  ::kha::math::Vector2_obj::__alloc( HX_CTX ,1,1));
HXLINE(  14)		this->_hx_set_origin(HX_CTX,  ::kha::math::Vector2_obj::__alloc( HX_CTX ,0,0));
            	}

Dynamic Transformation_obj::__CreateEmpty() { return new Transformation_obj; }

void *Transformation_obj::_hx_vtable = 0;

Dynamic Transformation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Transformation_obj > _hx_result = new Transformation_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Transformation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x22607b09;
}

void Transformation_obj::apply( ::kha::graphics2::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_91118b6f6a1477d5_18_apply)
HXDLIN(  18)		 ::kha::math::FastMatrix3 _this = graphics->transformations->__get(graphics->transformationIndex).StaticCast<  ::kha::math::FastMatrix3 >();
HXLINE(  19)		float m__00 = ( (float)(1) );
HXDLIN(  19)		float m__10 = ( (float)(0) );
HXDLIN(  19)		float m__20 = ( (float)((this->offset->x + this->origin->x)) );
HXDLIN(  19)		float m__01 = ( (float)(0) );
HXDLIN(  19)		float m__11 = ( (float)(1) );
HXDLIN(  19)		float m__21 = ( (float)((this->offset->y + this->origin->y)) );
HXDLIN(  19)		float m__02 = ( (float)(0) );
HXDLIN(  19)		float m__12 = ( (float)(0) );
HXDLIN(  19)		float m__22 = ( (float)(1) );
HXLINE(  18)		float _this__00 = (((_this->_00 * m__00) + (_this->_10 * m__01)) + (_this->_20 * m__02));
HXDLIN(  18)		float _this__10 = (((_this->_00 * m__10) + (_this->_10 * m__11)) + (_this->_20 * m__12));
HXDLIN(  18)		float _this__20 = (((_this->_00 * m__20) + (_this->_10 * m__21)) + (_this->_20 * m__22));
HXDLIN(  18)		float _this__01 = (((_this->_01 * m__00) + (_this->_11 * m__01)) + (_this->_21 * m__02));
HXDLIN(  18)		float _this__11 = (((_this->_01 * m__10) + (_this->_11 * m__11)) + (_this->_21 * m__12));
HXDLIN(  18)		float _this__21 = (((_this->_01 * m__20) + (_this->_11 * m__21)) + (_this->_21 * m__22));
HXDLIN(  18)		float _this__02 = (((_this->_02 * m__00) + (_this->_12 * m__01)) + (_this->_22 * m__02));
HXDLIN(  18)		float _this__12 = (((_this->_02 * m__10) + (_this->_12 * m__11)) + (_this->_22 * m__12));
HXDLIN(  18)		float _this__22 = (((_this->_02 * m__20) + (_this->_12 * m__21)) + (_this->_22 * m__22));
HXLINE(  21)		float m__001 = ( (float)(this->scale->x) );
HXDLIN(  21)		float m__101 = ( (float)(0) );
HXDLIN(  21)		float m__201 = ( (float)(0) );
HXDLIN(  21)		float m__011 = ( (float)(0) );
HXDLIN(  21)		float m__111 = ( (float)(this->scale->y) );
HXDLIN(  21)		float m__211 = ( (float)(0) );
HXDLIN(  21)		float m__021 = ( (float)(0) );
HXDLIN(  21)		float m__121 = ( (float)(0) );
HXDLIN(  21)		float m__221 = ( (float)(1) );
HXLINE(  18)		float _this__001 = (((_this__00 * m__001) + (_this__10 * m__011)) + (_this__20 * m__021));
HXDLIN(  18)		float _this__101 = (((_this__00 * m__101) + (_this__10 * m__111)) + (_this__20 * m__121));
HXDLIN(  18)		float _this__201 = (((_this__00 * m__201) + (_this__10 * m__211)) + (_this__20 * m__221));
HXDLIN(  18)		float _this__011 = (((_this__01 * m__001) + (_this__11 * m__011)) + (_this__21 * m__021));
HXDLIN(  18)		float _this__111 = (((_this__01 * m__101) + (_this__11 * m__111)) + (_this__21 * m__121));
HXDLIN(  18)		float _this__211 = (((_this__01 * m__201) + (_this__11 * m__211)) + (_this__21 * m__221));
HXDLIN(  18)		float _this__021 = (((_this__02 * m__001) + (_this__12 * m__011)) + (_this__22 * m__021));
HXDLIN(  18)		float _this__121 = (((_this__02 * m__101) + (_this__12 * m__111)) + (_this__22 * m__121));
HXDLIN(  18)		float _this__221 = (((_this__02 * m__201) + (_this__12 * m__211)) + (_this__22 * m__221));
HXLINE(  22)		float alpha = ( (float)(this->rotation) );
HXDLIN(  22)		float m__002 = ( (float)(::Math_obj::cos(( (Float)(alpha) ))) );
HXDLIN(  22)		float m__102 = ( (float)(-(::Math_obj::sin(( (Float)(alpha) )))) );
HXDLIN(  22)		float m__202 = ( (float)(0) );
HXDLIN(  22)		float m__012 = ( (float)(::Math_obj::sin(( (Float)(alpha) ))) );
HXDLIN(  22)		float m__112 = ( (float)(::Math_obj::cos(( (Float)(alpha) ))) );
HXDLIN(  22)		float m__212 = ( (float)(0) );
HXDLIN(  22)		float m__022 = ( (float)(0) );
HXDLIN(  22)		float m__122 = ( (float)(0) );
HXDLIN(  22)		float m__222 = ( (float)(1) );
HXLINE(  18)		float _this__002 = (((_this__001 * m__002) + (_this__101 * m__012)) + (_this__201 * m__022));
HXDLIN(  18)		float _this__102 = (((_this__001 * m__102) + (_this__101 * m__112)) + (_this__201 * m__122));
HXDLIN(  18)		float _this__202 = (((_this__001 * m__202) + (_this__101 * m__212)) + (_this__201 * m__222));
HXDLIN(  18)		float _this__012 = (((_this__011 * m__002) + (_this__111 * m__012)) + (_this__211 * m__022));
HXDLIN(  18)		float _this__112 = (((_this__011 * m__102) + (_this__111 * m__112)) + (_this__211 * m__122));
HXDLIN(  18)		float _this__212 = (((_this__011 * m__202) + (_this__111 * m__212)) + (_this__211 * m__222));
HXDLIN(  18)		float _this__022 = (((_this__021 * m__002) + (_this__121 * m__012)) + (_this__221 * m__022));
HXDLIN(  18)		float _this__122 = (((_this__021 * m__102) + (_this__121 * m__112)) + (_this__221 * m__122));
HXDLIN(  18)		float _this__222 = (((_this__021 * m__202) + (_this__121 * m__212)) + (_this__221 * m__222));
HXLINE(  23)		float m__003 = ( (float)(1) );
HXDLIN(  23)		float m__103 = ( (float)(0) );
HXDLIN(  23)		float m__203 = ( (float)(-(this->origin->x)) );
HXDLIN(  23)		float m__013 = ( (float)(0) );
HXDLIN(  23)		float m__113 = ( (float)(1) );
HXDLIN(  23)		float m__213 = ( (float)(-(this->origin->y)) );
HXDLIN(  23)		float m__023 = ( (float)(0) );
HXDLIN(  23)		float m__123 = ( (float)(0) );
HXDLIN(  23)		float m__223 = ( (float)(1) );
HXLINE(  18)		float trans__00 = (((_this__002 * m__003) + (_this__102 * m__013)) + (_this__202 * m__023));
HXDLIN(  18)		float trans__10 = (((_this__002 * m__103) + (_this__102 * m__113)) + (_this__202 * m__123));
HXDLIN(  18)		float trans__20 = (((_this__002 * m__203) + (_this__102 * m__213)) + (_this__202 * m__223));
HXDLIN(  18)		float trans__01 = (((_this__012 * m__003) + (_this__112 * m__013)) + (_this__212 * m__023));
HXDLIN(  18)		float trans__11 = (((_this__012 * m__103) + (_this__112 * m__113)) + (_this__212 * m__123));
HXDLIN(  18)		float trans__21 = (((_this__012 * m__203) + (_this__112 * m__213)) + (_this__212 * m__223));
HXDLIN(  18)		float trans__02 = (((_this__022 * m__003) + (_this__122 * m__013)) + (_this__222 * m__023));
HXDLIN(  18)		float trans__12 = (((_this__022 * m__103) + (_this__122 * m__113)) + (_this__222 * m__123));
HXDLIN(  18)		float trans__22 = (((_this__022 * m__203) + (_this__122 * m__213)) + (_this__222 * m__223));
HXDLIN(  18)		graphics->transformationIndex++;
HXDLIN(  18)		if ((graphics->transformationIndex == graphics->transformations->length)) {
HXDLIN(  18)			::Array< ::Dynamic> graphics1 = graphics->transformations;
HXDLIN(  18)			graphics1->push( ::kha::math::FastMatrix3_obj::__alloc( HX_CTX ,( (float)(1) ),( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)(1) ),( (float)(0) ),( (float)(0) ),( (float)(0) ),( (float)(1) )));
            		}
HXDLIN(  18)		{
HXDLIN(  18)			 ::kha::math::FastMatrix3 _this1 = graphics->transformations->__get(graphics->transformationIndex).StaticCast<  ::kha::math::FastMatrix3 >();
HXDLIN(  18)			_this1->_00 = trans__00;
HXDLIN(  18)			_this1->_10 = trans__10;
HXDLIN(  18)			_this1->_20 = trans__20;
HXDLIN(  18)			_this1->_01 = trans__01;
HXDLIN(  18)			_this1->_11 = trans__11;
HXDLIN(  18)			_this1->_21 = trans__21;
HXDLIN(  18)			_this1->_02 = trans__02;
HXDLIN(  18)			_this1->_12 = trans__12;
HXDLIN(  18)			_this1->_22 = trans__22;
            		}
HXDLIN(  18)		graphics->setTransformation(graphics->transformations->__get(graphics->transformationIndex).StaticCast<  ::kha::math::FastMatrix3 >());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transformation_obj,apply,(void))

void Transformation_obj::finish( ::kha::graphics2::Graphics graphics){
            	HX_STACKFRAME(&_hx_pos_91118b6f6a1477d5_28_finish)
HXDLIN(  28)		graphics->popTransformation();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transformation_obj,finish,(void))

 ::kha::math::FastVector2 Transformation_obj::transformPoint( ::kha::math::Vector2 point){
            	HX_GC_STACKFRAME(&_hx_pos_91118b6f6a1477d5_30_transformPoint)
HXLINE(  31)		float _this__00 = ( (float)(1) );
HXDLIN(  31)		float _this__10 = ( (float)(0) );
HXDLIN(  31)		float _this__20 = ( (float)((this->offset->x + this->origin->x)) );
HXDLIN(  31)		float _this__01 = ( (float)(0) );
HXDLIN(  31)		float _this__11 = ( (float)(1) );
HXDLIN(  31)		float _this__21 = ( (float)((this->offset->y + this->origin->y)) );
HXDLIN(  31)		float _this__02 = ( (float)(0) );
HXDLIN(  31)		float _this__12 = ( (float)(0) );
HXDLIN(  31)		float _this__22 = ( (float)(1) );
HXLINE(  33)		float m__00 = ( (float)(this->scale->x) );
HXDLIN(  33)		float m__10 = ( (float)(0) );
HXDLIN(  33)		float m__20 = ( (float)(0) );
HXDLIN(  33)		float m__01 = ( (float)(0) );
HXDLIN(  33)		float m__11 = ( (float)(this->scale->y) );
HXDLIN(  33)		float m__21 = ( (float)(0) );
HXDLIN(  33)		float m__02 = ( (float)(0) );
HXDLIN(  33)		float m__12 = ( (float)(0) );
HXDLIN(  33)		float m__22 = ( (float)(1) );
HXLINE(  31)		float _this__001 = (((_this__00 * m__00) + (_this__10 * m__01)) + (_this__20 * m__02));
HXDLIN(  31)		float _this__101 = (((_this__00 * m__10) + (_this__10 * m__11)) + (_this__20 * m__12));
HXDLIN(  31)		float _this__201 = (((_this__00 * m__20) + (_this__10 * m__21)) + (_this__20 * m__22));
HXDLIN(  31)		float _this__011 = (((_this__01 * m__00) + (_this__11 * m__01)) + (_this__21 * m__02));
HXDLIN(  31)		float _this__111 = (((_this__01 * m__10) + (_this__11 * m__11)) + (_this__21 * m__12));
HXDLIN(  31)		float _this__211 = (((_this__01 * m__20) + (_this__11 * m__21)) + (_this__21 * m__22));
HXDLIN(  31)		float _this__021 = (((_this__02 * m__00) + (_this__12 * m__01)) + (_this__22 * m__02));
HXDLIN(  31)		float _this__121 = (((_this__02 * m__10) + (_this__12 * m__11)) + (_this__22 * m__12));
HXDLIN(  31)		float _this__221 = (((_this__02 * m__20) + (_this__12 * m__21)) + (_this__22 * m__22));
HXLINE(  34)		float alpha = ( (float)(this->rotation) );
HXDLIN(  34)		float m__001 = ( (float)(::Math_obj::cos(( (Float)(alpha) ))) );
HXDLIN(  34)		float m__101 = ( (float)(-(::Math_obj::sin(( (Float)(alpha) )))) );
HXDLIN(  34)		float m__201 = ( (float)(0) );
HXDLIN(  34)		float m__011 = ( (float)(::Math_obj::sin(( (Float)(alpha) ))) );
HXDLIN(  34)		float m__111 = ( (float)(::Math_obj::cos(( (Float)(alpha) ))) );
HXDLIN(  34)		float m__211 = ( (float)(0) );
HXDLIN(  34)		float m__021 = ( (float)(0) );
HXDLIN(  34)		float m__121 = ( (float)(0) );
HXDLIN(  34)		float m__221 = ( (float)(1) );
HXLINE(  31)		float _this__002 = (((_this__001 * m__001) + (_this__101 * m__011)) + (_this__201 * m__021));
HXDLIN(  31)		float _this__102 = (((_this__001 * m__101) + (_this__101 * m__111)) + (_this__201 * m__121));
HXDLIN(  31)		float _this__202 = (((_this__001 * m__201) + (_this__101 * m__211)) + (_this__201 * m__221));
HXDLIN(  31)		float _this__012 = (((_this__011 * m__001) + (_this__111 * m__011)) + (_this__211 * m__021));
HXDLIN(  31)		float _this__112 = (((_this__011 * m__101) + (_this__111 * m__111)) + (_this__211 * m__121));
HXDLIN(  31)		float _this__212 = (((_this__011 * m__201) + (_this__111 * m__211)) + (_this__211 * m__221));
HXDLIN(  31)		float _this__022 = (((_this__021 * m__001) + (_this__121 * m__011)) + (_this__221 * m__021));
HXDLIN(  31)		float _this__122 = (((_this__021 * m__101) + (_this__121 * m__111)) + (_this__221 * m__121));
HXDLIN(  31)		float _this__222 = (((_this__021 * m__201) + (_this__121 * m__211)) + (_this__221 * m__221));
HXLINE(  35)		float m__002 = ( (float)(1) );
HXDLIN(  35)		float m__102 = ( (float)(0) );
HXDLIN(  35)		float m__202 = ( (float)(-(this->origin->x)) );
HXDLIN(  35)		float m__012 = ( (float)(0) );
HXDLIN(  35)		float m__112 = ( (float)(1) );
HXDLIN(  35)		float m__212 = ( (float)(-(this->origin->y)) );
HXDLIN(  35)		float m__022 = ( (float)(0) );
HXDLIN(  35)		float m__122 = ( (float)(0) );
HXDLIN(  35)		float m__222 = ( (float)(1) );
HXLINE(  31)		float _this__003 = (((_this__002 * m__002) + (_this__102 * m__012)) + (_this__202 * m__022));
HXDLIN(  31)		float _this__103 = (((_this__002 * m__102) + (_this__102 * m__112)) + (_this__202 * m__122));
HXDLIN(  31)		float _this__203 = (((_this__002 * m__202) + (_this__102 * m__212)) + (_this__202 * m__222));
HXDLIN(  31)		float _this__013 = (((_this__012 * m__002) + (_this__112 * m__012)) + (_this__212 * m__022));
HXDLIN(  31)		float _this__113 = (((_this__012 * m__102) + (_this__112 * m__112)) + (_this__212 * m__122));
HXDLIN(  31)		float _this__213 = (((_this__012 * m__202) + (_this__112 * m__212)) + (_this__212 * m__222));
HXDLIN(  31)		float _this__023 = (((_this__022 * m__002) + (_this__122 * m__012)) + (_this__222 * m__022));
HXDLIN(  31)		float _this__123 = (((_this__022 * m__102) + (_this__122 * m__112)) + (_this__222 * m__122));
HXDLIN(  31)		float _this__223 = (((_this__022 * m__202) + (_this__122 * m__212)) + (_this__222 * m__222));
HXDLIN(  31)		Float c00 = ( (Float)(((_this__113 * _this__223) - (_this__213 * _this__123))) );
HXDLIN(  31)		Float c01 = ( (Float)(((_this__103 * _this__223) - (_this__203 * _this__123))) );
HXDLIN(  31)		Float c02 = ( (Float)(((_this__103 * _this__213) - (_this__203 * _this__113))) );
HXDLIN(  31)		float det = ( (float)((((( (Float)(_this__003) ) * c00) - (( (Float)(_this__013) ) * c01)) + (( (Float)(_this__023) ) * c02))) );
HXDLIN(  31)		if ((::Math_obj::abs(( (Float)(det) )) < ((Float)0.000001))) {
HXLINE(  31)			HX_STACK_DO_THROW(HX_("determinant is too small",f0,e3,aa,fc));
            		}
HXDLIN(  31)		Float c10 = ( (Float)(((_this__013 * _this__223) - (_this__213 * _this__023))) );
HXDLIN(  31)		Float c11 = ( (Float)(((_this__003 * _this__223) - (_this__203 * _this__023))) );
HXDLIN(  31)		Float c12 = ( (Float)(((_this__003 * _this__213) - (_this__203 * _this__013))) );
HXDLIN(  31)		Float c20 = ( (Float)(((_this__013 * _this__123) - (_this__113 * _this__023))) );
HXDLIN(  31)		Float c21 = ( (Float)(((_this__003 * _this__123) - (_this__103 * _this__023))) );
HXDLIN(  31)		Float c22 = ( (Float)(((_this__003 * _this__113) - (_this__103 * _this__013))) );
HXDLIN(  31)		float invdet = ( (float)((((Float)1.0) / ( (Float)(det) ))) );
HXDLIN(  31)		float matrix__00 = ( (float)((c00 * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__10 = ( (float)((-(c01) * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__20 = ( (float)((c02 * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__01 = ( (float)((-(c10) * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__11 = ( (float)((c11 * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__21 = ( (float)((-(c12) * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__02 = ( (float)((c20 * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__12 = ( (float)((-(c21) * ( (Float)(invdet) ))) );
HXDLIN(  31)		float matrix__22 = ( (float)((c22 * ( (Float)(invdet) ))) );
HXLINE(  37)		 ::kha::math::FastVector2 value = ::kha::math::FastVector2_obj::fromVector2(point);
HXDLIN(  37)		float w = (((matrix__02 * value->x) + (matrix__12 * value->y)) + matrix__22);
HXDLIN(  37)		Float x = (( (Float)((((matrix__00 * value->x) + (matrix__10 * value->y)) + matrix__20)) ) / ( (Float)(w) ));
HXDLIN(  37)		float y = ( (float)((( (Float)((((matrix__01 * value->x) + (matrix__11 * value->y)) + matrix__21)) ) / ( (Float)(w) ))) );
HXDLIN(  37)		return  ::kha::math::FastVector2_obj::__alloc( HX_CTX ,x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transformation_obj,transformPoint,return )

 ::kha::math::FastVector2 Transformation_obj::untransformPoint( ::kha::math::Vector2 point){
            	HX_GC_STACKFRAME(&_hx_pos_91118b6f6a1477d5_39_untransformPoint)
HXLINE(  40)		float _this__00 = ( (float)(1) );
HXDLIN(  40)		float _this__10 = ( (float)(0) );
HXDLIN(  40)		float _this__20 = ( (float)((this->offset->x + this->origin->x)) );
HXDLIN(  40)		float _this__01 = ( (float)(0) );
HXDLIN(  40)		float _this__11 = ( (float)(1) );
HXDLIN(  40)		float _this__21 = ( (float)((this->offset->y + this->origin->y)) );
HXDLIN(  40)		float _this__02 = ( (float)(0) );
HXDLIN(  40)		float _this__12 = ( (float)(0) );
HXDLIN(  40)		float _this__22 = ( (float)(1) );
HXLINE(  42)		float m__00 = ( (float)(this->scale->x) );
HXDLIN(  42)		float m__10 = ( (float)(0) );
HXDLIN(  42)		float m__20 = ( (float)(0) );
HXDLIN(  42)		float m__01 = ( (float)(0) );
HXDLIN(  42)		float m__11 = ( (float)(this->scale->y) );
HXDLIN(  42)		float m__21 = ( (float)(0) );
HXDLIN(  42)		float m__02 = ( (float)(0) );
HXDLIN(  42)		float m__12 = ( (float)(0) );
HXDLIN(  42)		float m__22 = ( (float)(1) );
HXLINE(  40)		float _this__001 = (((_this__00 * m__00) + (_this__10 * m__01)) + (_this__20 * m__02));
HXDLIN(  40)		float _this__101 = (((_this__00 * m__10) + (_this__10 * m__11)) + (_this__20 * m__12));
HXDLIN(  40)		float _this__201 = (((_this__00 * m__20) + (_this__10 * m__21)) + (_this__20 * m__22));
HXDLIN(  40)		float _this__011 = (((_this__01 * m__00) + (_this__11 * m__01)) + (_this__21 * m__02));
HXDLIN(  40)		float _this__111 = (((_this__01 * m__10) + (_this__11 * m__11)) + (_this__21 * m__12));
HXDLIN(  40)		float _this__211 = (((_this__01 * m__20) + (_this__11 * m__21)) + (_this__21 * m__22));
HXDLIN(  40)		float _this__021 = (((_this__02 * m__00) + (_this__12 * m__01)) + (_this__22 * m__02));
HXDLIN(  40)		float _this__121 = (((_this__02 * m__10) + (_this__12 * m__11)) + (_this__22 * m__12));
HXDLIN(  40)		float _this__221 = (((_this__02 * m__20) + (_this__12 * m__21)) + (_this__22 * m__22));
HXLINE(  43)		float alpha = ( (float)(this->rotation) );
HXDLIN(  43)		float m__001 = ( (float)(::Math_obj::cos(( (Float)(alpha) ))) );
HXDLIN(  43)		float m__101 = ( (float)(-(::Math_obj::sin(( (Float)(alpha) )))) );
HXDLIN(  43)		float m__201 = ( (float)(0) );
HXDLIN(  43)		float m__011 = ( (float)(::Math_obj::sin(( (Float)(alpha) ))) );
HXDLIN(  43)		float m__111 = ( (float)(::Math_obj::cos(( (Float)(alpha) ))) );
HXDLIN(  43)		float m__211 = ( (float)(0) );
HXDLIN(  43)		float m__021 = ( (float)(0) );
HXDLIN(  43)		float m__121 = ( (float)(0) );
HXDLIN(  43)		float m__221 = ( (float)(1) );
HXLINE(  40)		float _this__002 = (((_this__001 * m__001) + (_this__101 * m__011)) + (_this__201 * m__021));
HXDLIN(  40)		float _this__102 = (((_this__001 * m__101) + (_this__101 * m__111)) + (_this__201 * m__121));
HXDLIN(  40)		float _this__202 = (((_this__001 * m__201) + (_this__101 * m__211)) + (_this__201 * m__221));
HXDLIN(  40)		float _this__012 = (((_this__011 * m__001) + (_this__111 * m__011)) + (_this__211 * m__021));
HXDLIN(  40)		float _this__112 = (((_this__011 * m__101) + (_this__111 * m__111)) + (_this__211 * m__121));
HXDLIN(  40)		float _this__212 = (((_this__011 * m__201) + (_this__111 * m__211)) + (_this__211 * m__221));
HXDLIN(  40)		float _this__022 = (((_this__021 * m__001) + (_this__121 * m__011)) + (_this__221 * m__021));
HXDLIN(  40)		float _this__122 = (((_this__021 * m__101) + (_this__121 * m__111)) + (_this__221 * m__121));
HXDLIN(  40)		float _this__222 = (((_this__021 * m__201) + (_this__121 * m__211)) + (_this__221 * m__221));
HXLINE(  44)		float m__002 = ( (float)(1) );
HXDLIN(  44)		float m__102 = ( (float)(0) );
HXDLIN(  44)		float m__202 = ( (float)(-(this->origin->x)) );
HXDLIN(  44)		float m__012 = ( (float)(0) );
HXDLIN(  44)		float m__112 = ( (float)(1) );
HXDLIN(  44)		float m__212 = ( (float)(-(this->origin->y)) );
HXDLIN(  44)		float m__022 = ( (float)(0) );
HXDLIN(  44)		float m__122 = ( (float)(0) );
HXDLIN(  44)		float m__222 = ( (float)(1) );
HXLINE(  40)		float _this__003 = (((_this__002 * m__002) + (_this__102 * m__012)) + (_this__202 * m__022));
HXDLIN(  40)		float _this__103 = (((_this__002 * m__102) + (_this__102 * m__112)) + (_this__202 * m__122));
HXDLIN(  40)		float _this__203 = (((_this__002 * m__202) + (_this__102 * m__212)) + (_this__202 * m__222));
HXDLIN(  40)		float _this__013 = (((_this__012 * m__002) + (_this__112 * m__012)) + (_this__212 * m__022));
HXDLIN(  40)		float _this__113 = (((_this__012 * m__102) + (_this__112 * m__112)) + (_this__212 * m__122));
HXDLIN(  40)		float _this__213 = (((_this__012 * m__202) + (_this__112 * m__212)) + (_this__212 * m__222));
HXDLIN(  40)		float _this__023 = (((_this__022 * m__002) + (_this__122 * m__012)) + (_this__222 * m__022));
HXDLIN(  40)		float _this__123 = (((_this__022 * m__102) + (_this__122 * m__112)) + (_this__222 * m__122));
HXDLIN(  40)		float _this__223 = (((_this__022 * m__202) + (_this__122 * m__212)) + (_this__222 * m__222));
HXDLIN(  40)		Float c00 = ( (Float)(((_this__113 * _this__223) - (_this__213 * _this__123))) );
HXDLIN(  40)		Float c01 = ( (Float)(((_this__103 * _this__223) - (_this__203 * _this__123))) );
HXDLIN(  40)		Float c02 = ( (Float)(((_this__103 * _this__213) - (_this__203 * _this__113))) );
HXDLIN(  40)		float det = ( (float)((((( (Float)(_this__003) ) * c00) - (( (Float)(_this__013) ) * c01)) + (( (Float)(_this__023) ) * c02))) );
HXDLIN(  40)		if ((::Math_obj::abs(( (Float)(det) )) < ((Float)0.000001))) {
HXLINE(  40)			HX_STACK_DO_THROW(HX_("determinant is too small",f0,e3,aa,fc));
            		}
HXDLIN(  40)		Float c10 = ( (Float)(((_this__013 * _this__223) - (_this__213 * _this__023))) );
HXDLIN(  40)		Float c11 = ( (Float)(((_this__003 * _this__223) - (_this__203 * _this__023))) );
HXDLIN(  40)		Float c12 = ( (Float)(((_this__003 * _this__213) - (_this__203 * _this__013))) );
HXDLIN(  40)		Float c20 = ( (Float)(((_this__013 * _this__123) - (_this__113 * _this__023))) );
HXDLIN(  40)		Float c21 = ( (Float)(((_this__003 * _this__123) - (_this__103 * _this__023))) );
HXDLIN(  40)		Float c22 = ( (Float)(((_this__003 * _this__113) - (_this__103 * _this__013))) );
HXDLIN(  40)		float invdet = ( (float)((((Float)1.0) / ( (Float)(det) ))) );
HXDLIN(  40)		float matrix__00 = ( (float)((c00 * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__10 = ( (float)((-(c01) * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__20 = ( (float)((c02 * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__01 = ( (float)((-(c10) * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__11 = ( (float)((c11 * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__21 = ( (float)((-(c12) * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__02 = ( (float)((c20 * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__12 = ( (float)((-(c21) * ( (Float)(invdet) ))) );
HXDLIN(  40)		float matrix__22 = ( (float)((c22 * ( (Float)(invdet) ))) );
HXLINE(  47)		 ::kha::math::FastVector2 value = ::kha::math::FastVector2_obj::fromVector2(point);
HXDLIN(  47)		float w = (((matrix__02 * value->x) + (matrix__12 * value->y)) + matrix__22);
HXDLIN(  47)		Float x = (( (Float)((((matrix__00 * value->x) + (matrix__10 * value->y)) + matrix__20)) ) / ( (Float)(w) ));
HXDLIN(  47)		float y = ( (float)((( (Float)((((matrix__01 * value->x) + (matrix__11 * value->y)) + matrix__21)) ) / ( (Float)(w) ))) );
HXDLIN(  47)		return  ::kha::math::FastVector2_obj::__alloc( HX_CTX ,x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transformation_obj,untransformPoint,return )


hx::ObjectPtr< Transformation_obj > Transformation_obj::__new() {
	hx::ObjectPtr< Transformation_obj > __this = new Transformation_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Transformation_obj > Transformation_obj::__alloc(hx::Ctx *_hx_ctx) {
	Transformation_obj *__this = (Transformation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Transformation_obj), true, "bonsai.render.Transformation"));
	*(void **)__this = Transformation_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Transformation_obj::Transformation_obj()
{
}

void Transformation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transformation);
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_END_CLASS();
}

void Transformation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(origin,"origin");
}

hx::Val Transformation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"finish") ) { return hx::Val( finish_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return hx::Val( rotation ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return hx::Val( transformPoint_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"untransformPoint") ) { return hx::Val( untransformPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Transformation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { _hx_set_scale(HX_CTX_GET,inValue.Cast<  ::kha::math::Vector2 >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { _hx_set_offset(HX_CTX_GET,inValue.Cast<  ::kha::math::Vector2 >()); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { _hx_set_origin(HX_CTX_GET,inValue.Cast<  ::kha::math::Vector2 >()); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transformation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("origin",e6,19,01,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Transformation_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::math::Vector2 */ ,(int)offsetof(Transformation_obj,offset),HX_("offset",93,97,3f,60)},
	{hx::fsFloat,(int)offsetof(Transformation_obj,rotation),HX_("rotation",3e,3d,86,08)},
	{hx::fsObject /*  ::kha::math::Vector2 */ ,(int)offsetof(Transformation_obj,scale),HX_("scale",8a,ce,ce,78)},
	{hx::fsObject /*  ::kha::math::Vector2 */ ,(int)offsetof(Transformation_obj,origin),HX_("origin",e6,19,01,4b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Transformation_obj_sStaticStorageInfo = 0;
#endif

static ::String Transformation_obj_sMemberFields[] = {
	HX_("offset",93,97,3f,60),
	HX_("rotation",3e,3d,86,08),
	HX_("scale",8a,ce,ce,78),
	HX_("origin",e6,19,01,4b),
	HX_("apply",6e,85,3b,24),
	HX_("finish",53,40,7f,86),
	HX_("transformPoint",44,cf,11,3d),
	HX_("untransformPoint",5d,3f,33,4a),
	::String(null()) };

hx::Class Transformation_obj::__mClass;

void Transformation_obj::__register()
{
	Transformation_obj _hx_dummy;
	Transformation_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("bonsai.render.Transformation",4d,d5,a4,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Transformation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transformation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transformation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transformation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace bonsai
} // end namespace render
