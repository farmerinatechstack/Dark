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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioConfiguration.h"

// UnityEngine.AudioConfiguration UnityEngine.AudioSettings::GetConfiguration()
extern "C" AudioConfiguration_t5_142  AudioSettings_GetConfiguration_m5_1139 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::INTERNAL_CALL_GetConfiguration(UnityEngine.AudioConfiguration&)
extern "C" void AudioSettings_INTERNAL_CALL_GetConfiguration_m5_1140 (Object_t * __this /* static, unused */, AudioConfiguration_t5_142 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m5_1141 (Object_t * __this /* static, unused */, bool ___deviceWasChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
