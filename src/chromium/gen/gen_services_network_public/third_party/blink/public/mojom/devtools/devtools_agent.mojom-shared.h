// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class DevToolsMessageDataView;

class DevToolsSessionStateDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::DevToolsMessageDataView> {
  using Data = ::blink::mojom::internal::DevToolsMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::DevToolsSessionStateDataView> {
  using Data = ::blink::mojom::internal::DevToolsSessionState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DevToolsAgentInterfaceBase {};

using DevToolsAgentPtrDataView =
    mojo::InterfacePtrDataView<DevToolsAgentInterfaceBase>;
using DevToolsAgentRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsAgentInterfaceBase>;
using DevToolsAgentAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsAgentInterfaceBase>;
using DevToolsAgentAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsAgentInterfaceBase>;
class DevToolsAgentHostInterfaceBase {};

using DevToolsAgentHostPtrDataView =
    mojo::InterfacePtrDataView<DevToolsAgentHostInterfaceBase>;
using DevToolsAgentHostRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsAgentHostInterfaceBase>;
using DevToolsAgentHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsAgentHostInterfaceBase>;
using DevToolsAgentHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsAgentHostInterfaceBase>;
class DevToolsSessionInterfaceBase {};

using DevToolsSessionPtrDataView =
    mojo::InterfacePtrDataView<DevToolsSessionInterfaceBase>;
using DevToolsSessionRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsSessionInterfaceBase>;
using DevToolsSessionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsSessionInterfaceBase>;
using DevToolsSessionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsSessionInterfaceBase>;
class DevToolsSessionHostInterfaceBase {};

using DevToolsSessionHostPtrDataView =
    mojo::InterfacePtrDataView<DevToolsSessionHostInterfaceBase>;
using DevToolsSessionHostRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsSessionHostInterfaceBase>;
using DevToolsSessionHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsSessionHostInterfaceBase>;
using DevToolsSessionHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsSessionHostInterfaceBase>;
class DevToolsMessageDataView {
 public:
  DevToolsMessageDataView() {}

  DevToolsMessageDataView(
      internal::DevToolsMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsSessionStateDataView {
 public:
  DevToolsSessionStateDataView() {}

  DevToolsSessionStateDataView(
      internal::DevToolsSessionState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsSessionState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DevToolsMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DevToolsMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DevToolsMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_data, buffer, &data_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in DevToolsMessage struct");
  }

  static bool Deserialize(::blink::mojom::internal::DevToolsMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DevToolsMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DevToolsSessionStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DevToolsSessionStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DevToolsSessionState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::entries(input)) in_entries = Traits::entries(input);
    typename decltype((*output)->entries)::BaseType::BufferWriter
        entries_writer;
    const mojo::internal::ContainerValidateParams entries_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        in_entries, buffer, &entries_writer, &entries_validate_params,
        context);
    (*output)->entries.Set(
        entries_writer.is_null() ? nullptr : entries_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->entries.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null entries in DevToolsSessionState struct");
  }

  static bool Deserialize(::blink::mojom::internal::DevToolsSessionState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DevToolsSessionStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void DevToolsMessageDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}


inline void DevToolsSessionStateDataView::GetEntriesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_H_