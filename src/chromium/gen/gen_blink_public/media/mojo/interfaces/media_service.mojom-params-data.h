// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_PARAMS_DATA_H_

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
namespace media {
namespace mojom {
namespace internal {
class  MediaService_CreateInterfaceFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaService_CreateInterfaceFactory_Params_Data));
      new (data()) MediaService_CreateInterfaceFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaService_CreateInterfaceFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaService_CreateInterfaceFactory_Params_Data>(index_);
    }
    MediaService_CreateInterfaceFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data factory;
  mojo::internal::Interface_Data host_interfaces;
  uint8_t padfinal_[4];

 private:
  MediaService_CreateInterfaceFactory_Params_Data();
  ~MediaService_CreateInterfaceFactory_Params_Data() = delete;
};
static_assert(sizeof(MediaService_CreateInterfaceFactory_Params_Data) == 24,
              "Bad sizeof(MediaService_CreateInterfaceFactory_Params_Data)");

}  // namespace internal
class MediaService_CreateInterfaceFactory_ParamsDataView {
 public:
  MediaService_CreateInterfaceFactory_ParamsDataView() {}

  MediaService_CreateInterfaceFactory_ParamsDataView(
      internal::MediaService_CreateInterfaceFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::InterfaceFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHostInterfaces() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->host_interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaService_CreateInterfaceFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_PARAMS_DATA_H_