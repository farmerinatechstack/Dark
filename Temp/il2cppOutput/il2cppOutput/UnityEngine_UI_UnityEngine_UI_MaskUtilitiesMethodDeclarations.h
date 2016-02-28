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

// UnityEngine.Component
struct Component_t5_25;
// UnityEngine.Transform
struct Transform_t5_80;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t6_95;
// UnityEngine.UI.IClippable
struct IClippable_t6_170;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t1_925;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m6_760 (Object_t * __this /* static, unused */, Component_t5_25 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m6_761 (Object_t * __this /* static, unused */, Component_t5_25 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t5_80 * MaskUtilities_FindRootSortOverrideCanvas_m6_762 (Object_t * __this /* static, unused */, Transform_t5_80 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m6_763 (Object_t * __this /* static, unused */, Transform_t5_80 * ___transform, Transform_t5_80 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t6_95 * MaskUtilities_GetRectMaskForClippable_m6_764 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m6_765 (Object_t * __this /* static, unused */, RectMask2D_t6_95 * ___clipper, List_1_t1_925 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
