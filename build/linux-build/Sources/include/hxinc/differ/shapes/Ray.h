// Generated by Haxe 4.0.5
#ifndef INCLUDED_differ_shapes_Ray
#define INCLUDED_differ_shapes_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(differ,math,Vector)
HX_DECLARE_CLASS2(differ,shapes,InfiniteState)
HX_DECLARE_CLASS2(differ,shapes,Ray)

namespace differ{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES Ray_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Ray_obj OBJ_;
		Ray_obj();

	public:
		enum { _hx_ClassId = 0x1e69e1e6 };

		void __construct( ::differ::math::Vector _start, ::differ::math::Vector _end, ::differ::shapes::InfiniteState _infinite);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="differ.shapes.Ray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"differ.shapes.Ray"); }
		static hx::ObjectPtr< Ray_obj > __new( ::differ::math::Vector _start, ::differ::math::Vector _end, ::differ::shapes::InfiniteState _infinite);
		static hx::ObjectPtr< Ray_obj > __alloc(hx::Ctx *_hx_ctx, ::differ::math::Vector _start, ::differ::math::Vector _end, ::differ::shapes::InfiniteState _infinite);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ray_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ray",ca,8d,3e,00); }

		 ::differ::math::Vector start;
		inline  ::differ::math::Vector _hx_set_start(hx::StackContext *_hx_ctx, ::differ::math::Vector _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return start=_hx_v; }
		 ::differ::math::Vector end;
		inline  ::differ::math::Vector _hx_set_end(hx::StackContext *_hx_ctx, ::differ::math::Vector _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return end=_hx_v; }
		 ::differ::shapes::InfiniteState infinite;
		inline  ::differ::shapes::InfiniteState _hx_set_infinite(hx::StackContext *_hx_ctx, ::differ::shapes::InfiniteState _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return infinite=_hx_v; }
		 ::differ::math::Vector dir_cache;
		inline  ::differ::math::Vector _hx_set_dir_cache(hx::StackContext *_hx_ctx, ::differ::math::Vector _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return dir_cache=_hx_v; }
		 ::differ::math::Vector get_dir();
		::Dynamic get_dir_dyn();

};

} // end namespace differ
} // end namespace shapes

#endif /* INCLUDED_differ_shapes_Ray */ 
