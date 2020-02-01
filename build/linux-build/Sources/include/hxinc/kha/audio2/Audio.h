// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_audio2_Audio
#define INCLUDED_kha_audio2_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS2(kha,audio1,AudioChannel)
HX_DECLARE_CLASS2(kha,audio2,Audio)
HX_DECLARE_CLASS2(kha,audio2,Buffer)
HX_DECLARE_CLASS2(kha,internal,IntBox)

namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES Audio_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();

	public:
		enum { _hx_ClassId = 0x7a99c552 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.Audio"); }

		inline static hx::ObjectPtr< Audio_obj > __new() {
			hx::ObjectPtr< Audio_obj > __this = new Audio_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Audio_obj > __alloc(hx::Ctx *_hx_ctx) {
			Audio_obj *__this = (Audio_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Audio_obj), false, "kha.audio2.Audio"));
			*(void **)__this = Audio_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Audio",b6,e8,ad,ba); }

		static void __boot();
		static  ::kha::audio2::Buffer buffer;
		static  ::kha::internal::IntBox intBox;
		static void _init();
		static ::Dynamic _init_dyn();

		static void _callCallback(int samples,int sampleRate);
		static ::Dynamic _callCallback_dyn();

		static Float _readSample();
		static ::Dynamic _readSample_dyn();

		static bool disableGcInteractions;
		static int samplesPerSecond;
		static  ::Dynamic audioCallback;
		static Dynamic audioCallback_dyn() { return audioCallback;}
		static ::Dynamic stream( ::kha::Sound sound,hx::Null< bool >  loop);
		static ::Dynamic stream_dyn();

};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_Audio */ 
