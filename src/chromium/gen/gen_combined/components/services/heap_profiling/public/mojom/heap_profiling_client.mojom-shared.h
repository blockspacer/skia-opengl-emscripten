// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_H_

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
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace heap_profiling {
namespace mojom {
class ProfilingParamsDataView;

class HeapProfileSampleDataView;

class HeapProfileDataView;



}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::heap_profiling::mojom::ProfilingParamsDataView> {
  using Data = ::heap_profiling::mojom::internal::ProfilingParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::heap_profiling::mojom::HeapProfileSampleDataView> {
  using Data = ::heap_profiling::mojom::internal::HeapProfileSample_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::heap_profiling::mojom::HeapProfileDataView> {
  using Data = ::heap_profiling::mojom::internal::HeapProfile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace heap_profiling {
namespace mojom {


enum class StackMode : int32_t {
  
  NATIVE_WITH_THREAD_NAMES,
  
  NATIVE_WITHOUT_THREAD_NAMES,
  
  PSEUDO,
  
  MIXED,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, StackMode value);
inline bool IsKnownEnumValue(StackMode value) {
  return internal::StackMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AllocatorType : int32_t {
  
  kMalloc,
  
  kPartitionAlloc,
  
  kOilpan,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AllocatorType value);
inline bool IsKnownEnumValue(AllocatorType value) {
  return internal::AllocatorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ProfilingClientInterfaceBase {};

using ProfilingClientPtrDataView =
    mojo::InterfacePtrDataView<ProfilingClientInterfaceBase>;
using ProfilingClientRequestDataView =
    mojo::InterfaceRequestDataView<ProfilingClientInterfaceBase>;
using ProfilingClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProfilingClientInterfaceBase>;
using ProfilingClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProfilingClientInterfaceBase>;
class ProfilingParamsDataView {
 public:
  ProfilingParamsDataView() {}

  ProfilingParamsDataView(
      internal::ProfilingParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStackMode(UserType* output) const {
    auto data_value = data_->stack_mode;
    return mojo::internal::Deserialize<::heap_profiling::mojom::StackMode>(
        data_value, output);
  }

  StackMode stack_mode() const {
    return static_cast<StackMode>(data_->stack_mode);
  }
  uint32_t sampling_rate() const {
    return data_->sampling_rate;
  }
 private:
  internal::ProfilingParams_Data* data_ = nullptr;
};

class HeapProfileSampleDataView {
 public:
  HeapProfileSampleDataView() {}

  HeapProfileSampleDataView(
      internal::HeapProfileSample_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocator(UserType* output) const {
    auto data_value = data_->allocator;
    return mojo::internal::Deserialize<::heap_profiling::mojom::AllocatorType>(
        data_value, output);
  }

  AllocatorType allocator() const {
    return static_cast<AllocatorType>(data_->allocator);
  }
  uint64_t size() const {
    return data_->size;
  }
  uint64_t context_id() const {
    return data_->context_id;
  }
  inline void GetStackDataView(
      mojo::ArrayDataView<uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStack(UserType* output) {
    auto* pointer = data_->stack.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfileSample_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfileDataView {
 public:
  HeapProfileDataView() {}

  HeapProfileDataView(
      internal::HeapProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSamplesDataView(
      mojo::ArrayDataView<HeapProfileSampleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSamples(UserType* output) {
    auto* pointer = data_->samples.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::heap_profiling::mojom::HeapProfileSampleDataView>>(
        pointer, output, context_);
  }
  inline void GetStringsDataView(
      mojo::MapDataView<uint64_t, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrings(UserType* output) {
    auto* pointer = data_->strings.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint64_t, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace heap_profiling

namespace std {

template <>
struct hash<::heap_profiling::mojom::StackMode>
    : public mojo::internal::EnumHashImpl<::heap_profiling::mojom::StackMode> {};

template <>
struct hash<::heap_profiling::mojom::AllocatorType>
    : public mojo::internal::EnumHashImpl<::heap_profiling::mojom::AllocatorType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::heap_profiling::mojom::StackMode, ::heap_profiling::mojom::StackMode> {
  static ::heap_profiling::mojom::StackMode ToMojom(::heap_profiling::mojom::StackMode input) { return input; }
  static bool FromMojom(::heap_profiling::mojom::StackMode input, ::heap_profiling::mojom::StackMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::StackMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::heap_profiling::mojom::StackMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::heap_profiling::mojom::StackMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::heap_profiling::mojom::AllocatorType, ::heap_profiling::mojom::AllocatorType> {
  static ::heap_profiling::mojom::AllocatorType ToMojom(::heap_profiling::mojom::AllocatorType input) { return input; }
  static bool FromMojom(::heap_profiling::mojom::AllocatorType input, ::heap_profiling::mojom::AllocatorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::AllocatorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::heap_profiling::mojom::AllocatorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::heap_profiling::mojom::AllocatorType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::ProfilingParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::heap_profiling::mojom::ProfilingParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::heap_profiling::mojom::internal::ProfilingParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::heap_profiling::mojom::StackMode>(
        Traits::stack_mode(input), &(*output)->stack_mode);
    (*output)->sampling_rate = Traits::sampling_rate(input);
  }

  static bool Deserialize(::heap_profiling::mojom::internal::ProfilingParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::heap_profiling::mojom::ProfilingParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::HeapProfileSampleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::heap_profiling::mojom::HeapProfileSampleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::heap_profiling::mojom::internal::HeapProfileSample_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::heap_profiling::mojom::AllocatorType>(
        Traits::allocator(input), &(*output)->allocator);
    (*output)->size = Traits::size(input);
    (*output)->context_id = Traits::context_id(input);
    decltype(Traits::stack(input)) in_stack = Traits::stack(input);
    typename decltype((*output)->stack)::BaseType::BufferWriter
        stack_writer;
    const mojo::internal::ContainerValidateParams stack_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint64_t>>(
        in_stack, buffer, &stack_writer, &stack_validate_params,
        context);
    (*output)->stack.Set(
        stack_writer.is_null() ? nullptr : stack_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stack.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stack in HeapProfileSample struct");
  }

  static bool Deserialize(::heap_profiling::mojom::internal::HeapProfileSample_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::heap_profiling::mojom::HeapProfileSampleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::HeapProfileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::heap_profiling::mojom::HeapProfileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::heap_profiling::mojom::internal::HeapProfile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::samples(input)) in_samples = Traits::samples(input);
    typename decltype((*output)->samples)::BaseType::BufferWriter
        samples_writer;
    const mojo::internal::ContainerValidateParams samples_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::heap_profiling::mojom::HeapProfileSampleDataView>>(
        in_samples, buffer, &samples_writer, &samples_validate_params,
        context);
    (*output)->samples.Set(
        samples_writer.is_null() ? nullptr : samples_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->samples.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null samples in HeapProfile struct");
    decltype(Traits::strings(input)) in_strings = Traits::strings(input);
    typename decltype((*output)->strings)::BaseType::BufferWriter
        strings_writer;
    const mojo::internal::ContainerValidateParams strings_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<uint64_t, mojo::StringDataView>>(
        in_strings, buffer, &strings_writer, &strings_validate_params,
        context);
    (*output)->strings.Set(
        strings_writer.is_null() ? nullptr : strings_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->strings.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null strings in HeapProfile struct");
  }

  static bool Deserialize(::heap_profiling::mojom::internal::HeapProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::heap_profiling::mojom::HeapProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace heap_profiling {
namespace mojom {



inline void HeapProfileSampleDataView::GetStackDataView(
    mojo::ArrayDataView<uint64_t>* output) {
  auto pointer = data_->stack.Get();
  *output = mojo::ArrayDataView<uint64_t>(pointer, context_);
}


inline void HeapProfileDataView::GetSamplesDataView(
    mojo::ArrayDataView<HeapProfileSampleDataView>* output) {
  auto pointer = data_->samples.Get();
  *output = mojo::ArrayDataView<HeapProfileSampleDataView>(pointer, context_);
}
inline void HeapProfileDataView::GetStringsDataView(
    mojo::MapDataView<uint64_t, mojo::StringDataView>* output) {
  auto pointer = data_->strings.Get();
  *output = mojo::MapDataView<uint64_t, mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_H_