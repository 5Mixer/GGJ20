// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_Xml
#include <hxinc/Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <hxinc/_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_bonsai_resource_Tiled
#include <hxinc/bonsai/resource/Tiled.h>
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
#ifndef INCLUDED_haxe_xml_Parser
#include <hxinc/haxe/xml/Parser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a95086091276de0e_9_new,"bonsai.resource.Tiled","new",0xb81014dc,"bonsai.resource.Tiled.new","bonsai/resource/Tiled.hx",9,0xab9c91f4)
HX_LOCAL_STACK_FRAME(_hx_pos_a95086091276de0e_18_loadRawData,"bonsai.resource.Tiled","loadRawData",0xf0454b28,"bonsai.resource.Tiled.loadRawData","bonsai/resource/Tiled.hx",18,0xab9c91f4)
namespace bonsai{
namespace resource{

void Tiled_obj::__construct(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_a95086091276de0e_9_new)
HXLINE(  13)		this->_hx_set_entities(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE(  12)		this->_hx_set_tiles(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE(  16)		this->loadRawData(data);
            	}

Dynamic Tiled_obj::__CreateEmpty() { return new Tiled_obj; }

void *Tiled_obj::_hx_vtable = 0;

Dynamic Tiled_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Tiled_obj > _hx_result = new Tiled_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Tiled_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3244dece;
}

void Tiled_obj::loadRawData(::String raw){
            	HX_GC_STACKFRAME(&_hx_pos_a95086091276de0e_18_loadRawData)
HXLINE(  19)		 ::Xml data = ::haxe::xml::Parser_obj::parse(raw,null());
HXLINE(  21)		 ::Xml map = ( ( ::Xml)(data->elementsNamed(HX_("map",9c,0a,53,00))->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  22)		this->width = ( (int)(::Std_obj::parseInt(map->get(HX_("width",06,b6,62,ca)))) );
HXLINE(  23)		this->height = ( (int)(::Std_obj::parseInt(map->get(HX_("height",e7,07,4c,02)))) );
HXLINE(  25)		{
HXLINE(  25)			 ::Dynamic layer = map->elementsNamed(HX_("layer",d1,81,c0,6f));
HXDLIN(  25)			while(( (bool)(layer->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  25)				 ::Xml layer1 = ( ( ::Xml)(layer->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  26)				int n = 0;
HXLINE(  27)				 ::Xml _this = ( ( ::Xml)(layer1->elementsNamed(HX_("data",2a,56,63,42))->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXDLIN(  27)				bool layerTiles;
HXDLIN(  27)				if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE(  27)					layerTiles = (_this->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  27)					layerTiles = false;
            				}
HXDLIN(  27)				if (layerTiles) {
HXLINE(  27)					HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(_this->nodeType)));
            				}
HXDLIN(  27)				 ::Xml _this1 = _this->children->__get(0).StaticCast<  ::Xml >();
HXDLIN(  27)				bool layerTiles1;
HXDLIN(  27)				if ((_this1->nodeType != ::Xml_obj::Document)) {
HXLINE(  27)					layerTiles1 = (_this1->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE(  27)					layerTiles1 = true;
            				}
HXDLIN(  27)				if (layerTiles1) {
HXLINE(  27)					HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(_this1->nodeType)));
            				}
HXDLIN(  27)				::Array< ::String > layerTiles2 = _this1->nodeValue.split(HX_(",",2c,00,00,00));
HXLINE(  30)				{
HXLINE(  30)					int _g = 0;
HXDLIN(  30)					while((_g < layerTiles2->length)){
HXLINE(  30)						::String tile = layerTiles2->__get(_g);
HXDLIN(  30)						_g = (_g + 1);
HXLINE(  32)						int x = hx::Mod(n,this->width);
HXLINE(  33)						int y = ::Math_obj::floor((( (Float)(n) ) / ( (Float)(this->width) )));
HXLINE(  36)						if (hx::IsNull( this->tiles->__get(y).StaticCast< ::Array< int > >() )) {
HXLINE(  37)							this->tiles->setCtx( HX_CTX, y,::Array_obj< int >::__new(0));
            						}
HXLINE(  39)						this->tiles->__get(y).StaticCast< ::Array< int > >()[x] = ( (int)(::Std_obj::parseInt(tile)) );
HXLINE(  41)						n = (n + 1);
            					}
            				}
HXLINE(  43)				::haxe::Log_obj::trace(this->tiles,hx::SourceInfo(HX_("bonsai/resource/Tiled.hx",f4,91,9c,ab),43,HX_("bonsai.resource.Tiled",ea,b6,7d,ed),HX_("loadRawData",ac,2a,b6,cf)));
            			}
            		}
HXLINE(  46)		{
HXLINE(  46)			 ::Dynamic objectlayer = map->elementsNamed(HX_("objectgroup",20,60,f6,75));
HXDLIN(  46)			while(( (bool)(objectlayer->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  46)				 ::Xml objectlayer1 = ( ( ::Xml)(objectlayer->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  47)				{
HXLINE(  47)					 ::Dynamic object = objectlayer1->elements();
HXDLIN(  47)					while(( (bool)(object->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  47)						 ::Xml object1 = ( ( ::Xml)(object->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  48)						::String name = object1->get(HX_("name",4b,72,ff,48));
HXLINE(  49)						 ::haxe::ds::StringMap properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  50)						{
HXLINE(  50)							 ::Dynamic element = object1->elements();
HXDLIN(  50)							while(( (bool)(element->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  50)								 ::Xml element1 = ( ( ::Xml)(element->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  51)								if ((element1->nodeType != ::Xml_obj::Element)) {
HXLINE(  51)									HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(element1->nodeType)));
            								}
HXDLIN(  51)								if ((element1->nodeName == HX_("properties",f3,fb,0e,61))) {
HXLINE(  52)									 ::Dynamic property = element1->elements();
HXDLIN(  52)									while(( (bool)(property->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  52)										 ::Xml property1 = ( ( ::Xml)(property->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  53)										::String key = property1->get(HX_("name",4b,72,ff,48));
HXDLIN(  53)										properties->set(key,property1->get(HX_("value",71,7f,b8,31)));
            									}
            								}
            							}
            						}
HXLINE(  57)						::Array< ::Dynamic> _hx_tmp = this->entities;
HXLINE(  58)						int _hx_tmp1 = ::Math_obj::floor(( (Float)(::Std_obj::parseInt(object1->get(HX_("x",78,00,00,00)))) ));
HXLINE(  57)						_hx_tmp->push( ::Dynamic(hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("x",78,00,00,00),_hx_tmp1)
            							->setFixed(1,HX_("y",79,00,00,00),::Math_obj::floor(( (Float)(::Std_obj::parseInt(object1->get(HX_("y",79,00,00,00)))) )))
            							->setFixed(2,HX_("properties",f3,fb,0e,61),properties)));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tiled_obj,loadRawData,(void))


hx::ObjectPtr< Tiled_obj > Tiled_obj::__new(::String data) {
	hx::ObjectPtr< Tiled_obj > __this = new Tiled_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< Tiled_obj > Tiled_obj::__alloc(hx::Ctx *_hx_ctx,::String data) {
	Tiled_obj *__this = (Tiled_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Tiled_obj), true, "bonsai.resource.Tiled"));
	*(void **)__this = Tiled_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

Tiled_obj::Tiled_obj()
{
}

void Tiled_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tiled);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_END_CLASS();
}

void Tiled_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(entities,"entities");
}

hx::Val Tiled_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"tiles") ) { return hx::Val( tiles ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return hx::Val( entities ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadRawData") ) { return hx::Val( loadRawData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Tiled_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { _hx_set_tiles(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { _hx_set_entities(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tiled_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("tiles",85,fd,34,10));
	outFields->push(HX_("entities",41,96,95,92));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Tiled_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tiled_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(Tiled_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Tiled_obj,tiles),HX_("tiles",85,fd,34,10)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Tiled_obj,entities),HX_("entities",41,96,95,92)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Tiled_obj_sStaticStorageInfo = 0;
#endif

static ::String Tiled_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("tiles",85,fd,34,10),
	HX_("entities",41,96,95,92),
	HX_("loadRawData",ac,2a,b6,cf),
	::String(null()) };

hx::Class Tiled_obj::__mClass;

void Tiled_obj::__register()
{
	Tiled_obj _hx_dummy;
	Tiled_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("bonsai.resource.Tiled",ea,b6,7d,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Tiled_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tiled_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tiled_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tiled_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace bonsai
} // end namespace resource
