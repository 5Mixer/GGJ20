// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_3ee7a594df0770d6
#define INCLUDED_3ee7a594df0770d6
#include "cpp_int32array.h"
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <hxinc/cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_kha_arrays_Int32ArrayPrivate
#include <hxinc/kha/arrays/Int32ArrayPrivate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf028c87e3ba7a44_31_new,"kha.arrays.Int32ArrayPrivate","new",0x18429580,"kha.arrays.Int32ArrayPrivate.new","kha/arrays/Int32Array.hx",31,0x919f4bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_cf028c87e3ba7a44_41_finalize,"kha.arrays.Int32ArrayPrivate","finalize",0x780cec7e,"kha.arrays.Int32ArrayPrivate.finalize","kha/arrays/Int32Array.hx",41,0x919f4bc9)
namespace kha{
namespace arrays{

void Int32ArrayPrivate_obj::__construct(hx::Null< int >  __o_elements){
            		int elements = __o_elements.Default(0);
            	HX_STACKFRAME(&_hx_pos_cf028c87e3ba7a44_31_new)
HXLINE(  32)		this->self = int32array();
HXLINE(  33)		if ((elements > 0)) {
HXLINE(  34)			this->self.alloc(elements);
            		}
HXLINE(  37)		__hxcpp_set_finalizer(hx::ObjectPtr<OBJ_>(this),::cpp::Function< void ( ::kha::arrays::Int32ArrayPrivate)>(hx::AnyCast(&::kha::arrays::Int32ArrayPrivate_obj::finalize )));
            	}

Dynamic Int32ArrayPrivate_obj::__CreateEmpty() { return new Int32ArrayPrivate_obj; }

void *Int32ArrayPrivate_obj::_hx_vtable = 0;

Dynamic Int32ArrayPrivate_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Int32ArrayPrivate_obj > _hx_result = new Int32ArrayPrivate_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Int32ArrayPrivate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d5a9be2;
}

void Int32ArrayPrivate_obj::finalize( ::kha::arrays::Int32ArrayPrivate arr){
            	HX_STACKFRAME(&_hx_pos_cf028c87e3ba7a44_41_finalize)
HXDLIN(  41)		arr->self.free();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32ArrayPrivate_obj,finalize,(void))


hx::ObjectPtr< Int32ArrayPrivate_obj > Int32ArrayPrivate_obj::__new(hx::Null< int >  __o_elements) {
	hx::ObjectPtr< Int32ArrayPrivate_obj > __this = new Int32ArrayPrivate_obj();
	__this->__construct(__o_elements);
	return __this;
}

hx::ObjectPtr< Int32ArrayPrivate_obj > Int32ArrayPrivate_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_elements) {
	Int32ArrayPrivate_obj *__this = (Int32ArrayPrivate_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Int32ArrayPrivate_obj), true, "kha.arrays.Int32ArrayPrivate"));
	*(void **)__this = Int32ArrayPrivate_obj::_hx_vtable;
	__this->__construct(__o_elements);
	return __this;
}

Int32ArrayPrivate_obj::Int32ArrayPrivate_obj()
{
}

void Int32ArrayPrivate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Int32ArrayPrivate);
	HX_MARK_MEMBER_NAME(self,"self");
	HX_MARK_END_CLASS();
}

void Int32ArrayPrivate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(self,"self");
}

bool Int32ArrayPrivate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"finalize") ) { outValue = finalize_dyn(); return true; }
	}
	return false;
}

void Int32ArrayPrivate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("self",8c,8b,50,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Int32ArrayPrivate_obj_sMemberStorageInfo[] = {
	{hx::fsUnknown /*  int32array */ ,(int)offsetof(Int32ArrayPrivate_obj,self),HX_("self",8c,8b,50,4c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Int32ArrayPrivate_obj_sStaticStorageInfo = 0;
#endif

hx::Class Int32ArrayPrivate_obj::__mClass;

static ::String Int32ArrayPrivate_obj_sStaticFields[] = {
	HX_("finalize",9e,45,3a,f5),
	::String(null())
};

void Int32ArrayPrivate_obj::__register()
{
	Int32ArrayPrivate_obj _hx_dummy;
	Int32ArrayPrivate_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.arrays.Int32ArrayPrivate",8e,15,72,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int32ArrayPrivate_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Int32ArrayPrivate_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int32ArrayPrivate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int32ArrayPrivate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int32ArrayPrivate_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace arrays