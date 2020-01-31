// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_InputBindings
#include <hxinc/InputBindings.h>
#endif
#ifndef INCLUDED_bonsai_entity_Entity
#include <hxinc/bonsai/entity/Entity.h>
#endif
#ifndef INCLUDED_bonsai_input_Input
#include <hxinc/bonsai/input/Input.h>
#endif
#ifndef INCLUDED_bonsai_render_AnimatedSprite
#include <hxinc/bonsai/render/AnimatedSprite.h>
#endif
#ifndef INCLUDED_bonsai_render_SpriteMap
#include <hxinc/bonsai/render/SpriteMap.h>
#endif
#ifndef INCLUDED_bonsai_render_Transformation
#include <hxinc/bonsai/render/Transformation.h>
#endif
#ifndef INCLUDED_game_Player
#include <hxinc/game/Player.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b585dd705af4d106_8_new,"game.Player","new",0x0db227ef,"game.Player.new","game/Player.hx",8,0x8819e240)
static const int _hx_array_data_fc8e047d_1[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_fc8e047d_2[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b585dd705af4d106_39_render,"game.Player","render",0x06a0f727,"game.Player.render","game/Player.hx",39,0x8819e240)
HX_LOCAL_STACK_FRAME(_hx_pos_b585dd705af4d106_47_update,"game.Player","update",0x887d11da,"game.Player.update","game/Player.hx",47,0x8819e240)
namespace game{

void Player_obj::__construct(Float x,Float y, ::bonsai::input::Input input){
            	HX_GC_STACKFRAME(&_hx_pos_b585dd705af4d106_8_new)
HXLINE(  15)		this->facingRight = true;
HXLINE(  11)		this->height = 32;
HXLINE(  10)		this->width = 16;
HXLINE(  18)		super::__construct();
HXLINE(  19)		this->position->x = x;
HXLINE(  20)		this->position->y = y;
HXLINE(  21)		this->_hx_set_input(HX_CTX, input);
HXLINE(  23)		this->_hx_set_animation(HX_CTX,  ::bonsai::render::AnimatedSprite_obj::__alloc( HX_CTX ));
HXLINE(  24)		 ::bonsai::render::AnimatedSprite _hx_tmp = this->animation;
HXDLIN(  24)		_hx_tmp->registerAnimation(HX_("walk",09,5d,f2,4e), ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("frames",a6,af,85,ac),::Array_obj< int >::fromData( _hx_array_data_fc8e047d_1,12))
            			->setFixed(1,HX_("spriteMap",97,77,04,56), ::bonsai::render::SpriteMap_obj::__alloc( HX_CTX ,::kha::Assets_obj::images->playerWalk,this->width,this->height))));
HXLINE(  28)		 ::bonsai::render::AnimatedSprite _hx_tmp1 = this->animation;
HXDLIN(  28)		_hx_tmp1->registerAnimation(HX_("idle",14,a7,b3,45), ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("frames",a6,af,85,ac),::Array_obj< int >::fromData( _hx_array_data_fc8e047d_2,1))
            			->setFixed(1,HX_("spriteMap",97,77,04,56), ::bonsai::render::SpriteMap_obj::__alloc( HX_CTX ,::kha::Assets_obj::images->player,this->width,this->height))));
HXLINE(  32)		this->animation->play(HX_("idle",14,a7,b3,45));
HXLINE(  34)		this->_hx_set_transformation(HX_CTX,  ::bonsai::render::Transformation_obj::__alloc( HX_CTX ));
HXLINE(  35)		this->transformation->_hx_set_offset(HX_CTX,  ::kha::math::Vector2_obj::__alloc( HX_CTX ,this->position->x,this->position->y));
HXLINE(  36)		this->transformation->_hx_set_origin(HX_CTX,  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(( (Float)(this->width) ) / ( (Float)(2) )),this->height));
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ed75833) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2ed75833;
	} else {
		return inClassId==(int)0x61169fa0;
	}
}

void Player_obj::render( ::kha::graphics2::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_b585dd705af4d106_39_render)
HXLINE(  40)		this->transformation->_hx_set_offset(HX_CTX, this->position);
HXLINE(  41)		Float _hx_tmp;
HXDLIN(  41)		if (this->facingRight) {
HXLINE(  41)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(  41)			_hx_tmp = ( (Float)(-1) );
            		}
