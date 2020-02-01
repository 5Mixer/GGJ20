// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_bonsai_entity_Entity
#include <hxinc/bonsai/entity/Entity.h>
#endif
#ifndef INCLUDED_bonsai_render_AnimatedSprite
#include <hxinc/bonsai/render/AnimatedSprite.h>
#endif
#ifndef INCLUDED_bonsai_render_SpriteMap
#include <hxinc/bonsai/render/SpriteMap.h>
#endif
#ifndef INCLUDED_game_ArmPart
#include <hxinc/game/ArmPart.h>
#endif
#ifndef INCLUDED_game_Body
#include <hxinc/game/Body.h>
#endif
#ifndef INCLUDED_game_BodyPart
#include <hxinc/game/BodyPart.h>
#endif
#ifndef INCLUDED_game_ChestPart
#include <hxinc/game/ChestPart.h>
#endif
#ifndef INCLUDED_game_HeadPart
#include <hxinc/game/HeadPart.h>
#endif
#ifndef INCLUDED_game_LegPart
#include <hxinc/game/LegPart.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <hxinc/haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <hxinc/haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <hxinc/kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <hxinc/kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Assets_ImageList
#include <hxinc/kha/_Assets/ImageList.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <hxinc/kha/math/Vector2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_283631fa0fa340d1_23_new,"game.Body","new",0x2a28acb0,"game.Body.new","game/Body.hx",23,0xdfd7eadf)
static const int _hx_array_data_4a50d4be_1[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_283631fa0fa340d1_69_render,"game.Body","render",0x57a72106,"game.Body.render","game/Body.hx",69,0xdfd7eadf)
HX_LOCAL_STACK_FRAME(_hx_pos_283631fa0fa340d1_94_getHeadDrop,"game.Body","getHeadDrop",0xd3e50c75,"game.Body.getHeadDrop","game/Body.hx",94,0xdfd7eadf)
HX_LOCAL_STACK_FRAME(_hx_pos_283631fa0fa340d1_98_getChestDrop,"game.Body","getChestDrop",0x4becb5ca,"game.Body.getChestDrop","game/Body.hx",98,0xdfd7eadf)
HX_LOCAL_STACK_FRAME(_hx_pos_283631fa0fa340d1_101_getLeftArmDrop,"game.Body","getLeftArmDrop",0x1a2c381e,"game.Body.getLeftArmDrop","game/Body.hx",101,0xdfd7eadf)
HX_LOCAL_STACK_FRAME(_hx_pos_283631fa0fa340d1_109_getRightArmDrop,"game.Body","getRightArmDrop",0x23b6ba35,"game.Body.getRightArmDrop","game/Body.hx",109,0xdfd7eadf)
HX_LOCAL_STACK_FRAME(_hx_pos_283631fa0fa340d1_117_getLeftLegDrop,"game.Body","getLeftLegDrop",0x3c8d2690,"game.Body.getLeftLegDrop","game/Body.hx",117,0xdfd7eadf)
HX_LOCAL_STACK_FRAME(_hx_pos_283631fa0fa340d1_123_getRightLegDrop,"game.Body","getRightLegDrop",0x4617a8a7,"game.Body.getRightLegDrop","game/Body.hx",123,0xdfd7eadf)
namespace game{

void Body_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_283631fa0fa340d1_23_new)
HXLINE(  46)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN(  46)		_g->set(::game::LegPart_obj::NaturalLeg_dyn(),5);
HXDLIN(  46)		_g->set(::game::LegPart_obj::Boots_dyn(),10);
HXDLIN(  46)		this->_hx_set_legLayers(HX_CTX, _g);
HXLINE(  40)		 ::haxe::ds::EnumValueMap _g1 =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN(  40)		_g1->set(::game::ArmPart_obj::NaturalArm_dyn(),6);
HXDLIN(  40)		_g1->set(::game::ArmPart_obj::Knife_dyn(),7);
HXDLIN(  40)		_g1->set(::game::ArmPart_obj::Sword_dyn(),8);
HXDLIN(  40)		_g1->set(::game::ArmPart_obj::Axe_dyn(),9);
HXDLIN(  40)		this->_hx_set_armLayers(HX_CTX, _g1);
HXLINE(  37)		 ::haxe::ds::EnumValueMap _g2 =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN(  37)		_g2->set(::game::ChestPart_obj::NaturalChest_dyn(),0);
HXDLIN(  37)		this->_hx_set_chestLayers(HX_CTX, _g2);
HXLINE(  31)		 ::haxe::ds::EnumValueMap _g3 =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN(  31)		_g3->set(::game::HeadPart_obj::NaturalHeadRight_dyn(),1);
HXDLIN(  31)		_g3->set(::game::HeadPart_obj::NaturalHeadLeft_dyn(),2);
HXDLIN(  31)		_g3->set(::game::HeadPart_obj::NaturalHeadDown_dyn(),3);
HXDLIN(  31)		_g3->set(::game::HeadPart_obj::NaturalHeadUp_dyn(),4);
HXDLIN(  31)		this->_hx_set_headLayers(HX_CTX, _g3);
HXLINE(  54)		super::__construct();
HXLINE(  56)		this->_hx_set_position(HX_CTX,  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(( (Float)(220) ) * ::Math_obj::random()),(( (Float)(160) ) * ::Math_obj::random())));
HXLINE(  58)		this->_hx_set_chest(HX_CTX, ::game::ChestPart_obj::NaturalChest_dyn());
HXLINE(  59)		this->_hx_set_head(HX_CTX, ::game::HeadPart_obj::NaturalHeadDown_dyn());
HXLINE(  60)		this->_hx_set_leftArm(HX_CTX, ::game::ArmPart_obj::Knife_dyn());
HXLINE(  61)		this->_hx_set_rightArm(HX_CTX, ::game::ArmPart_obj::Sword_dyn());
HXLINE(  62)		this->_hx_set_leftLeg(HX_CTX, ::game::LegPart_obj::NaturalLeg_dyn());
HXLINE(  63)		this->_hx_set_rightLeg(HX_CTX, ::game::LegPart_obj::NaturalLeg_dyn());
HXLINE(  65)		this->_hx_set_animatedSprite(HX_CTX,  ::bonsai::render::AnimatedSprite_obj::__alloc( HX_CTX ));
HXLINE(  66)		 ::bonsai::render::AnimatedSprite _hx_tmp = this->animatedSprite;
HXDLIN(  66)		_hx_tmp->registerAnimation(HX_("idle",14,a7,b3,45), ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("frames",a6,af,85,ac),::Array_obj< int >::fromData( _hx_array_data_4a50d4be_1,1))
            			->setFixed(1,HX_("spriteMap",97,77,04,56), ::bonsai::render::SpriteMap_obj::__alloc( HX_CTX ,::kha::Assets_obj::images->bodyParts2,32,32))));
