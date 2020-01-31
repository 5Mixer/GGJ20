// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_bonsai_entity_Entity
#include <hxinc/bonsai/entity/Entity.h>
#endif
#ifndef INCLUDED_bonsai_entity_ParticleSystem
#include <hxinc/bonsai/entity/ParticleSystem.h>
#endif
#ifndef INCLUDED_bonsai_render_AnimatedSprite
#include <hxinc/bonsai/render/AnimatedSprite.h>
#endif
#ifndef INCLUDED_bonsai_render_SpriteMap
#include <hxinc/bonsai/render/SpriteMap.h>
#endif
#ifndef INCLUDED_game_BodyPart
#include <hxinc/game/BodyPart.h>
#endif
#ifndef INCLUDED_game_BodyPartParticles
#include <hxinc/game/BodyPartParticles.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5303e04f8781ebf0_15_new,"game.BodyPartParticles","new",0x989e004e,"game.BodyPartParticles.new","game/BodyPartParticles.hx",15,0xf8f46963)
static const int _hx_array_data_f830815c_1[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_5303e04f8781ebf0_32_update,"game.BodyPartParticles","update",0x67537edb,"game.BodyPartParticles.update","game/BodyPartParticles.hx",32,0xf8f46963)
HX_LOCAL_STACK_FRAME(_hx_pos_5303e04f8781ebf0_55_render,"game.BodyPartParticles","render",0xe5776428,"game.BodyPartParticles.render","game/BodyPartParticles.hx",55,0xf8f46963)
namespace game{

void BodyPartParticles_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5303e04f8781ebf0_15_new)
HXLINE(  16)		super::__construct(400);
HXLINE(  17)		this->_hx_set_animatedSprite(HX_CTX,  ::bonsai::render::AnimatedSprite_obj::__alloc( HX_CTX ));
HXLINE(  18)		 ::bonsai::render::AnimatedSprite _hx_tmp = this->animatedSprite;
HXDLIN(  18)		_hx_tmp->registerAnimation(HX_("idle",14,a7,b3,45), ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("frames",a6,af,85,ac),::Array_obj< int >::fromData( _hx_array_data_f830815c_1,1))
            			->setFixed(1,HX_("spriteMap",97,77,04,56), ::bonsai::render::SpriteMap_obj::__alloc( HX_CTX ,::kha::Assets_obj::images->bodyParts,32,32))));
HXLINE(  19)		this->animatedSprite->play(HX_("idle",14,a7,b3,45));
HXLINE(  20)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN(  20)		_g->set(::game::BodyPart_obj::NaturalChest_dyn(),0);
HXDLIN(  20)		_g->set(::game::BodyPart_obj::NaturalHead_dyn(),3);
HXDLIN(  20)		_g->set(::game::BodyPart_obj::NaturalLeg_dyn(),5);
HXDLIN(  20)		_g->set(::game::BodyPart_obj::NaturalArm_dyn(),6);
HXDLIN(  20)		_g->set(::game::BodyPart_obj::Axe_dyn(),9);
HXDLIN(  20)		_g->set(::game::BodyPart_obj::Sword_dyn(),8);
HXDLIN(  20)		_g->set(::game::BodyPart_obj::Knife_dyn(),7);
HXDLIN(  20)		_g->set(::game::BodyPart_obj::Boots_dyn(),10);
HXDLIN(  20)		this->_hx_set_bodyPartToLayer(HX_CTX, _g);
            	}

Dynamic BodyPartParticles_obj::__CreateEmpty() { return new BodyPartParticles_obj; }

void *BodyPartParticles_obj::_hx_vtable = 0;

Dynamic BodyPartParticles_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BodyPartParticles_obj > _hx_result = new BodyPartParticles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BodyPartParticles_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53b01352) {
		if (inClassId<=(int)0x1729fd66) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1729fd66;
		} else {
			return inClassId==(int)0x53b01352;
		}
	} else {
		return inClassId==(int)0x61169fa0;
	}
}

