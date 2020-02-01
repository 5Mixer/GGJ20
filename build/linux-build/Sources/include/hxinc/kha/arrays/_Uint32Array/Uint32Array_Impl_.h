// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_arrays__Uint32Array_Uint32Array_Impl_
#define INCLUDED_kha_arrays__Uint32Array_Uint32Array_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,arrays,Uint32ArrayPrivate)
HX_DECLARE_CLASS3(kha,arrays,_Uint32Array,Uint32Array_Impl_)

namespace kha{
namespace arrays{
namespace _Uint32Array{


class HXCPP_CLASS_ATTRIBUTES Uint32Array_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uint32Array_Impl__obj OBJ_;
		Uint32Array_Impl__obj();

	public:
		enum { _hx_ClassId = 0x05670ac5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.arrays._Uint32Array.Uint32Array_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.arrays._Uint32Array.Uint32Array_Impl_"); }

		inline static hx::ObjectPtr< Uint32Array_Impl__obj > __new() {
			hx::ObjectPtr< Uint32Array_Impl__obj > __this = new Uint32Array_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Uint32Array_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Uint32Array_Impl__obj *__this = (Uint32Array_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uint32Array_Impl__obj), false, "kha.arrays._Uint32Array.Uint32Array_Impl_"));
			*(void **)__this = Uint32Array_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uint32Array_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Uint32Array_Impl_",a0,68,89,0e); }

		static  ::kha::arrays::Uint32ArrayPrivate _new(hx::Null< int >  elements);
		static ::Dynamic _new_dyn();

		static void free( ::kha::arrays::Uint32ArrayPrivate this1);
		static ::Dynamic free_dyn();

		static int get_length( ::kha::arrays::Uint32ArrayPrivate this1);
		static ::Dynamic get_length_dyn();

		static int set( ::kha::arrays::Uint32ArrayPrivate this1,int index,int value);
		static ::Dynamic set_dyn();

		static int get( ::kha::arrays::Uint32ArrayPrivate this1,int index);
		static ::Dynamic get_dyn();

		static int arrayRead( ::kha::arrays::Uint32ArrayPrivate this1,int index);
		static ::Dynamic arrayRead_dyn();

		static int arrayWrite( ::kha::arrays::Uint32ArrayPrivate this1,int index,int value);
		static ::Dynamic arrayWrite_dyn();

};

} // end namespace kha
} // end namespace arrays
} // end namespace _Uint32Array

#endif /* INCLUDED_kha_arrays__Uint32Array_Uint32Array_Impl_ */ 
