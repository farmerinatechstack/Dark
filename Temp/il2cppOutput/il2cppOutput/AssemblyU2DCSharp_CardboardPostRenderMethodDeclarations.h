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

// CardboardPostRender
struct CardboardPostRender_t7_27;
// UnityEngine.Camera
struct Camera_t5_93;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5_182;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t5_295;
// UnityEngine.Color[]
struct ColorU5BU5D_t5_296;
// System.Int32[]
struct Int32U5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardPostRender::.ctor()
extern "C" void CardboardPostRender__ctor_m7_233 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::.cctor()
extern "C" void CardboardPostRender__cctor_m7_234 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardPostRender::get_cam()
extern "C" Camera_t5_93 * CardboardPostRender_get_cam_m7_235 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::set_cam(UnityEngine.Camera)
extern "C" void CardboardPostRender_set_cam_m7_236 (CardboardPostRender_t7_27 * __this, Camera_t5_93 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Reset()
extern "C" void CardboardPostRender_Reset_m7_237 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Awake()
extern "C" void CardboardPostRender_Awake_m7_238 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::OnRenderObject()
extern "C" void CardboardPostRender_OnRenderObject_m7_239 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::RebuildDistortionMesh()
extern "C" void CardboardPostRender_RebuildDistortionMesh_m7_240 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C" void CardboardPostRender_ComputeMeshPoints_m7_241 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, Vector3U5BU5D_t5_182** ___vertices, Vector2U5BU5D_t5_295** ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CardboardPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C" ColorU5BU5D_t5_296* CardboardPostRender_ComputeMeshColors_m7_242 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, Vector2U5BU5D_t5_295* ___tex, Int32U5BU5D_t1_159* ___indices, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] CardboardPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C" Int32U5BU5D_t1_159* CardboardPostRender_ComputeMeshIndices_m7_243 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawUILayer()
extern "C" void CardboardPostRender_DrawUILayer_m7_244 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeUIMatrix()
extern "C" void CardboardPostRender_ComputeUIMatrix_m7_245 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawSettingsButton()
extern "C" void CardboardPostRender_DrawSettingsButton_m7_246 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawAlignmentMarker()
extern "C" void CardboardPostRender_DrawAlignmentMarker_m7_247 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawVRBackButton()
extern "C" void CardboardPostRender_DrawVRBackButton_m7_248 (CardboardPostRender_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
