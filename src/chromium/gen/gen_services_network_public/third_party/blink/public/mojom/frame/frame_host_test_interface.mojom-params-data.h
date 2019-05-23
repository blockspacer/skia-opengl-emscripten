// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FrameHostTestInterface_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHostTestInterface_Ping_Params_Data));
      new (data()) FrameHostTestInterface_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHostTestInterface_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHostTestInterface_Ping_Params_Data>(index_);
    }
    FrameHostTestInterface_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> source_url;
  mojo::internal::Pointer<mojo::internal::String_Data> source_event;

 private:
  FrameHostTestInterface_Ping_Params_Data();
  ~FrameHostTestInterface_Ping_Params_Data() = delete;
};
static_assert(sizeof(FrameHostTestInterface_Ping_Params_Data) == 24,
              "Bad sizeof(FrameHostTestInterface_Ping_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FrameHostTestInterface_GetName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHostTestInterface_GetName_Params_Data));
      new (data()) FrameHostTestInterface_GetName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHostTestInterface_GetName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHostTestInterface_GetName_Params_Data>(index_);
    }
    FrameHostTestInterface_GetName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameHostTestInterface_GetName_Params_Data();
  ~FrameHostTestInterface_GetName_Params_Data() = delete;
};
static_assert(sizeof(FrameHostTestInterface_GetName_Params_Data) == 8,
              "Bad sizeof(FrameHostTestInterface_GetName_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FrameHostTestInterface_GetName_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHostTestInterface_GetName_ResponseParams_Data));
      new (data()) FrameHostTestInterface_GetName_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHostTestInterface_GetName_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHostTestInterface_GetName_ResponseParams_Data>(index_);
    }
    FrameHostTestInterface_GetName_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  FrameHostTestInterface_GetName_ResponseParams_Data();
  ~FrameHostTestInterface_GetName_ResponseParams_Data() = delete;
};
static_assert(sizeof(FrameHostTestInterface_GetName_ResponseParams_Data) == 16,
              "Bad sizeof(FrameHostTestInterface_GetName_ResponseParams_Data)");

}  // namespace internal
class FrameHostTestInterface_Ping_ParamsDataView {
 public:
  FrameHostTestInterface_Ping_ParamsDataView() {}

  FrameHostTestInterface_Ping_ParamsDataView(
      internal::FrameHostTestInterface_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceUrl(UserType* output) {
    auto* pointer = data_->source_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetSourceEventDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceEvent(UserType* output) {
    auto* pointer = data_->source_event.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHostTestInterface_Ping_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHostTestInterface_GetName_ParamsDataView {
 public:
  FrameHostTestInterface_GetName_ParamsDataView() {}

  FrameHostTestInterface_GetName_ParamsDataView(
      internal::FrameHostTestInterface_GetName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameHostTestInterface_GetName_Params_Data* data_ = nullptr;
};

class FrameHostTestInterface_GetName_ResponseParamsDataView {
 public:
  FrameHostTestInterface_GetName_ResponseParamsDataView() {}

  FrameHostTestInterface_GetName_ResponseParamsDataView(
      internal::FrameHostTestInterface_GetName_ResponseParams_Data* data,
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
 private:
  internal::FrameHostTestInterface_GetName_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FrameHostTestInterface_Ping_ParamsDataView::GetSourceUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->source_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FrameHostTestInterface_Ping_ParamsDataView::GetSourceEventDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_event.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void FrameHostTestInterface_GetName_ResponseParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_PARAMS_DATA_H_