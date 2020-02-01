// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_differ_data_RayCollision
#include <hxinc/differ/data/RayCollision.h>
#endif
#ifndef INCLUDED_differ_shapes_Ray
#include <hxinc/differ/shapes/Ray.h>
#endif
#ifndef INCLUDED_differ_shapes_Shape
#include <hxinc/differ/shapes/Shape.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_70e3cd5361115369_9_new,"differ.data.RayCollision","new",0x29df5f42,"differ.data.RayCollision.new","differ/data/RayCollision.hx",9,0xad474e0e)
HX_LOCAL_STACK_FRAME(_hx_pos_70e3cd5361115369_24_reset,"differ.data.RayCollision","reset",0x357ed531,"differ.data.RayCollision.reset","differ/data/RayCollision.hx",24,0xad474e0e)
HX_LOCAL_STACK_FRAME(_hx_pos_70e3cd5361115369_35_copy_from,"differ.data.RayCollision","copy_from",0xeb3e59d6,"differ.data.RayCollision.copy_from","differ/data/RayCollision.hx",35,0xad474e0e)
HX_LOCAL_STACK_FRAME(_hx_pos_70e3cd5361115369_44_clone,"differ.data.RayCollision","clone",0x97199ebf,"differ.data.RayCollision.clone","differ/data/RayCollision.hx",44,0xad474e0e)
namespace differ{
namespace data{

void RayCollision_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_70e3cd5361115369_9_new)
HXLINE(  19)		this->end = ((Float)0.0);
HXLINE(  17)		this->start = ((Float)0.0);
            	}

Dynamic RayCollision_obj::__CreateEmpty() { return new RayCollision_obj; }

void *RayCollision_obj::_hx_vtable = 0;

Dynamic RayCollision_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RayCollision_obj > _hx_result = new RayCollision_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RayCollision_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d906488;
}

 ::differ::data::RayCollision RayCollision_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_70e3cd5361115369_24_reset)
HXLINE(  26)		this->_hx_set_ray(HX_CTX, null());
HXLINE(  27)		this->_hx_set_shape(HX_CTX, null());
HXLINE(  28)		this->start = ((Float)0.0);
HXLINE(  29)		this->end = ((Float)0.0);
HXLINE(  31)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RayCollision_obj,reset,return )

void RayCollision_obj::copy_from( ::differ::data::RayCollision other){
            	HX_GC_STACKFRAME(&_hx_pos_70e3cd5361115369_35_copy_from)
HXLINE(  37)		this->_hx_set_ray(HX_CTX, other->ray);
HXLINE(  38)		this->_hx_set_shape(HX_CTX, other->shape);
HXLINE(  39)		this->start = other->start;
HXLINE(  40)		this->end = other->end;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RayCollision_obj,copy_from,(void))

 ::differ::data::RayCollision RayCollision_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_70e3cd5361115369_44_clone)
HXLINE(  46)		 ::differ::data::RayCollision _clone =  ::differ::data::RayCollision_obj::__alloc( HX_CTX );
HXLINE(  48)		{
HXLINE(  48)			_clone->_hx_set_ray(HX_CTX, this->ray);
HXDLIN(  48)			_clone->_hx_set_shape(HX_CTX, this->shape);
HXDLIN(  48)			_clone->start = this->start;
HXDLIN(  48)			_clone->end = this->end;
            		}
HXLINE(  50)		return _clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RayCollision_obj,clone,return )


hx::ObjectPtr< RayCollision_obj > RayCollision_obj::__new() {
	hx::ObjectPtr< RayCollision_obj > __this = new RayCollision_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< RayCollision_obj > RayCollision_obj::__alloc(hx::Ctx *_hx_ctx) {
	RayCollision_obj *__this = (RayCollision_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RayCollision_obj), true, "differ.data.RayCollision"));
	*(void **)__this = RayCollision_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RayCollision_obj::RayCollision_obj()
{
}

void RayCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayCollision);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(ray,"ray");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_END_CLASS();
}

void RayCollision_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(ray,"ray");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
}

hx::Val RayCollision_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return hx::Val( ray ); }
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return hx::Val( shape ); }
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copy_from") ) { return hx::Val( copy_from_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RayCollision_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { _hx_set_ray(HX_CTX_GET,inValue.Cast<  ::differ::shapes::Ray >()); return inValue; }
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { _hx_set_shape(HX_CTX_GET,inValue.Cast<  ::differ::shapes::Shape >()); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayCollision_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shape",21,e3,1c,7c));
	outFields->push(HX_("ray",ea,d5,56,00));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo RayCollision_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::differ::shapes::Shape */ ,(int)offsetof(RayCollision_obj,shape),HX_("shape",21,e3,1c,7c)},
	{hx::fsObject /*  ::differ::shapes::Ray */ ,(int)offsetof(RayCollision_obj,ray),HX_("ray",ea,d5,56,00)},
	{hx::fsFloat,(int)offsetof(RayCollision_obj,start),HX_("start",62,74,0b,84)},
	{hx::fsFloat,(int)offsetof(RayCollision_obj,end),HX_("end",db,03,4d,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RayCollision_obj_sStaticStorageInfo = 0;
#endif

static ::String RayCollision_obj_sMemberFields[] = {
	HX_("shape",21,e3,1c,7c),
	HX_("ray",ea,d5,56,00),
	HX_("start",62,74,0b,84),
	HX_("end",db,03,4d,00),
	HX_("reset",cf,49,c8,e6),
	HX_("copy_from",74,75,a1,e9),
	HX_("clone",5d,13,63,48),
	::String(null()) };

hx::Class RayCollision_obj::__mClass;

void RayCollision_obj::__register()
{
	RayCollision_obj _hx_dummy;
	RayCollision_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("differ.data.RayCollision",50,56,32,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RayCollision_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RayCollision_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RayCollision_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RayCollision_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace differ
} // end namespace data
