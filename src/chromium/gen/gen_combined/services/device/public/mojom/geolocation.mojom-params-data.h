// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_PARAMS_DATA_H_

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
class  Geolocation_SetHighAccuracy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Geolocation_SetHighAccuracy_Params_Data));
      new (data()) Geolocation_SetHighAccuracy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Geolocation_SetHighAccuracy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Geolocation_SetHighAccuracy_Params_Data>(index_);
    }
    Geolocation_SetHighAccuracy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t high_accuracy : 1;
  uint8_t padfinal_[7];

 private:
  Geolocation_SetHighAccuracy_Params_Data();
  ~Geolocation_SetHighAccuracy_Params_Data() = delete;
};
static_assert(sizeof(Geolocation_SetHighAccuracy_Params_Data) == 16,
              "Bad sizeof(Geolocation_SetHighAccuracy_Params_Data)");
class  Geolocation_QueryNextPosition_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Geolocation_QueryNextPosition_Params_Data));
      new (data()) Geolocation_QueryNextPosition_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Geolocation_QueryNextPosition_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Geolocation_QueryNextPosition_Params_Data>(index_);
    }
    Geolocation_QueryNextPosition_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Geolocation_QueryNextPosition_Params_Data();
  ~Geolocation_QueryNextPosition_Params_Data() = delete;
};
static_assert(sizeof(Geolocation_QueryNextPosition_Params_Data) == 8,
              "Bad sizeof(Geolocation_QueryNextPosition_Params_Data)");
class  Geolocation_QueryNextPosition_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Geolocation_QueryNextPosition_ResponseParams_Data));
      new (data()) Geolocation_QueryNextPosition_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Geolocation_QueryNextPosition_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Geolocation_QueryNextPosition_ResponseParams_Data>(index_);
    }
    Geolocation_QueryNextPosition_ResponseParams_Data* operator->() { return data(); }

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
  Geolocation_QueryNextPosition_ResponseParams_Data();
  ~Geolocation_QueryNextPosition_ResponseParams_Data() = delete;
};
static_assert(sizeof(Geolocation_QueryNextPosition_ResponseParams_Data) == 16,
              "Bad sizeof(Geolocation_QueryNextPosition_ResponseParams_Data)");

}  // namespace internal
class Geolocation_SetHighAccuracy_ParamsDataView {
 public:
  Geolocation_SetHighAccuracy_ParamsDataView() {}

  Geolocation_SetHighAccuracy_ParamsDataView(
      internal::Geolocation_SetHighAccuracy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool high_accuracy() const {
    return data_->high_accuracy;
  }
 private:
  internal::Geolocation_SetHighAccuracy_Params_Data* data_ = nullptr;
};

class Geolocation_QueryNextPosition_ParamsDataView {
 public:
  Geolocation_QueryNextPosition_ParamsDataView() {}

  Geolocation_QueryNextPosition_ParamsDataView(
      internal::Geolocation_QueryNextPosition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Geolocation_QueryNextPosition_Params_Data* data_ = nullptr;
};

class Geolocation_QueryNextPosition_ResponseParamsDataView {
 public:
  Geolocation_QueryNextPosition_ResponseParamsDataView() {}

  Geolocation_QueryNextPosition_ResponseParamsDataView(
      internal::Geolocation_QueryNextPosition_ResponseParams_Data* data,
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
  internal::Geolocation_QueryNextPosition_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void Geolocation_QueryNextPosition_ResponseParamsDataView::GetGeopositionDataView(
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

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_PARAMS_DATA_H_