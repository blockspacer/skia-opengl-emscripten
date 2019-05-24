// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_address_errors.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AddressErrorsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "addressLine",
    "city",
    "country",
    "dependentLocality",
    "organization",
    "phone",
    "postalCode",
    "recipient",
    "region",
    "sortingCode",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AddressErrors::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AddressErrors* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AddressErrorsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> address_line_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&address_line_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (address_line_value.IsEmpty() || address_line_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> address_line_cpp_value = address_line_value;
    if (!address_line_cpp_value.Prepare(exception_state))
      return;
    impl->setAddressLine(address_line_cpp_value);
  }

  v8::Local<v8::Value> city_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&city_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (city_value.IsEmpty() || city_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> city_cpp_value = city_value;
    if (!city_cpp_value.Prepare(exception_state))
      return;
    impl->setCity(city_cpp_value);
  }

  v8::Local<v8::Value> country_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&country_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (country_value.IsEmpty() || country_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> country_cpp_value = country_value;
    if (!country_cpp_value.Prepare(exception_state))
      return;
    impl->setCountry(country_cpp_value);
  }

  v8::Local<v8::Value> dependent_locality_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&dependent_locality_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (dependent_locality_value.IsEmpty() || dependent_locality_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> dependent_locality_cpp_value = dependent_locality_value;
    if (!dependent_locality_cpp_value.Prepare(exception_state))
      return;
    impl->setDependentLocality(dependent_locality_cpp_value);
  }

  v8::Local<v8::Value> organization_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&organization_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (organization_value.IsEmpty() || organization_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> organization_cpp_value = organization_value;
    if (!organization_cpp_value.Prepare(exception_state))
      return;
    impl->setOrganization(organization_cpp_value);
  }

  v8::Local<v8::Value> phone_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&phone_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (phone_value.IsEmpty() || phone_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> phone_cpp_value = phone_value;
    if (!phone_cpp_value.Prepare(exception_state))
      return;
    impl->setPhone(phone_cpp_value);
  }

  v8::Local<v8::Value> postal_code_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&postal_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (postal_code_value.IsEmpty() || postal_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> postal_code_cpp_value = postal_code_value;
    if (!postal_code_cpp_value.Prepare(exception_state))
      return;
    impl->setPostalCode(postal_code_cpp_value);
  }

  v8::Local<v8::Value> recipient_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&recipient_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (recipient_value.IsEmpty() || recipient_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> recipient_cpp_value = recipient_value;
    if (!recipient_cpp_value.Prepare(exception_state))
      return;
    impl->setRecipient(recipient_cpp_value);
  }

  v8::Local<v8::Value> region_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&region_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (region_value.IsEmpty() || region_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> region_cpp_value = region_value;
    if (!region_cpp_value.Prepare(exception_state))
      return;
    impl->setRegion(region_cpp_value);
  }

  v8::Local<v8::Value> sorting_code_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&sorting_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sorting_code_value.IsEmpty() || sorting_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sorting_code_cpp_value = sorting_code_value;
    if (!sorting_code_cpp_value.Prepare(exception_state))
      return;
    impl->setSortingCode(sorting_code_cpp_value);
  }
}

v8::Local<v8::Value> AddressErrors::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AddressErrors(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AddressErrors(const AddressErrors* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AddressErrorsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> address_line_value;
  bool address_line_has_value_or_default = false;
  if (impl->hasAddressLine()) {
    address_line_value = V8String(isolate, impl->addressLine());
    address_line_has_value_or_default = true;
  }
  if (address_line_has_value_or_default &&
      !create_property(0, address_line_value)) {
    return false;
  }

  v8::Local<v8::Value> city_value;
  bool city_has_value_or_default = false;
  if (impl->hasCity()) {
    city_value = V8String(isolate, impl->city());
    city_has_value_or_default = true;
  }
  if (city_has_value_or_default &&
      !create_property(1, city_value)) {
    return false;
  }

  v8::Local<v8::Value> country_value;
  bool country_has_value_or_default = false;
  if (impl->hasCountry()) {
    country_value = V8String(isolate, impl->country());
    country_has_value_or_default = true;
  }
  if (country_has_value_or_default &&
      !create_property(2, country_value)) {
    return false;
  }

  v8::Local<v8::Value> dependent_locality_value;
  bool dependent_locality_has_value_or_default = false;
  if (impl->hasDependentLocality()) {
    dependent_locality_value = V8String(isolate, impl->dependentLocality());
    dependent_locality_has_value_or_default = true;
  }
  if (dependent_locality_has_value_or_default &&
      !create_property(3, dependent_locality_value)) {
    return false;
  }

  v8::Local<v8::Value> organization_value;
  bool organization_has_value_or_default = false;
  if (impl->hasOrganization()) {
    organization_value = V8String(isolate, impl->organization());
    organization_has_value_or_default = true;
  }
  if (organization_has_value_or_default &&
      !create_property(4, organization_value)) {
    return false;
  }

  v8::Local<v8::Value> phone_value;
  bool phone_has_value_or_default = false;
  if (impl->hasPhone()) {
    phone_value = V8String(isolate, impl->phone());
    phone_has_value_or_default = true;
  }
  if (phone_has_value_or_default &&
      !create_property(5, phone_value)) {
    return false;
  }

  v8::Local<v8::Value> postal_code_value;
  bool postal_code_has_value_or_default = false;
  if (impl->hasPostalCode()) {
    postal_code_value = V8String(isolate, impl->postalCode());
    postal_code_has_value_or_default = true;
  }
  if (postal_code_has_value_or_default &&
      !create_property(6, postal_code_value)) {
    return false;
  }

  v8::Local<v8::Value> recipient_value;
  bool recipient_has_value_or_default = false;
  if (impl->hasRecipient()) {
    recipient_value = V8String(isolate, impl->recipient());
    recipient_has_value_or_default = true;
  }
  if (recipient_has_value_or_default &&
      !create_property(7, recipient_value)) {
    return false;
  }

  v8::Local<v8::Value> region_value;
  bool region_has_value_or_default = false;
  if (impl->hasRegion()) {
    region_value = V8String(isolate, impl->region());
    region_has_value_or_default = true;
  }
  if (region_has_value_or_default &&
      !create_property(8, region_value)) {
    return false;
  }

  v8::Local<v8::Value> sorting_code_value;
  bool sorting_code_has_value_or_default = false;
  if (impl->hasSortingCode()) {
    sorting_code_value = V8String(isolate, impl->sortingCode());
    sorting_code_has_value_or_default = true;
  }
  if (sorting_code_has_value_or_default &&
      !create_property(9, sorting_code_value)) {
    return false;
  }

  return true;
}

AddressErrors* NativeValueTraits<AddressErrors>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AddressErrors* impl = AddressErrors::Create();
  V8AddressErrors::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
