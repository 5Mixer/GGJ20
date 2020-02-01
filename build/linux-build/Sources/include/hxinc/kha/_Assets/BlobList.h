// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha__Assets_BlobList
#define INCLUDED_kha__Assets_BlobList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,_Assets,BlobList)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{
namespace _Assets{


class HXCPP_CLASS_ATTRIBUTES BlobList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BlobList_obj OBJ_;
		BlobList_obj();

	public:
		enum { _hx_ClassId = 0x3d5a6b99 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha._Assets.BlobList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha._Assets.BlobList"); }
		static hx::ObjectPtr< BlobList_obj > __new();
		static hx::ObjectPtr< BlobList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlobList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlobList",7b,b4,7d,4b); }

		 ::kha::internal::BytesBlob get(::String name);
		::Dynamic get_dyn();

		 ::kha::internal::BytesBlob bodyParts2_ase;
		inline  ::kha::internal::BytesBlob _hx_set_bodyParts2_ase(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return bodyParts2_ase=_hx_v; }
		::String bodyParts2_aseName;
		inline ::String _hx_set_bodyParts2_aseName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return bodyParts2_aseName=_hx_v; }
		 ::Dynamic bodyParts2_aseDescription;
		inline  ::Dynamic _hx_set_bodyParts2_aseDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return bodyParts2_aseDescription=_hx_v; }
		void bodyParts2_aseLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic bodyParts2_aseLoad_dyn();

		void bodyParts2_aseUnload();
		::Dynamic bodyParts2_aseUnload_dyn();

		 ::kha::internal::BytesBlob castle1_tmx;
		inline  ::kha::internal::BytesBlob _hx_set_castle1_tmx(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle1_tmx=_hx_v; }
		::String castle1_tmxName;
		inline ::String _hx_set_castle1_tmxName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return castle1_tmxName=_hx_v; }
		 ::Dynamic castle1_tmxDescription;
		inline  ::Dynamic _hx_set_castle1_tmxDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle1_tmxDescription=_hx_v; }
		void castle1_tmxLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic castle1_tmxLoad_dyn();

		void castle1_tmxUnload();
		::Dynamic castle1_tmxUnload_dyn();

		 ::kha::internal::BytesBlob castle2_tmx;
		inline  ::kha::internal::BytesBlob _hx_set_castle2_tmx(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle2_tmx=_hx_v; }
		::String castle2_tmxName;
		inline ::String _hx_set_castle2_tmxName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return castle2_tmxName=_hx_v; }
		 ::Dynamic castle2_tmxDescription;
		inline  ::Dynamic _hx_set_castle2_tmxDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle2_tmxDescription=_hx_v; }
		void castle2_tmxLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic castle2_tmxLoad_dyn();

		void castle2_tmxUnload();
		::Dynamic castle2_tmxUnload_dyn();

		 ::kha::internal::BytesBlob castle3_tmx;
		inline  ::kha::internal::BytesBlob _hx_set_castle3_tmx(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle3_tmx=_hx_v; }
		::String castle3_tmxName;
		inline ::String _hx_set_castle3_tmxName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return castle3_tmxName=_hx_v; }
		 ::Dynamic castle3_tmxDescription;
		inline  ::Dynamic _hx_set_castle3_tmxDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle3_tmxDescription=_hx_v; }
		void castle3_tmxLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic castle3_tmxLoad_dyn();

		void castle3_tmxUnload();
		::Dynamic castle3_tmxUnload_dyn();

		 ::kha::internal::BytesBlob castle4_tmx;
		inline  ::kha::internal::BytesBlob _hx_set_castle4_tmx(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle4_tmx=_hx_v; }
		::String castle4_tmxName;
		inline ::String _hx_set_castle4_tmxName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return castle4_tmxName=_hx_v; }
		 ::Dynamic castle4_tmxDescription;
		inline  ::Dynamic _hx_set_castle4_tmxDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castle4_tmxDescription=_hx_v; }
		void castle4_tmxLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic castle4_tmxLoad_dyn();

		void castle4_tmxUnload();
		::Dynamic castle4_tmxUnload_dyn();

		 ::kha::internal::BytesBlob castleTiles_ase;
		inline  ::kha::internal::BytesBlob _hx_set_castleTiles_ase(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castleTiles_ase=_hx_v; }
		::String castleTiles_aseName;
		inline ::String _hx_set_castleTiles_aseName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return castleTiles_aseName=_hx_v; }
		 ::Dynamic castleTiles_aseDescription;
		inline  ::Dynamic _hx_set_castleTiles_aseDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castleTiles_aseDescription=_hx_v; }
		void castleTiles_aseLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic castleTiles_aseLoad_dyn();

		void castleTiles_aseUnload();
		::Dynamic castleTiles_aseUnload_dyn();

		 ::kha::internal::BytesBlob castleTiles_tsx;
		inline  ::kha::internal::BytesBlob _hx_set_castleTiles_tsx(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castleTiles_tsx=_hx_v; }
		::String castleTiles_tsxName;
		inline ::String _hx_set_castleTiles_tsxName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return castleTiles_tsxName=_hx_v; }
		 ::Dynamic castleTiles_tsxDescription;
		inline  ::Dynamic _hx_set_castleTiles_tsxDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return castleTiles_tsxDescription=_hx_v; }
		void castleTiles_tsxLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic castleTiles_tsxLoad_dyn();

		void castleTiles_tsxUnload();
		::Dynamic castleTiles_tsxUnload_dyn();

		 ::kha::internal::BytesBlob map_tmx;
		inline  ::kha::internal::BytesBlob _hx_set_map_tmx(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return map_tmx=_hx_v; }
		::String map_tmxName;
		inline ::String _hx_set_map_tmxName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return map_tmxName=_hx_v; }
		 ::Dynamic map_tmxDescription;
		inline  ::Dynamic _hx_set_map_tmxDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return map_tmxDescription=_hx_v; }
		void map_tmxLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic map_tmxLoad_dyn();

		void map_tmxUnload();
		::Dynamic map_tmxUnload_dyn();

		 ::kha::internal::BytesBlob satanicCircle_ase;
		inline  ::kha::internal::BytesBlob _hx_set_satanicCircle_ase(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return satanicCircle_ase=_hx_v; }
		::String satanicCircle_aseName;
		inline ::String _hx_set_satanicCircle_aseName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return satanicCircle_aseName=_hx_v; }
		 ::Dynamic satanicCircle_aseDescription;
		inline  ::Dynamic _hx_set_satanicCircle_aseDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return satanicCircle_aseDescription=_hx_v; }
		void satanicCircle_aseLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic satanicCircle_aseLoad_dyn();

		void satanicCircle_aseUnload();
		::Dynamic satanicCircle_aseUnload_dyn();

		 ::kha::internal::BytesBlob tiles_ase;
		inline  ::kha::internal::BytesBlob _hx_set_tiles_ase(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return tiles_ase=_hx_v; }
		::String tiles_aseName;
		inline ::String _hx_set_tiles_aseName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return tiles_aseName=_hx_v; }
		 ::Dynamic tiles_aseDescription;
		inline  ::Dynamic _hx_set_tiles_aseDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return tiles_aseDescription=_hx_v; }
		void tiles_aseLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic tiles_aseLoad_dyn();

		void tiles_aseUnload();
		::Dynamic tiles_aseUnload_dyn();

		 ::kha::internal::BytesBlob tiles_tsx;
		inline  ::kha::internal::BytesBlob _hx_set_tiles_tsx(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return tiles_tsx=_hx_v; }
		::String tiles_tsxName;
		inline ::String _hx_set_tiles_tsxName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return tiles_tsxName=_hx_v; }
		 ::Dynamic tiles_tsxDescription;
		inline  ::Dynamic _hx_set_tiles_tsxDescription(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return tiles_tsxDescription=_hx_v; }
		void tiles_tsxLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic tiles_tsxLoad_dyn();

		void tiles_tsxUnload();
		::Dynamic tiles_tsxUnload_dyn();

		::Array< ::String > names;
		inline ::Array< ::String > _hx_set_names(hx::StackContext *_hx_ctx,::Array< ::String > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return names=_hx_v; }
};

} // end namespace kha
} // end namespace _Assets

#endif /* INCLUDED_kha__Assets_BlobList */ 
