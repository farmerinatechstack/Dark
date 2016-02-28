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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Gizmos_DrawWireCube_m5_254 (Object_t * __this /* static, unused */, Vector3_t5_56  ___center, Vector3_t5_56  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawWireCube(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Gizmos_INTERNAL_CALL_DrawWireCube_m5_255 (Object_t * __this /* static, unused */, Vector3_t5_56 * ___center, Vector3_t5_56 * ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawMesh(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Gizmos_DrawMesh_m5_256 (Object_t * __this /* static, unused */, Mesh_t5_26 * ___mesh, Vector3_t5_56  ___position, Quaternion_t5_57  ___rotation, Vector3_t5_56  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawMesh(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Gizmos_DrawMesh_m5_257 (Object_t * __this /* static, unused */, Mesh_t5_26 * ___mesh, int32_t ___submeshIndex, Vector3_t5_56  ___position, Quaternion_t5_57  ___rotation, Vector3_t5_56  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawMesh(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" void Gizmos_INTERNAL_CALL_DrawMesh_m5_258 (Object_t * __this /* static, unused */, Mesh_t5_26 * ___mesh, int32_t ___submeshIndex, Vector3_t5_56 * ___position, Quaternion_t5_57 * ___rotation, Vector3_t5_56 * ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C" void Gizmos_set_color_m5_259 (Object_t * __this /* static, unused */, Color_t5_167  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void Gizmos_INTERNAL_set_color_m5_260 (Object_t * __this /* static, unused */, Color_t5_167 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
extern "C" void Gizmos_set_matrix_m5_261 (Object_t * __this /* static, unused */, Matrix4x4_t5_58  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_set_matrix(UnityEngine.Matrix4x4&)
extern "C" void Gizmos_INTERNAL_set_matrix_m5_262 (Object_t * __this /* static, unused */, Matrix4x4_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
