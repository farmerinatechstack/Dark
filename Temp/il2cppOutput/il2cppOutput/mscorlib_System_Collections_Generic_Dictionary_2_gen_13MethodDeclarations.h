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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1273;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1136;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1502;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_1503;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1277;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_9122_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9122(__this, method) (( void (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2__ctor_m1_9122_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_9124_gshared (Dictionary_2_t1_1273 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9124(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1273 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_9124_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_9126_gshared (Dictionary_2_t1_1273 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9126(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1273 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_9126_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_9128_gshared (Dictionary_2_t1_1273 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9128(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1273 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_9128_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_9130_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_9130(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_9130_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_9132_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_9132(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1273 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_9132_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_9134_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_9134(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1273 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_9134_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_9136_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_9136(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_9136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_9138_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_9138(__this, ___key, method) (( void (*) (Dictionary_2_t1_1273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_9138_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9140_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9140(__this, method) (( bool (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9140_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9142_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9142(__this, method) (( Object_t * (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9144_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9144(__this, method) (( bool (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9146_gshared (Dictionary_2_t1_1273 * __this, KeyValuePair_2_t1_1275  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9146(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1273 *, KeyValuePair_2_t1_1275 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9146_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9148_gshared (Dictionary_2_t1_1273 * __this, KeyValuePair_2_t1_1275  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9148(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1273 *, KeyValuePair_2_t1_1275 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9148_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9150_gshared (Dictionary_2_t1_1273 * __this, KeyValuePair_2U5BU5D_t1_1502* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9150(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1273 *, KeyValuePair_2U5BU5D_t1_1502*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9150_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9152_gshared (Dictionary_2_t1_1273 * __this, KeyValuePair_2_t1_1275  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9152(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1273 *, KeyValuePair_2_t1_1275 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9152_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_9154_gshared (Dictionary_2_t1_1273 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_9154(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1273 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_9154_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9156_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9156(__this, method) (( Object_t * (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9156_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9158_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9158(__this, method) (( Object_t* (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9158_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9160_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9160(__this, method) (( Object_t * (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9160_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_9162_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_9162(__this, method) (( int32_t (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_get_Count_m1_9162_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_9164_gshared (Dictionary_2_t1_1273 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_9164(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1273 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_9164_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_9166_gshared (Dictionary_2_t1_1273 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_9166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1273 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_9166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_9168_gshared (Dictionary_2_t1_1273 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_9168(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1273 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_9168_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_9170_gshared (Dictionary_2_t1_1273 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_9170(__this, ___size, method) (( void (*) (Dictionary_2_t1_1273 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_9170_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_9172_gshared (Dictionary_2_t1_1273 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_9172(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1273 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_9172_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1275  Dictionary_2_make_pair_m1_9174_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_9174(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1275  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_9174_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_9176_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_9176(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_9176_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_9178_gshared (Dictionary_2_t1_1273 * __this, KeyValuePair_2U5BU5D_t1_1502* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_9178(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1273 *, KeyValuePair_2U5BU5D_t1_1502*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_9178_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_9180_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_9180(__this, method) (( void (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_Resize_m1_9180_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_9182_gshared (Dictionary_2_t1_1273 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_9182(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1273 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_9182_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_9184_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_9184(__this, method) (( void (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_Clear_m1_9184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_9186_gshared (Dictionary_2_t1_1273 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_9186(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1273 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_9186_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_9188_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_9188(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1273 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_9188_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_9190_gshared (Dictionary_2_t1_1273 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_9190(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1273 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_9190_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_9192_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_9192(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1273 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_9192_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_9194_gshared (Dictionary_2_t1_1273 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_9194(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1273 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_9194_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_9196_gshared (Dictionary_2_t1_1273 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_9196(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1273 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_9196_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1277 * Dictionary_2_get_Values_m1_9198_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_9198(__this, method) (( ValueCollection_t1_1277 * (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_get_Values_m1_9198_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_9200_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_9200(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1273 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_9200_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_9202_gshared (Dictionary_2_t1_1273 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_9202(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1273 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_9202_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_9204_gshared (Dictionary_2_t1_1273 * __this, KeyValuePair_2_t1_1275  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_9204(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1273 *, KeyValuePair_2_t1_1275 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_9204_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1279  Dictionary_2_GetEnumerator_m1_9206_gshared (Dictionary_2_t1_1273 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_9206(__this, method) (( Enumerator_t1_1279  (*) (Dictionary_2_t1_1273 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_9206_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_9208_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_9208(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_9208_gshared)(__this /* static, unused */, ___key, ___value, method)