HXLINE(  67)		this->animatedSprite->play(HX_("idle",14,a7,b3,45));
            	}

Dynamic Body_obj::__CreateEmpty() { return new Body_obj; }

void *Body_obj::_hx_vtable = 0;

Dynamic Body_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Body_obj > _hx_result = new Body_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Body_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x26a89458) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x26a89458;
	} else {
		return inClassId==(int)0x61169fa0;
	}
}

void Body_obj::render( ::kha::graphics2::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_283631fa0fa340d1_69_render)
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		bool _hx_tmp1;
HXDLIN(  70)		bool _hx_tmp2;
HXDLIN(  70)		bool _hx_tmp3;
HXDLIN(  70)		bool _hx_tmp4;
HXDLIN(  70)		if (hx::IsNotNull( this->chest )) {
HXLINE(  70)			_hx_tmp4 = hx::IsNull( this->head );
            		}
            		else {
HXLINE(  70)			_hx_tmp4 = true;
            		}
HXDLIN(  70)		if (!(_hx_tmp4)) {
HXLINE(  70)			_hx_tmp3 = hx::IsNull( this->leftLeg );
            		}
            		else {
HXLINE(  70)			_hx_tmp3 = true;
            		}
HXDLIN(  70)		if (!(_hx_tmp3)) {
HXLINE(  70)			_hx_tmp2 = hx::IsNull( this->rightLeg );
            		}
            		else {
HXLINE(  70)			_hx_tmp2 = true;
            		}
