// Copyright (c) 2023 Admenri. All rights reserved.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the ACF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=703686047d83d87e11daba51f3ab1f34d67bb898$
//

#include "libacf_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libacf_dll/cpptoc/binary_value_cpptoc.h"
#include "libacf_dll/cpptoc/list_value_cpptoc.h"
#include "libacf_dll/cpptoc/value_cpptoc.h"
#include "libacf_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

ACF_EXPORT acf_dictionary_value_t* acf_dictionary_value_create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  AcfRefPtr<AcfDictionaryValue> _retval = AcfDictionaryValue::Create();

  // Return type: refptr_same
  return AcfDictionaryValueCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int ACF_CALLBACK
dictionary_value_is_valid(struct _acf_dictionary_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_is_owned(struct _acf_dictionary_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->IsOwned();

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_is_read_only(struct _acf_dictionary_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_is_same(struct _acf_dictionary_value_t* self,
                         struct _acf_dictionary_value_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  if (!that)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->IsSame(
      AcfDictionaryValueCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_is_equal(struct _acf_dictionary_value_t* self,
                          struct _acf_dictionary_value_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  if (!that)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->IsEqual(
      AcfDictionaryValueCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

struct _acf_dictionary_value_t* ACF_CALLBACK
dictionary_value_copy(struct _acf_dictionary_value_t* self,
                      int exclude_empty_children) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return NULL;

  // Execute
  AcfRefPtr<AcfDictionaryValue> _retval =
      AcfDictionaryValueCppToC::Get(self)->Copy(exclude_empty_children ? true
                                                                       : false);

  // Return type: refptr_same
  return AcfDictionaryValueCppToC::Wrap(_retval);
}

size_t ACF_CALLBACK
dictionary_value_get_size(struct _acf_dictionary_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;

  // Execute
  size_t _retval = AcfDictionaryValueCppToC::Get(self)->GetSize();

  // Return type: simple
  return _retval;
}

int ACF_CALLBACK dictionary_value_clear(struct _acf_dictionary_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->Clear();

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_has_key(struct _acf_dictionary_value_t* self,
                                          const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->HasKey(AcfString(key));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_get_keys(struct _acf_dictionary_value_t* self,
                                           acf_string_list_t keys) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: keys; type: string_vec_byref
  if (!keys)
    return 0;

  // Translate param: keys; type: string_vec_byref
  std::vector<AcfString> keysList;
  transfer_string_list_contents(keys, keysList);

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->GetKeys(keysList);

  // Restore param: keys; type: string_vec_byref
  acf_string_list_clear(keys);
  transfer_string_list_contents(keysList, keys);

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_remove(struct _acf_dictionary_value_t* self,
                                         const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->Remove(AcfString(key));

  // Return type: bool
  return _retval;
}

acf_value_type_t ACF_CALLBACK
dictionary_value_get_type(struct _acf_dictionary_value_t* self,
                          const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return VTYPE_INVALID;
  // Verify param: key; type: string_byref_const
  if (!key)
    return VTYPE_INVALID;

  // Execute
  acf_value_type_t _retval =
      AcfDictionaryValueCppToC::Get(self)->GetType(AcfString(key));

  // Return type: simple
  return _retval;
}

acf_value_t* ACF_CALLBACK
dictionary_value_get_value(struct _acf_dictionary_value_t* self,
                           const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return NULL;
  // Verify param: key; type: string_byref_const
  if (!key)
    return NULL;

  // Execute
  AcfRefPtr<AcfValue> _retval =
      AcfDictionaryValueCppToC::Get(self)->GetValue(AcfString(key));

  // Return type: refptr_same
  return AcfValueCppToC::Wrap(_retval);
}

int ACF_CALLBACK dictionary_value_get_bool(struct _acf_dictionary_value_t* self,
                                           const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->GetBool(AcfString(key));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_get_int(struct _acf_dictionary_value_t* self,
                                          const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  int _retval = AcfDictionaryValueCppToC::Get(self)->GetInt(AcfString(key));

  // Return type: simple
  return _retval;
}

double ACF_CALLBACK
dictionary_value_get_double(struct _acf_dictionary_value_t* self,
                            const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  double _retval =
      AcfDictionaryValueCppToC::Get(self)->GetDouble(AcfString(key));

  // Return type: simple
  return _retval;
}

acf_string_userfree_t ACF_CALLBACK
dictionary_value_get_string(struct _acf_dictionary_value_t* self,
                            const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return NULL;
  // Verify param: key; type: string_byref_const
  if (!key)
    return NULL;

  // Execute
  AcfString _retval =
      AcfDictionaryValueCppToC::Get(self)->GetString(AcfString(key));

  // Return type: string
  return _retval.DetachToUserFree();
}

acf_binary_value_t* ACF_CALLBACK
dictionary_value_get_binary(struct _acf_dictionary_value_t* self,
                            const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return NULL;
  // Verify param: key; type: string_byref_const
  if (!key)
    return NULL;

  // Execute
  AcfRefPtr<AcfBinaryValue> _retval =
      AcfDictionaryValueCppToC::Get(self)->GetBinary(AcfString(key));

  // Return type: refptr_same
  return AcfBinaryValueCppToC::Wrap(_retval);
}

struct _acf_dictionary_value_t* ACF_CALLBACK
dictionary_value_get_dictionary(struct _acf_dictionary_value_t* self,
                                const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return NULL;
  // Verify param: key; type: string_byref_const
  if (!key)
    return NULL;

  // Execute
  AcfRefPtr<AcfDictionaryValue> _retval =
      AcfDictionaryValueCppToC::Get(self)->GetDictionary(AcfString(key));

  // Return type: refptr_same
  return AcfDictionaryValueCppToC::Wrap(_retval);
}

struct _acf_list_value_t* ACF_CALLBACK
dictionary_value_get_list(struct _acf_dictionary_value_t* self,
                          const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return NULL;
  // Verify param: key; type: string_byref_const
  if (!key)
    return NULL;

  // Execute
  AcfRefPtr<AcfListValue> _retval =
      AcfDictionaryValueCppToC::Get(self)->GetList(AcfString(key));

  // Return type: refptr_same
  return AcfListValueCppToC::Wrap(_retval);
}

int ACF_CALLBACK
dictionary_value_set_value(struct _acf_dictionary_value_t* self,
                           const acf_string_t* key,
                           acf_value_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;
  // Verify param: value; type: refptr_same
  if (!value)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->SetValue(
      AcfString(key), AcfValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_set_null(struct _acf_dictionary_value_t* self,
                                           const acf_string_t* key) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->SetNull(AcfString(key));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_set_bool(struct _acf_dictionary_value_t* self,
                                           const acf_string_t* key,
                                           int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->SetBool(
      AcfString(key), value ? true : false);

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_set_int(struct _acf_dictionary_value_t* self,
                                          const acf_string_t* key,
                                          int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  bool _retval =
      AcfDictionaryValueCppToC::Get(self)->SetInt(AcfString(key), value);

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_set_double(struct _acf_dictionary_value_t* self,
                            const acf_string_t* key,
                            double value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;

  // Execute
  bool _retval =
      AcfDictionaryValueCppToC::Get(self)->SetDouble(AcfString(key), value);

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_set_string(struct _acf_dictionary_value_t* self,
                            const acf_string_t* key,
                            const acf_string_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;
  // Unverified params: value

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->SetString(
      AcfString(key), AcfString(value));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_set_binary(struct _acf_dictionary_value_t* self,
                            const acf_string_t* key,
                            acf_binary_value_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;
  // Verify param: value; type: refptr_same
  if (!value)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->SetBinary(
      AcfString(key), AcfBinaryValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK
dictionary_value_set_dictionary(struct _acf_dictionary_value_t* self,
                                const acf_string_t* key,
                                struct _acf_dictionary_value_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;
  // Verify param: value; type: refptr_same
  if (!value)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->SetDictionary(
      AcfString(key), AcfDictionaryValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int ACF_CALLBACK dictionary_value_set_list(struct _acf_dictionary_value_t* self,
                                           const acf_string_t* key,
                                           struct _acf_list_value_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  if (!self)
    return 0;
  // Verify param: key; type: string_byref_const
  if (!key)
    return 0;
  // Verify param: value; type: refptr_same
  if (!value)
    return 0;

  // Execute
  bool _retval = AcfDictionaryValueCppToC::Get(self)->SetList(
      AcfString(key), AcfListValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

AcfDictionaryValueCppToC::AcfDictionaryValueCppToC() {
  GetStruct()->is_valid = dictionary_value_is_valid;
  GetStruct()->is_owned = dictionary_value_is_owned;
  GetStruct()->is_read_only = dictionary_value_is_read_only;
  GetStruct()->is_same = dictionary_value_is_same;
  GetStruct()->is_equal = dictionary_value_is_equal;
  GetStruct()->copy = dictionary_value_copy;
  GetStruct()->get_size = dictionary_value_get_size;
  GetStruct()->clear = dictionary_value_clear;
  GetStruct()->has_key = dictionary_value_has_key;
  GetStruct()->get_keys = dictionary_value_get_keys;
  GetStruct()->remove = dictionary_value_remove;
  GetStruct()->get_type = dictionary_value_get_type;
  GetStruct()->get_value = dictionary_value_get_value;
  GetStruct()->get_bool = dictionary_value_get_bool;
  GetStruct()->get_int = dictionary_value_get_int;
  GetStruct()->get_double = dictionary_value_get_double;
  GetStruct()->get_string = dictionary_value_get_string;
  GetStruct()->get_binary = dictionary_value_get_binary;
  GetStruct()->get_dictionary = dictionary_value_get_dictionary;
  GetStruct()->get_list = dictionary_value_get_list;
  GetStruct()->set_value = dictionary_value_set_value;
  GetStruct()->set_null = dictionary_value_set_null;
  GetStruct()->set_bool = dictionary_value_set_bool;
  GetStruct()->set_int = dictionary_value_set_int;
  GetStruct()->set_double = dictionary_value_set_double;
  GetStruct()->set_string = dictionary_value_set_string;
  GetStruct()->set_binary = dictionary_value_set_binary;
  GetStruct()->set_dictionary = dictionary_value_set_dictionary;
  GetStruct()->set_list = dictionary_value_set_list;
}

// DESTRUCTOR - Do not edit by hand.

AcfDictionaryValueCppToC::~AcfDictionaryValueCppToC() {}

template <>
AcfRefPtr<AcfDictionaryValue> AcfCppToCRefCounted<
    AcfDictionaryValueCppToC,
    AcfDictionaryValue,
    acf_dictionary_value_t>::UnwrapDerived(AcfWrapperType type,
                                           acf_dictionary_value_t* s) {
  return nullptr;
}

template <>
AcfWrapperType AcfCppToCRefCounted<AcfDictionaryValueCppToC,
                                   AcfDictionaryValue,
                                   acf_dictionary_value_t>::kWrapperType =
    WT_DICTIONARY_VALUE;
