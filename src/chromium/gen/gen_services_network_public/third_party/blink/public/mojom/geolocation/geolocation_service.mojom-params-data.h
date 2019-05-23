// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) GeolocationService_CreateGeolocation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GeolocationService_CreateGeolocation_Params_Data));
      new (data()) GeolocationService_CreateGeolocation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GeolocationService_CreateGeolocation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GeolocationService_CreateGeolocation_Params_Data>(index_);
    }
    GeolocationService_CreateGeolocation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t user_gesture : 1;
  uint8_t padfinal_[3];

 private:
  GeolocationService_CreateGeolocation_Params_Data();
  ~GeolocationService_CreateGeolocation_Params_Data() = delete;
};
static_assert(sizeof(GeolocationService_CreateGeolocation_Params_Data) == 16,
              "Bad sizeof(GeolocationService_CreateGeolocation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) GeolocationService_CreateGeolocation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GeolocationService_CreateGeolocation_ResponseParams_Data));
      new (data()) GeolocationService_CreateGeolocation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GeolocationService_CreateGeolocation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GeolocationService_CreateGeolocation_ResponseParams_Data>(index_);
    }
    GeolocationService_CreateGeolocation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  GeolocationService_CreateGeolocation_ResponseParams_Data();
  ~GeolocationService_CreateGeolocation_ResponseParams_Data() = delete;
};
static_assert(sizeof(GeolocationService_CreateGeolocation_ResponseParams_Data) == 16,
              "Bad sizeof(GeolocationService_CreateGeolocation_ResponseParams_Data)");

}  // namespace internal
class GeolocationService_CreateGeolocation_ParamsDataView {
 public:
  GeolocationService_CreateGeolocation_ParamsDataView() {}

  GeolocationService_CreateGeolocation_ParamsDataView(
      internal::GeolocationService_CreateGeolocation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::GeolocationRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::GeolocationService_CreateGeolocation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GeolocationService_CreateGeolocation_ResponseParamsDataView {
 public:
  GeolocationService_CreateGeolocation_ResponseParamsDataView() {}

  GeolocationService_CreateGeolocation_ResponseParamsDataView(
      internal::GeolocationService_CreateGeolocation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::PermissionStatus status() const {
    return static_cast<::blink::mojom::PermissionStatus>(data_->status);
  }
 private:
  internal::GeolocationService_CreateGeolocation_ResponseParams_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_PARAMS_DATA_H_