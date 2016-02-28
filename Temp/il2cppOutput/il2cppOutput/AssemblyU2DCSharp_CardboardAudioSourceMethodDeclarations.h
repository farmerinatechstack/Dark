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

// CardboardAudioSource
struct CardboardAudioSource_t7_14;
// UnityEngine.AudioClip
struct AudioClip_t5_147;
// System.Single[]
struct SingleU5BU5D_t1_852;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardAudioSource::.ctor()
extern "C" void CardboardAudioSource__ctor_m7_80 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip CardboardAudioSource::get_clip()
extern "C" AudioClip_t5_147 * CardboardAudioSource_get_clip_m7_81 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void CardboardAudioSource_set_clip_m7_82 (CardboardAudioSource_t7_14 * __this, AudioClip_t5_147 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::get_isPlaying()
extern "C" bool CardboardAudioSource_get_isPlaying_m7_83 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::get_loop()
extern "C" bool CardboardAudioSource_get_loop_m7_84 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_loop(System.Boolean)
extern "C" void CardboardAudioSource_set_loop_m7_85 (CardboardAudioSource_t7_14 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::get_mute()
extern "C" bool CardboardAudioSource_get_mute_m7_86 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_mute(System.Boolean)
extern "C" void CardboardAudioSource_set_mute_m7_87 (CardboardAudioSource_t7_14 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_pitch()
extern "C" float CardboardAudioSource_get_pitch_m7_88 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_pitch(System.Single)
extern "C" void CardboardAudioSource_set_pitch_m7_89 (CardboardAudioSource_t7_14 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_volume()
extern "C" float CardboardAudioSource_get_volume_m7_90 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_volume(System.Single)
extern "C" void CardboardAudioSource_set_volume_m7_91 (CardboardAudioSource_t7_14 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_maxDistance()
extern "C" float CardboardAudioSource_get_maxDistance_m7_92 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_maxDistance(System.Single)
extern "C" void CardboardAudioSource_set_maxDistance_m7_93 (CardboardAudioSource_t7_14 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_minDistance()
extern "C" float CardboardAudioSource_get_minDistance_m7_94 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_minDistance(System.Single)
extern "C" void CardboardAudioSource_set_minDistance_m7_95 (CardboardAudioSource_t7_14 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Awake()
extern "C" void CardboardAudioSource_Awake_m7_96 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnEnable()
extern "C" void CardboardAudioSource_OnEnable_m7_97 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Start()
extern "C" void CardboardAudioSource_Start_m7_98 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnDisable()
extern "C" void CardboardAudioSource_OnDisable_m7_99 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnDestroy()
extern "C" void CardboardAudioSource_OnDestroy_m7_100 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Update()
extern "C" void CardboardAudioSource_Update_m7_101 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnAudioFilterRead(System.Single[],System.Int32)
extern "C" void CardboardAudioSource_OnAudioFilterRead_m7_102 (CardboardAudioSource_t7_14 * __this, SingleU5BU5D_t1_852* ___data, int32_t ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Pause()
extern "C" void CardboardAudioSource_Pause_m7_103 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Play()
extern "C" void CardboardAudioSource_Play_m7_104 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::PlayDelayed(System.Single)
extern "C" void CardboardAudioSource_PlayDelayed_m7_105 (CardboardAudioSource_t7_14 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void CardboardAudioSource_PlayOneShot_m7_106 (CardboardAudioSource_t7_14 * __this, AudioClip_t5_147 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void CardboardAudioSource_PlayOneShot_m7_107 (CardboardAudioSource_t7_14 * __this, AudioClip_t5_147 * ___clip, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Stop()
extern "C" void CardboardAudioSource_Stop_m7_108 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::UnPause()
extern "C" void CardboardAudioSource_UnPause_m7_109 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::InitializeSource()
extern "C" bool CardboardAudioSource_InitializeSource_m7_110 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::ShutdownSource()
extern "C" void CardboardAudioSource_ShutdownSource_m7_111 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnValidate()
extern "C" void CardboardAudioSource_OnValidate_m7_112 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnDrawGizmosSelected()
extern "C" void CardboardAudioSource_OnDrawGizmosSelected_m7_113 (CardboardAudioSource_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::DrawDirectivityGizmo(System.Int32)
extern "C" void CardboardAudioSource_DrawDirectivityGizmo_m7_114 (CardboardAudioSource_t7_14 * __this, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
