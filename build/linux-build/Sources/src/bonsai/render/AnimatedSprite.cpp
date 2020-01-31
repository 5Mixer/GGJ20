// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_bonsai_render_AnimatedSprite
#include <hxinc/bonsai/render/AnimatedSprite.h>
#endif
#ifndef INCLUDED_bonsai_render_SpriteMap
#include <hxinc/bonsai/render/SpriteMap.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <hxinc/haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f81f7692c02ccd6b_8_new,"bonsai.render.AnimatedSprite","new",0x4725cd7e,"bonsai.render.AnimatedSprite.new","bonsai/render/AnimatedSprite.hx",8,0xfb981592)
static const int _hx_array_data_a71df68c_1[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f81f7692c02ccd6b_22_registerAnimation,"bonsai.render.AnimatedSprite","registerAnimation",0x8bff39bf,"bonsai.render.AnimatedSprite.registerAnimation","bonsai/render/AnimatedSprite.hx",22,0xfb981592)
HX_LOCAL_STACK_FRAME(_hx_pos_f81f7692c02ccd6b_24_play,"bonsai.render.AnimatedSprite","play",0xfb45ab16,"bonsai.render.AnimatedSprite.play","bonsai/render/AnimatedSprite.hx",24,0xfb981592)
HX_LOCAL_STACK_FRAME(_hx_pos_f81f7692c02ccd6b_35_update,"bonsai.render.AnimatedSprite","update",0xe7a40fab,"bonsai.render.AnimatedSprite.update","bonsai/render/AnimatedSprite.hx",35,0xfb981592)
HX_LOCAL_STACK_FRAME(_hx_pos_f81f7692c02ccd6b_44_render,"bonsai.render.AnimatedSprite","render",0x65c7f4f8,"bonsai.render.AnimatedSprite.render","bonsai/render/AnimatedSprite.hx",44,0xfb981592)
namespace bonsai{
namespace render{

void AnimatedSprite_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f81f7692c02ccd6b_8_new)
HXLINE(  15)		this->timeUntilNextFrame = ((Float).1);
HXLINE(  14)		this->frameTime = ((Float).1);
HXLINE(  18)		this->_hx_set_animations(HX_CTX,  ::haxe::ds::StringMap_obj::__alloc( HX_CTX ));
HXLINE(  19)		this->_hx_set_drawLayers(HX_CTX, ::Array_obj< int >::fromData( _hx_array_data_a71df68c_1,1));
            	}

Dynamic AnimatedSprite_obj::__CreateEmpty() { return new AnimatedSprite_obj; }

void *AnimatedSprite_obj::_hx_vtable = 0;

Dynamic AnimatedSprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AnimatedSprite_obj > _hx_result = new AnimatedSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimatedSprite_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47bfdeb8;
}

void AnimatedSprite_obj::registerAnimation(::String identifier, ::Dynamic animation){
            	HX_STACKFRAME(&_hx_pos_f81f7692c02ccd6b_22_registerAnimation)
HXDLIN(  22)		this->animations->set(identifier,animation);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimatedSprite_obj,registerAnimation,(void))

void AnimatedSprite_obj::play(::String identifier){
            	HX_GC_STACKFRAME(&_hx_pos_f81f7692c02ccd6b_24_play)
HXLINE(  25)		if ((this->playing == identifier)) {
HXLINE(  26)			return;
            		}
HXLINE(  27)		if (!(this->animations->exists(identifier))) {
HXLINE(  28)			::haxe::Log_obj::trace(((HX_("Attempted to play animation ",b7,ab,cb,e1) + identifier) + HX_(", which isn't registered",a8,bd,01,1b)),hx::SourceInfo(HX_("bonsai/render/AnimatedSprite.hx",92,15,98,fb),28,HX_("bonsai.render.AnimatedSprite",8c,f6,1d,a7),HX_("play",f4,2d,5a,4a)));
HXLINE(  29)			return;
            		}
HXLINE(  31)		this->_hx_set_playing(HX_CTX, identifier);
HXLINE(  32)		this->frame = 0;
HXLINE(  33)		this->timeUntilNextFrame = this->frameTime;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,play,(void))

void AnimatedSprite_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_f81f7692c02ccd6b_35_update)
HXLINE(  36)		 ::bonsai::render::AnimatedSprite _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp->timeUntilNextFrame = (_hx_tmp->timeUntilNextFrame - dt);
HXLINE(  37)		if ((this->timeUntilNextFrame <= 0)) {
HXLINE(  38)			this->timeUntilNextFrame = this->frameTime;
HXLINE(  39)			 ::bonsai::render::AnimatedSprite _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  39)			_hx_tmp1->frame = (_hx_tmp1->frame + 1);
HXLINE(  40)			int _hx_tmp2 = this->frame;
HXDLIN(  40)			if ((_hx_tmp2 > (( (::Array< int >)(this->animations->get(this->playing)->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) )->length - 1))) {
HXLINE(  41)				this->frame = 0;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,update,(void))

