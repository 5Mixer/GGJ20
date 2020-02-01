// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_math_FastVector3
#define INCLUDED_kha_math_FastVector3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,FastVector3)
HX_DECLARE_CLASS2(kha,math,Vector3)

namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FastVector3_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FastVector3_obj OBJ_;
		FastVector3_obj();

	public:
		enum { _hx_ClassId = 0x06595af4 };

		void __construct(hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.math.FastVector3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.math.FastVector3"); }
		static hx::ObjectPtr< FastVector3_obj > __new(hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z);
		static hx::ObjectPtr< FastVector3_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FastVector3_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FastVector3",b4,c2,44,6e); }

		static  ::kha::math::FastVector3 fromVector3( ::kha::math::Vector3 v);
		static ::Dynamic fromVector3_dyn();

		float x;
		float y;
		float z;
		float get_length();
		::Dynamic get_length_dyn();

		float set_length(float length);
		::Dynamic set_length_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_FastVector3 */ 