HXDLIN(  70)		if (!(_hx_tmp2)) {
HXLINE(  70)			_hx_tmp1 = hx::IsNull( this->leftArm );
            		}
            		else {
HXLINE(  70)			_hx_tmp1 = true;
            		}
HXDLIN(  70)		if (!(_hx_tmp1)) {
HXLINE(  70)			_hx_tmp = hx::IsNull( this->rightArm );
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			::haxe::Log_obj::trace(HX_("attempted to render a body that lacks part/s",14,a5,2b,00),hx::SourceInfo(HX_("game/Body.hx",df,ea,d7,df),71,HX_("game.Body",be,d4,50,4a),HX_("render",56,6b,29,05)));
HXLINE(  72)			return;
            		}
HXLINE(  74)		 ::Dynamic _hx_tmp5 = this->chestLayers->get(this->chest);
HXDLIN(  74)		this->animatedSprite->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::__new(1)->init(0,_hx_tmp5));
HXLINE(  75)		this->animatedSprite->render(graphics,( (float)(this->position->x) ),( (float)(this->position->y) ));
HXLINE(  77)		 ::Dynamic _hx_tmp6 = this->headLayers->get(this->head);
HXDLIN(  77)		this->animatedSprite->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::__new(1)->init(0,_hx_tmp6));
HXLINE(  78)		this->animatedSprite->render(graphics,( (float)(this->position->x) ),( (float)(this->position->y) ));
HXLINE(  80)		 ::Dynamic _hx_tmp7 = this->legLayers->get(this->leftLeg);
HXDLIN(  80)		this->animatedSprite->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::__new(1)->init(0,_hx_tmp7));
HXLINE(  81)		this->animatedSprite->render(graphics,( (float)(this->position->x) ),( (float)(this->position->y) ));
HXLINE(  83)		 ::Dynamic _hx_tmp8 = this->legLayers->get(this->rightLeg);
HXDLIN(  83)		this->animatedSprite->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::__new(1)->init(0,_hx_tmp8));
HXLINE(  84)		this->animatedSprite->render(graphics,( (float)((this->position->x + 5)) ),( (float)(this->position->y) ));
HXLINE(  86)		 ::Dynamic _hx_tmp9 = this->armLayers->get(this->leftArm);
HXDLIN(  86)		this->animatedSprite->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::__new(1)->init(0,_hx_tmp9));
HXLINE(  87)		this->animatedSprite->render(graphics,( (float)(this->position->x) ),( (float)(this->position->y) ));
HXLINE(  89)		 ::Dynamic _hx_tmp10 = this->armLayers->get(this->rightArm);
HXDLIN(  89)		this->animatedSprite->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::__new(1)->init(0,_hx_tmp10));
HXLINE(  90)		this->animatedSprite->render(graphics,( (float)((this->position->x + 7)) ),( (float)(this->position->y) ));
            	}


 ::game::BodyPart Body_obj::getHeadDrop(){
            	HX_STACKFRAME(&_hx_pos_283631fa0fa340d1_94_getHeadDrop)
HXDLIN(  94)		return ::game::BodyPart_obj::NaturalHead_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,getHeadDrop,return )

 ::game::BodyPart Body_obj::getChestDrop(){
            	HX_STACKFRAME(&_hx_pos_283631fa0fa340d1_98_getChestDrop)
HXDLIN(  98)		return ::game::BodyPart_obj::NaturalChest_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,getChestDrop,return )

 ::game::BodyPart Body_obj::getLeftArmDrop(){
            	HX_GC_STACKFRAME(&_hx_pos_283631fa0fa340d1_101_getLeftArmDrop)
HXDLIN( 101)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 101)		_g->set(::game::ArmPart_obj::NaturalArm_dyn(),::game::BodyPart_obj::NaturalArm_dyn());
HXDLIN( 101)		_g->set(::game::ArmPart_obj::Axe_dyn(),::game::BodyPart_obj::Axe_dyn());
HXDLIN( 101)		_g->set(::game::ArmPart_obj::Sword_dyn(),::game::BodyPart_obj::Sword_dyn());
HXDLIN( 101)		_g->set(::game::ArmPart_obj::Knife_dyn(),::game::BodyPart_obj::Knife_dyn());
HXDLIN( 101)		return _g->get(this->leftArm).StaticCast<  ::game::BodyPart >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,getLeftArmDrop,return )

 ::game::BodyPart Body_obj::getRightArmDrop(){
            	HX_GC_STACKFRAME(&_hx_pos_283631fa0fa340d1_109_getRightArmDrop)
HXDLIN( 109)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 109)		_g->set(::game::ArmPart_obj::NaturalArm_dyn(),::game::BodyPart_obj::NaturalArm_dyn());
HXDLIN( 109)		_g->set(::game::ArmPart_obj::Axe_dyn(),::game::BodyPart_obj::Axe_dyn());
HXDLIN( 109)		_g->set(::game::ArmPart_obj::Sword_dyn(),::game::BodyPart_obj::Sword_dyn());
HXDLIN( 109)		_g->set(::game::ArmPart_obj::Knife_dyn(),::game::BodyPart_obj::Knife_dyn());
HXDLIN( 109)		return _g->get(this->rightArm).StaticCast<  ::game::BodyPart >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,getRightArmDrop,return )

 ::game::BodyPart Body_obj::getLeftLegDrop(){
            	HX_GC_STACKFRAME(&_hx_pos_283631fa0fa340d1_117_getLeftLegDrop)
HXDLIN( 117)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 117)		_g->set(::game::LegPart_obj::NaturalLeg_dyn(),::game::BodyPart_obj::NaturalLeg_dyn());
HXDLIN( 117)		_g->set(::game::LegPart_obj::Boots_dyn(),::game::BodyPart_obj::Boots_dyn());
HXDLIN( 117)		return _g->get(this->leftLeg).StaticCast<  ::game::BodyPart >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,getLeftLegDrop,return )

 ::game::BodyPart Body_obj::getRightLegDrop(){
            	HX_GC_STACKFRAME(&_hx_pos_283631fa0fa340d1_123_getRightLegDrop)
HXDLIN( 123)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 123)		_g->set(::game::LegPart_obj::NaturalLeg_dyn(),::game::BodyPart_obj::NaturalLeg_dyn());
HXDLIN( 123)		_g->set(::game::LegPart_obj::Boots_dyn(),::game::BodyPart_obj::Boots_dyn());
HXDLIN( 123)		return _g->get(this->rightLeg).StaticCast<  ::game::BodyPart >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,getRightLegDrop,return )


