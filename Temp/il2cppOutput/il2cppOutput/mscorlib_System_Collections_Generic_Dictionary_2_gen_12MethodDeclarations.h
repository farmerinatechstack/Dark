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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1_871;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1136;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_1478;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t1_1479;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t1_1139;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7281_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7281(__this, method) (( void (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2__ctor_m1_7281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7282_gshared (Dictionary_2_t1_871 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7282(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_871 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7282_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7283_gshared (Dictionary_2_t1_871 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7283(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_871 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7283_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7284_gshared (Dictionary_2_t1_871 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7284(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_871 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_7284_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7285_gshared (Dictionary_2_t1_871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7285(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7285_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7286_gshared (Dictionary_2_t1_871 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7286(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_871 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7286_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7287_gshared (Dictionary_2_t1_871 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7287(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_871 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7287_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7288_gshared (Dictionary_2_t1_871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7288(__this, ___key, method) (( bool (*) (Dictionary_2_t1_871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7288_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7289_gshared (Dictionary_2_t1_871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7289(__this, ___key, method) (( void (*) (Dictionary_2_t1_871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7289_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7290_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7290(__this, method) (( bool (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7290_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7291_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7291(__this, method) (( Object_t * (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7291_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7292_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7292(__this, method) (( bool (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7293_gshared (Dictionary_2_t1_871 * __this, KeyValuePair_2_t1_1137  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7293(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_871 *, KeyValuePair_2_t1_1137 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7293_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7294_gshared (Dictionary_2_t1_871 * __this, KeyValuePair_2_t1_1137  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7294(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_871 *, KeyValuePair_2_t1_1137 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7294_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7295_gshared (Dictionary_2_t1_871 * __this, KeyValuePair_2U5BU5D_t1_1478* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7295(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_871 *, KeyValuePair_2U5BU5D_t1_1478*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7295_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7296_gshared (Dictionary_2_t1_871 * __this, KeyValuePair_2_t1_1137  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7296(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_871 *, KeyValuePair_2_t1_1137 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7296_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7297_gshared (Dictionary_2_t1_871 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7297(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_871 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7297_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7298_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7298(__this, method) (( Object_t * (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7298_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7299_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7299(__this, method) (( Object_t* (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7299_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7300_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7300(__this, method) (( Object_t * (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7300_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7301_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7301(__this, method) (( int32_t (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_get_Count_m1_7301_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_7302_gshared (Dictionary_2_t1_871 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7302(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_871 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_7302_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7303_gshared (Dictionary_2_t1_871 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7303(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_871 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_7303_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7304_gshared (Dictionary_2_t1_871 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7304(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_871 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7304_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7305_gshared (Dictionary_2_t1_871 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7305(__this, ___size, method) (( void (*) (Dictionary_2_t1_871 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7305_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7306_gshared (Dictionary_2_t1_871 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7306(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_871 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7306_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1137  Dictionary_2_make_pair_m1_7307_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7307(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1137  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_7307_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m1_7308_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7308(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1_7308_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7309_gshared (Dictionary_2_t1_871 * __this, KeyValuePair_2U5BU5D_t1_1478* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7309(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_871 *, KeyValuePair_2U5BU5D_t1_1478*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7309_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_7310_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7310(__this, method) (( void (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_Resize_m1_7310_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7311_gshared (Dictionary_2_t1_871 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7311(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_871 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m1_7311_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_7312_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7312(__this, method) (( void (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_Clear_m1_7312_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7313_gshared (Dictionary_2_t1_871 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7313(__this, ___key, method) (( bool (*) (Dictionary_2_t1_871 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_7313_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7314_gshared (Dictionary_2_t1_871 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7314(__this, ___value, method) (( bool (*) (Dictionary_2_t1_871 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_7314_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7315_gshared (Dictionary_2_t1_871 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7315(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_871 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7315_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7316_gshared (Dictionary_2_t1_871 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7316(__this, ___sender, method) (( void (*) (Dictionary_2_t1_871 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7316_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7317_gshared (Dictionary_2_t1_871 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7317(__this, ___key, method) (( bool (*) (Dictionary_2_t1_871 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_7317_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7318_gshared (Dictionary_2_t1_871 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7318(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_871 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_7318_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t1_1139 * Dictionary_2_get_Values_m1_7319_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7319(__this, method) (( ValueCollection_t1_1139 * (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_get_Values_m1_7319_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_7320_gshared (Dictionary_2_t1_871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7320(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_871 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7320_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_7321_gshared (Dictionary_2_t1_871 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7321(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_871 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7321_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7322_gshared (Dictionary_2_t1_871 * __this, KeyValuePair_2_t1_1137  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7322(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_871 *, KeyValuePair_2_t1_1137 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7322_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1141  Dictionary_2_GetEnumerator_m1_7323_gshared (Dictionary_2_t1_871 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7323(__this, method) (( Enumerator_t1_1141  (*) (Dictionary_2_t1_871 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7323_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_7324_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7324(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7324_gshared)(__this /* static, unused */, ___key, ___value, method)
