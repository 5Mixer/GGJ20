// Generated by Haxe 4.0.5
#ifndef INCLUDED_EReg
#define INCLUDED_EReg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)



class HXCPP_CLASS_ATTRIBUTES EReg_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EReg_obj OBJ_;
		EReg_obj();

	public:
		enum { _hx_ClassId = 0x2dda4a0f };

		void __construct(::String r,::String opt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="EReg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"EReg"); }
		static hx::ObjectPtr< EReg_obj > __new(::String r,::String opt);
		static hx::ObjectPtr< EReg_obj > __alloc(hx::Ctx *_hx_ctx,::String r,::String opt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EReg_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EReg",0f,4a,da,2d); }

		 ::Dynamic r;
		inline  ::Dynamic _hx_set_r(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return r=_hx_v; }
		bool global;
		::String replace(::String s,::String by);
		::Dynamic replace_dyn();

};


#endif /* INCLUDED_EReg */ 
