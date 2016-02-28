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

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t6_143;
// UnityEngine.RectTransform
struct RectTransform_t5_79;
// UnityEngine.Transform
struct Transform_t5_80;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1_895;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t5_324;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t5_25;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
extern "C" void LayoutRebuilder__ctor_m6_1286 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m6_1287 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Initialize(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_Initialize_m6_1288 (LayoutRebuilder_t6_143 * __this, RectTransform_t5_79 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
extern "C" void LayoutRebuilder_Clear_m6_1289 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m6_1290 (Object_t * __this /* static, unused */, RectTransform_t5_79 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t5_80 * LayoutRebuilder_get_transform_m6_1291 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m6_1292 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m6_1293 (Object_t * __this /* static, unused */, List_1_t1_895 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ForceRebuildLayoutImmediate_m6_1294 (Object_t * __this /* static, unused */, RectTransform_t5_79 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_Rebuild_m6_1295 (LayoutRebuilder_t6_143 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m6_1296 (LayoutRebuilder_t6_143 * __this, RectTransform_t5_79 * ___rect, UnityAction_1_t5_324 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m6_1297 (LayoutRebuilder_t6_143 * __this, RectTransform_t5_79 * ___rect, UnityAction_1_t5_324 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m6_1298 (Object_t * __this /* static, unused */, RectTransform_t5_79 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m6_1299 (Object_t * __this /* static, unused */, RectTransform_t5_79 * ___parent, List_1_t1_895 * ___comps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" bool LayoutRebuilder_ValidController_m6_1300 (Object_t * __this /* static, unused */, RectTransform_t5_79 * ___layoutRoot, List_1_t1_895 * ___comps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m6_1301 (Object_t * __this /* static, unused */, RectTransform_t5_79 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::LayoutComplete()
extern "C" void LayoutRebuilder_LayoutComplete_m6_1302 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::GraphicUpdateComplete()
extern "C" void LayoutRebuilder_GraphicUpdateComplete_m6_1303 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m6_1304 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(System.Object)
extern "C" bool LayoutRebuilder_Equals_m6_1305 (LayoutRebuilder_t6_143 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m6_1306 (LayoutRebuilder_t6_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<s_Rebuilders>m__6(UnityEngine.UI.LayoutRebuilder)
extern "C" void LayoutRebuilder_U3Cs_RebuildersU3Em__6_m6_1307 (Object_t * __this /* static, unused */, LayoutRebuilder_t6_143 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__7(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__7_m6_1308 (Object_t * __this /* static, unused */, Component_t5_25 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__8_m6_1309 (Object_t * __this /* static, unused */, Component_t5_25 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m6_1310 (Object_t * __this /* static, unused */, Component_t5_25 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m6_1311 (Object_t * __this /* static, unused */, Component_t5_25 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m6_1312 (Object_t * __this /* static, unused */, Component_t5_25 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
