// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mapping
#define INCLUDED_kha_audio2_ogg_vorbis_data_Mapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Mapping)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,MappingChannel)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Mapping_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mapping_obj OBJ_;
		Mapping_obj();

	public:
		enum { _hx_ClassId = 0x1b63d376 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Mapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.Mapping"); }
		static hx::ObjectPtr< Mapping_obj > __new();
		static hx::ObjectPtr< Mapping_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mapping_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mapping",ee,a2,cb,11); }

		static  ::kha::audio2::ogg::vorbis::data::Mapping read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,int channels);
		static ::Dynamic read_dyn();

		int couplingSteps;
		::Array< ::Dynamic> chan;
		inline ::Array< ::Dynamic> _hx_set_chan(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return chan=_hx_v; }
		int submaps;
		::Array< int > submapFloor;
		inline ::Array< int > _hx_set_submapFloor(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return submapFloor=_hx_v; }
		::Array< int > submapResidue;
		inline ::Array< int > _hx_set_submapResidue(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return submapResidue=_hx_v; }
		void doFloor(::Array< ::Dynamic> floors,int i,int n,::Array< Float > target,::Array< int > finalY,::Array< bool > step2Flag);
		::Dynamic doFloor_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Mapping */ 
