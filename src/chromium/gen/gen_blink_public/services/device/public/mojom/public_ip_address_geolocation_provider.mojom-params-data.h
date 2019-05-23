// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_PARAMS_DATA_H_

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
namespace device {
namespace mojom {
namespace internal {
class  PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data));
      new (data()) PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data>(index_);
    }
    PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::MutablePartialNetworkTrafficAnnotationTag_Data> tag;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data();
  ~PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data() = delete;
};
static_assert(sizeof(PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data) == 24,
              "Bad sizeof(PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data)");

}  // namespace internal
class PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView {
 public:
  PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView() {}

  PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView(
      internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTagDataView(
      ::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTag(UserType* output) {
    auto* pointer = data_->tag.Get();
    return mojo::internal::Deserialize<::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::GeolocationRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView::GetTagDataView(
    ::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->tag.Get();
  *output = ::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_PARAMS_DATA_H_