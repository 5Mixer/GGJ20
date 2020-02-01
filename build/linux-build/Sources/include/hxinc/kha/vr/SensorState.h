// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_vr_SensorState
#define INCLUDED_kha_vr_SensorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_93d01868deda17fb_19_new)
HX_DECLARE_CLASS2(kha,vr,PoseState)
HX_DECLARE_CLASS2(kha,vr,SensorState)

namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES SensorState_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SensorState_obj OBJ_;
		SensorState_obj();

	public:
		enum { _hx_ClassId = 0x5c247277 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.vr.SensorState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.vr.SensorState"); }

		inline static hx::ObjectPtr< SensorState_obj > __new() {
			hx::ObjectPtr< SensorState_obj > __this = new SensorState_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< SensorState_obj > __alloc(hx::Ctx *_hx_ctx) {
			SensorState_obj *__this = (SensorState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SensorState_obj), true, "kha.vr.SensorState"));
			*(void **)__this = SensorState_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_93d01868deda17fb_19_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SensorState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SensorState",57,f9,98,ae); }

		 ::kha::vr::PoseState Predicted;
		inline  ::kha::vr::PoseState _hx_set_Predicted(hx::StackContext *_hx_ctx, ::kha::vr::PoseState _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return Predicted=_hx_v; }
		 ::kha::vr::PoseState Recorded;
		inline  ::kha::vr::PoseState _hx_set_Recorded(hx::StackContext *_hx_ctx, ::kha::vr::PoseState _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return Recorded=_hx_v; }
		Float Temperature;
		int Status;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_SensorState */ 
