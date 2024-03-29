// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_zui_Themes
#include <hxinc/zui/Themes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b706838cf05c6d6e_5_boot,"zui.Themes","boot",0x80fbdd96,"zui.Themes.boot","Sources/zui/Themes.hx",5,0x3c270adc)
HX_LOCAL_STACK_FRAME(_hx_pos_b706838cf05c6d6e_40_boot,"zui.Themes","boot",0x80fbdd96,"zui.Themes.boot","Sources/zui/Themes.hx",40,0x3c270adc)
namespace zui{

void Themes_obj::__construct() { }

Dynamic Themes_obj::__CreateEmpty() { return new Themes_obj; }

void *Themes_obj::_hx_vtable = 0;

Dynamic Themes_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Themes_obj > _hx_result = new Themes_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Themes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4aa09cb0;
}

 ::Dynamic Themes_obj::dark;

 ::Dynamic Themes_obj::light;


Themes_obj::Themes_obj()
{
}

bool Themes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dark") ) { outValue = ( dark ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { outValue = ( light ); return true; }
	}
	return false;
}

bool Themes_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dark") ) { dark=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { light=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Themes_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Themes_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Themes_obj::dark,HX_("dark",76,54,63,42)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Themes_obj::light,HX_("light",d6,90,fc,74)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Themes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Themes_obj::dark,"dark");
	HX_MARK_MEMBER_NAME(Themes_obj::light,"light");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Themes_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Themes_obj::dark,"dark");
	HX_VISIT_MEMBER_NAME(Themes_obj::light,"light");
};

#endif

hx::Class Themes_obj::__mClass;

static ::String Themes_obj_sStaticFields[] = {
	HX_("dark",76,54,63,42),
	HX_("light",d6,90,fc,74),
	::String(null())
};

