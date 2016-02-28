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

// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t7_19;
// System.Object
struct Object_t;
// UnityEngine.RenderTexture
struct RenderTexture_t5_45;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Cardboard/StereoScreenChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void StereoScreenChangeDelegate__ctor_m7_115 (StereoScreenChangeDelegate_t7_19 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard/StereoScreenChangeDelegate::Invoke(UnityEngine.RenderTexture)
extern "C" void StereoScreenChangeDelegate_Invoke_m7_116 (StereoScreenChangeDelegate_t7_19 * __this, RenderTexture_t5_45 * ___newStereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StereoScreenChangeDelegate_t7_19(Il2CppObject* delegate, RenderTexture_t5_45 * ___newStereoScreen);
// System.IAsyncResult Cardboard/StereoScreenChangeDelegate::BeginInvoke(UnityEngine.RenderTexture,System.AsyncCallback,System.Object)
extern "C" Object_t * StereoScreenChangeDelegate_BeginInvoke_m7_117 (StereoScreenChangeDelegate_t7_19 * __this, RenderTexture_t5_45 * ___newStereoScreen, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard/StereoScreenChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void StereoScreenChangeDelegate_EndInvoke_m7_118 (StereoScreenChangeDelegate_t7_19 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
