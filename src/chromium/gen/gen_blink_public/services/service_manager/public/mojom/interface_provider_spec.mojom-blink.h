// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_BLINK_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
namespace blink {










class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) InterfaceSet {
 public:
  using DataView = InterfaceSetDataView;
  using Data_ = internal::InterfaceSet_Data;

  template <typename... Args>
  static InterfaceSetPtr New(Args&&... args) {
    return InterfaceSetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InterfaceSetPtr From(const U& u) {
    return mojo::TypeConverter<InterfaceSetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InterfaceSet>::Convert(*this);
  }


  InterfaceSet();

  explicit InterfaceSet(
      const WTF::Vector<WTF::String>& interfaces);

  ~InterfaceSet();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InterfaceSetPtr>
  InterfaceSetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InterfaceSet>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        InterfaceSet::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        InterfaceSet::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::InterfaceSet_UnserializedMessageContext<
            UserType, InterfaceSet::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<InterfaceSet::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return InterfaceSet::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::InterfaceSet_UnserializedMessageContext<
            UserType, InterfaceSet::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<InterfaceSet::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<WTF::String> interfaces;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) CapabilitySet {
 public:
  using DataView = CapabilitySetDataView;
  using Data_ = internal::CapabilitySet_Data;

  template <typename... Args>
  static CapabilitySetPtr New(Args&&... args) {
    return CapabilitySetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CapabilitySetPtr From(const U& u) {
    return mojo::TypeConverter<CapabilitySetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CapabilitySet>::Convert(*this);
  }


  CapabilitySet();

  explicit CapabilitySet(
      const WTF::Vector<WTF::String>& capabilities);

  ~CapabilitySet();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CapabilitySetPtr>
  CapabilitySetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CapabilitySet>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CapabilitySet::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CapabilitySet::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CapabilitySet_UnserializedMessageContext<
            UserType, CapabilitySet::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CapabilitySet::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CapabilitySet::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CapabilitySet_UnserializedMessageContext<
            UserType, CapabilitySet::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CapabilitySet::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<WTF::String> capabilities;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) InterfaceProviderSpec {
 public:
  using DataView = InterfaceProviderSpecDataView;
  using Data_ = internal::InterfaceProviderSpec_Data;

  template <typename... Args>
  static InterfaceProviderSpecPtr New(Args&&... args) {
    return InterfaceProviderSpecPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InterfaceProviderSpecPtr From(const U& u) {
    return mojo::TypeConverter<InterfaceProviderSpecPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InterfaceProviderSpec>::Convert(*this);
  }


  InterfaceProviderSpec();

  InterfaceProviderSpec(
      WTF::HashMap<WTF::String, InterfaceSetPtr> provides,
      WTF::HashMap<WTF::String, CapabilitySetPtr> requires);

  ~InterfaceProviderSpec();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InterfaceProviderSpecPtr>
  InterfaceProviderSpecPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InterfaceProviderSpec>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        InterfaceProviderSpec::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        InterfaceProviderSpec::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::InterfaceProviderSpec_UnserializedMessageContext<
            UserType, InterfaceProviderSpec::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<InterfaceProviderSpec::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return InterfaceProviderSpec::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::InterfaceProviderSpec_UnserializedMessageContext<
            UserType, InterfaceProviderSpec::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<InterfaceProviderSpec::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::HashMap<WTF::String, InterfaceSetPtr> provides;
  
  WTF::HashMap<WTF::String, CapabilitySetPtr> requires;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(InterfaceProviderSpec);
};

template <typename StructPtrType>
InterfaceSetPtr InterfaceSet::Clone() const {
  return New(
      mojo::Clone(interfaces)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InterfaceSet>::value>::type*>
bool InterfaceSet::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->interfaces, other_struct.interfaces))
    return false;
  return true;
}
template <typename StructPtrType>
CapabilitySetPtr CapabilitySet::Clone() const {
  return New(
      mojo::Clone(capabilities)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CapabilitySet>::value>::type*>
bool CapabilitySet::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->capabilities, other_struct.capabilities))
    return false;
  return true;
}
template <typename StructPtrType>
InterfaceProviderSpecPtr InterfaceProviderSpec::Clone() const {
  return New(
      mojo::Clone(provides),
      mojo::Clone(requires)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InterfaceProviderSpec>::value>::type*>
bool InterfaceProviderSpec::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->provides, other_struct.provides))
    return false;
  if (!mojo::Equals(this->requires, other_struct.requires))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) StructTraits<::service_manager::mojom::blink::InterfaceSet::DataView,
                                         ::service_manager::mojom::blink::InterfaceSetPtr> {
  static bool IsNull(const ::service_manager::mojom::blink::InterfaceSetPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::blink::InterfaceSetPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::blink::InterfaceSet::interfaces)& interfaces(
      const ::service_manager::mojom::blink::InterfaceSetPtr& input) {
    return input->interfaces;
  }

  static bool Read(::service_manager::mojom::blink::InterfaceSet::DataView input, ::service_manager::mojom::blink::InterfaceSetPtr* output);
};


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) StructTraits<::service_manager::mojom::blink::CapabilitySet::DataView,
                                         ::service_manager::mojom::blink::CapabilitySetPtr> {
  static bool IsNull(const ::service_manager::mojom::blink::CapabilitySetPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::blink::CapabilitySetPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::blink::CapabilitySet::capabilities)& capabilities(
      const ::service_manager::mojom::blink::CapabilitySetPtr& input) {
    return input->capabilities;
  }

  static bool Read(::service_manager::mojom::blink::CapabilitySet::DataView input, ::service_manager::mojom::blink::CapabilitySetPtr* output);
};


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) StructTraits<::service_manager::mojom::blink::InterfaceProviderSpec::DataView,
                                         ::service_manager::mojom::blink::InterfaceProviderSpecPtr> {
  static bool IsNull(const ::service_manager::mojom::blink::InterfaceProviderSpecPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::blink::InterfaceProviderSpecPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::blink::InterfaceProviderSpec::provides)& provides(
      const ::service_manager::mojom::blink::InterfaceProviderSpecPtr& input) {
    return input->provides;
  }

  static const decltype(::service_manager::mojom::blink::InterfaceProviderSpec::requires)& requires(
      const ::service_manager::mojom::blink::InterfaceProviderSpecPtr& input) {
    return input->requires;
  }

  static bool Read(::service_manager::mojom::blink::InterfaceProviderSpec::DataView input, ::service_manager::mojom::blink::InterfaceProviderSpecPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_BLINK_H_