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

// CardboardEye
struct CardboardEye_t7_23;
// StereoController
struct StereoController_t7_21;
// CardboardHead
struct CardboardHead_t7_26;
// UnityEngine.Camera
struct Camera_t5_93;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void CardboardEye::.ctor()
extern "C" void CardboardEye__ctor_m7_208 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C" StereoController_t7_21 * CardboardEye_get_Controller_m7_209 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C" CardboardHead_t7_26 * CardboardEye_get_Head_m7_210 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardEye::get_cam()
extern "C" Camera_t5_93 * CardboardEye_get_cam_m7_211 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::set_cam(UnityEngine.Camera)
extern "C" void CardboardEye_set_cam_m7_212 (CardboardEye_t7_23 * __this, Camera_t5_93 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C" void CardboardEye_Awake_m7_213 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C" void CardboardEye_Start_m7_214 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&)
extern "C" void CardboardEye_FixProjection_m7_215 (CardboardEye_t7_23 * __this, Matrix4x4_t5_58 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardEye::FixViewport(UnityEngine.Rect)
extern "C" Rect_t5_32  CardboardEye_FixViewport_m7_216 (CardboardEye_t7_23 * __this, Rect_t5_32  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::UpdateStereoValues()
extern "C" void CardboardEye_UpdateStereoValues_m7_217 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::SetupStereo()
extern "C" void CardboardEye_SetupStereo_m7_218 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m7_219 (CardboardEye_t7_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m7_220 (CardboardEye_t7_23 * __this, StereoController_t7_21 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