HXDLIN(  41)		this->transformation->scale->x = _hx_tmp;
HXLINE(  42)		this->transformation->apply(graphics);
HXLINE(  43)		this->animation->render(graphics,( (float)(0) ),( (float)(0) ));
HXLINE(  44)		this->transformation->finish(graphics);
            	}


void Player_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_b585dd705af4d106_47_update)
HXLINE(  48)		this->animation->update(dt);
HXLINE(  49)		this->super::update(dt);
HXLINE(  50)		if (this->input->isAnyKeyDown(::InputBindings_obj::right)) {
HXLINE(  51)			 ::kha::math::Vector2 _hx_tmp = this->position;
HXDLIN(  51)			_hx_tmp->x = (_hx_tmp->x + (dt * ( (Float)(28) )));
HXLINE(  52)			this->animation->play(HX_("walk",09,5d,f2,4e));
HXLINE(  53)			this->facingRight = true;
            		}
            		else {
HXLINE(  54)			if (this->input->isAnyKeyDown(::InputBindings_obj::left)) {
HXLINE(  55)				 ::kha::math::Vector2 _hx_tmp1 = this->position;
HXDLIN(  55)				_hx_tmp1->x = (_hx_tmp1->x - (dt * ( (Float)(28) )));
HXLINE(  56)				this->animation->play(HX_("walk",09,5d,f2,4e));
HXLINE(  57)				this->facingRight = false;
            			}
            			else {
HXLINE(  59)				this->animation->play(HX_("idle",14,a7,b3,45));
            			}
            		}
HXLINE(  61)		if (this->input->isAnyKeyDown(::InputBindings_obj::punch)) {
HXLINE(  63)			::haxe::Log_obj::trace(HX_("POW!!!",c9,68,cf,b2),hx::SourceInfo(HX_("game/Player.hx",40,e2,19,88),63,HX_("game.Player",7d,04,8e,fc),HX_("update",09,86,05,87)));
            		}
            	}



hx::ObjectPtr< Player_obj > Player_obj::__new(Float x,Float y, ::bonsai::input::Input input) {
	hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(x,y,input);
	return __this;
}

hx::ObjectPtr< Player_obj > Player_obj::__alloc(hx::Ctx *_hx_ctx,Float x,Float y, ::bonsai::input::Input input) {
	Player_obj *__this = (Player_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "game.Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(x,y,input);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(transformation,"transformation");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(facingRight,"facingRight");
	 ::bonsai::entity::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(transformation,"transformation");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(facingRight,"facingRight");
	 ::bonsai::entity::Entity_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return hx::Val( animation ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"facingRight") ) { return hx::Val( facingRight ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformation") ) { return hx::Val( transformation ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Player_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { _hx_set_input(HX_CTX_GET,inValue.Cast<  ::bonsai::input::Input >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { _hx_set_animation(HX_CTX_GET,inValue.Cast<  ::bonsai::render::AnimatedSprite >()); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"facingRight") ) { facingRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformation") ) { _hx_set_transformation(HX_CTX_GET,inValue.Cast<  ::bonsai::render::Transformation >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("animation",04,ef,34,4b));
	outFields->push(HX_("transformation",c9,bd,2f,0a));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("facingRight",62,3e,6f,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(Player_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsObject /*  ::bonsai::render::AnimatedSprite */ ,(int)offsetof(Player_obj,animation),HX_("animation",04,ef,34,4b)},
	{hx::fsObject /*  ::bonsai::render::Transformation */ ,(int)offsetof(Player_obj,transformation),HX_("transformation",c9,bd,2f,0a)},
	{hx::fsObject /*  ::bonsai::input::Input */ ,(int)offsetof(Player_obj,input),HX_("input",0a,c4,1d,be)},
	{hx::fsBool,(int)offsetof(Player_obj,facingRight),HX_("facingRight",62,3e,6f,c7)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("animation",04,ef,34,4b),
	HX_("transformation",c9,bd,2f,0a),
	HX_("input",0a,c4,1d,be),
	HX_("facingRight",62,3e,6f,c7),
	HX_("render",56,6b,29,05),
	HX_("update",09,86,05,87),
	::String(null()) };

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("game.Player",7d,04,8e,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace game