void BodyPartParticles_obj::update(Float delta){
            	HX_STACKFRAME(&_hx_pos_5303e04f8781ebf0_32_update)
HXLINE(  33)		this->super::update(delta);
HXLINE(  34)		{
HXLINE(  34)			int _g = 0;
HXDLIN(  34)			::Array< ::Dynamic> _g1 = this->members;
HXDLIN(  34)			while((_g < _g1->length)){
HXLINE(  34)				 ::Dynamic particle = _g1->__get(_g);
HXDLIN(  34)				_g = (_g + 1);
HXLINE(  35)				bool _hx_tmp;
HXDLIN(  35)				bool _hx_tmp1;
HXDLIN(  35)				if ((::Math_obj::abs(( (Float)(particle->__Field(HX_("vz",44,67,00,00),hx::paccDynamic)) )) < ((Float).1))) {
HXLINE(  35)					_hx_tmp1 = hx::IsLess( particle->__Field(HX_("z",7a,00,00,00),hx::paccDynamic),1 );
            				}
            				else {
HXLINE(  35)					_hx_tmp1 = false;
            				}
HXDLIN(  35)				if (_hx_tmp1) {
HXLINE(  35)					_hx_tmp = (::Math_obj::abs(( (Float)(particle->__Field(HX_("vx",42,67,00,00),hx::paccDynamic)) )) < ((Float).1));
            				}
            				else {
HXLINE(  35)					_hx_tmp = false;
            				}
HXDLIN(  35)				if (_hx_tmp) {
HXLINE(  36)					particle->__SetField(HX_("vz",44,67,00,00),0,hx::paccDynamic);
HXLINE(  37)					particle->__SetField(HX_("vx",42,67,00,00),0,hx::paccDynamic);
HXLINE(  38)					particle->__SetField(HX_("z",7a,00,00,00),0,hx::paccDynamic);
HXLINE(  39)					particle->__SetField(HX_("x",78,00,00,00),::Math_obj::round(( (Float)(particle->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) )),hx::paccDynamic);
HXLINE(  40)					particle->__SetField(HX_("y",79,00,00,00),::Math_obj::round(( (Float)(particle->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) )),hx::paccDynamic);
HXLINE(  41)					continue;
            				}
HXLINE(  43)				if (hx::IsGreaterEq( particle->__Field(HX_("z",7a,00,00,00),hx::paccDynamic),0 )) {
HXLINE(  44)					 ::Dynamic particle1 = particle;
HXDLIN(  44)					particle1->__SetField(HX_("vz",44,67,00,00),(particle1->__Field(HX_("vz",44,67,00,00),hx::paccDynamic) + (( (Float)(10) ) * delta)),hx::paccDynamic);
HXLINE(  45)					 ::Dynamic particle2 = particle;
HXDLIN(  45)					particle2->__SetField(HX_("z",7a,00,00,00),(( (Float)(particle2->__Field(HX_("z",7a,00,00,00),hx::paccDynamic)) ) - ( (Float)(particle->__Field(HX_("vz",44,67,00,00),hx::paccDynamic)) )),hx::paccDynamic);
HXLINE(  46)					 ::Dynamic particle3 = particle;
HXDLIN(  46)					particle3->__SetField(HX_("x",78,00,00,00),(particle3->__Field(HX_("x",78,00,00,00),hx::paccDynamic) + particle->__Field(HX_("vx",42,67,00,00),hx::paccDynamic)),hx::paccDynamic);
            				}
            				else {
HXLINE(  48)					 ::Dynamic particle4 = particle;
HXDLIN(  48)					particle4->__SetField(HX_("vz",44,67,00,00),(( (Float)(particle4->__Field(HX_("vz",44,67,00,00),hx::paccDynamic)) ) * ((Float)-.4)),hx::paccDynamic);
HXLINE(  49)					particle->__SetField(HX_("z",7a,00,00,00),0,hx::paccDynamic);
HXLINE(  50)					 ::Dynamic particle5 = particle;
HXDLIN(  50)					particle5->__SetField(HX_("vx",42,67,00,00),(( (Float)(particle5->__Field(HX_("vx",42,67,00,00),hx::paccDynamic)) ) * ((Float).6)),hx::paccDynamic);
            				}
            			}
            		}
            	}


