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

// UnityEngine.Collider
struct Collider_t5_126;
// UnityEngine.Rigidbody
struct Rigidbody_t5_128;
// UnityEngine.Transform
struct Transform_t5_80;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" void RaycastHit_CalculateRaycastTexCoord_m5_1104 (Object_t * __this /* static, unused */, Vector2_t5_55 * ___output, Collider_t5_126 * ___col, Vector2_t5_55  ___uv, Vector3_t5_56  ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m5_1105 (Object_t * __this /* static, unused */, Vector2_t5_55 * ___output, Collider_t5_126 * ___col, Vector2_t5_55 * ___uv, Vector3_t5_56 * ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t5_56  RaycastHit_get_point_m5_1106 (RaycastHit_t5_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t5_56  RaycastHit_get_normal_m5_1107 (RaycastHit_t5_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m5_1108 (RaycastHit_t5_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern "C" Vector2_t5_55  RaycastHit_get_textureCoord_m5_1109 (RaycastHit_t5_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t5_126 * RaycastHit_get_collider_m5_1110 (RaycastHit_t5_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t5_128 * RaycastHit_get_rigidbody_m5_1111 (RaycastHit_t5_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t5_80 * RaycastHit_get_transform_m5_1112 (RaycastHit_t5_133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
