// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Residue
#define INCLUDED_kha_audio2_ogg_vorbis_data_Residue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Residue)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Residue_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Residue_obj OBJ_;
		Residue_obj();

	public:
		enum { _hx_ClassId = 0x0b018c97 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Residue")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.Residue"); }
		static hx::ObjectPtr< Residue_obj > __new();
		static hx::ObjectPtr< Residue_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Residue_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Residue",2b,e0,b3,30); }

		static  ::kha::audio2::ogg::vorbis::data::Residue read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::Array< ::Dynamic> codebooks);
		static ::Dynamic read_dyn();

		int begin;
		int end;
		int partSize;
		int classifications;
		int classbook;
		::Array< ::Dynamic> classdata;
		inline ::Array< ::Dynamic> _hx_set_classdata(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return classdata=_hx_v; }
		::Array< ::Dynamic> residueBooks;
		inline ::Array< ::Dynamic> _hx_set_residueBooks(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return residueBooks=_hx_v; }
		int type;
		void decode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState, ::kha::audio2::ogg::vorbis::data::Header header,::Array< ::Dynamic> residueBuffers,int ch,int n,::Array< bool > doNotDecode,::Array< ::Dynamic> channelBuffers);
		::Dynamic decode_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Residue */ 