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

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate
struct InterstitialWasLoadedDelegate_t5_114;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void InterstitialWasLoadedDelegate__ctor_m5_968 (InterstitialWasLoadedDelegate_t5_114 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::Invoke()
extern "C" void InterstitialWasLoadedDelegate_Invoke_m5_969 (InterstitialWasLoadedDelegate_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InterstitialWasLoadedDelegate_t5_114(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * InterstitialWasLoadedDelegate_BeginInvoke_m5_970 (InterstitialWasLoadedDelegate_t5_114 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void InterstitialWasLoadedDelegate_EndInvoke_m5_971 (InterstitialWasLoadedDelegate_t5_114 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
