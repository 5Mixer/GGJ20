// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_bonsai_input_InputEvent
#include <hxinc/bonsai/input/InputEvent.h>
#endif
namespace bonsai{
namespace input{

::bonsai::input::InputEvent InputEvent_obj::MouseDown;

::bonsai::input::InputEvent InputEvent_obj::MouseEnter;

::bonsai::input::InputEvent InputEvent_obj::MouseLeave;

::bonsai::input::InputEvent InputEvent_obj::MouseScroll(int delta)
{
	return hx::CreateEnum< InputEvent_obj >(HX_("MouseScroll",f2,a3,1f,21),4,1)->_hx_init(0,delta);
}

::bonsai::input::InputEvent InputEvent_obj::MouseUp;

bool InputEvent_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MouseDown",07,91,95,90)) { outValue = InputEvent_obj::MouseDown; return true; }
	if (inName==HX_("MouseEnter",d3,64,04,85)) { outValue = InputEvent_obj::MouseEnter; return true; }
	if (inName==HX_("MouseLeave",b2,2c,d1,86)) { outValue = InputEvent_obj::MouseLeave; return true; }
	if (inName==HX_("MouseScroll",f2,a3,1f,21)) { outValue = InputEvent_obj::MouseScroll_dyn(); return true; }
	if (inName==HX_("MouseUp",c0,1b,c4,8d)) { outValue = InputEvent_obj::MouseUp; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(InputEvent_obj)

int InputEvent_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MouseDown",07,91,95,90)) return 2;
	if (inName==HX_("MouseEnter",d3,64,04,85)) return 0;
	if (inName==HX_("MouseLeave",b2,2c,d1,86)) return 1;
	if (inName==HX_("MouseScroll",f2,a3,1f,21)) return 4;
	if (inName==HX_("MouseUp",c0,1b,c4,8d)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputEvent_obj,MouseScroll,return)

int InputEvent_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MouseDown",07,91,95,90)) return 0;
	if (inName==HX_("MouseEnter",d3,64,04,85)) return 0;
	if (inName==HX_("MouseLeave",b2,2c,d1,86)) return 0;
	if (inName==HX_("MouseScroll",f2,a3,1f,21)) return 1;
	if (inName==HX_("MouseUp",c0,1b,c4,8d)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val InputEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MouseDown",07,91,95,90)) return MouseDown;
	if (inName==HX_("MouseEnter",d3,64,04,85)) return MouseEnter;
	if (inName==HX_("MouseLeave",b2,2c,d1,86)) return MouseLeave;
	if (inName==HX_("MouseScroll",f2,a3,1f,21)) return MouseScroll_dyn();
	if (inName==HX_("MouseUp",c0,1b,c4,8d)) return MouseUp;
	return super::__Field(inName,inCallProp);
}

static ::String InputEvent_obj_sStaticFields[] = {
	HX_("MouseEnter",d3,64,04,85),
	HX_("MouseLeave",b2,2c,d1,86),
	HX_("MouseDown",07,91,95,90),
	HX_("MouseUp",c0,1b,c4,8d),
	HX_("MouseScroll",f2,a3,1f,21),
	::String(null())
};

hx::Class InputEvent_obj::__mClass;

Dynamic __Create_InputEvent_obj() { return new InputEvent_obj; }

void InputEvent_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("bonsai.input.InputEvent",e8,57,13,a6), hx::TCanCast< InputEvent_obj >,InputEvent_obj_sStaticFields,0,
	&__Create_InputEvent_obj, &__Create,
	&super::__SGetClass(), &CreateInputEvent_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &InputEvent_obj::__GetStatic;
}

void InputEvent_obj::__boot()
{
MouseDown = hx::CreateConstEnum< InputEvent_obj >(HX_("MouseDown",07,91,95,90),2);
MouseEnter = hx::CreateConstEnum< InputEvent_obj >(HX_("MouseEnter",d3,64,04,85),0);
MouseLeave = hx::CreateConstEnum< InputEvent_obj >(HX_("MouseLeave",b2,2c,d1,86),1);
MouseUp = hx::CreateConstEnum< InputEvent_obj >(HX_("MouseUp",c0,1b,c4,8d),3);
}


} // end namespace bonsai
} // end namespace input
