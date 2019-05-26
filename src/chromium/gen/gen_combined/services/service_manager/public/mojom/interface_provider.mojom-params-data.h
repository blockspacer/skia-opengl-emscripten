// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace service_manager {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) InterfaceProvider_GetInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceProvider_GetInterface_Params_Data));
      new (data()) InterfaceProvider_GetInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceProvider_GetInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceProvider_GetInterface_Params_Data>(index_);
    }
    InterfaceProvider_GetInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> interface_name;
  mojo::internal::Handle_Data pipe;
  uint8_t padfinal_[4];

 private:
  InterfaceProvider_GetInterface_Params_Data();
  ~InterfaceProvider_GetInterface_Params_Data() = delete;
};
static_assert(sizeof(InterfaceProvider_GetInterface_Params_Data) == 24,
              "Bad sizeof(InterfaceProvider_GetInterface_Params_Data)");

}  // namespace internal
class InterfaceProvider_GetInterface_ParamsDataView {
 public:
  InterfaceProvider_GetInterface_ParamsDataView() {}

  InterfaceProvider_GetInterface_ParamsDataView(
      internal::InterfaceProvider_GetInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInterfaceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaceName(UserType* output) {
    auto* pointer = data_->interface_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
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
  internal::InterfaceProvider_GetInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void InterfaceProvider_GetInterface_ParamsDataView::GetInterfaceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace service_manager

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_PARAMS_DATA_H_