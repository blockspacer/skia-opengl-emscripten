// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_PARAMS_DATA_H_

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
class  ProvisionFetcher_Retrieve_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProvisionFetcher_Retrieve_Params_Data));
      new (data()) ProvisionFetcher_Retrieve_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProvisionFetcher_Retrieve_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProvisionFetcher_Retrieve_Params_Data>(index_);
    }
    ProvisionFetcher_Retrieve_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> default_url;
  mojo::internal::Pointer<mojo::internal::String_Data> request_data;

 private:
  ProvisionFetcher_Retrieve_Params_Data();
  ~ProvisionFetcher_Retrieve_Params_Data() = delete;
};
static_assert(sizeof(ProvisionFetcher_Retrieve_Params_Data) == 24,
              "Bad sizeof(ProvisionFetcher_Retrieve_Params_Data)");
class  ProvisionFetcher_Retrieve_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProvisionFetcher_Retrieve_ResponseParams_Data));
      new (data()) ProvisionFetcher_Retrieve_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProvisionFetcher_Retrieve_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProvisionFetcher_Retrieve_ResponseParams_Data>(index_);
    }
    ProvisionFetcher_Retrieve_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> response;

 private:
  ProvisionFetcher_Retrieve_ResponseParams_Data();
  ~ProvisionFetcher_Retrieve_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProvisionFetcher_Retrieve_ResponseParams_Data) == 24,
              "Bad sizeof(ProvisionFetcher_Retrieve_ResponseParams_Data)");

}  // namespace internal
class ProvisionFetcher_Retrieve_ParamsDataView {
 public:
  ProvisionFetcher_Retrieve_ParamsDataView() {}

  ProvisionFetcher_Retrieve_ParamsDataView(
      internal::ProvisionFetcher_Retrieve_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDefaultUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultUrl(UserType* output) {
    auto* pointer = data_->default_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRequestDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestData(UserType* output) {
    auto* pointer = data_->request_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProvisionFetcher_Retrieve_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProvisionFetcher_Retrieve_ResponseParamsDataView {
 public:
  ProvisionFetcher_Retrieve_ResponseParamsDataView() {}

  ProvisionFetcher_Retrieve_ResponseParamsDataView(
      internal::ProvisionFetcher_Retrieve_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
  inline void GetResponseDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProvisionFetcher_Retrieve_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProvisionFetcher_Retrieve_ParamsDataView::GetDefaultUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->default_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ProvisionFetcher_Retrieve_ParamsDataView::GetRequestDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->request_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProvisionFetcher_Retrieve_ResponseParamsDataView::GetResponseDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->response.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_PARAMS_DATA_H_