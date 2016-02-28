#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.RawImage
struct RawImage_t6_100;
// UnityEngine.Texture
struct Texture_t5_33;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t6_75;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m6_778 (RawImage_t6_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t5_33 * RawImage_get_mainTexture_m6_779 (RawImage_t6_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t5_33 * RawImage_get_texture_m6_780 (RawImage_t6_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m6_781 (RawImage_t6_100 * __this, Texture_t5_33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t5_32  RawImage_get_uvRect_m6_782 (RawImage_t6_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m6_783 (RawImage_t6_100 * __this, Rect_t5_32  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m6_784 (RawImage_t6_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C" void RawImage_OnPopulateMesh_m6_785 (RawImage_t6_100 * __this, VertexHelper_t6_75 * ___vh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
