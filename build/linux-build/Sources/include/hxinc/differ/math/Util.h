// Generated by Haxe 4.0.5
#ifndef INCLUDED_differ_math_Util
#define INCLUDED_differ_math_Util

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(differ,math,Util)

namespace differ{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Util_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Util_obj OBJ_;
		Util_obj();

	public:
		enum { _hx_ClassId = 0x7ca59688 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="differ.math.Util")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"differ.math.Util"); }

		inline static hx::ObjectPtr< Util_obj > __new() {
			hx::ObjectPtr< Util_obj > __this = new Util_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Util_obj > __alloc(hx::Ctx *_hx_ctx) {
			Util_obj *__this = (Util_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Util_obj), false, "differ.math.Util"));
			*(void **)__this = Util_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Util_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Util",22,84,87,38); }

		static Float vec_lengthsq(Float x,Float y);
		static ::Dynamic vec_lengthsq_dyn();

		static Float vec_length(Float x,Float y);
		static ::Dynamic vec_length_dyn();

		static Float vec_normalize(Float length,Float component);
		static ::Dynamic vec_normalize_dyn();

		static Float vec_dot(Float x,Float y,Float otherx,Float othery);
		static ::Dynamic vec_dot_dyn();

};

} // end namespace differ
} // end namespace math

#endif /* INCLUDED_differ_math_Util */ 
