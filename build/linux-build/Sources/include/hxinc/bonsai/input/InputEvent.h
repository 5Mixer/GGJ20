// Generated by Haxe 4.0.5
#ifndef INCLUDED_bonsai_input_InputEvent
#define INCLUDED_bonsai_input_InputEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(bonsai,input,InputEvent)
namespace bonsai{
namespace input{


class InputEvent_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InputEvent_obj OBJ_;

	public:
		InputEvent_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("bonsai.input.InputEvent",e8,57,13,a6); }
		::String __ToString() const { return HX_("InputEvent.",5e,c2,d0,6f) + _hx_tag; }

		static ::bonsai::input::InputEvent MouseEnter;
		static inline ::bonsai::input::InputEvent MouseEnter_dyn() { return MouseEnter; }
		static ::bonsai::input::InputEvent MouseLeave;
		static inline ::bonsai::input::InputEvent MouseLeave_dyn() { return MouseLeave; }
		static ::bonsai::input::InputEvent MouseScroll(int delta);
		static ::Dynamic MouseScroll_dyn();
};

} // end namespace bonsai
} // end namespace input

#endif /* INCLUDED_bonsai_input_InputEvent */ 
