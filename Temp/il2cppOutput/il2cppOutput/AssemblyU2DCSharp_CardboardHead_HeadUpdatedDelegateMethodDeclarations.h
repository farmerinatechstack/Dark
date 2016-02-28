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

// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t7_25;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t5_107;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void CardboardHead/HeadUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HeadUpdatedDelegate__ctor_m7_221 (HeadUpdatedDelegate_t7_25 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::Invoke(UnityEngine.GameObject)
extern "C" void HeadUpdatedDelegate_Invoke_m7_222 (HeadUpdatedDelegate_t7_25 * __this, GameObject_t5_107 * ___head, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HeadUpdatedDelegate_t7_25(Il2CppObject* delegate, GameObject_t5_107 * ___head);
// System.IAsyncResult CardboardHead/HeadUpdatedDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * HeadUpdatedDelegate_BeginInvoke_m7_223 (HeadUpdatedDelegate_t7_25 * __this, GameObject_t5_107 * ___head, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HeadUpdatedDelegate_EndInvoke_m7_224 (HeadUpdatedDelegate_t7_25 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
