// Generated by Haxe 4.0.5
#ifndef INCLUDED_hxnoise_Perlin
#define INCLUDED_hxnoise_Perlin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxnoise,Perlin)

namespace hxnoise{


class HXCPP_CLASS_ATTRIBUTES Perlin_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Perlin_obj OBJ_;
		Perlin_obj();

	public:
		enum { _hx_ClassId = 0x57e79e1a };

		void __construct(hx::Null< int >  __o_repeat);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxnoise.Perlin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hxnoise.Perlin"); }
		static hx::ObjectPtr< Perlin_obj > __new(hx::Null< int >  __o_repeat);
		static hx::ObjectPtr< Perlin_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_repeat);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Perlin_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Perlin",b4,16,b2,6f); }

		static void __boot();
		static ::Array< int > PERMUTATIONS;
		static ::Array< int > P;
		static Float grad(int hash,Float x,Float y,Float z);
		static ::Dynamic grad_dyn();

		int repeat;
		Float perlin(Float x,Float y,Float z);
		::Dynamic perlin_dyn();

		Float OctavePerlin(Float x,Float y,Float z,int octaves,Float persistence,Float frequency);
		::Dynamic OctavePerlin_dyn();

		Float fade(Float t);
		::Dynamic fade_dyn();

		int inc(int num);
		::Dynamic inc_dyn();

		Float lerp(Float a,Float b,Float x);
		::Dynamic lerp_dyn();

};

} // end namespace hxnoise

#endif /* INCLUDED_hxnoise_Perlin */ 
