// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_Sound
#define INCLUDED_kha_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Sound_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sound_obj OBJ_;
		Sound_obj();

	public:
		enum { _hx_ClassId = 0x6dd9d24b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.Sound"); }
		static hx::ObjectPtr< Sound_obj > __new();
		static hx::ObjectPtr< Sound_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Sound",af,fc,f9,13); }

		 ::haxe::io::Bytes compressedData;
		inline  ::haxe::io::Bytes _hx_set_compressedData(hx::StackContext *_hx_ctx, ::haxe::io::Bytes _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return compressedData=_hx_v; }
		 ::kha::arrays::Float32ArrayPrivate uncompressedData;
		inline  ::kha::arrays::Float32ArrayPrivate _hx_set_uncompressedData(hx::StackContext *_hx_ctx, ::kha::arrays::Float32ArrayPrivate _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return uncompressedData=_hx_v; }
		Float length;
		int channels;
		int sampleRate;
		void uncompress( ::Dynamic done);
		::Dynamic uncompress_dyn();

		void unload();
		::Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Sound */ 