void AnimatedSprite_obj::render( ::kha::graphics2::Graphics graphics,float x,float y){
            	HX_STACKFRAME(&_hx_pos_f81f7692c02ccd6b_44_render)
HXLINE(  45)		 ::Dynamic currentAnimation = this->animations->get(this->playing);
HXLINE(  46)		if (hx::IsNull( currentAnimation )) {
HXLINE(  47)			return;
            		}
HXLINE(  48)		int currentFrame = ( (int)( ::Dynamic(currentAnimation->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic))->__GetItem(this->frame)) );
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (hx::IsNotNull( this->drawLayers )) {
HXLINE(  49)			_hx_tmp = hx::IsEq( this->drawLayers,::Array_obj< int >::__new(0) );
            		}
            		else {
HXLINE(  49)			_hx_tmp = true;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			::haxe::Log_obj::trace(HX_("Null layers object",64,c2,5c,b2),hx::SourceInfo(HX_("bonsai/render/AnimatedSprite.hx",92,15,98,fb),50,HX_("bonsai.render.AnimatedSprite",8c,f6,1d,a7),HX_("render",56,6b,29,05)));
            		}
HXLINE(  51)		{
HXLINE(  51)			int _g = 0;
HXDLIN(  51)			::Array< int > _g1 = this->drawLayers;
HXDLIN(  51)			while((_g < _g1->length)){
HXLINE(  51)				int layer = _g1->__get(_g);
HXDLIN(  51)				_g = (_g + 1);
HXLINE(  52)				( ( ::bonsai::render::SpriteMap)(currentAnimation->__Field(HX_("spriteMap",97,77,04,56),hx::paccDynamic)) )->renderCell(graphics,x,y,currentFrame,layer);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(AnimatedSprite_obj,render,(void))


hx::ObjectPtr< AnimatedSprite_obj > AnimatedSprite_obj::__new() {
	hx::ObjectPtr< AnimatedSprite_obj > __this = new AnimatedSprite_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AnimatedSprite_obj > AnimatedSprite_obj::__alloc(hx::Ctx *_hx_ctx) {
	AnimatedSprite_obj *__this = (AnimatedSprite_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AnimatedSprite_obj), true, "bonsai.render.AnimatedSprite"));
	*(void **)__this = AnimatedSprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimatedSprite_obj::AnimatedSprite_obj()
{
}

void AnimatedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatedSprite);
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(drawLayers,"drawLayers");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameTime,"frameTime");
	HX_MARK_MEMBER_NAME(timeUntilNextFrame,"timeUntilNextFrame");
	HX_MARK_END_CLASS();
}

void AnimatedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(drawLayers,"drawLayers");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameTime,"frameTime");
	HX_VISIT_MEMBER_NAME(timeUntilNextFrame,"timeUntilNextFrame");
}

hx::Val AnimatedSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return hx::Val( frame ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return hx::Val( playing ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameTime") ) { return hx::Val( frameTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return hx::Val( animations ); }
		if (HX_FIELD_EQ(inName,"drawLayers") ) { return hx::Val( drawLayers ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerAnimation") ) { return hx::Val( registerAnimation_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"timeUntilNextFrame") ) { return hx::Val( timeUntilNextFrame ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AnimatedSprite_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { _hx_set_playing(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameTime") ) { frameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { _hx_set_animations(HX_CTX_GET,inValue.Cast<  ::haxe::ds::StringMap >()); return inValue; }
		if (HX_FIELD_EQ(inName,"drawLayers") ) { _hx_set_drawLayers(HX_CTX_GET,inValue.Cast< ::Array< int > >()); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"timeUntilNextFrame") ) { timeUntilNextFrame=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animations",ef,34,1c,83));
	outFields->push(HX_("drawLayers",a6,90,74,9a));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("frameTime",da,8a,7d,3a));
	outFields->push(HX_("timeUntilNextFrame",a9,32,51,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo AnimatedSprite_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AnimatedSprite_obj,animations),HX_("animations",ef,34,1c,83)},
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(AnimatedSprite_obj,drawLayers),HX_("drawLayers",a6,90,74,9a)},
	{hx::fsString,(int)offsetof(AnimatedSprite_obj,playing),HX_("playing",6e,0f,18,8a)},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,frame),HX_("frame",2d,78,83,06)},
	{hx::fsFloat,(int)offsetof(AnimatedSprite_obj,frameTime),HX_("frameTime",da,8a,7d,3a)},
	{hx::fsFloat,(int)offsetof(AnimatedSprite_obj,timeUntilNextFrame),HX_("timeUntilNextFrame",a9,32,51,53)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AnimatedSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimatedSprite_obj_sMemberFields[] = {
	HX_("animations",ef,34,1c,83),
	HX_("drawLayers",a6,90,74,9a),
	HX_("playing",6e,0f,18,8a),
	HX_("frame",2d,78,83,06),
	HX_("frameTime",da,8a,7d,3a),
	HX_("timeUntilNextFrame",a9,32,51,53),
	HX_("registerAnimation",21,c4,0f,37),
	HX_("play",f4,2d,5a,4a),
	HX_("update",09,86,05,87),
	HX_("render",56,6b,29,05),
	::String(null()) };

hx::Class AnimatedSprite_obj::__mClass;

void AnimatedSprite_obj::__register()
{
	AnimatedSprite_obj _hx_dummy;
	AnimatedSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("bonsai.render.AnimatedSprite",8c,f6,1d,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AnimatedSprite_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimatedSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimatedSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimatedSprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace bonsai
} // end namespace render
