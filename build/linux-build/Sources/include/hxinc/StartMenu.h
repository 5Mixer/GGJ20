// Generated by Haxe 4.0.5
#ifndef INCLUDED_StartMenu
#define INCLUDED_StartMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_bonsai_scene_Scene
#include <hxinc/bonsai/scene/Scene.h>
#endif
HX_DECLARE_CLASS0(StartMenu)
HX_DECLARE_CLASS2(bonsai,scene,Scene)



class HXCPP_CLASS_ATTRIBUTES StartMenu_obj : public  ::bonsai::scene::Scene_obj
{
	public:
		typedef  ::bonsai::scene::Scene_obj super;
		typedef StartMenu_obj OBJ_;
		StartMenu_obj();

	public:
		enum { _hx_ClassId = 0x177aeb71 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StartMenu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"StartMenu"); }
		static hx::ObjectPtr< StartMenu_obj > __new();
		static hx::ObjectPtr< StartMenu_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StartMenu_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StartMenu",01,9f,1f,a3); }

};


#endif /* INCLUDED_StartMenu */ 
