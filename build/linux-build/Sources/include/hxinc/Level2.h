// Generated by Haxe 4.0.5
#ifndef INCLUDED_Level2
#define INCLUDED_Level2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_bonsai_scene_Scene
#include <hxinc/bonsai/scene/Scene.h>
#endif
HX_DECLARE_CLASS0(Level2)
HX_DECLARE_CLASS2(bonsai,scene,Scene)



class HXCPP_CLASS_ATTRIBUTES Level2_obj : public  ::bonsai::scene::Scene_obj
{
	public:
		typedef  ::bonsai::scene::Scene_obj super;
		typedef Level2_obj OBJ_;
		Level2_obj();

	public:
		enum { _hx_ClassId = 0x174695b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Level2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Level2"); }
		static hx::ObjectPtr< Level2_obj > __new();
		static hx::ObjectPtr< Level2_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level2_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Level2",4e,32,e4,d8); }

};


#endif /* INCLUDED_Level2 */ 
