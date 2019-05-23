// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_factory.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace sample {
class RequestDataView;

class ResponseDataView;



}  // namespace sample

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::sample::RequestDataView> {
  using Data = ::sample::internal::Request_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::sample::ResponseDataView> {
  using Data = ::sample::internal::Response_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace sample {
// Interface base classes. They are used for type safety check.
class NamedObjectInterfaceBase {};

using NamedObjectPtrDataView =
    mojo::InterfacePtrDataView<NamedObjectInterfaceBase>;
using NamedObjectRequestDataView =
    mojo::InterfaceRequestDataView<NamedObjectInterfaceBase>;
using NamedObjectAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NamedObjectInterfaceBase>;
using NamedObjectAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NamedObjectInterfaceBase>;
class FactoryInterfaceBase {};

using FactoryPtrDataView =
    mojo::InterfacePtrDataView<FactoryInterfaceBase>;
using FactoryRequestDataView =
    mojo::InterfaceRequestDataView<FactoryInterfaceBase>;
using FactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FactoryInterfaceBase>;
using FactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FactoryInterfaceBase>;
class RequestDataView {
 public:
  RequestDataView() {}

  RequestDataView(
      internal::Request_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  mojo::ScopedMessagePipeHandle TakePipe() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetMorePipesDataView(
      mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMorePipes(UserType* output) {
    auto* pointer = data_->more_pipes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeObj() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::imported::ImportedInterfaceInterfaceBase>>(
            &data_->obj, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Request_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ResponseDataView {
 public:
  ResponseDataView() {}

  ResponseDataView(
      internal::Response_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  mojo::ScopedMessagePipeHandle TakePipe() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Response_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace sample

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::RequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::sample::RequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::sample::internal::Request_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    decltype(Traits::pipe(input)) in_pipe = Traits::pipe(input);
    mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
        in_pipe, &(*output)->pipe, context);
    decltype(Traits::more_pipes(input)) in_more_pipes = Traits::more_pipes(input);
    typename decltype((*output)->more_pipes)::BaseType::BufferWriter
        more_pipes_writer;
    const mojo::internal::ContainerValidateParams more_pipes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        in_more_pipes, buffer, &more_pipes_writer, &more_pipes_validate_params,
        context);
    (*output)->more_pipes.Set(
        more_pipes_writer.is_null() ? nullptr : more_pipes_writer.data());
    decltype(Traits::obj(input)) in_obj = Traits::obj(input);
    mojo::internal::Serialize<mojo::InterfacePtrDataView<::imported::ImportedInterfaceInterfaceBase>>(
        in_obj, &(*output)->obj, context);
  }

  static bool Deserialize(::sample::internal::Request_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::sample::RequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::ResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::sample::ResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::sample::internal::Response_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    decltype(Traits::pipe(input)) in_pipe = Traits::pipe(input);
    mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
        in_pipe, &(*output)->pipe, context);
  }

  static bool Deserialize(::sample::internal::Response_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::sample::ResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace sample {

inline void RequestDataView::GetMorePipesDataView(
    mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output) {
  auto pointer = data_->more_pipes.Get();
  *output = mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>(pointer, context_);
}





}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_SHARED_H_