// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <hxinc/kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Assets_BlobList
#include <hxinc/kha/_Assets/BlobList.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37d7e3a43e386237_31_new,"kha._Assets.BlobList","new",0xb2850123,"kha._Assets.BlobList.new","kha/Assets.hx",31,0x66f27110)
static const ::String _hx_array_data_cac733b1_1[] = {
	HX_("bodyRight_ase",0e,6f,9a,d0),HX_("chest_ase",75,df,6c,3c),HX_("heads_ase",07,bd,75,76),
};
static const ::String _hx_array_data_cac733b1_2[] = {
	HX_("heads.ase",98,48,12,56),
};
static const int _hx_array_data_cac733b1_3[] = {
	(int)1,
};
static const ::String _hx_array_data_cac733b1_4[] = {
	HX_("chest.ase",06,6b,09,1c),
};
static const int _hx_array_data_cac733b1_5[] = {
	(int)1,
};
static const ::String _hx_array_data_cac733b1_6[] = {
	HX_("bodyRight.ase",9f,fa,36,b0),
};
static const int _hx_array_data_cac733b1_7[] = {
	(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_37d7e3a43e386237_37_get,"kha._Assets.BlobList","get",0xb27fb159,"kha._Assets.BlobList.get","kha/Assets.hx",37,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_89b6f8aff09b9782_134_bodyRight_aseLoad,"kha._Assets.BlobList","bodyRight_aseLoad",0x51bab457,"kha._Assets.BlobList.bodyRight_aseLoad","kha/internal/AssetsBuilder.hx",134,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_89b6f8aff09b9782_176_bodyRight_aseUnload,"kha._Assets.BlobList","bodyRight_aseUnload",0x4a2f6970,"kha._Assets.BlobList.bodyRight_aseUnload","kha/internal/AssetsBuilder.hx",176,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_89b6f8aff09b9782_134_chest_aseLoad,"kha._Assets.BlobList","chest_aseLoad",0x6533e6be,"kha._Assets.BlobList.chest_aseLoad","kha/internal/AssetsBuilder.hx",134,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_89b6f8aff09b9782_176_chest_aseUnload,"kha._Assets.BlobList","chest_aseUnload",0x14274397,"kha._Assets.BlobList.chest_aseUnload","kha/internal/AssetsBuilder.hx",176,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_89b6f8aff09b9782_134_heads_aseLoad,"kha._Assets.BlobList","heads_aseLoad",0xe1eff550,"kha._Assets.BlobList.heads_aseLoad","kha/internal/AssetsBuilder.hx",134,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_89b6f8aff09b9782_176_heads_aseUnload,"kha._Assets.BlobList","heads_aseUnload",0x42f19aa9,"kha._Assets.BlobList.heads_aseUnload","kha/internal/AssetsBuilder.hx",176,0x6901246d)
namespace kha{
namespace _Assets{

void BlobList_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37d7e3a43e386237_31_new)
HXLINE( 191)		this->_hx_set_names(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_cac733b1_1,3));
HXLINE( 118)		this->_hx_set_heads_aseDescription(HX_CTX,  ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::fromData( _hx_array_data_cac733b1_2,1))
            			->setFixed(1,HX_("file_sizes",4f,23,b0,24),::Array_obj< int >::fromData( _hx_array_data_cac733b1_3,1))
            			->setFixed(2,HX_("name",4b,72,ff,48),HX_("heads_ase",07,bd,75,76))
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("blob",5d,3d,19,41))));
HXLINE( 110)		this->_hx_set_heads_aseName(HX_CTX, HX_("heads_ase",07,bd,75,76));
HXLINE(  85)		this->_hx_set_heads_ase(HX_CTX, null());
HXLINE( 118)		this->_hx_set_chest_aseDescription(HX_CTX,  ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::fromData( _hx_array_data_cac733b1_4,1))
            			->setFixed(1,HX_("file_sizes",4f,23,b0,24),::Array_obj< int >::fromData( _hx_array_data_cac733b1_5,1))
            			->setFixed(2,HX_("name",4b,72,ff,48),HX_("chest_ase",75,df,6c,3c))
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("blob",5d,3d,19,41))));
HXLINE( 110)		this->_hx_set_chest_aseName(HX_CTX, HX_("chest_ase",75,df,6c,3c));
HXLINE(  85)		this->_hx_set_chest_ase(HX_CTX, null());
HXLINE( 118)		this->_hx_set_bodyRight_aseDescription(HX_CTX,  ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::fromData( _hx_array_data_cac733b1_6,1))
            			->setFixed(1,HX_("file_sizes",4f,23,b0,24),::Array_obj< int >::fromData( _hx_array_data_cac733b1_7,1))
            			->setFixed(2,HX_("name",4b,72,ff,48),HX_("bodyRight_ase",0e,6f,9a,d0))
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("blob",5d,3d,19,41))));
HXLINE( 110)		this->_hx_set_bodyRight_aseName(HX_CTX, HX_("bodyRight_ase",0e,6f,9a,d0));
HXLINE(  85)		this->_hx_set_bodyRight_ase(HX_CTX, null());
            	}

