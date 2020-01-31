// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_bonsai_entity_Entity
#include <hxinc/bonsai/entity/Entity.h>
#endif
#ifndef INCLUDED_bonsai_scene_Scene
#include <hxinc/bonsai/scene/Scene.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9ab75943100d1b7c_5_new,"bonsai.scene.Scene","new",0xf88832c8,"bonsai.scene.Scene.new","bonsai/scene/Scene.hx",5,0x735f466a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ab75943100d1b7c_13_add,"bonsai.scene.Scene","add",0xf87e5489,"bonsai.scene.Scene.add","bonsai/scene/Scene.hx",13,0x735f466a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ab75943100d1b7c_20_remove,"bonsai.scene.Scene","remove",0x307baadc,"bonsai.scene.Scene.remove","bonsai/scene/Scene.hx",20,0x735f466a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ab75943100d1b7c_24_update,"bonsai.scene.Scene","update",0xb2f894a1,"bonsai.scene.Scene.update","bonsai/scene/Scene.hx",24,0x735f466a)
HX_LOCAL_STACK_FRAME(_hx_pos_9ab75943100d1b7c_29_render,"bonsai.scene.Scene","render",0x311c79ee,"bonsai.scene.Scene.render","bonsai/scene/Scene.hx",29,0x735f466a)
namespace bonsai{
namespace scene{

void Scene_obj::__construct(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_9ab75943100d1b7c_5_new)
HXLINE(   6)		this->_hx_set_layers(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE(  11)		this->_hx_set_name(HX_CTX, name);
            	}

Dynamic Scene_obj::__CreateEmpty() { return new Scene_obj; }

void *Scene_obj::_hx_vtable = 0;

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Scene_obj > _hx_result = new Scene_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Scene_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b8885fe;
}

void Scene_obj::add( ::bonsai::entity::Entity entity,hx::Null< int >  __o_layer){
            		int layer = __o_layer.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_9ab75943100d1b7c_13_add)
HXLINE(  14)		if (hx::IsNull( this->layers->__get(layer).StaticCast< ::Array< ::Dynamic> >() )) {
HXLINE(  15)			this->layers->setCtx( HX_CTX, layer,::Array_obj< ::Dynamic>::__new(0));
            		}
HXLINE(  17)		this->layers->__get(layer).StaticCast< ::Array< ::Dynamic> >()->push(entity);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,add,(void))

void Scene_obj::remove( ::bonsai::entity::Entity entity){
            	HX_STACKFRAME(&_hx_pos_9ab75943100d1b7c_20_remove)
HXDLIN(  20)		int _g = 0;
HXDLIN(  20)		::Array< ::Dynamic> _g1 = this->layers;
HXDLIN(  20)		while((_g < _g1->length)){
HXDLIN(  20)			::Array< ::Dynamic> layer = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  20)			_g = (_g + 1);
HXLINE(  21)			layer->remove(entity);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,(void))

void Scene_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_9ab75943100d1b7c_24_update)
HXDLIN(  24)		int _g = 0;
HXDLIN(  24)		::Array< ::Dynamic> _g1 = this->layers;
HXDLIN(  24)		while((_g < _g1->length)){
HXDLIN(  24)			::Array< ::Dynamic> layer = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  24)			_g = (_g + 1);
HXLINE(  25)			{
HXLINE(  25)				int _g2 = 0;
HXDLIN(  25)				while((_g2 < layer->length)){
HXLINE(  25)					 ::bonsai::entity::Entity entity = layer->__get(_g2).StaticCast<  ::bonsai::entity::Entity >();
HXDLIN(  25)					_g2 = (_g2 + 1);
HXLINE(  26)					entity->update(dt);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,update,(void))

void Scene_obj::render( ::kha::graphics2::Graphics graphics){
            	HX_STACKFRAME(&_hx_pos_9ab75943100d1b7c_29_render)
HXDLIN(  29)		int _g = 0;
HXDLIN(  29)		::Array< ::Dynamic> _g1 = this->layers;
HXDLIN(  29)		while((_g < _g1->length)){
HXDLIN(  29)			::Array< ::Dynamic> layer = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  29)			_g = (_g + 1);
HXLINE(  30)			{
HXLINE(  30)				int _g2 = 0;
HXDLIN(  30)				while((_g2 < layer->length)){
HXLINE(  30)					 ::bonsai::entity::Entity entity = layer->__get(_g2).StaticCast<  ::bonsai::entity::Entity >();
HXDLIN(  30)					_g2 = (_g2 + 1);
HXLINE(  31)					entity->render(graphics);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))


hx::ObjectPtr< Scene_obj > Scene_obj::__new(::String name) {
	hx::ObjectPtr< Scene_obj > __this = new Scene_obj();
	__this->__construct(name);
	return __this;
}

hx::ObjectPtr< Scene_obj > Scene_obj::__alloc(hx::Ctx *_hx_ctx,::String name) {
	Scene_obj *__this = (Scene_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Scene_obj), true, "bonsai.scene.Scene"));
	*(void **)__this = Scene_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(name,"name");
}

hx::Val Scene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { return hx::Val( layers ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Scene_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { _hx_set_name(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { _hx_set_layers(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("layers",82,15,b1,58));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Scene_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,layers),HX_("layers",82,15,b1,58)},
	{hx::fsString,(int)offsetof(Scene_obj,name),HX_("name",4b,72,ff,48)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Scene_obj_sStaticStorageInfo = 0;
#endif

static ::String Scene_obj_sMemberFields[] = {
	HX_("layers",82,15,b1,58),
	HX_("name",4b,72,ff,48),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("update",09,86,05,87),
	HX_("render",56,6b,29,05),
	::String(null()) };

hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	Scene_obj _hx_dummy;
	Scene_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("bonsai.scene.Scene",d6,6e,bd,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Scene_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scene_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scene_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace bonsai
} // end namespace scene
