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

// UnityEngine.Mesh
struct Mesh_t5_26;
// UnityEngine.Texture
struct Texture_t5_33;
// UnityEngine.Material
struct Material_t5_35;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Graphics_DrawMeshNow_m5_144 (Object_t * __this /* static, unused */, Mesh_t5_26 * ___mesh, Vector3_t5_56  ___position, Quaternion_t5_57  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow1_m5_145 (Object_t * __this /* static, unused */, Mesh_t5_26 * ___mesh, Vector3_t5_56  ___position, Quaternion_t5_57  ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow1_m5_146 (Object_t * __this /* static, unused */, Mesh_t5_26 * ___mesh, Vector3_t5_56 * ___position, Quaternion_t5_57 * ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m5_147 (Object_t * __this /* static, unused */, Rect_t5_32  ___screenRect, Texture_t5_33 * ___texture, Material_t5_35 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m5_148 (Object_t * __this /* static, unused */, Rect_t5_32  ___screenRect, Texture_t5_33 * ___texture, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t5_35 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m5_149 (Object_t * __this /* static, unused */, Rect_t5_32  ___screenRect, Texture_t5_33 * ___texture, Rect_t5_32  ___sourceRect, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t5_35 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m5_150 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t5_31 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
