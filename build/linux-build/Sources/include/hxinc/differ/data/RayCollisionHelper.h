// Generated by Haxe 4.0.5
#ifndef INCLUDED_differ_data_RayCollisionHelper
#define INCLUDED_differ_data_RayCollisionHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(differ,data,RayCollision)
HX_DECLARE_CLASS2(differ,data,RayCollisionHelper)

namespace differ{
namespace data{


class HXCPP_CLASS_ATTRIBUTES RayCollisionHelper_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RayCollisionHelper_obj OBJ_;
		RayCollisionHelper_obj();

	public:
		enum { _hx_ClassId = 0x5c3d6c16 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="differ.data.RayCollisionHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"differ.data.RayCollisionHelper"); }

		inline static hx::ObjectPtr< RayCollisionHelper_obj > __new() {
			hx::ObjectPtr< RayCollisionHelper_obj > __this = new RayCollisionHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< RayCollisionHelper_obj > __alloc(hx::Ctx *_hx_ctx) {
			RayCollisionHelper_obj *__this = (RayCollisionHelper_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RayCollisionHelper_obj), false, "differ.data.RayCollisionHelper"));
			*(void **)__this = RayCollisionHelper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayCollisionHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RayCollisionHelper",d6,08,cf,de); }

		static Float hitStartX( ::differ::data::RayCollision data);
		static ::Dynamic hitStartX_dyn();

		static Float hitStartY( ::differ::data::RayCollision data);
		static ::Dynamic hitStartY_dyn();

		static Float hitEndX( ::differ::data::RayCollision data);
		static ::Dynamic hitEndX_dyn();

		static Float hitEndY( ::differ::data::RayCollision data);
		static ::Dynamic hitEndY_dyn();

};

} // end namespace differ
} // end namespace data

#endif /* INCLUDED_differ_data_RayCollisionHelper */ 
