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

// CardboardReticle
struct CardboardReticle_t7_42;
// UnityEngine.Camera
struct Camera_t5_93;
// UnityEngine.GameObject
struct GameObject_t5_107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CardboardReticle::.ctor()
extern "C" void CardboardReticle__ctor_m7_330 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Start()
extern "C" void CardboardReticle_Start_m7_331 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnEnable()
extern "C" void CardboardReticle_OnEnable_m7_332 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnDisable()
extern "C" void CardboardReticle_OnDisable_m7_333 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Update()
extern "C" void CardboardReticle_Update_m7_334 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeEnabled()
extern "C" void CardboardReticle_OnGazeEnabled_m7_335 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeDisabled()
extern "C" void CardboardReticle_OnGazeDisabled_m7_336 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStart(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C" void CardboardReticle_OnGazeStart_m7_337 (CardboardReticle_t7_42 * __this, Camera_t5_93 * ___camera, GameObject_t5_107 * ___targetObject, Vector3_t5_56  ___intersectionPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStay(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C" void CardboardReticle_OnGazeStay_m7_338 (CardboardReticle_t7_42 * __this, Camera_t5_93 * ___camera, GameObject_t5_107 * ___targetObject, Vector3_t5_56  ___intersectionPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeExit(UnityEngine.Camera,UnityEngine.GameObject)
extern "C" void CardboardReticle_OnGazeExit_m7_339 (CardboardReticle_t7_42 * __this, Camera_t5_93 * ___camera, GameObject_t5_107 * ___targetObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerStart(UnityEngine.Camera)
extern "C" void CardboardReticle_OnGazeTriggerStart_m7_340 (CardboardReticle_t7_42 * __this, Camera_t5_93 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerEnd(UnityEngine.Camera)
extern "C" void CardboardReticle_OnGazeTriggerEnd_m7_341 (CardboardReticle_t7_42 * __this, Camera_t5_93 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::CreateReticleVertices()
extern "C" void CardboardReticle_CreateReticleVertices_m7_342 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::UpdateDiameters()
extern "C" void CardboardReticle_UpdateDiameters_m7_343 (CardboardReticle_t7_42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::SetGazeTarget(UnityEngine.Vector3)
extern "C" void CardboardReticle_SetGazeTarget_m7_344 (CardboardReticle_t7_42 * __this, Vector3_t5_56  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
