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

// GazeInputModule
struct GazeInputModule_t7_37;
// UnityEngine.GameObject
struct GameObject_t5_107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void GazeInputModule::.ctor()
extern "C" void GazeInputModule__ctor_m7_270 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C" bool GazeInputModule_ShouldActivateModule_m7_271 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C" void GazeInputModule_DeactivateModule_m7_272 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool GazeInputModule_IsPointerOverGameObject_m7_273 (GazeInputModule_t7_37 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C" void GazeInputModule_Process_m7_274 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C" void GazeInputModule_CastRayFromGaze_m7_275 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C" void GazeInputModule_UpdateCurrentObject_m7_276 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateReticle(UnityEngine.GameObject)
extern "C" void GazeInputModule_UpdateReticle_m7_277 (GazeInputModule_t7_37 * __this, GameObject_t5_107 * ___previousGazedObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleDrag()
extern "C" void GazeInputModule_HandleDrag_m7_278 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C" void GazeInputModule_HandlePendingClick_m7_279 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C" void GazeInputModule_HandleTrigger_m7_280 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C" Vector2_t5_55  GazeInputModule_NormalizedCartesianToSpherical_m7_281 (GazeInputModule_t7_37 * __this, Vector3_t5_56  ___cartCoords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GazeInputModule::GetCurrentGameObject()
extern "C" GameObject_t5_107 * GazeInputModule_GetCurrentGameObject_m7_282 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GazeInputModule::GetIntersectionPosition()
extern "C" Vector3_t5_56  GazeInputModule_GetIntersectionPosition_m7_283 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DisableGazePointer()
extern "C" void GazeInputModule_DisableGazePointer_m7_284 (GazeInputModule_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
