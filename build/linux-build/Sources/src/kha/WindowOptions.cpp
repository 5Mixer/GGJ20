// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_WindowOptions
#include <hxinc/kha/WindowOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_953552e0cd74b8c7_18_new,"kha.WindowOptions","new",0xee7f9656,"kha.WindowOptions.new","kha/WindowOptions.hx",18,0x953dd7db)
namespace kha{

void WindowOptions_obj::__construct(::String title, ::Dynamic __o_x, ::Dynamic __o_y, ::Dynamic __o_width, ::Dynamic __o_height, ::Dynamic __o_display, ::Dynamic __o_visible, ::Dynamic windowFeatures, ::Dynamic __o_mode){
            		 ::Dynamic x = __o_x;
            		if (hx::IsNull(__o_x)) x = -1;
            		 ::Dynamic y = __o_y;
            		if (hx::IsNull(__o_y)) y = -1;
            		 ::Dynamic width = __o_width;
            		if (hx::IsNull(__o_width)) width = 800;
            		 ::Dynamic height = __o_height;
            		if (hx::IsNull(__o_height)) height = 600;
            		 ::Dynamic display = __o_display;
            		if (hx::IsNull(__o_display)) display = -1;
            		 ::Dynamic visible = __o_visible;
            		if (hx::IsNull(__o_visible)) visible = true;
            		 ::Dynamic mode = __o_mode;
            		if (hx::IsNull(__o_mode)) mode = 0;
            	HX_GC_STACKFRAME(&_hx_pos_953552e0cd74b8c7_18_new)
HXLINE(  27)		this->mode = 0;
HXLINE(  26)		this->windowFeatures = ((1 | 4) | 2);
HXLINE(  25)		this->visible = true;
HXLINE(  24)		this->display = -1;
HXLINE(  23)		this->height = 600;
HXLINE(  22)		this->width = 800;
HXLINE(  21)		this->y = -1;
HXLINE(  20)		this->x = -1;
HXLINE(  19)		this->_hx_set_title(HX_CTX, null());
HXLINE(  31)		this->_hx_set_title(HX_CTX, title);
HXLINE(  32)		this->x = ( (int)(x) );
HXLINE(  33)		this->y = ( (int)(y) );
HXLINE(  34)		this->width = ( (int)(width) );
HXLINE(  35)		this->height = ( (int)(height) );
HXLINE(  36)		this->display = ( (int)(display) );
HXLINE(  37)		this->visible = ( (bool)(visible) );
HXLINE(  38)		int _hx_tmp;
HXDLIN(  38)		if (hx::IsNull( windowFeatures )) {
HXLINE(  38)			_hx_tmp = ((1 | 4) | 2);
            		}
            		else {
HXLINE(  38)			_hx_tmp = ( (int)(windowFeatures) );
            		}
HXDLIN(  38)		this->windowFeatures = _hx_tmp;
HXLINE(  39)		this->mode = ( (int)(mode) );
            	}

Dynamic WindowOptions_obj::__CreateEmpty() { return new WindowOptions_obj; }

void *WindowOptions_obj::_hx_vtable = 0;

Dynamic WindowOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowOptions_obj > _hx_result = new WindowOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool WindowOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b5f46ca;
}


WindowOptions_obj::WindowOptions_obj()
{
}

void WindowOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WindowOptions);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(windowFeatures,"windowFeatures");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_END_CLASS();
}

void WindowOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(windowFeatures,"windowFeatures");
	HX_VISIT_MEMBER_NAME(mode,"mode");
}

hx::Val WindowOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return hx::Val( mode ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return hx::Val( title ); }
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return hx::Val( display ); }
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"windowFeatures") ) { return hx::Val( windowFeatures ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WindowOptions_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { _hx_set_title(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"windowFeatures") ) { windowFeatures=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("display",42,2a,4a,bb));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("windowFeatures",0d,2d,b3,0c));
	outFields->push(HX_("mode",63,d3,60,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo WindowOptions_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(WindowOptions_obj,title),HX_("title",98,15,3b,10)},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,x),HX_("x",78,00,00,00)},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,y),HX_("y",79,00,00,00)},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,display),HX_("display",42,2a,4a,bb)},
	{hx::fsBool,(int)offsetof(WindowOptions_obj,visible),HX_("visible",72,78,24,a3)},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,windowFeatures),HX_("windowFeatures",0d,2d,b3,0c)},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,mode),HX_("mode",63,d3,60,48)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WindowOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowOptions_obj_sMemberFields[] = {
	HX_("title",98,15,3b,10),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("display",42,2a,4a,bb),
	HX_("visible",72,78,24,a3),
	HX_("windowFeatures",0d,2d,b3,0c),
	HX_("mode",63,d3,60,48),
	::String(null()) };

hx::Class WindowOptions_obj::__mClass;

void WindowOptions_obj::__register()
{
	WindowOptions_obj _hx_dummy;
	WindowOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.WindowOptions",64,73,fc,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WindowOptions_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
