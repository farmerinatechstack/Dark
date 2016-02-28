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

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t5_350;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t5_327;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m5_2015_gshared (InvokableCall_1_t5_350 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2015(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5_350 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m5_2015_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m5_2016_gshared (InvokableCall_1_t5_350 * __this, UnityAction_1_t5_327 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2016(__this, ___action, method) (( void (*) (InvokableCall_1_t5_350 *, UnityAction_1_t5_327 *, const MethodInfo*))InvokableCall_1__ctor_m5_2016_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m5_2017_gshared (InvokableCall_1_t5_350 * __this, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m5_2017(__this, ___args, method) (( void (*) (InvokableCall_1_t5_350 *, ObjectU5BU5D_t1_156*, const MethodInfo*))InvokableCall_1_Invoke_m5_2017_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m5_2018_gshared (InvokableCall_1_t5_350 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m5_2018(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5_350 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m5_2018_gshared)(__this, ___targetObj, ___method, method)
