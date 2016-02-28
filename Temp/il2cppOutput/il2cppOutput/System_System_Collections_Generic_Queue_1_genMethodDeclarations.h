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

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t3_159;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_1465;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Int32[]
struct Int32U5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m3_910_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1__ctor_m3_910(__this, method) (( void (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1__ctor_m3_910_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m3_1062_gshared (Queue_1_t3_159 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m3_1062(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3_159 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m3_1062_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m3_1063_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m3_1063(__this, method) (( bool (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m3_1063_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m3_1064_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m3_1064(__this, method) (( Object_t * (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m3_1064_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3_1065_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3_1065(__this, method) (( Object_t* (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3_1065_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m3_1066_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m3_1066(__this, method) (( Object_t * (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m3_1066_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m3_912_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1_Clear_m3_912(__this, method) (( void (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1_Clear_m3_912_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m3_911_gshared (Queue_1_t3_159 * __this, Int32U5BU5D_t1_159* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m3_911(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3_159 *, Int32U5BU5D_t1_159*, int32_t, const MethodInfo*))Queue_1_CopyTo_m3_911_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m3_913_gshared (Queue_1_t3_159 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m3_913(__this, ___item, method) (( void (*) (Queue_1_t3_159 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m3_913_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m3_1067_gshared (Queue_1_t3_159 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m3_1067(__this, ___new_size, method) (( void (*) (Queue_1_t3_159 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m3_1067_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m3_1068_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m3_1068(__this, method) (( int32_t (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1_get_Count_m3_1068_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t3_176  Queue_1_GetEnumerator_m3_1069_gshared (Queue_1_t3_159 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m3_1069(__this, method) (( Enumerator_t3_176  (*) (Queue_1_t3_159 *, const MethodInfo*))Queue_1_GetEnumerator_m3_1069_gshared)(__this, method)
