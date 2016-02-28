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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t1_908;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_5525_gshared (Comparison_1_t1_908 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_5525(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_908 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_5525_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_9887_gshared (Comparison_1_t1_908 * __this, RaycastResult_t6_30  ___x, RaycastResult_t6_30  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_9887(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_908 *, RaycastResult_t6_30 , RaycastResult_t6_30 , const MethodInfo*))Comparison_1_Invoke_m1_9887_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_9888_gshared (Comparison_1_t1_908 * __this, RaycastResult_t6_30  ___x, RaycastResult_t6_30  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_9888(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_908 *, RaycastResult_t6_30 , RaycastResult_t6_30 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_9888_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_9889_gshared (Comparison_1_t1_908 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_9889(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_908 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_9889_gshared)(__this, ___result, method)
