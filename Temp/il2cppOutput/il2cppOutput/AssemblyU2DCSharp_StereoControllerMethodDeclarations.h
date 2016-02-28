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

// StereoController
struct StereoController_t7_21;
// CardboardEye[]
struct CardboardEyeU5BU5D_t7_41;
// CardboardHead
struct CardboardHead_t7_26;
// UnityEngine.Camera
struct Camera_t5_93;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// CardboardEye
struct CardboardEye_t7_23;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void StereoController::.ctor()
extern "C" void StereoController__ctor_m7_308 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C" CardboardEyeU5BU5D_t7_41* StereoController_get_Eyes_m7_309 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C" CardboardHead_t7_26 * StereoController_get_Head_m7_310 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m7_311 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::UpdateStereoValues()
extern "C" void StereoController_UpdateStereoValues_m7_312 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_cam()
extern "C" Camera_t5_93 * StereoController_get_cam_m7_313 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_cam(UnityEngine.Camera)
extern "C" void StereoController_set_cam_m7_314 (StereoController_t7_21 * __this, Camera_t5_93 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m7_315 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C" void StereoController_AddStereoRig_m7_316 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C" void StereoController_CreateEye_m7_317 (StereoController_t7_21 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(Cardboard/Eye,System.Single,System.Single)
extern "C" Vector3_t5_56  StereoController_ComputeStereoEyePosition_m7_318 (StereoController_t7_21 * __this, int32_t ___eye, float ___proj11, float ___zScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C" void StereoController_OnEnable_m7_319 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C" void StereoController_OnDisable_m7_320 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C" void StereoController_OnPreCull_m7_321 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C" Object_t * StereoController_EndOfFrame_m7_322 (StereoController_t7_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m7_323 (StereoController_t7_21 * __this, CardboardEye_t7_23 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t7_26 * StereoController_U3Cget_HeadU3Em__1_m7_324 (Object_t * __this /* static, unused */, CardboardEye_t7_23 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<AddStereoRig>m__2(CardboardEye)
extern "C" bool StereoController_U3CAddStereoRigU3Em__2_m7_325 (StereoController_t7_21 * __this, CardboardEye_t7_23 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
