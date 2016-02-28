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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1026;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6296_gshared (Enumerator_t1_1032 * __this, Dictionary_2_t1_1026 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6296(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1032 *, Dictionary_2_t1_1026 *, const MethodInfo*))Enumerator__ctor_m1_6296_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6297_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6297(__this, method) (( Object_t * (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6297_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6298_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6298(__this, method) (( void (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6298_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6299_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6299(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6299_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6300_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6300(__this, method) (( Object_t * (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6300_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6301_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6301(__this, method) (( Object_t * (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6302_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6302(__this, method) (( bool (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_MoveNext_m1_6302_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1028  Enumerator_get_Current_m1_6303_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6303(__this, method) (( KeyValuePair_2_t1_1028  (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_get_Current_m1_6303_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6304_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6304(__this, method) (( Object_t * (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6304_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_6305_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6305(__this, method) (( Object_t * (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6305_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_6306_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6306(__this, method) (( void (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_Reset_m1_6306_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6307_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6307(__this, method) (( void (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_VerifyState_m1_6307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6308_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6308(__this, method) (( void (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6308_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_6309_gshared (Enumerator_t1_1032 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6309(__this, method) (( void (*) (Enumerator_t1_1032 *, const MethodInfo*))Enumerator_Dispose_m1_6309_gshared)(__this, method)
