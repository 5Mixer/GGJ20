// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ProbedPage
#include <hxinc/kha/audio2/ogg/vorbis/data/ProbedPage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_07cd2fac8db508eb_16_new,"kha.audio2.ogg.vorbis.data.ProbedPage","new",0x1974bce5,"kha.audio2.ogg.vorbis.data.ProbedPage.new","kha/audio2/ogg/vorbis/data/ProbedPage.hx",16,0x570a6d8a)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void ProbedPage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_07cd2fac8db508eb_16_new)
            	}

Dynamic ProbedPage_obj::__CreateEmpty() { return new ProbedPage_obj; }

void *ProbedPage_obj::_hx_vtable = 0;

Dynamic ProbedPage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProbedPage_obj > _hx_result = new ProbedPage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ProbedPage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1aca980f;
}


ProbedPage_obj::ProbedPage_obj()
{
}

void ProbedPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProbedPage);
	HX_MARK_MEMBER_NAME(pageStart,"pageStart");
	HX_MARK_MEMBER_NAME(pageEnd,"pageEnd");
	HX_MARK_MEMBER_NAME(afterPreviousPageStart,"afterPreviousPageStart");
	HX_MARK_MEMBER_NAME(firstDecodedSample,"firstDecodedSample");
	HX_MARK_MEMBER_NAME(lastDecodedSample,"lastDecodedSample");
	HX_MARK_END_CLASS();
}

void ProbedPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pageStart,"pageStart");
	HX_VISIT_MEMBER_NAME(pageEnd,"pageEnd");
	HX_VISIT_MEMBER_NAME(afterPreviousPageStart,"afterPreviousPageStart");
	HX_VISIT_MEMBER_NAME(firstDecodedSample,"firstDecodedSample");
	HX_VISIT_MEMBER_NAME(lastDecodedSample,"lastDecodedSample");
}

hx::Val ProbedPage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pageEnd") ) { return hx::Val( pageEnd ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageStart") ) { return hx::Val( pageStart ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastDecodedSample") ) { return hx::Val( lastDecodedSample ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"firstDecodedSample") ) { return hx::Val( firstDecodedSample ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"afterPreviousPageStart") ) { return hx::Val( afterPreviousPageStart ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ProbedPage_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pageEnd") ) { pageEnd=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageStart") ) { pageStart=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastDecodedSample") ) { _hx_set_lastDecodedSample(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"firstDecodedSample") ) { _hx_set_firstDecodedSample(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"afterPreviousPageStart") ) { afterPreviousPageStart=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProbedPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pageStart",93,4b,22,2a));
	outFields->push(HX_("pageEnd",cc,fc,3e,8b));
	outFields->push(HX_("afterPreviousPageStart",a0,6a,0b,94));
	outFields->push(HX_("firstDecodedSample",f0,75,41,16));
	outFields->push(HX_("lastDecodedSample",0a,04,19,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ProbedPage_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ProbedPage_obj,pageStart),HX_("pageStart",93,4b,22,2a)},
	{hx::fsInt,(int)offsetof(ProbedPage_obj,pageEnd),HX_("pageEnd",cc,fc,3e,8b)},
	{hx::fsInt,(int)offsetof(ProbedPage_obj,afterPreviousPageStart),HX_("afterPreviousPageStart",a0,6a,0b,94)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ProbedPage_obj,firstDecodedSample),HX_("firstDecodedSample",f0,75,41,16)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ProbedPage_obj,lastDecodedSample),HX_("lastDecodedSample",0a,04,19,11)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProbedPage_obj_sStaticStorageInfo = 0;
#endif

static ::String ProbedPage_obj_sMemberFields[] = {
	HX_("pageStart",93,4b,22,2a),
	HX_("pageEnd",cc,fc,3e,8b),
	HX_("afterPreviousPageStart",a0,6a,0b,94),
	HX_("firstDecodedSample",f0,75,41,16),
	HX_("lastDecodedSample",0a,04,19,11),
	::String(null()) };

hx::Class ProbedPage_obj::__mClass;

void ProbedPage_obj::__register()
{
	ProbedPage_obj _hx_dummy;
	ProbedPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.data.ProbedPage",73,66,f9,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProbedPage_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProbedPage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProbedPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProbedPage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
