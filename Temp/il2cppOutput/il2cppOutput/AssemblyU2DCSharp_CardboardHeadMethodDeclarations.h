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

// CardboardHead
struct CardboardHead_t7_26;
// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t7_25;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void CardboardHead::.ctor()
extern "C" void CardboardHead__ctor_m7_225 (CardboardHead_t7_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::add_OnHeadUpdated(CardboardHead/HeadUpdatedDelegate)
extern "C" void CardboardHead_add_OnHeadUpdated_m7_226 (CardboardHead_t7_26 * __this, HeadUpdatedDelegate_t7_25 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::remove_OnHeadUpdated(CardboardHead/HeadUpdatedDelegate)
extern "C" void CardboardHead_remove_OnHeadUpdated_m7_227 (CardboardHead_t7_26 * __this, HeadUpdatedDelegate_t7_25 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray CardboardHead::get_Gaze()
extern "C" Ray_t5_61  CardboardHead_get_Gaze_m7_228 (CardboardHead_t7_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::Awake()
extern "C" void CardboardHead_Awake_m7_229 (CardboardHead_t7_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::Update()
extern "C" void CardboardHead_Update_m7_230 (CardboardHead_t7_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::LateUpdate()
extern "C" void CardboardHead_LateUpdate_m7_231 (CardboardHead_t7_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead::UpdateHead()
extern "C" void CardboardHead_UpdateHead_m7_232 (CardboardHead_t7_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
