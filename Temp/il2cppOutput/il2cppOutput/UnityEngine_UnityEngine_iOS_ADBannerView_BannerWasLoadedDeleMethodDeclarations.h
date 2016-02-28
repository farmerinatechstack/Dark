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

// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t5_111;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void BannerWasLoadedDelegate__ctor_m5_954 (BannerWasLoadedDelegate_t5_111 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::Invoke()
extern "C" void BannerWasLoadedDelegate_Invoke_m5_955 (BannerWasLoadedDelegate_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerWasLoadedDelegate_t5_111(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BannerWasLoadedDelegate_BeginInvoke_m5_956 (BannerWasLoadedDelegate_t5_111 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void BannerWasLoadedDelegate_EndInvoke_m5_957 (BannerWasLoadedDelegate_t5_111 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