Dynamic BlobList_obj::__CreateEmpty() { return new BlobList_obj; }

void *BlobList_obj::_hx_vtable = 0;

Dynamic BlobList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BlobList_obj > _hx_result = new BlobList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlobList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d5a6b99;
}

 ::kha::internal::BytesBlob BlobList_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_37d7e3a43e386237_37_get)
HXDLIN(  37)		return ( ( ::kha::internal::BytesBlob)(::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlobList_obj,get,return )

void BlobList_obj::bodyRight_aseLoad( ::Dynamic done, ::Dynamic failure){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::internal::BytesBlob blob){
            			HX_STACKFRAME(&_hx_pos_89b6f8aff09b9782_134_bodyRight_aseLoad)
HXDLIN( 134)			done();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_89b6f8aff09b9782_134_bodyRight_aseLoad)
HXDLIN( 134)		::kha::Assets_obj::loadBlob(HX_("bodyRight_ase",0e,6f,9a,d0), ::Dynamic(new _hx_Closure_0(done)),failure,hx::SourceInfo(HX_("kha/internal/AssetsBuilder.hx",6d,24,01,69),134,HX_("kha._Assets.BlobList",b1,33,c7,ca),HX_("bodyRight_aseLoad",54,d4,2a,e2)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BlobList_obj,bodyRight_aseLoad,(void))

void BlobList_obj::bodyRight_aseUnload(){
            	HX_GC_STACKFRAME(&_hx_pos_89b6f8aff09b9782_176_bodyRight_aseUnload)
HXLINE( 177)		this->bodyRight_ase->unload();
HXLINE( 178)		this->_hx_set_bodyRight_ase(HX_CTX, null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlobList_obj,bodyRight_aseUnload,(void))

void BlobList_obj::chest_aseLoad( ::Dynamic done, ::Dynamic failure){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::internal::BytesBlob blob){
            			HX_STACKFRAME(&_hx_pos_89b6f8aff09b9782_134_chest_aseLoad)
HXDLIN( 134)			done();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_89b6f8aff09b9782_134_chest_aseLoad)
HXDLIN( 134)		::kha::Assets_obj::loadBlob(HX_("chest_ase",75,df,6c,3c), ::Dynamic(new _hx_Closure_0(done)),failure,hx::SourceInfo(HX_("kha/internal/AssetsBuilder.hx",6d,24,01,69),134,HX_("kha._Assets.BlobList",b1,33,c7,ca),HX_("chest_aseLoad",3b,04,3b,ce)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BlobList_obj,chest_aseLoad,(void))

void BlobList_obj::chest_aseUnload(){
            	HX_GC_STACKFRAME(&_hx_pos_89b6f8aff09b9782_176_chest_aseUnload)
HXLINE( 177)		this->chest_ase->unload();
HXLINE( 178)		this->_hx_set_chest_ase(HX_CTX, null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlobList_obj,chest_aseUnload,(void))

void BlobList_obj::heads_aseLoad( ::Dynamic done, ::Dynamic failure){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::internal::BytesBlob blob){
            			HX_STACKFRAME(&_hx_pos_89b6f8aff09b9782_134_heads_aseLoad)
HXDLIN( 134)			done();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_89b6f8aff09b9782_134_heads_aseLoad)
HXDLIN( 134)		::kha::Assets_obj::loadBlob(HX_("heads_ase",07,bd,75,76), ::Dynamic(new _hx_Closure_0(done)),failure,hx::SourceInfo(HX_("kha/internal/AssetsBuilder.hx",6d,24,01,69),134,HX_("kha._Assets.BlobList",b1,33,c7,ca),HX_("heads_aseLoad",cd,12,f7,4a)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BlobList_obj,heads_aseLoad,(void))

void BlobList_obj::heads_aseUnload(){
            	HX_GC_STACKFRAME(&_hx_pos_89b6f8aff09b9782_176_heads_aseUnload)
HXLINE( 177)		this->heads_ase->unload();
HXLINE( 178)		this->_hx_set_heads_ase(HX_CTX, null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlobList_obj,heads_aseUnload,(void))


hx::ObjectPtr< BlobList_obj > BlobList_obj::__new() {
	hx::ObjectPtr< BlobList_obj > __this = new BlobList_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BlobList_obj > BlobList_obj::__alloc(hx::Ctx *_hx_ctx) {
	BlobList_obj *__this = (BlobList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BlobList_obj), true, "kha._Assets.BlobList"));
	*(void **)__this = BlobList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlobList_obj::BlobList_obj()
{
}

void BlobList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlobList);
	HX_MARK_MEMBER_NAME(bodyRight_ase,"bodyRight_ase");
	HX_MARK_MEMBER_NAME(bodyRight_aseName,"bodyRight_aseName");
	HX_MARK_MEMBER_NAME(bodyRight_aseDescription,"bodyRight_aseDescription");
	HX_MARK_MEMBER_NAME(chest_ase,"chest_ase");
	HX_MARK_MEMBER_NAME(chest_aseName,"chest_aseName");
	HX_MARK_MEMBER_NAME(chest_aseDescription,"chest_aseDescription");
	HX_MARK_MEMBER_NAME(heads_ase,"heads_ase");
	HX_MARK_MEMBER_NAME(heads_aseName,"heads_aseName");
	HX_MARK_MEMBER_NAME(heads_aseDescription,"heads_aseDescription");
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_END_CLASS();
}

void BlobList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bodyRight_ase,"bodyRight_ase");
	HX_VISIT_MEMBER_NAME(bodyRight_aseName,"bodyRight_aseName");
	HX_VISIT_MEMBER_NAME(bodyRight_aseDescription,"bodyRight_aseDescription");
	HX_VISIT_MEMBER_NAME(chest_ase,"chest_ase");
	HX_VISIT_MEMBER_NAME(chest_aseName,"chest_aseName");
	HX_VISIT_MEMBER_NAME(chest_aseDescription,"chest_aseDescription");
	HX_VISIT_MEMBER_NAME(heads_ase,"heads_ase");
	HX_VISIT_MEMBER_NAME(heads_aseName,"heads_aseName");
	HX_VISIT_MEMBER_NAME(heads_aseDescription,"heads_aseDescription");
	HX_VISIT_MEMBER_NAME(names,"names");
}

hx::Val BlobList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return hx::Val( names ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chest_ase") ) { return hx::Val( chest_ase ); }
		if (HX_FIELD_EQ(inName,"heads_ase") ) { return hx::Val( heads_ase ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodyRight_ase") ) { return hx::Val( bodyRight_ase ); }
		if (HX_FIELD_EQ(inName,"chest_aseName") ) { return hx::Val( chest_aseName ); }
		if (HX_FIELD_EQ(inName,"chest_aseLoad") ) { return hx::Val( chest_aseLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"heads_aseName") ) { return hx::Val( heads_aseName ); }
		if (HX_FIELD_EQ(inName,"heads_aseLoad") ) { return hx::Val( heads_aseLoad_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"chest_aseUnload") ) { return hx::Val( chest_aseUnload_dyn() ); }
		if (HX_FIELD_EQ(inName,"heads_aseUnload") ) { return hx::Val( heads_aseUnload_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bodyRight_aseName") ) { return hx::Val( bodyRight_aseName ); }
		if (HX_FIELD_EQ(inName,"bodyRight_aseLoad") ) { return hx::Val( bodyRight_aseLoad_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bodyRight_aseUnload") ) { return hx::Val( bodyRight_aseUnload_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"chest_aseDescription") ) { return hx::Val( chest_aseDescription ); }
		if (HX_FIELD_EQ(inName,"heads_aseDescription") ) { return hx::Val( heads_aseDescription ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"bodyRight_aseDescription") ) { return hx::Val( bodyRight_aseDescription ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BlobList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { _hx_set_names(HX_CTX_GET,inValue.Cast< ::Array< ::String > >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chest_ase") ) { _hx_set_chest_ase(HX_CTX_GET,inValue.Cast<  ::kha::internal::BytesBlob >()); return inValue; }
		if (HX_FIELD_EQ(inName,"heads_ase") ) { _hx_set_heads_ase(HX_CTX_GET,inValue.Cast<  ::kha::internal::BytesBlob >()); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodyRight_ase") ) { _hx_set_bodyRight_ase(HX_CTX_GET,inValue.Cast<  ::kha::internal::BytesBlob >()); return inValue; }
		if (HX_FIELD_EQ(inName,"chest_aseName") ) { _hx_set_chest_aseName(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		if (HX_FIELD_EQ(inName,"heads_aseName") ) { _hx_set_heads_aseName(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bodyRight_aseName") ) { _hx_set_bodyRight_aseName(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"chest_aseDescription") ) { _hx_set_chest_aseDescription(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		if (HX_FIELD_EQ(inName,"heads_aseDescription") ) { _hx_set_heads_aseDescription(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"bodyRight_aseDescription") ) { _hx_set_bodyRight_aseDescription(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlobList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bodyRight_ase",0e,6f,9a,d0));
	outFields->push(HX_("bodyRight_aseName",79,ac,72,e3));
	outFields->push(HX_("bodyRight_aseDescription",8e,90,f5,fd));
	outFields->push(HX_("chest_ase",75,df,6c,3c));
	outFields->push(HX_("chest_aseName",60,dc,82,cf));
	outFields->push(HX_("chest_aseDescription",87,3b,5e,93));
	outFields->push(HX_("heads_ase",07,bd,75,76));
	outFields->push(HX_("heads_aseName",f2,ea,3e,4c));
	outFields->push(HX_("heads_aseDescription",35,03,25,c7));
	outFields->push(HX_("names",c8,8f,84,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo BlobList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::internal::BytesBlob */ ,(int)offsetof(BlobList_obj,bodyRight_ase),HX_("bodyRight_ase",0e,6f,9a,d0)},
	{hx::fsString,(int)offsetof(BlobList_obj,bodyRight_aseName),HX_("bodyRight_aseName",79,ac,72,e3)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BlobList_obj,bodyRight_aseDescription),HX_("bodyRight_aseDescription",8e,90,f5,fd)},
	{hx::fsObject /*  ::kha::internal::BytesBlob */ ,(int)offsetof(BlobList_obj,chest_ase),HX_("chest_ase",75,df,6c,3c)},
	{hx::fsString,(int)offsetof(BlobList_obj,chest_aseName),HX_("chest_aseName",60,dc,82,cf)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BlobList_obj,chest_aseDescription),HX_("chest_aseDescription",87,3b,5e,93)},
	{hx::fsObject /*  ::kha::internal::BytesBlob */ ,(int)offsetof(BlobList_obj,heads_ase),HX_("heads_ase",07,bd,75,76)},
	{hx::fsString,(int)offsetof(BlobList_obj,heads_aseName),HX_("heads_aseName",f2,ea,3e,4c)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BlobList_obj,heads_aseDescription),HX_("heads_aseDescription",35,03,25,c7)},
	{hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(BlobList_obj,names),HX_("names",c8,8f,84,96)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BlobList_obj_sStaticStorageInfo = 0;
#endif

static ::String BlobList_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("bodyRight_ase",0e,6f,9a,d0),
	HX_("bodyRight_aseName",79,ac,72,e3),
	HX_("bodyRight_aseDescription",8e,90,f5,fd),
	HX_("bodyRight_aseLoad",54,d4,2a,e2),
	HX_("bodyRight_aseUnload",ad,42,e5,ee),
	HX_("chest_ase",75,df,6c,3c),
	HX_("chest_aseName",60,dc,82,cf),
	HX_("chest_aseDescription",87,3b,5e,93),
	HX_("chest_aseLoad",3b,04,3b,ce),
	HX_("chest_aseUnload",54,7a,4e,23),
	HX_("heads_ase",07,bd,75,76),
	HX_("heads_aseName",f2,ea,3e,4c),
	HX_("heads_aseDescription",35,03,25,c7),
	HX_("heads_aseLoad",cd,12,f7,4a),
	HX_("heads_aseUnload",66,d1,18,52),
	HX_("names",c8,8f,84,96),
	::String(null()) };

hx::Class BlobList_obj::__mClass;

void BlobList_obj::__register()
{
	BlobList_obj _hx_dummy;
	BlobList_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha._Assets.BlobList",b1,33,c7,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BlobList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlobList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlobList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlobList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace _Assets