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

// UnityEngine.Experimental.Director.Playable
struct Playable_t5_123;
// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t5_301;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>
struct List_1_t1_896;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_PlayState.h"
#include "UnityEngine_UnityEngine_Experimental_Director_FrameData.h"

// System.Void UnityEngine.Experimental.Director.Playable::.ctor()
extern "C" void Playable__ctor_m5_1019 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::.ctor(System.Boolean)
extern "C" void Playable__ctor_m5_1020 (Playable_t5_123 * __this, bool ___callCPPConstructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose(System.Boolean)
extern "C" void Playable_Dispose_m5_1021 (Playable_t5_123 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetUniqueIDInternal()
extern "C" int32_t Playable_GetUniqueIDInternal_m5_1022 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_Connect_m5_1023 (Object_t * __this /* static, unused */, Playable_t5_123 * ___source, Playable_t5_123 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C" bool Playable_Connect_m5_1024 (Object_t * __this /* static, unused */, Playable_t5_123 * ___source, Playable_t5_123 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Disconnect(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C" void Playable_Disconnect_m5_1025 (Object_t * __this /* static, unused */, Playable_t5_123 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ReleaseEnginePlayable()
extern "C" void Playable_ReleaseEnginePlayable_m5_1026 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::InstantiateEnginePlayable()
extern "C" void Playable_InstantiateEnginePlayable_m5_1027 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GenerateUniqueId()
extern "C" int32_t Playable_GenerateUniqueId_m5_1028 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeightInternal(System.Int32,System.Single)
extern "C" bool Playable_SetInputWeightInternal_m5_1029 (Playable_t5_123 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeightInternal(System.Int32)
extern "C" float Playable_GetInputWeightInternal_m5_1030 (Playable_t5_123 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_time()
extern "C" double Playable_get_time_m5_1031 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_time(System.Double)
extern "C" void Playable_set_time_m5_1032 (Playable_t5_123 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::get_state()
extern "C" int32_t Playable_get_state_m5_1033 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C" void Playable_set_state_m5_1034 (Playable_t5_123 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::ConnectInternal(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C" bool Playable_ConnectInternal_m5_1035 (Object_t * __this /* static, unused */, Playable_t5_123 * ___source, Playable_t5_123 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::DisconnectInternal(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C" void Playable_DisconnectInternal_m5_1036 (Object_t * __this /* static, unused */, Playable_t5_123 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInput(System.Int32)
extern "C" Playable_t5_123 * Playable_GetInput_m5_1037 (Playable_t5_123 * __this, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetInputs()
extern "C" PlayableU5BU5D_t5_301* Playable_GetInputs_m5_1038 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_inputCount()
extern "C" int32_t Playable_get_inputCount_m5_1039 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_outputCount()
extern "C" int32_t Playable_get_outputCount_m5_1040 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ClearInputs()
extern "C" void Playable_ClearInputs_m5_1041 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutput(System.Int32)
extern "C" Playable_t5_123 * Playable_GetOutput_m5_1042 (Playable_t5_123 * __this, int32_t ___outputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetOutputs()
extern "C" PlayableU5BU5D_t5_301* Playable_GetOutputs_m5_1043 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputsInternal(System.Object)
extern "C" void Playable_GetInputsInternal_m5_1044 (Playable_t5_123 * __this, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputsInternal(System.Object)
extern "C" void Playable_GetOutputsInternal_m5_1045 (Playable_t5_123 * __this, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Finalize()
extern "C" void Playable_Finalize_m5_1046 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose()
extern "C" void Playable_Dispose_m5_1047 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Equals(System.Object)
extern "C" bool Playable_Equals_m5_1048 (Playable_t5_123 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetHashCode()
extern "C" int32_t Playable_GetHashCode_m5_1049 (Playable_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CompareIntPtr(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_CompareIntPtr_m5_1050 (Object_t * __this /* static, unused */, Playable_t5_123 * ___lhs, Playable_t5_123 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsNativePlayableAlive(UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_IsNativePlayableAlive_m5_1051 (Object_t * __this /* static, unused */, Playable_t5_123 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckPlayableValidity(UnityEngine.Experimental.Director.Playable,System.String)
extern "C" bool Playable_CheckPlayableValidity_m5_1052 (Object_t * __this /* static, unused */, Playable_t5_123 * ___playable, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32)
extern "C" bool Playable_CheckInputBounds_m5_1053 (Playable_t5_123 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32,System.Boolean)
extern "C" bool Playable_CheckInputBounds_m5_1054 (Playable_t5_123 * __this, int32_t ___inputIndex, bool ___acceptAny, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeight(System.Int32)
extern "C" float Playable_GetInputWeight_m5_1055 (Playable_t5_123 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeight(System.Int32,System.Single)
extern "C" bool Playable_SetInputWeight_m5_1056 (Playable_t5_123 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C" void Playable_GetInputs_m5_1057 (Playable_t5_123 * __this, List_1_t1_896 * ___inputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C" void Playable_GetOutputs_m5_1058 (Playable_t5_123 * __this, List_1_t1_896 * ___outputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::PrepareFrame(UnityEngine.Experimental.Director.FrameData)
extern "C" void Playable_PrepareFrame_m5_1059 (Playable_t5_123 * __this, FrameData_t5_278  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ProcessFrame(UnityEngine.Experimental.Director.FrameData,System.Object)
extern "C" void Playable_ProcessFrame_m5_1060 (Playable_t5_123 * __this, FrameData_t5_278  ___info, Object_t * ___playerData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetTime(System.Single)
extern "C" void Playable_OnSetTime_m5_1061 (Playable_t5_123 * __this, float ___localTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetPlayState(UnityEngine.Experimental.Director.PlayState)
extern "C" void Playable_OnSetPlayState_m5_1062 (Playable_t5_123 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Equality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_op_Equality_m5_1063 (Object_t * __this /* static, unused */, Playable_t5_123 * ___x, Playable_t5_123 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Inequality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_op_Inequality_m5_1064 (Object_t * __this /* static, unused */, Playable_t5_123 * ___x, Playable_t5_123 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Implicit(UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_op_Implicit_m5_1065 (Object_t * __this /* static, unused */, Playable_t5_123 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