void Themes_obj::__register()
{
	Themes_obj _hx_dummy;
	Themes_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("zui.Themes",8a,81,1a,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Themes_obj::__GetStatic;
	__mClass->mSetStaticField = &Themes_obj::__SetStatic;
	__mClass->mMarkFunc = Themes_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Themes_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Themes_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Themes_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Themes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Themes_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Themes_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b706838cf05c6d6e_5_boot)
HXDLIN(   5)		dark =  ::Dynamic(hx::Anon_obj::Create(29)
            			->setFixed(0,HX_("FONT_SIZE",71,f0,3d,80),13)
            			->setFixed(1,HX_("TAB_W",8d,00,d2,88),12)
            			->setFixed(2,HX_("FILL_BUTTON_BG",36,79,48,8d),true)
            			->setFixed(3,HX_("WINDOW_TINT_COL",0b,c9,a0,ae),-1)
            			->setFixed(4,HX_("BUTTON_H",7b,41,b8,b5),22)
            			->setFixed(5,HX_("ELEMENT_H",a5,b4,43,c3),24)
            			->setFixed(6,HX_("ELEMENT_W",b4,b4,43,c3),100)
            			->setFixed(7,HX_("BUTTON_COL",13,50,64,c5),-12171706)
            			->setFixed(8,HX_("TEXT_COL",4e,50,e5,c5),-1513499)
            			->setFixed(9,HX_("FILL_WINDOW_BG",f8,19,75,d3),false)
            			->setFixed(10,HX_("CHECK_SIZE",f8,52,03,db),15)
            			->setFixed(11,HX_("TEXT_OFFSET",25,60,d0,e5),8)
            			->setFixed(12,HX_("SCROLL_W",65,b4,da,e5),6)
            			->setFixed(13,HX_("BUTTON_TEXT_COL",7b,eb,33,eb),-1513499)
            			->setFixed(14,HX_("BUTTON_PRESSED_COL",96,4f,5e,ed),-15000805)
            			->setFixed(15,HX_("ACCENT_HOVER_COL",48,76,6b,fd),-11974327)
            			->setFixed(16,HX_("ACCENT_COL",6b,0b,11,02),-12303292)
            			->setFixed(17,HX_("ELEMENT_OFFSET",16,9e,c2,08),4)
            			->setFixed(18,HX_("HIGHLIGHT_COL",35,c1,35,0e),-14656100)
            			->setFixed(19,HX_("CONTEXT_COL",70,5e,a4,1c),-14540254)
            			->setFixed(20,HX_("NAME",4b,3a,c0,33),HX_("Default Dark",75,28,4f,84))
            			->setFixed(21,HX_("SEPARATOR_COL",e6,37,a4,36),-14211289)
            			->setFixed(22,HX_("ARROW_SIZE",57,2e,b6,3e),5)
            			->setFixed(23,HX_("CHECK_SELECT_SIZE",cd,c6,a9,44),8)
            			->setFixed(24,HX_("WINDOW_BG_COL",15,11,a8,46),-13421773)
            			->setFixed(25,HX_("ACCENT_SELECT_COL",32,b6,1e,48),-10461088)
            			->setFixed(26,HX_("FILL_ACCENT_BG",de,70,14,63),false)
            			->setFixed(27,HX_("LABEL_COL",f5,20,15,76),-3618616)
            			->setFixed(28,HX_("BUTTON_HOVER_COL",f0,a8,9f,7e),-11974327));
            	}
{
            	HX_STACKFRAME(&_hx_pos_b706838cf05c6d6e_40_boot)
HXDLIN(  40)		light =  ::Dynamic(hx::Anon_obj::Create(29)
            			->setFixed(0,HX_("FONT_SIZE",71,f0,3d,80),26)
            			->setFixed(1,HX_("TAB_W",8d,00,d2,88),24)
            			->setFixed(2,HX_("FILL_BUTTON_BG",36,79,48,8d),true)
            			->setFixed(3,HX_("WINDOW_TINT_COL",0b,c9,a0,ae),-14540254)
            			->setFixed(4,HX_("BUTTON_H",7b,41,b8,b5),44)
            			->setFixed(5,HX_("ELEMENT_H",a5,b4,43,c3),48)
            			->setFixed(6,HX_("ELEMENT_W",b4,b4,43,c3),200)
            			->setFixed(7,HX_("BUTTON_COL",13,50,64,c5),-3355444)
            			->setFixed(8,HX_("TEXT_COL",4e,50,e5,c5),-6710887)
            			->setFixed(9,HX_("FILL_WINDOW_BG",f8,19,75,d3),false)
            			->setFixed(10,HX_("CHECK_SIZE",f8,52,03,db),30)
            			->setFixed(11,HX_("TEXT_OFFSET",25,60,d0,e5),16)
            			->setFixed(12,HX_("SCROLL_W",65,b4,da,e5),12)
            			->setFixed(13,HX_("BUTTON_TEXT_COL",7b,eb,33,eb),-14540254)
            			->setFixed(14,HX_("BUTTON_PRESSED_COL",96,4f,5e,ed),-5131855)
            			->setFixed(15,HX_("ACCENT_HOVER_COL",48,76,6b,fd),-4473925)
            			->setFixed(16,HX_("ACCENT_COL",6b,0b,11,02),-1118482)
            			->setFixed(17,HX_("ELEMENT_OFFSET",16,9e,c2,08),8)
            			->setFixed(18,HX_("HIGHLIGHT_COL",35,c1,35,0e),-14656100)
            			->setFixed(19,HX_("CONTEXT_COL",70,5e,a4,1c),-5592406)
            			->setFixed(20,HX_("NAME",4b,3a,c0,33),HX_("Default Light",f7,3b,6a,e1))
            			->setFixed(21,HX_("SEPARATOR_COL",e6,37,a4,36),-6710887)
            			->setFixed(22,HX_("ARROW_SIZE",57,2e,b6,3e),10)
            			->setFixed(23,HX_("CHECK_SELECT_SIZE",cd,c6,a9,44),16)
            			->setFixed(24,HX_("WINDOW_BG_COL",15,11,a8,46),-1052689)
            			->setFixed(25,HX_("ACCENT_SELECT_COL",32,b6,1e,48),-5592406)
            			->setFixed(26,HX_("FILL_ACCENT_BG",de,70,14,63),false)
            			->setFixed(27,HX_("LABEL_COL",f5,20,15,76),-5592406)
            			->setFixed(28,HX_("BUTTON_HOVER_COL",f0,a8,9f,7e),-5000269));
            	}
}

} // end namespace zui
