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

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t1_1212;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_8202_gshared (Comparison_1_t1_1212 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_8202(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_1212 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_8202_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_8203_gshared (Comparison_1_t1_1212 * __this, Color32_t5_34  ___x, Color32_t5_34  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_8203(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_1212 *, Color32_t5_34 , Color32_t5_34 , const MethodInfo*))Comparison_1_Invoke_m1_8203_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_8204_gshared (Comparison_1_t1_1212 * __this, Color32_t5_34  ___x, Color32_t5_34  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_8204(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_1212 *, Color32_t5_34 , Color32_t5_34 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_8204_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_8205_gshared (Comparison_1_t1_1212 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_8205(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_1212 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_8205_gshared)(__this, ___result, method)
