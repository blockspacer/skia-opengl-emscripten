// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_PARAMS_DATA_H_

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
class  GeolocationContext_BindGeolocation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GeolocationContext_BindGeolocation_Params_Data));
      new (data()) GeolocationContext_BindGeolocation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GeolocationContext_BindGeolocation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GeolocationContext_BindGeolocation_Params_Data>(index_);
    }
    GeolocationContext_BindGeolocation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  GeolocationContext_BindGeolocation_Params_Data();
  ~GeolocationContext_BindGeolocation_Params_Data() = delete;
};
static_assert(sizeof(GeolocationContext_BindGeolocation_Params_Data) == 16,
              "Bad sizeof(GeolocationContext_BindGeolocation_Params_Data)");
class  GeolocationContext_SetOverride_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GeolocationContext_SetOverride_Params_Data));
      new (data()) GeolocationContext_SetOverride_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GeolocationContext_SetOverride_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GeolocationContext_SetOverride_Params_Data>(index_);
    }
    GeolocationContext_SetOverride_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::Geoposition_Data> geoposition;

 private:
  GeolocationContext_SetOverride_Params_Data();
  ~GeolocationContext_SetOverride_Params_Data() = delete;
};
static_assert(sizeof(GeolocationContext_SetOverride_Params_Data) == 16,
              "Bad sizeof(GeolocationContext_SetOverride_Params_Data)");
class  GeolocationContext_ClearOverride_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GeolocationContext_ClearOverride_Params_Data));
      new (data()) GeolocationContext_ClearOverride_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GeolocationContext_ClearOverride_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GeolocationContext_ClearOverride_Params_Data>(index_);
    }
    GeolocationContext_ClearOverride_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GeolocationContext_ClearOverride_Params_Data();
  ~GeolocationContext_ClearOverride_Params_Data() = delete;
};
static_assert(sizeof(GeolocationContext_ClearOverride_Params_Data) == 8,
              "Bad sizeof(GeolocationContext_ClearOverride_Params_Data)");

}  // namespace internal
class GeolocationContext_BindGeolocation_ParamsDataView {
 public:
  GeolocationContext_BindGeolocation_ParamsDataView() {}

  GeolocationContext_BindGeolocation_ParamsDataView(
      internal::GeolocationContext_BindGeolocation_Params_Data* data,
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
 private:
  internal::GeolocationContext_BindGeolocation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GeolocationContext_SetOverride_ParamsDataView {
 public:
  GeolocationContext_SetOverride_ParamsDataView() {}

  GeolocationContext_SetOverride_ParamsDataView(
      internal::GeolocationContext_SetOverride_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGeopositionDataView(
      ::device::mojom::GeopositionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGeoposition(UserType* output) {
    auto* pointer = data_->geoposition.Get();
    return mojo::internal::Deserialize<::device::mojom::GeopositionDataView>(
        pointer, output, context_);
  }
 private:
  internal::GeolocationContext_SetOverride_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GeolocationContext_ClearOverride_ParamsDataView {
 public:
  GeolocationContext_ClearOverride_ParamsDataView() {}

  GeolocationContext_ClearOverride_ParamsDataView(
      internal::GeolocationContext_ClearOverride_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GeolocationContext_ClearOverride_Params_Data* data_ = nullptr;
};




inline void GeolocationContext_SetOverride_ParamsDataView::GetGeopositionDataView(
    ::device::mojom::GeopositionDataView* output) {
  auto pointer = data_->geoposition.Get();
  *output = ::device::mojom::GeopositionDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_PARAMS_DATA_H_