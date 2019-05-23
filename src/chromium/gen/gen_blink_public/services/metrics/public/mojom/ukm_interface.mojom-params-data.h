// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_PARAMS_DATA_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_PARAMS_DATA_H_

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
namespace ukm {
namespace mojom {
namespace internal {
class  UkmRecorderInterface_AddEntry_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UkmRecorderInterface_AddEntry_Params_Data));
      new (data()) UkmRecorderInterface_AddEntry_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UkmRecorderInterface_AddEntry_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UkmRecorderInterface_AddEntry_Params_Data>(index_);
    }
    UkmRecorderInterface_AddEntry_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::UkmEntry_Data> entry;

 private:
  UkmRecorderInterface_AddEntry_Params_Data();
  ~UkmRecorderInterface_AddEntry_Params_Data() = delete;
};
static_assert(sizeof(UkmRecorderInterface_AddEntry_Params_Data) == 16,
              "Bad sizeof(UkmRecorderInterface_AddEntry_Params_Data)");
class  UkmRecorderInterface_UpdateSourceURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UkmRecorderInterface_UpdateSourceURL_Params_Data));
      new (data()) UkmRecorderInterface_UpdateSourceURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UkmRecorderInterface_UpdateSourceURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UkmRecorderInterface_UpdateSourceURL_Params_Data>(index_);
    }
    UkmRecorderInterface_UpdateSourceURL_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t source_id;
  mojo::internal::Pointer<mojo::internal::String_Data> url;

 private:
  UkmRecorderInterface_UpdateSourceURL_Params_Data();
  ~UkmRecorderInterface_UpdateSourceURL_Params_Data() = delete;
};
static_assert(sizeof(UkmRecorderInterface_UpdateSourceURL_Params_Data) == 24,
              "Bad sizeof(UkmRecorderInterface_UpdateSourceURL_Params_Data)");

}  // namespace internal
class UkmRecorderInterface_AddEntry_ParamsDataView {
 public:
  UkmRecorderInterface_AddEntry_ParamsDataView() {}

  UkmRecorderInterface_AddEntry_ParamsDataView(
      internal::UkmRecorderInterface_AddEntry_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntryDataView(
      UkmEntryDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntry(UserType* output) {
    auto* pointer = data_->entry.Get();
    return mojo::internal::Deserialize<::ukm::mojom::UkmEntryDataView>(
        pointer, output, context_);
  }
 private:
  internal::UkmRecorderInterface_AddEntry_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UkmRecorderInterface_UpdateSourceURL_ParamsDataView {
 public:
  UkmRecorderInterface_UpdateSourceURL_ParamsDataView() {}

  UkmRecorderInterface_UpdateSourceURL_ParamsDataView(
      internal::UkmRecorderInterface_UpdateSourceURL_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t source_id() const {
    return data_->source_id;
  }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::UkmRecorderInterface_UpdateSourceURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void UkmRecorderInterface_AddEntry_ParamsDataView::GetEntryDataView(
    UkmEntryDataView* output) {
  auto pointer = data_->entry.Get();
  *output = UkmEntryDataView(pointer, context_);
}


inline void UkmRecorderInterface_UpdateSourceURL_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace ukm

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_PARAMS_DATA_H_