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
#ifndef INCLUDED_game_RainParticleSystem
#include <hxinc/game/RainParticleSystem.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <hxinc/kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_80d3c73512bff69e_14_new,"game.RainParticleSystem","new",0xdbec54d7,"game.RainParticleSystem.new","game/RainParticleSystem.hx",14,0xbcae9cd8)
HX_LOCAL_STACK_FRAME(_hx_pos_80d3c73512bff69e_18_render,"game.RainParticleSystem","render",0x0763cb3f,"game.RainParticleSystem.render","game/RainParticleSystem.hx",18,0xbcae9cd8)
HX_LOCAL_STACK_FRAME(_hx_pos_80d3c73512bff69e_29_update,"game.RainParticleSystem","update",0x893fe5f2,"game.RainParticleSystem.update","game/RainParticleSystem.hx",29,0xbcae9cd8)
namespace game{

void RainParticleSystem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_80d3c73512bff69e_14_new)
HXLINE(  28)		this->s = ((Float)0.);
HXLINE(  27)		this->f = ((Float)0.);
HXLINE(  16)		super::__construct(300);
            	}

Dynamic RainParticleSystem_obj::__CreateEmpty() { return new RainParticleSystem_obj; }

void *RainParticleSystem_obj::_hx_vtable = 0;

Dynamic RainParticleSystem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RainParticleSystem_obj > _hx_result = new RainParticleSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RainParticleSystem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53b01352) {
		if (inClassId<=(int)0x3178aa1b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3178aa1b;
		} else {
			return inClassId==(int)0x53b01352;
		}
	} else {
		return inClassId==(int)0x61169fa0;
	}
}

void RainParticleSystem_obj::render( ::kha::graphics2::Graphics graphics){
            	HX_STACKFRAME(&_hx_pos_80d3c73512bff69e_18_render)
HXLINE(  19)		graphics->set_color(::kha::_Color::Color_Impl__obj::fromString(HX_("#8899aa",23,ac,b4,77)));
HXLINE(  20)		{
HXLINE(  20)			int _g = 0;
HXDLIN(  20)			::Array< ::Dynamic> _g1 = this->members;
HXDLIN(  20)			while((_g < _g1->length)){
HXLINE(  20)				 ::Dynamic particle = _g1->__get(_g);
HXDLIN(  20)				_g = (_g + 1);
HXLINE(  21)				graphics->set_opacity(( (Float)(particle->__Field(HX_("opacity",cb,5d,65,eb),hx::paccDynamic)) ));
HXLINE(  22)				graphics->fillRect(( (Float)(particle->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) ),( (Float)(particle->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) ),( (Float)(1) ),( (Float)(1) ));
            			}
            		}
HXLINE(  24)		graphics->set_opacity(( (Float)(1) ));
HXLINE(  25)		graphics->set_color(-1);
            	}


void RainParticleSystem_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_80d3c73512bff69e_29_update)
HXLINE(  30)		 ::game::RainParticleSystem _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  30)		_hx_tmp->f = (_hx_tmp->f + dt);
HXLINE(  31)		 ::game::RainParticleSystem _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  31)		_hx_tmp1->s = (_hx_tmp1->s + dt);
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			::Array< ::Dynamic> _g1 = this->members;
HXDLIN(  32)			while((_g < _g1->length)){
HXLINE(  32)				 ::Dynamic particle = _g1->__get(_g);
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  33)				 ::Dynamic particle1 = particle;
HXDLIN(  33)				particle1->__SetField(HX_("x",78,00,00,00),(particle1->__Field(HX_("x",78,00,00,00),hx::paccDynamic) + (( (Float)(particle->__Field(HX_("vx",42,67,00,00),hx::paccDynamic)) ) * dt)),hx::paccDynamic);
HXLINE(  34)				 ::Dynamic particle2 = particle;
HXDLIN(  34)				particle2->__SetField(HX_("y",79,00,00,00),(particle2->__Field(HX_("y",79,00,00,00),hx::paccDynamic) + (( (Float)(particle->__Field(HX_("vy",43,67,00,00),hx::paccDynamic)) ) * dt)),hx::paccDynamic);
            			}
            		}
HXLINE(  37)		int rainLevel = ::Math_obj::floor(::Math_obj::max(( (Float)(0) ),(3 + (::Math_obj::sin(this->f) * ( (Float)(3) )))));
HXLINE(  39)		if ((this->s > ((Float).01))) {
HXLINE(  40)			this->s = ( (Float)(0) );
HXLINE(  41)			{
HXLINE(  41)				int _g2 = 0;
HXDLIN(  41)				int _g3 = rainLevel;
HXDLIN(  41)				while((_g2 < _g3)){
HXLINE(  41)					_g2 = (_g2 + 1);
HXDLIN(  41)					int i = (_g2 - 1);
HXLINE(  42)					this->spawnParticle( ::Dynamic(hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("opacity",cb,5d,65,eb),(((Float).2) + (::Math_obj::random() * ((Float).8))))
            						->setFixed(1,HX_("x",78,00,00,00),( (Float)((::Math_obj::round((::Math_obj::random() * ( (Float)(110) ))) - 5)) ))
            						->setFixed(2,HX_("y",79,00,00,00),( (Float)(-1) ))
            						->setFixed(3,HX_("vx",42,67,00,00),((Float).3))
            						->setFixed(4,HX_("vy",43,67,00,00),( (Float)(100) ))));
            				}
            			}
            		}
            	}



hx::ObjectPtr< RainParticleSystem_obj > RainParticleSystem_obj::__new() {
	hx::ObjectPtr< RainParticleSystem_obj > __this = new RainParticleSystem_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< RainParticleSystem_obj > RainParticleSystem_obj::__alloc(hx::Ctx *_hx_ctx) {
	RainParticleSystem_obj *__this = (RainParticleSystem_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RainParticleSystem_obj), true, "game.RainParticleSystem"));
	*(void **)__this = RainParticleSystem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RainParticleSystem_obj::RainParticleSystem_obj()
{
}

hx::Val RainParticleSystem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return hx::Val( f ); }
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RainParticleSystem_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RainParticleSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("f",66,00,00,00));
	outFields->push(HX_("s",73,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo RainParticleSystem_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(RainParticleSystem_obj,f),HX_("f",66,00,00,00)},
	{hx::fsFloat,(int)offsetof(RainParticleSystem_obj,s),HX_("s",73,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RainParticleSystem_obj_sStaticStorageInfo = 0;
#endif

static ::String RainParticleSystem_obj_sMemberFields[] = {
	HX_("render",56,6b,29,05),
	HX_("f",66,00,00,00),
	HX_("s",73,00,00,00),
	HX_("update",09,86,05,87),
	::String(null()) };

hx::Class RainParticleSystem_obj::__mClass;

void RainParticleSystem_obj::__register()
{
	RainParticleSystem_obj _hx_dummy;
	RainParticleSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("game.RainParticleSystem",65,9d,25,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RainParticleSystem_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RainParticleSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RainParticleSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RainParticleSystem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace game
