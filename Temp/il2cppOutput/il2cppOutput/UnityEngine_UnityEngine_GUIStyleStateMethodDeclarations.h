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

// UnityEngine.GUIStyleState
struct GUIStyleState_t5_205;
// UnityEngine.GUIStyle
struct GUIStyle_t5_41;
// UnityEngine.Texture2D
struct Texture2D_t5_44;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" void GUIStyleState__ctor_m5_1493 (GUIStyleState_t5_205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void GUIStyleState__ctor_m5_1494 (GUIStyleState_t5_205 * __this, GUIStyle_t5_41 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::ProduceGUIStyleStateFromDeserialization(UnityEngine.GUIStyle,System.IntPtr)
extern "C" GUIStyleState_t5_205 * GUIStyleState_ProduceGUIStyleStateFromDeserialization_m5_1495 (Object_t * __this /* static, unused */, GUIStyle_t5_41 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
extern "C" GUIStyleState_t5_205 * GUIStyleState_GetGUIStyleState_m5_1496 (Object_t * __this /* static, unused */, GUIStyle_t5_41 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m5_1497 (GUIStyleState_t5_205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m5_1498 (GUIStyleState_t5_205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m5_1499 (GUIStyleState_t5_205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternalFromDeserialization()
extern "C" Texture2D_t5_44 * GUIStyleState_GetBackgroundInternalFromDeserialization_m5_1500 (GUIStyleState_t5_205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t5_44 * GUIStyleState_GetBackgroundInternal_m5_1501 (GUIStyleState_t5_205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m5_1502 (GUIStyleState_t5_205 * __this, Color_t5_167  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m5_1503 (GUIStyleState_t5_205 * __this, Color_t5_167 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
