// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_FramebufferOptions
#include <hxinc/kha/FramebufferOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d9d3f79080dfe91_4_new,"kha.FramebufferOptions","new",0xa2f39a8d,"kha.FramebufferOptions.new","kha/FramebufferOptions.hx",4,0x171dffe2)
namespace kha{

void FramebufferOptions_obj::__construct( ::Dynamic __o_frequency, ::Dynamic __o_verticalSync, ::Dynamic __o_colorBufferBits, ::Dynamic __o_depthBufferBits, ::Dynamic __o_stencilBufferBits, ::Dynamic __o_samplesPerPixel){
            		 ::Dynamic frequency = __o_frequency;
            		if (hx::IsNull(__o_frequency)) frequency = 60;
            		 ::Dynamic verticalSync = __o_verticalSync;
            		if (hx::IsNull(__o_verticalSync)) verticalSync = true;
            		 ::Dynamic colorBufferBits = __o_colorBufferBits;
            		if (hx::IsNull(__o_colorBufferBits)) colorBufferBits = 32;
            		 ::Dynamic depthBufferBits = __o_depthBufferBits;
            		if (hx::IsNull(__o_depthBufferBits)) depthBufferBits = 16;
            		 ::Dynamic stencilBufferBits = __o_stencilBufferBits;
            		if (hx::IsNull(__o_stencilBufferBits)) stencilBufferBits = 8;
            		 ::Dynamic samplesPerPixel = __o_samplesPerPixel;
            		if (hx::IsNull(__o_samplesPerPixel)) samplesPerPixel = 1;
            	HX_STACKFRAME(&_hx_pos_0d9d3f79080dfe91_4_new)
HXLINE(  10)		this->samplesPerPixel = 1;
HXLINE(   9)		this->stencilBufferBits = 8;
HXLINE(   8)		this->depthBufferBits = 16;
HXLINE(   7)		this->colorBufferBits = 32;
HXLINE(   6)		this->verticalSync = true;
HXLINE(   5)		this->frequency = 60;
HXLINE(  13)		this->frequency = ( (int)(frequency) );
HXLINE(  14)		this->verticalSync = ( (bool)(verticalSync) );
HXLINE(  15)		this->colorBufferBits = ( (int)(colorBufferBits) );
HXLINE(  16)		this->depthBufferBits = ( (int)(depthBufferBits) );
HXLINE(  17)		this->stencilBufferBits = ( (int)(stencilBufferBits) );
HXLINE(  18)		this->samplesPerPixel = ( (int)(samplesPerPixel) );
            	}

Dynamic FramebufferOptions_obj::__CreateEmpty() { return new FramebufferOptions_obj; }

void *FramebufferOptions_obj::_hx_vtable = 0;

Dynamic FramebufferOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FramebufferOptions_obj > _hx_result = new FramebufferOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FramebufferOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3274832d;
}


FramebufferOptions_obj::FramebufferOptions_obj()
{
}

hx::Val FramebufferOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return hx::Val( frequency ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"verticalSync") ) { return hx::Val( verticalSync ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorBufferBits") ) { return hx::Val( colorBufferBits ); }
		if (HX_FIELD_EQ(inName,"depthBufferBits") ) { return hx::Val( depthBufferBits ); }
		if (HX_FIELD_EQ(inName,"samplesPerPixel") ) { return hx::Val( samplesPerPixel ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stencilBufferBits") ) { return hx::Val( stencilBufferBits ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FramebufferOptions_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"verticalSync") ) { verticalSync=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorBufferBits") ) { colorBufferBits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depthBufferBits") ) { depthBufferBits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samplesPerPixel") ) { samplesPerPixel=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stencilBufferBits") ) { stencilBufferBits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FramebufferOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frequency",9c,82,ea,bb));
	outFields->push(HX_("verticalSync",f1,15,25,16));
	outFields->push(HX_("colorBufferBits",69,93,8f,e1));
	outFields->push(HX_("depthBufferBits",09,db,d4,32));
	outFields->push(HX_("stencilBufferBits",42,f9,bb,5a));
	outFields->push(HX_("samplesPerPixel",92,52,4f,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FramebufferOptions_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FramebufferOptions_obj,frequency),HX_("frequency",9c,82,ea,bb)},
	{hx::fsBool,(int)offsetof(FramebufferOptions_obj,verticalSync),HX_("verticalSync",f1,15,25,16)},
	{hx::fsInt,(int)offsetof(FramebufferOptions_obj,colorBufferBits),HX_("colorBufferBits",69,93,8f,e1)},
	{hx::fsInt,(int)offsetof(FramebufferOptions_obj,depthBufferBits),HX_("depthBufferBits",09,db,d4,32)},
	{hx::fsInt,(int)offsetof(FramebufferOptions_obj,stencilBufferBits),HX_("stencilBufferBits",42,f9,bb,5a)},
	{hx::fsInt,(int)offsetof(FramebufferOptions_obj,samplesPerPixel),HX_("samplesPerPixel",92,52,4f,57)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FramebufferOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String FramebufferOptions_obj_sMemberFields[] = {
	HX_("frequency",9c,82,ea,bb),
	HX_("verticalSync",f1,15,25,16),
	HX_("colorBufferBits",69,93,8f,e1),
	HX_("depthBufferBits",09,db,d4,32),
	HX_("stencilBufferBits",42,f9,bb,5a),
	HX_("samplesPerPixel",92,52,4f,57),
	::String(null()) };

hx::Class FramebufferOptions_obj::__mClass;

void FramebufferOptions_obj::__register()
{
	FramebufferOptions_obj _hx_dummy;
	FramebufferOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.FramebufferOptions",1b,50,fe,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FramebufferOptions_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FramebufferOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FramebufferOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FramebufferOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
