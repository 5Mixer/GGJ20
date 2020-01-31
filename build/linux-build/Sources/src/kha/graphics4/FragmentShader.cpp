// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <hxinc/kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a91516e8653714ce_14_new,"kha.graphics4.FragmentShader","new",0x0ee18576,"kha.graphics4.FragmentShader.new","kha/graphics4/FragmentShader.hx",14,0xa52f2538)
HX_LOCAL_STACK_FRAME(_hx_pos_a91516e8653714ce_20_init,"kha.graphics4.FragmentShader","init",0xf32bf93a,"kha.graphics4.FragmentShader.init","kha/graphics4/FragmentShader.hx",20,0xa52f2538)
HX_LOCAL_STACK_FRAME(_hx_pos_a91516e8653714ce_30_delete,"kha.graphics4.FragmentShader","delete",0xe494dcd5,"kha.graphics4.FragmentShader.delete","kha/graphics4/FragmentShader.hx",30,0xa52f2538)
HX_LOCAL_STACK_FRAME(_hx_pos_a91516e8653714ce_35__forceInclude,"kha.graphics4.FragmentShader","_forceInclude",0xcf9816f2,"kha.graphics4.FragmentShader._forceInclude","kha/graphics4/FragmentShader.hx",35,0xa52f2538)
HX_LOCAL_STACK_FRAME(_hx_pos_a91516e8653714ce_23_fromSource,"kha.graphics4.FragmentShader","fromSource",0x978e6f8f,"kha.graphics4.FragmentShader.fromSource","kha/graphics4/FragmentShader.hx",23,0xa52f2538)
namespace kha{
namespace graphics4{

void FragmentShader_obj::__construct(::Array< ::Dynamic> sources,::Array< ::String > files){
            	HX_STACKFRAME(&_hx_pos_a91516e8653714ce_14_new)
HXDLIN(  14)		if (hx::IsNotNull( sources )) {
HXLINE(  15)			this->init(sources->__get(0).StaticCast<  ::kha::internal::BytesBlob >(),files->__get(0));
            		}
            	}

Dynamic FragmentShader_obj::__CreateEmpty() { return new FragmentShader_obj; }

void *FragmentShader_obj::_hx_vtable = 0;

Dynamic FragmentShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FragmentShader_obj > _hx_result = new FragmentShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FragmentShader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07319ac6;
}

void FragmentShader_obj::init( ::kha::internal::BytesBlob source,::String file){
            	HX_STACKFRAME(&_hx_pos_a91516e8653714ce_20_init)
HXDLIN(  20)		shader = new Kore::Graphics4::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::Graphics4::FragmentShader);;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FragmentShader_obj,init,(void))

void FragmentShader_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_a91516e8653714ce_30_delete)
HXDLIN(  30)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FragmentShader_obj,_hx_delete,(void))

void FragmentShader_obj::_forceInclude(){
            	HX_STACKFRAME(&_hx_pos_a91516e8653714ce_35__forceInclude)
HXDLIN(  35)		::haxe::io::Bytes_obj::alloc(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FragmentShader_obj,_forceInclude,(void))

 ::kha::graphics4::FragmentShader FragmentShader_obj::fromSource(::String source){
            	HX_GC_STACKFRAME(&_hx_pos_a91516e8653714ce_23_fromSource)
HXLINE(  24)		 ::kha::graphics4::FragmentShader fragmentShader =  ::kha::graphics4::FragmentShader_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  25)		fragmentShader->shader = new Kore::Graphics4::Shader(source, Kore::Graphics4::FragmentShader);;
HXLINE(  26)		return fragmentShader;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FragmentShader_obj,fromSource,return )


hx::ObjectPtr< FragmentShader_obj > FragmentShader_obj::__new(::Array< ::Dynamic> sources,::Array< ::String > files) {
	hx::ObjectPtr< FragmentShader_obj > __this = new FragmentShader_obj();
	__this->__construct(sources,files);
	return __this;
}

hx::ObjectPtr< FragmentShader_obj > FragmentShader_obj::__alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files) {
	FragmentShader_obj *__this = (FragmentShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FragmentShader_obj), false, "kha.graphics4.FragmentShader"));
	*(void **)__this = FragmentShader_obj::_hx_vtable;
	__this->__construct(sources,files);
	return __this;
}

FragmentShader_obj::FragmentShader_obj()
{
}

hx::Val FragmentShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_forceInclude") ) { return hx::Val( _forceInclude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FragmentShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromSource") ) { outValue = fromSource_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *FragmentShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FragmentShader_obj_sStaticStorageInfo = 0;
#endif

static ::String FragmentShader_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("delete",2b,c0,d8,6a),
	HX_("_forceInclude",5c,ea,d8,d9),
	::String(null()) };

hx::Class FragmentShader_obj::__mClass;

static ::String FragmentShader_obj_sStaticFields[] = {
	HX_("fromSource",e5,b5,75,75),
	::String(null())
};

void FragmentShader_obj::__register()
{
	FragmentShader_obj _hx_dummy;
	FragmentShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.FragmentShader",84,52,b0,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FragmentShader_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FragmentShader_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FragmentShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FragmentShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FragmentShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FragmentShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
