// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis__VorbisDecodeState_FindPageResult
#include <hxinc/kha/audio2/ogg/vorbis/_VorbisDecodeState/FindPageResult.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace _VorbisDecodeState{

::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult FindPageResult_obj::Found(int end,bool last)
{
	return hx::CreateEnum< FindPageResult_obj >(HX_("Found",22,72,c4,97),0,2)->_hx_init(0,end)->_hx_init(1,last);
}

::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult FindPageResult_obj::NotFound;

bool FindPageResult_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Found",22,72,c4,97)) { outValue = FindPageResult_obj::Found_dyn(); return true; }
	if (inName==HX_("NotFound",4f,90,57,6e)) { outValue = FindPageResult_obj::NotFound; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FindPageResult_obj)

int FindPageResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Found",22,72,c4,97)) return 0;
	if (inName==HX_("NotFound",4f,90,57,6e)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FindPageResult_obj,Found,return)

int FindPageResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Found",22,72,c4,97)) return 2;
	if (inName==HX_("NotFound",4f,90,57,6e)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FindPageResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Found",22,72,c4,97)) return Found_dyn();
	if (inName==HX_("NotFound",4f,90,57,6e)) return NotFound;
	return super::__Field(inName,inCallProp);
}

static ::String FindPageResult_obj_sStaticFields[] = {
	HX_("Found",22,72,c4,97),
	HX_("NotFound",4f,90,57,6e),
	::String(null())
};

hx::Class FindPageResult_obj::__mClass;

Dynamic __Create_FindPageResult_obj() { return new FindPageResult_obj; }

void FindPageResult_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult",ee,31,c2,12), hx::TCanCast< FindPageResult_obj >,FindPageResult_obj_sStaticFields,0,
	&__Create_FindPageResult_obj, &__Create,
	&super::__SGetClass(), &CreateFindPageResult_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FindPageResult_obj::__GetStatic;
}

void FindPageResult_obj::__boot()
{
NotFound = hx::CreateConstEnum< FindPageResult_obj >(HX_("NotFound",4f,90,57,6e),1);
}


} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace _VorbisDecodeState