hx::ObjectPtr< Body_obj > Body_obj::__new() {
	hx::ObjectPtr< Body_obj > __this = new Body_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Body_obj > Body_obj::__alloc(hx::Ctx *_hx_ctx) {
	Body_obj *__this = (Body_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Body_obj), true, "game.Body"));
	*(void **)__this = Body_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Body_obj::Body_obj()
{
}

void Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Body);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(chest,"chest");
	HX_MARK_MEMBER_NAME(leftArm,"leftArm");
	HX_MARK_MEMBER_NAME(rightArm,"rightArm");
	HX_MARK_MEMBER_NAME(leftLeg,"leftLeg");
	HX_MARK_MEMBER_NAME(rightLeg,"rightLeg");
	HX_MARK_MEMBER_NAME(headLayers,"headLayers");
	HX_MARK_MEMBER_NAME(chestLayers,"chestLayers");
	HX_MARK_MEMBER_NAME(armLayers,"armLayers");
	HX_MARK_MEMBER_NAME(legLayers,"legLayers");
	HX_MARK_MEMBER_NAME(animatedSprite,"animatedSprite");
	 ::bonsai::entity::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(chest,"chest");
	HX_VISIT_MEMBER_NAME(leftArm,"leftArm");
	HX_VISIT_MEMBER_NAME(rightArm,"rightArm");
	HX_VISIT_MEMBER_NAME(leftLeg,"leftLeg");
	HX_VISIT_MEMBER_NAME(rightLeg,"rightLeg");
	HX_VISIT_MEMBER_NAME(headLayers,"headLayers");
	HX_VISIT_MEMBER_NAME(chestLayers,"chestLayers");
	HX_VISIT_MEMBER_NAME(armLayers,"armLayers");
	HX_VISIT_MEMBER_NAME(legLayers,"legLayers");
	HX_VISIT_MEMBER_NAME(animatedSprite,"animatedSprite");
	 ::bonsai::entity::Entity_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return hx::Val( head ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"chest") ) { return hx::Val( chest ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leftArm") ) { return hx::Val( leftArm ); }
		if (HX_FIELD_EQ(inName,"leftLeg") ) { return hx::Val( leftLeg ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightArm") ) { return hx::Val( rightArm ); }
		if (HX_FIELD_EQ(inName,"rightLeg") ) { return hx::Val( rightLeg ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"armLayers") ) { return hx::Val( armLayers ); }
		if (HX_FIELD_EQ(inName,"legLayers") ) { return hx::Val( legLayers ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"headLayers") ) { return hx::Val( headLayers ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"chestLayers") ) { return hx::Val( chestLayers ); }
		if (HX_FIELD_EQ(inName,"getHeadDrop") ) { return hx::Val( getHeadDrop_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getChestDrop") ) { return hx::Val( getChestDrop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animatedSprite") ) { return hx::Val( animatedSprite ); }
		if (HX_FIELD_EQ(inName,"getLeftArmDrop") ) { return hx::Val( getLeftArmDrop_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLeftLegDrop") ) { return hx::Val( getLeftLegDrop_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRightArmDrop") ) { return hx::Val( getRightArmDrop_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRightLegDrop") ) { return hx::Val( getRightLegDrop_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Body_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { _hx_set_head(HX_CTX_GET,inValue.Cast<  ::game::HeadPart >()); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"chest") ) { _hx_set_chest(HX_CTX_GET,inValue.Cast<  ::game::ChestPart >()); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leftArm") ) { _hx_set_leftArm(HX_CTX_GET,inValue.Cast<  ::game::ArmPart >()); return inValue; }
		if (HX_FIELD_EQ(inName,"leftLeg") ) { _hx_set_leftLeg(HX_CTX_GET,inValue.Cast<  ::game::LegPart >()); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightArm") ) { _hx_set_rightArm(HX_CTX_GET,inValue.Cast<  ::game::ArmPart >()); return inValue; }
		if (HX_FIELD_EQ(inName,"rightLeg") ) { _hx_set_rightLeg(HX_CTX_GET,inValue.Cast<  ::game::LegPart >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"armLayers") ) { _hx_set_armLayers(HX_CTX_GET,inValue.Cast<  ::haxe::ds::EnumValueMap >()); return inValue; }
		if (HX_FIELD_EQ(inName,"legLayers") ) { _hx_set_legLayers(HX_CTX_GET,inValue.Cast<  ::haxe::ds::EnumValueMap >()); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"headLayers") ) { _hx_set_headLayers(HX_CTX_GET,inValue.Cast<  ::haxe::ds::EnumValueMap >()); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"chestLayers") ) { _hx_set_chestLayers(HX_CTX_GET,inValue.Cast<  ::haxe::ds::EnumValueMap >()); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animatedSprite") ) { _hx_set_animatedSprite(HX_CTX_GET,inValue.Cast<  ::bonsai::render::AnimatedSprite >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("head",20,29,0b,45));
	outFields->push(HX_("chest",c1,a6,b6,45));
	outFields->push(HX_("leftArm",95,2c,d7,f4));
	outFields->push(HX_("rightArm",e0,7b,11,e4));
	outFields->push(HX_("leftLeg",07,7a,df,f4));
	outFields->push(HX_("rightLeg",52,c9,19,e4));
	outFields->push(HX_("headLayers",c2,4a,44,cf));
	outFields->push(HX_("chestLayers",23,37,2b,44));
	outFields->push(HX_("armLayers",fe,b4,d8,a7));
	outFields->push(HX_("legLayers",f0,a3,27,d7));
	outFields->push(HX_("animatedSprite",08,df,a8,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Body_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::game::HeadPart */ ,(int)offsetof(Body_obj,head),HX_("head",20,29,0b,45)},
	{hx::fsObject /*  ::game::ChestPart */ ,(int)offsetof(Body_obj,chest),HX_("chest",c1,a6,b6,45)},
	{hx::fsObject /*  ::game::ArmPart */ ,(int)offsetof(Body_obj,leftArm),HX_("leftArm",95,2c,d7,f4)},
	{hx::fsObject /*  ::game::ArmPart */ ,(int)offsetof(Body_obj,rightArm),HX_("rightArm",e0,7b,11,e4)},
	{hx::fsObject /*  ::game::LegPart */ ,(int)offsetof(Body_obj,leftLeg),HX_("leftLeg",07,7a,df,f4)},
	{hx::fsObject /*  ::game::LegPart */ ,(int)offsetof(Body_obj,rightLeg),HX_("rightLeg",52,c9,19,e4)},
	{hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(Body_obj,headLayers),HX_("headLayers",c2,4a,44,cf)},
	{hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(Body_obj,chestLayers),HX_("chestLayers",23,37,2b,44)},
	{hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(Body_obj,armLayers),HX_("armLayers",fe,b4,d8,a7)},
	{hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(Body_obj,legLayers),HX_("legLayers",f0,a3,27,d7)},
	{hx::fsObject /*  ::bonsai::render::AnimatedSprite */ ,(int)offsetof(Body_obj,animatedSprite),HX_("animatedSprite",08,df,a8,cb)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Body_obj_sStaticStorageInfo = 0;
#endif

static ::String Body_obj_sMemberFields[] = {
	HX_("head",20,29,0b,45),
	HX_("chest",c1,a6,b6,45),
	HX_("leftArm",95,2c,d7,f4),
	HX_("rightArm",e0,7b,11,e4),
	HX_("leftLeg",07,7a,df,f4),
	HX_("rightLeg",52,c9,19,e4),
	HX_("headLayers",c2,4a,44,cf),
	HX_("chestLayers",23,37,2b,44),
	HX_("armLayers",fe,b4,d8,a7),
	HX_("legLayers",f0,a3,27,d7),
	HX_("animatedSprite",08,df,a8,cb),
	HX_("render",56,6b,29,05),
	HX_("getHeadDrop",25,60,63,54),
	HX_("getChestDrop",1a,9c,f7,39),
	HX_("getLeftArmDrop",6e,52,79,cd),
	HX_("getRightArmDrop",e5,a5,e0,53),
	HX_("getLeftLegDrop",e0,40,da,ef),
	HX_("getRightLegDrop",57,94,41,76),
	::String(null()) };

hx::Class Body_obj::__mClass;

void Body_obj::__register()
{
	Body_obj _hx_dummy;
	Body_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("game.Body",be,d4,50,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Body_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Body_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Body_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Body_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace game