void BodyPartParticles_obj::render( ::kha::graphics2::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_5303e04f8781ebf0_55_render)
HXLINE(  56)		this->super::render(graphics);
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			::Array< ::Dynamic> _g1 = this->members;
HXDLIN(  58)			while((_g < _g1->length)){
HXLINE(  58)				 ::Dynamic particle = _g1->__get(_g);
HXDLIN(  58)				_g = (_g + 1);
HXLINE(  59)				 ::Dynamic _hx_tmp = this->bodyPartToLayer->get( ::Dynamic(particle->__Field(HX_("part",f3,e3,51,4a),hx::paccDynamic)));
HXDLIN(  59)				this->animatedSprite->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::__new(1)->init(0,_hx_tmp));
HXLINE(  60)				this->animatedSprite->render(graphics,( (float)(particle->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) ),( (float)((( (Float)(particle->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) ) - ( (Float)(particle->__Field(HX_("z",7a,00,00,00),hx::paccDynamic)) ))) ));
            			}
            		}
            	}



hx::ObjectPtr< BodyPartParticles_obj > BodyPartParticles_obj::__new() {
	hx::ObjectPtr< BodyPartParticles_obj > __this = new BodyPartParticles_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BodyPartParticles_obj > BodyPartParticles_obj::__alloc(hx::Ctx *_hx_ctx) {
	BodyPartParticles_obj *__this = (BodyPartParticles_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BodyPartParticles_obj), true, "game.BodyPartParticles"));
	*(void **)__this = BodyPartParticles_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BodyPartParticles_obj::BodyPartParticles_obj()
{
}

void BodyPartParticles_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BodyPartParticles);
	HX_MARK_MEMBER_NAME(animatedSprite,"animatedSprite");
	HX_MARK_MEMBER_NAME(bodyPartToLayer,"bodyPartToLayer");
	 ::bonsai::entity::ParticleSystem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BodyPartParticles_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animatedSprite,"animatedSprite");
	HX_VISIT_MEMBER_NAME(bodyPartToLayer,"bodyPartToLayer");
	 ::bonsai::entity::ParticleSystem_obj::__Visit(HX_VISIT_ARG);
}

hx::Val BodyPartParticles_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animatedSprite") ) { return hx::Val( animatedSprite ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bodyPartToLayer") ) { return hx::Val( bodyPartToLayer ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BodyPartParticles_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"animatedSprite") ) { _hx_set_animatedSprite(HX_CTX_GET,inValue.Cast<  ::bonsai::render::AnimatedSprite >()); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bodyPartToLayer") ) { _hx_set_bodyPartToLayer(HX_CTX_GET,inValue.Cast<  ::haxe::ds::EnumValueMap >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BodyPartParticles_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animatedSprite",08,df,a8,cb));
	outFields->push(HX_("bodyPartToLayer",21,83,d1,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo BodyPartParticles_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::bonsai::render::AnimatedSprite */ ,(int)offsetof(BodyPartParticles_obj,animatedSprite),HX_("animatedSprite",08,df,a8,cb)},
	{hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(BodyPartParticles_obj,bodyPartToLayer),HX_("bodyPartToLayer",21,83,d1,c9)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BodyPartParticles_obj_sStaticStorageInfo = 0;
#endif

static ::String BodyPartParticles_obj_sMemberFields[] = {
	HX_("animatedSprite",08,df,a8,cb),
	HX_("bodyPartToLayer",21,83,d1,c9),
	HX_("update",09,86,05,87),
	HX_("render",56,6b,29,05),
	::String(null()) };

hx::Class BodyPartParticles_obj::__mClass;

void BodyPartParticles_obj::__register()
{
	BodyPartParticles_obj _hx_dummy;
	BodyPartParticles_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("game.BodyPartParticles",5c,81,30,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BodyPartParticles_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BodyPartParticles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BodyPartParticles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BodyPartParticles_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace game
