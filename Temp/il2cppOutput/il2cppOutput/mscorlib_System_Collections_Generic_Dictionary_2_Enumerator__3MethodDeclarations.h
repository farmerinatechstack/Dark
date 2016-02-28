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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1115;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_7175_gshared (Enumerator_t1_1121 * __this, Dictionary_2_t1_1115 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_7175(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1121 *, Dictionary_2_t1_1115 *, const MethodInfo*))Enumerator__ctor_m1_7175_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_7176_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_7176(__this, method) (( Object_t * (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_7176_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_7177_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_7177(__this, method) (( void (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_7177_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7178_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7178(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7179_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7179(__this, method) (( Object_t * (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7179_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7180_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7180(__this, method) (( Object_t * (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_7181_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_7181(__this, method) (( bool (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_MoveNext_m1_7181_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1117  Enumerator_get_Current_m1_7182_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_7182(__this, method) (( KeyValuePair_2_t1_1117  (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_get_Current_m1_7182_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_7183_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_7183(__this, method) (( Object_t * (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_7183_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_7184_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_7184(__this, method) (( bool (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_7184_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_7185_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_7185(__this, method) (( void (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_Reset_m1_7185_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_7186_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_7186(__this, method) (( void (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_VerifyState_m1_7186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_7187_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_7187(__this, method) (( void (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_7187_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_7188_gshared (Enumerator_t1_1121 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_7188(__this, method) (( void (*) (Enumerator_t1_1121 *, const MethodInfo*))Enumerator_Dispose_m1_7188_gshared)(__this, method)
