// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__edge
#define INCLUDED_kha_graphics2_truetype_Stbtt__edge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3097488c5b0804d8_156_new)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__edge)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt__edge_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt__edge_obj OBJ_;
		Stbtt__edge_obj();

	public:
		enum { _hx_ClassId = 0x4646de93 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt__edge")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt__edge"); }

		inline static hx::ObjectPtr< Stbtt__edge_obj > __new() {
			hx::ObjectPtr< Stbtt__edge_obj > __this = new Stbtt__edge_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Stbtt__edge_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt__edge_obj *__this = (Stbtt__edge_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt__edge_obj), false, "kha.graphics2.truetype.Stbtt__edge"));
			*(void **)__this = Stbtt__edge_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3097488c5b0804d8_156_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt__edge_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stbtt__edge",5e,fa,e1,5e); }

		Float x0;
		Float y0;
		Float x1;
		Float y1;
		bool invert;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt__edge */ 
