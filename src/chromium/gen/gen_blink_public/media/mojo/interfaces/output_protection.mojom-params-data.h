// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_PARAMS_DATA_H_

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
class  OutputProtection_QueryStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_QueryStatus_Params_Data));
      new (data()) OutputProtection_QueryStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_QueryStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_QueryStatus_Params_Data>(index_);
    }
    OutputProtection_QueryStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  OutputProtection_QueryStatus_Params_Data();
  ~OutputProtection_QueryStatus_Params_Data() = delete;
};
static_assert(sizeof(OutputProtection_QueryStatus_Params_Data) == 8,
              "Bad sizeof(OutputProtection_QueryStatus_Params_Data)");
class  OutputProtection_QueryStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_QueryStatus_ResponseParams_Data));
      new (data()) OutputProtection_QueryStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_QueryStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_QueryStatus_ResponseParams_Data>(index_);
    }
    OutputProtection_QueryStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[3];
  uint32_t link_mask;
  uint32_t protection_mask;
  uint8_t padfinal_[4];

 private:
  OutputProtection_QueryStatus_ResponseParams_Data();
  ~OutputProtection_QueryStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(OutputProtection_QueryStatus_ResponseParams_Data) == 24,
              "Bad sizeof(OutputProtection_QueryStatus_ResponseParams_Data)");
class  OutputProtection_EnableProtection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_EnableProtection_Params_Data));
      new (data()) OutputProtection_EnableProtection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_EnableProtection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_EnableProtection_Params_Data>(index_);
    }
    OutputProtection_EnableProtection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t desired_protection_mask;
  uint8_t padfinal_[4];

 private:
  OutputProtection_EnableProtection_Params_Data();
  ~OutputProtection_EnableProtection_Params_Data() = delete;
};
static_assert(sizeof(OutputProtection_EnableProtection_Params_Data) == 16,
              "Bad sizeof(OutputProtection_EnableProtection_Params_Data)");
class  OutputProtection_EnableProtection_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_EnableProtection_ResponseParams_Data));
      new (data()) OutputProtection_EnableProtection_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_EnableProtection_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_EnableProtection_ResponseParams_Data>(index_);
    }
    OutputProtection_EnableProtection_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  OutputProtection_EnableProtection_ResponseParams_Data();
  ~OutputProtection_EnableProtection_ResponseParams_Data() = delete;
};
static_assert(sizeof(OutputProtection_EnableProtection_ResponseParams_Data) == 16,
              "Bad sizeof(OutputProtection_EnableProtection_ResponseParams_Data)");

}  // namespace internal
class OutputProtection_QueryStatus_ParamsDataView {
 public:
  OutputProtection_QueryStatus_ParamsDataView() {}

  OutputProtection_QueryStatus_ParamsDataView(
      internal::OutputProtection_QueryStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OutputProtection_QueryStatus_Params_Data* data_ = nullptr;
};

class OutputProtection_QueryStatus_ResponseParamsDataView {
 public:
  OutputProtection_QueryStatus_ResponseParamsDataView() {}

  OutputProtection_QueryStatus_ResponseParamsDataView(
      internal::OutputProtection_QueryStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint32_t link_mask() const {
    return data_->link_mask;
  }
  uint32_t protection_mask() const {
    return data_->protection_mask;
  }
 private:
  internal::OutputProtection_QueryStatus_ResponseParams_Data* data_ = nullptr;
};

class OutputProtection_EnableProtection_ParamsDataView {
 public:
  OutputProtection_EnableProtection_ParamsDataView() {}

  OutputProtection_EnableProtection_ParamsDataView(
      internal::OutputProtection_EnableProtection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t desired_protection_mask() const {
    return data_->desired_protection_mask;
  }
 private:
  internal::OutputProtection_EnableProtection_Params_Data* data_ = nullptr;
};

class OutputProtection_EnableProtection_ResponseParamsDataView {
 public:
  OutputProtection_EnableProtection_ResponseParamsDataView() {}

  OutputProtection_EnableProtection_ResponseParamsDataView(
      internal::OutputProtection_EnableProtection_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::OutputProtection_EnableProtection_ResponseParams_Data* data_ = nullptr;
};









}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_PARAMS_DATA_H_