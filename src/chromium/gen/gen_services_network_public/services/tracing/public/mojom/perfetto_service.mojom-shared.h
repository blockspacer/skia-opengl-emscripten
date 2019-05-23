// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_H_

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
#include "services/tracing/public/mojom/perfetto_service.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace tracing {
namespace mojom {
class ChunksToMoveDataView;

class ChunkPatchDataView;

class ChunksToPatchDataView;

class CommitDataRequestDataView;

class ChromeConfigDataView;

class DataSourceConfigDataView;

class DataSourceRegistrationDataView;

class BufferConfigDataView;

class DataSourceDataView;

class PerfettoBuiltinDataSourceDataView;

class TraceConfigDataView;



}  // namespace mojom
}  // namespace tracing

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::tracing::mojom::ChunksToMoveDataView> {
  using Data = ::tracing::mojom::internal::ChunksToMove_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::ChunkPatchDataView> {
  using Data = ::tracing::mojom::internal::ChunkPatch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::ChunksToPatchDataView> {
  using Data = ::tracing::mojom::internal::ChunksToPatch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::CommitDataRequestDataView> {
  using Data = ::tracing::mojom::internal::CommitDataRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::ChromeConfigDataView> {
  using Data = ::tracing::mojom::internal::ChromeConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::DataSourceConfigDataView> {
  using Data = ::tracing::mojom::internal::DataSourceConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::DataSourceRegistrationDataView> {
  using Data = ::tracing::mojom::internal::DataSourceRegistration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::BufferConfigDataView> {
  using Data = ::tracing::mojom::internal::BufferConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::DataSourceDataView> {
  using Data = ::tracing::mojom::internal::DataSource_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::PerfettoBuiltinDataSourceDataView> {
  using Data = ::tracing::mojom::internal::PerfettoBuiltinDataSource_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::TraceConfigDataView> {
  using Data = ::tracing::mojom::internal::TraceConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace tracing {
namespace mojom {


enum class TracingClientPriority : int32_t {
  
  kUnknown,
  
  kBackground,
  
  kUserInitiated,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(TRACING_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TracingClientPriority value);
inline bool IsKnownEnumValue(TracingClientPriority value) {
  return internal::TracingClientPriority_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ProducerHostInterfaceBase {};

using ProducerHostPtrDataView =
    mojo::InterfacePtrDataView<ProducerHostInterfaceBase>;
using ProducerHostRequestDataView =
    mojo::InterfaceRequestDataView<ProducerHostInterfaceBase>;
using ProducerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProducerHostInterfaceBase>;
using ProducerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProducerHostInterfaceBase>;
class ProducerClientInterfaceBase {};

using ProducerClientPtrDataView =
    mojo::InterfacePtrDataView<ProducerClientInterfaceBase>;
using ProducerClientRequestDataView =
    mojo::InterfaceRequestDataView<ProducerClientInterfaceBase>;
using ProducerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProducerClientInterfaceBase>;
using ProducerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProducerClientInterfaceBase>;
class PerfettoServiceInterfaceBase {};

using PerfettoServicePtrDataView =
    mojo::InterfacePtrDataView<PerfettoServiceInterfaceBase>;
using PerfettoServiceRequestDataView =
    mojo::InterfaceRequestDataView<PerfettoServiceInterfaceBase>;
using PerfettoServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PerfettoServiceInterfaceBase>;
using PerfettoServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PerfettoServiceInterfaceBase>;
class ConsumerHostInterfaceBase {};

using ConsumerHostPtrDataView =
    mojo::InterfacePtrDataView<ConsumerHostInterfaceBase>;
using ConsumerHostRequestDataView =
    mojo::InterfaceRequestDataView<ConsumerHostInterfaceBase>;
using ConsumerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ConsumerHostInterfaceBase>;
using ConsumerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ConsumerHostInterfaceBase>;
class TracingSessionHostInterfaceBase {};

using TracingSessionHostPtrDataView =
    mojo::InterfacePtrDataView<TracingSessionHostInterfaceBase>;
using TracingSessionHostRequestDataView =
    mojo::InterfaceRequestDataView<TracingSessionHostInterfaceBase>;
using TracingSessionHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TracingSessionHostInterfaceBase>;
using TracingSessionHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TracingSessionHostInterfaceBase>;
class TracingSessionClientInterfaceBase {};

using TracingSessionClientPtrDataView =
    mojo::InterfacePtrDataView<TracingSessionClientInterfaceBase>;
using TracingSessionClientRequestDataView =
    mojo::InterfaceRequestDataView<TracingSessionClientInterfaceBase>;
using TracingSessionClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TracingSessionClientInterfaceBase>;
using TracingSessionClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TracingSessionClientInterfaceBase>;
class ChunksToMoveDataView {
 public:
  ChunksToMoveDataView() {}

  ChunksToMoveDataView(
      internal::ChunksToMove_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t page() const {
    return data_->page;
  }
  uint32_t chunk() const {
    return data_->chunk;
  }
  uint32_t target_buffer() const {
    return data_->target_buffer;
  }
 private:
  internal::ChunksToMove_Data* data_ = nullptr;
};

class ChunkPatchDataView {
 public:
  ChunkPatchDataView() {}

  ChunkPatchDataView(
      internal::ChunkPatch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t offset() const {
    return data_->offset;
  }
  inline void GetDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ChunkPatch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChunksToPatchDataView {
 public:
  ChunksToPatchDataView() {}

  ChunksToPatchDataView(
      internal::ChunksToPatch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t target_buffer() const {
    return data_->target_buffer;
  }
  uint32_t writer_id() const {
    return data_->writer_id;
  }
  uint32_t chunk_id() const {
    return data_->chunk_id;
  }
  inline void GetPatchesDataView(
      mojo::ArrayDataView<ChunkPatchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPatches(UserType* output) {
    auto* pointer = data_->patches.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::ChunkPatchDataView>>(
        pointer, output, context_);
  }
  bool has_more_patches() const {
    return data_->has_more_patches;
  }
 private:
  internal::ChunksToPatch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CommitDataRequestDataView {
 public:
  CommitDataRequestDataView() {}

  CommitDataRequestDataView(
      internal::CommitDataRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChunksToMoveDataView(
      mojo::ArrayDataView<ChunksToMoveDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChunksToMove(UserType* output) {
    auto* pointer = data_->chunks_to_move.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::ChunksToMoveDataView>>(
        pointer, output, context_);
  }
  inline void GetChunksToPatchDataView(
      mojo::ArrayDataView<ChunksToPatchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChunksToPatch(UserType* output) {
    auto* pointer = data_->chunks_to_patch.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::ChunksToPatchDataView>>(
        pointer, output, context_);
  }
  uint64_t flush_request_id() const {
    return data_->flush_request_id;
  }
 private:
  internal::CommitDataRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChromeConfigDataView {
 public:
  ChromeConfigDataView() {}

  ChromeConfigDataView(
      internal::ChromeConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTraceConfigDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTraceConfig(UserType* output) {
    auto* pointer = data_->trace_config.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool privacy_filtering_enabled() const {
    return data_->privacy_filtering_enabled;
  }
 private:
  internal::ChromeConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataSourceConfigDataView {
 public:
  DataSourceConfigDataView() {}

  DataSourceConfigDataView(
      internal::DataSourceConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t target_buffer() const {
    return data_->target_buffer;
  }
  uint32_t trace_duration_ms() const {
    return data_->trace_duration_ms;
  }
  uint64_t tracing_session_id() const {
    return data_->tracing_session_id;
  }
  inline void GetChromeConfigDataView(
      ChromeConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChromeConfig(UserType* output) {
    auto* pointer = data_->chrome_config.Get();
    return mojo::internal::Deserialize<::tracing::mojom::ChromeConfigDataView>(
        pointer, output, context_);
  }
  inline void GetLegacyConfigDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLegacyConfig(UserType* output) {
    auto* pointer = data_->legacy_config.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DataSourceConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataSourceRegistrationDataView {
 public:
  DataSourceRegistrationDataView() {}

  DataSourceRegistrationDataView(
      internal::DataSourceRegistration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool will_notify_on_start() const {
    return data_->will_notify_on_start;
  }
  bool will_notify_on_stop() const {
    return data_->will_notify_on_stop;
  }
 private:
  internal::DataSourceRegistration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BufferConfigDataView {
 public:
  BufferConfigDataView() {}

  BufferConfigDataView(
      internal::BufferConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t size_kb() const {
    return data_->size_kb;
  }
 private:
  internal::BufferConfig_Data* data_ = nullptr;
};

class DataSourceDataView {
 public:
  DataSourceDataView() {}

  DataSourceDataView(
      internal::DataSource_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      DataSourceConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::tracing::mojom::DataSourceConfigDataView>(
        pointer, output, context_);
  }
  inline void GetProducerNameFilterDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProducerNameFilter(UserType* output) {
    auto* pointer = data_->producer_name_filter.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DataSource_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PerfettoBuiltinDataSourceDataView {
 public:
  PerfettoBuiltinDataSourceDataView() {}

  PerfettoBuiltinDataSourceDataView(
      internal::PerfettoBuiltinDataSource_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool disable_clock_snapshotting() const {
    return data_->disable_clock_snapshotting;
  }
  bool disable_trace_config() const {
    return data_->disable_trace_config;
  }
  bool disable_system_info() const {
    return data_->disable_system_info;
  }
 private:
  internal::PerfettoBuiltinDataSource_Data* data_ = nullptr;
};

class TraceConfigDataView {
 public:
  TraceConfigDataView() {}

  TraceConfigDataView(
      internal::TraceConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataSourcesDataView(
      mojo::ArrayDataView<DataSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataSources(UserType* output) {
    auto* pointer = data_->data_sources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::DataSourceDataView>>(
        pointer, output, context_);
  }
  inline void GetPerfettoBuiltinDataSourceDataView(
      PerfettoBuiltinDataSourceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPerfettoBuiltinDataSource(UserType* output) {
    auto* pointer = data_->perfetto_builtin_data_source.Get();
    return mojo::internal::Deserialize<::tracing::mojom::PerfettoBuiltinDataSourceDataView>(
        pointer, output, context_);
  }
  inline void GetBuffersDataView(
      mojo::ArrayDataView<BufferConfigDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffers(UserType* output) {
    auto* pointer = data_->buffers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::BufferConfigDataView>>(
        pointer, output, context_);
  }
  uint32_t duration_ms() const {
    return data_->duration_ms;
  }
 private:
  internal::TraceConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace tracing

namespace std {

template <>
struct hash<::tracing::mojom::TracingClientPriority>
    : public mojo::internal::EnumHashImpl<::tracing::mojom::TracingClientPriority> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::tracing::mojom::TracingClientPriority, ::tracing::mojom::TracingClientPriority> {
  static ::tracing::mojom::TracingClientPriority ToMojom(::tracing::mojom::TracingClientPriority input) { return input; }
  static bool FromMojom(::tracing::mojom::TracingClientPriority input, ::tracing::mojom::TracingClientPriority* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::TracingClientPriority, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::tracing::mojom::TracingClientPriority, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::tracing::mojom::TracingClientPriority>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ChunksToMoveDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ChunksToMoveDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ChunksToMove_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->page = Traits::page(input);
    (*output)->chunk = Traits::chunk(input);
    (*output)->target_buffer = Traits::target_buffer(input);
  }

  static bool Deserialize(::tracing::mojom::internal::ChunksToMove_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ChunksToMoveDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ChunkPatchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ChunkPatchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ChunkPatch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->offset = Traits::offset(input);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_data, buffer, &data_writer, context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in ChunkPatch struct");
  }

  static bool Deserialize(::tracing::mojom::internal::ChunkPatch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ChunkPatchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ChunksToPatchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ChunksToPatchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ChunksToPatch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->target_buffer = Traits::target_buffer(input);
    (*output)->writer_id = Traits::writer_id(input);
    (*output)->chunk_id = Traits::chunk_id(input);
    decltype(Traits::patches(input)) in_patches = Traits::patches(input);
    typename decltype((*output)->patches)::BaseType::BufferWriter
        patches_writer;
    const mojo::internal::ContainerValidateParams patches_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::ChunkPatchDataView>>(
        in_patches, buffer, &patches_writer, &patches_validate_params,
        context);
    (*output)->patches.Set(
        patches_writer.is_null() ? nullptr : patches_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->patches.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null patches in ChunksToPatch struct");
    (*output)->has_more_patches = Traits::has_more_patches(input);
  }

  static bool Deserialize(::tracing::mojom::internal::ChunksToPatch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ChunksToPatchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::CommitDataRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::CommitDataRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::CommitDataRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::chunks_to_move(input)) in_chunks_to_move = Traits::chunks_to_move(input);
    typename decltype((*output)->chunks_to_move)::BaseType::BufferWriter
        chunks_to_move_writer;
    const mojo::internal::ContainerValidateParams chunks_to_move_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::ChunksToMoveDataView>>(
        in_chunks_to_move, buffer, &chunks_to_move_writer, &chunks_to_move_validate_params,
        context);
    (*output)->chunks_to_move.Set(
        chunks_to_move_writer.is_null() ? nullptr : chunks_to_move_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->chunks_to_move.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null chunks_to_move in CommitDataRequest struct");
    decltype(Traits::chunks_to_patch(input)) in_chunks_to_patch = Traits::chunks_to_patch(input);
    typename decltype((*output)->chunks_to_patch)::BaseType::BufferWriter
        chunks_to_patch_writer;
    const mojo::internal::ContainerValidateParams chunks_to_patch_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::ChunksToPatchDataView>>(
        in_chunks_to_patch, buffer, &chunks_to_patch_writer, &chunks_to_patch_validate_params,
        context);
    (*output)->chunks_to_patch.Set(
        chunks_to_patch_writer.is_null() ? nullptr : chunks_to_patch_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->chunks_to_patch.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null chunks_to_patch in CommitDataRequest struct");
    (*output)->flush_request_id = Traits::flush_request_id(input);
  }

  static bool Deserialize(::tracing::mojom::internal::CommitDataRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::CommitDataRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ChromeConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ChromeConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ChromeConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::trace_config(input)) in_trace_config = Traits::trace_config(input);
    typename decltype((*output)->trace_config)::BaseType::BufferWriter
        trace_config_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_trace_config, buffer, &trace_config_writer, context);
    (*output)->trace_config.Set(
        trace_config_writer.is_null() ? nullptr : trace_config_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->trace_config.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null trace_config in ChromeConfig struct");
    (*output)->privacy_filtering_enabled = Traits::privacy_filtering_enabled(input);
  }

  static bool Deserialize(::tracing::mojom::internal::ChromeConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ChromeConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::DataSourceConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::DataSourceConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::DataSourceConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in DataSourceConfig struct");
    (*output)->target_buffer = Traits::target_buffer(input);
    (*output)->trace_duration_ms = Traits::trace_duration_ms(input);
    (*output)->tracing_session_id = Traits::tracing_session_id(input);
    decltype(Traits::chrome_config(input)) in_chrome_config = Traits::chrome_config(input);
    typename decltype((*output)->chrome_config)::BaseType::BufferWriter
        chrome_config_writer;
    mojo::internal::Serialize<::tracing::mojom::ChromeConfigDataView>(
        in_chrome_config, buffer, &chrome_config_writer, context);
    (*output)->chrome_config.Set(
        chrome_config_writer.is_null() ? nullptr : chrome_config_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->chrome_config.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null chrome_config in DataSourceConfig struct");
    decltype(Traits::legacy_config(input)) in_legacy_config = Traits::legacy_config(input);
    typename decltype((*output)->legacy_config)::BaseType::BufferWriter
        legacy_config_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_legacy_config, buffer, &legacy_config_writer, context);
    (*output)->legacy_config.Set(
        legacy_config_writer.is_null() ? nullptr : legacy_config_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->legacy_config.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null legacy_config in DataSourceConfig struct");
  }

  static bool Deserialize(::tracing::mojom::internal::DataSourceConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::DataSourceConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::DataSourceRegistrationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::DataSourceRegistrationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::DataSourceRegistration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in DataSourceRegistration struct");
    (*output)->will_notify_on_start = Traits::will_notify_on_start(input);
    (*output)->will_notify_on_stop = Traits::will_notify_on_stop(input);
  }

  static bool Deserialize(::tracing::mojom::internal::DataSourceRegistration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::DataSourceRegistrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::BufferConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::BufferConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::BufferConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->size_kb = Traits::size_kb(input);
  }

  static bool Deserialize(::tracing::mojom::internal::BufferConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::BufferConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::DataSourceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::DataSourceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::DataSource_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::config(input)) in_config = Traits::config(input);
    typename decltype((*output)->config)::BaseType::BufferWriter
        config_writer;
    mojo::internal::Serialize<::tracing::mojom::DataSourceConfigDataView>(
        in_config, buffer, &config_writer, context);
    (*output)->config.Set(
        config_writer.is_null() ? nullptr : config_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->config.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null config in DataSource struct");
    decltype(Traits::producer_name_filter(input)) in_producer_name_filter = Traits::producer_name_filter(input);
    typename decltype((*output)->producer_name_filter)::BaseType::BufferWriter
        producer_name_filter_writer;
    const mojo::internal::ContainerValidateParams producer_name_filter_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_producer_name_filter, buffer, &producer_name_filter_writer, &producer_name_filter_validate_params,
        context);
    (*output)->producer_name_filter.Set(
        producer_name_filter_writer.is_null() ? nullptr : producer_name_filter_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->producer_name_filter.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null producer_name_filter in DataSource struct");
  }

  static bool Deserialize(::tracing::mojom::internal::DataSource_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::DataSourceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::PerfettoBuiltinDataSourceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::PerfettoBuiltinDataSourceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::PerfettoBuiltinDataSource_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->disable_clock_snapshotting = Traits::disable_clock_snapshotting(input);
    (*output)->disable_trace_config = Traits::disable_trace_config(input);
    (*output)->disable_system_info = Traits::disable_system_info(input);
  }

  static bool Deserialize(::tracing::mojom::internal::PerfettoBuiltinDataSource_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::PerfettoBuiltinDataSourceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::TraceConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::TraceConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::TraceConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data_sources(input)) in_data_sources = Traits::data_sources(input);
    typename decltype((*output)->data_sources)::BaseType::BufferWriter
        data_sources_writer;
    const mojo::internal::ContainerValidateParams data_sources_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::DataSourceDataView>>(
        in_data_sources, buffer, &data_sources_writer, &data_sources_validate_params,
        context);
    (*output)->data_sources.Set(
        data_sources_writer.is_null() ? nullptr : data_sources_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data_sources.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data_sources in TraceConfig struct");
    decltype(Traits::perfetto_builtin_data_source(input)) in_perfetto_builtin_data_source = Traits::perfetto_builtin_data_source(input);
    typename decltype((*output)->perfetto_builtin_data_source)::BaseType::BufferWriter
        perfetto_builtin_data_source_writer;
    mojo::internal::Serialize<::tracing::mojom::PerfettoBuiltinDataSourceDataView>(
        in_perfetto_builtin_data_source, buffer, &perfetto_builtin_data_source_writer, context);
    (*output)->perfetto_builtin_data_source.Set(
        perfetto_builtin_data_source_writer.is_null() ? nullptr : perfetto_builtin_data_source_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->perfetto_builtin_data_source.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null perfetto_builtin_data_source in TraceConfig struct");
    decltype(Traits::buffers(input)) in_buffers = Traits::buffers(input);
    typename decltype((*output)->buffers)::BaseType::BufferWriter
        buffers_writer;
    const mojo::internal::ContainerValidateParams buffers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::BufferConfigDataView>>(
        in_buffers, buffer, &buffers_writer, &buffers_validate_params,
        context);
    (*output)->buffers.Set(
        buffers_writer.is_null() ? nullptr : buffers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buffers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buffers in TraceConfig struct");
    (*output)->duration_ms = Traits::duration_ms(input);
  }

  static bool Deserialize(::tracing::mojom::internal::TraceConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::TraceConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace tracing {
namespace mojom {



inline void ChunkPatchDataView::GetDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->data.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ChunksToPatchDataView::GetPatchesDataView(
    mojo::ArrayDataView<ChunkPatchDataView>* output) {
  auto pointer = data_->patches.Get();
  *output = mojo::ArrayDataView<ChunkPatchDataView>(pointer, context_);
}


inline void CommitDataRequestDataView::GetChunksToMoveDataView(
    mojo::ArrayDataView<ChunksToMoveDataView>* output) {
  auto pointer = data_->chunks_to_move.Get();
  *output = mojo::ArrayDataView<ChunksToMoveDataView>(pointer, context_);
}
inline void CommitDataRequestDataView::GetChunksToPatchDataView(
    mojo::ArrayDataView<ChunksToPatchDataView>* output) {
  auto pointer = data_->chunks_to_patch.Get();
  *output = mojo::ArrayDataView<ChunksToPatchDataView>(pointer, context_);
}


inline void ChromeConfigDataView::GetTraceConfigDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trace_config.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DataSourceConfigDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DataSourceConfigDataView::GetChromeConfigDataView(
    ChromeConfigDataView* output) {
  auto pointer = data_->chrome_config.Get();
  *output = ChromeConfigDataView(pointer, context_);
}
inline void DataSourceConfigDataView::GetLegacyConfigDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->legacy_config.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DataSourceRegistrationDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void DataSourceDataView::GetConfigDataView(
    DataSourceConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = DataSourceConfigDataView(pointer, context_);
}
inline void DataSourceDataView::GetProducerNameFilterDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->producer_name_filter.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void TraceConfigDataView::GetDataSourcesDataView(
    mojo::ArrayDataView<DataSourceDataView>* output) {
  auto pointer = data_->data_sources.Get();
  *output = mojo::ArrayDataView<DataSourceDataView>(pointer, context_);
}
inline void TraceConfigDataView::GetPerfettoBuiltinDataSourceDataView(
    PerfettoBuiltinDataSourceDataView* output) {
  auto pointer = data_->perfetto_builtin_data_source.Get();
  *output = PerfettoBuiltinDataSourceDataView(pointer, context_);
}
inline void TraceConfigDataView::GetBuffersDataView(
    mojo::ArrayDataView<BufferConfigDataView>* output) {
  auto pointer = data_->buffers.Get();
  *output = mojo::ArrayDataView<BufferConfigDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_H_