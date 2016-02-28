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

// CardboardAudioListener
struct CardboardAudioListener_t7_10;
// System.Single[]
struct SingleU5BU5D_t1_852;
// UnityEngine.Transform
struct Transform_t5_80;
// CardboardAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t7_13;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t5_295;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardAudio_Quality.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void CardboardAudio::.cctor()
extern "C" void CardboardAudio__cctor_m7_29 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_SampleRate()
extern "C" int32_t CardboardAudio_get_SampleRate_m7_30 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_NumChannels()
extern "C" int32_t CardboardAudio_get_NumChannels_m7_31 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_FramesPerBuffer()
extern "C" int32_t CardboardAudio_get_FramesPerBuffer_m7_32 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Initialize(CardboardAudioListener,CardboardAudio/Quality)
extern "C" void CardboardAudio_Initialize_m7_33 (Object_t * __this /* static, unused */, CardboardAudioListener_t7_10 * ___listener, int32_t ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Shutdown(CardboardAudioListener)
extern "C" void CardboardAudio_Shutdown_m7_34 (Object_t * __this /* static, unused */, CardboardAudioListener_t7_10 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessAudioListener(System.Single[],System.Int32)
extern "C" void CardboardAudio_ProcessAudioListener_m7_35 (Object_t * __this /* static, unused */, SingleU5BU5D_t1_852* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioListener(System.Single,System.Single)
extern "C" void CardboardAudio_UpdateAudioListener_m7_36 (Object_t * __this /* static, unused */, float ___globalGainDb, float ___worldScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateAudioSource(System.Boolean)
extern "C" int32_t CardboardAudio_CreateAudioSource_m7_37 (Object_t * __this /* static, unused */, bool ___hrtfEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyAudioSource(System.Int32)
extern "C" void CardboardAudio_DestroyAudioSource_m7_38 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessAudioSource(System.Int32,System.Single[],System.Int32)
extern "C" void CardboardAudio_ProcessAudioSource_m7_39 (Object_t * __this /* static, unused */, int32_t ___id, SingleU5BU5D_t1_852* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioSource(System.Int32,UnityEngine.Transform,System.Single,UnityEngine.AudioRolloffMode,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" void CardboardAudio_UpdateAudioSource_m7_40 (Object_t * __this /* static, unused */, int32_t ___id, Transform_t5_80 * ___transform, float ___gainDb, int32_t ___rolloffMode, float ___minDistance, float ___maxDistance, float ___alpha, float ___sharpness, float ___occlusion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateAudioRoom()
extern "C" int32_t CardboardAudio_CreateAudioRoom_m7_41 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyAudioRoom(System.Int32)
extern "C" void CardboardAudio_DestroyAudioRoom_m7_42 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioRoom(System.Int32,UnityEngine.Transform,CardboardAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3)
extern "C" void CardboardAudio_UpdateAudioRoom_m7_43 (Object_t * __this /* static, unused */, int32_t ___id, Transform_t5_80 * ___transform, SurfaceMaterialU5BU5D_t7_13* ___materials, float ___reflectivity, float ___reverbGainDb, float ___reverbBrightness, float ___reverbTime, Vector3_t5_56  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C" float CardboardAudio_ComputeOcclusion_m7_44 (Object_t * __this /* static, unused */, Transform_t5_80 * ___sourceTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] CardboardAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C" Vector2U5BU5D_t5_295* CardboardAudio_Generate2dPolarPattern_m7_45 (Object_t * __this /* static, unused */, float ___alpha, float ___order, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudio::ConvertAmplitudeFromDb(System.Single)
extern "C" float CardboardAudio_ConvertAmplitudeFromDb_m7_46 (Object_t * __this /* static, unused */, float ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" void CardboardAudio_ConvertAudioTransformFromUnity_m7_47 (Object_t * __this /* static, unused */, Vector3_t5_56 * ___position, Quaternion_t5_57 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessListener(System.Single[],System.Int32)
extern "C" void CardboardAudio_ProcessListener_m7_48 (Object_t * __this /* static, unused */, SingleU5BU5D_t1_852* ___data, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetListenerGain(System.Single)
extern "C" void CardboardAudio_SetListenerGain_m7_49 (Object_t * __this /* static, unused */, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetListenerTransform(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" void CardboardAudio_SetListenerTransform_m7_50 (Object_t * __this /* static, unused */, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateSource(System.Boolean)
extern "C" int32_t CardboardAudio_CreateSource_m7_51 (Object_t * __this /* static, unused */, bool ___enableHrtf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroySource(System.Int32)
extern "C" void CardboardAudio_DestroySource_m7_52 (Object_t * __this /* static, unused */, int32_t ___sourceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ProcessSource(System.Int32,System.Int32,System.Single[],System.Single[])
extern "C" void CardboardAudio_ProcessSource_m7_53 (Object_t * __this /* static, unused */, int32_t ___sourceId, int32_t ___bufferSize, SingleU5BU5D_t1_852* ___input, SingleU5BU5D_t1_852* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C" void CardboardAudio_SetSourceDirectivity_m7_54 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___alpha, float ___order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceDistanceAttenuationMethod(System.Int32,UnityEngine.AudioRolloffMode,System.Single,System.Single)
extern "C" void CardboardAudio_SetSourceDistanceAttenuationMethod_m7_55 (Object_t * __this /* static, unused */, int32_t ___sourceId, int32_t ___rolloffMode, float ___minDistance, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceGain(System.Int32,System.Single)
extern "C" void CardboardAudio_SetSourceGain_m7_56 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C" void CardboardAudio_SetSourceOcclusionIntensity_m7_57 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___intensity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceTransform(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" void CardboardAudio_SetSourceTransform_m7_58 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateRoom()
extern "C" int32_t CardboardAudio_CreateRoom_m7_59 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyRoom(System.Int32)
extern "C" void CardboardAudio_DestroyRoom_m7_60 (Object_t * __this /* static, unused */, int32_t ___roomId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetRoomProperties(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,CardboardAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single)
extern "C" void CardboardAudio_SetRoomProperties_m7_61 (Object_t * __this /* static, unused */, int32_t ___roomId, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, float ___dx, float ___dy, float ___dz, SurfaceMaterialU5BU5D_t7_13* ___materialNames, float ___reflectionScalar, float ___reverbGain, float ___reverbBrightness, float ___reverbTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Initialize(CardboardAudio/Quality,System.Int32,System.Int32,System.Int32)
extern "C" void CardboardAudio_Initialize_m7_62 (Object_t * __this /* static, unused */, int32_t ___quality, int32_t ___sampleRate, int32_t ___numChannels, int32_t ___framesPerBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Shutdown()
extern "C" void CardboardAudio_Shutdown_m7_63 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
