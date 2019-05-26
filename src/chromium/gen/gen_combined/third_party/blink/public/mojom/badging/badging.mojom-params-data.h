// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BadgeService_SetInteger_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BadgeService_SetInteger_Params_Data));
      new (data()) BadgeService_SetInteger_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BadgeService_SetInteger_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BadgeService_SetInteger_Params_Data>(index_);
    }
    BadgeService_SetInteger_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t content;

 private:
  BadgeService_SetInteger_Params_Data();
  ~BadgeService_SetInteger_Params_Data() = delete;
};
static_assert(sizeof(BadgeService_SetInteger_Params_Data) == 16,
              "Bad sizeof(BadgeService_SetInteger_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BadgeService_SetFlag_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BadgeService_SetFlag_Params_Data));
      new (data()) BadgeService_SetFlag_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BadgeService_SetFlag_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BadgeService_SetFlag_Params_Data>(index_);
    }
    BadgeService_SetFlag_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BadgeService_SetFlag_Params_Data();
  ~BadgeService_SetFlag_Params_Data() = delete;
};
static_assert(sizeof(BadgeService_SetFlag_Params_Data) == 8,
              "Bad sizeof(BadgeService_SetFlag_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BadgeService_ClearBadge_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BadgeService_ClearBadge_Params_Data));
      new (data()) BadgeService_ClearBadge_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BadgeService_ClearBadge_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BadgeService_ClearBadge_Params_Data>(index_);
    }
    BadgeService_ClearBadge_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BadgeService_ClearBadge_Params_Data();
  ~BadgeService_ClearBadge_Params_Data() = delete;
};
static_assert(sizeof(BadgeService_ClearBadge_Params_Data) == 8,
              "Bad sizeof(BadgeService_ClearBadge_Params_Data)");

}  // namespace internal
class BadgeService_SetInteger_ParamsDataView {
 public:
  BadgeService_SetInteger_ParamsDataView() {}

  BadgeService_SetInteger_ParamsDataView(
      internal::BadgeService_SetInteger_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t content() const {
    return data_->content;
  }
 private:
  internal::BadgeService_SetInteger_Params_Data* data_ = nullptr;
};

class BadgeService_SetFlag_ParamsDataView {
 public:
  BadgeService_SetFlag_ParamsDataView() {}

  BadgeService_SetFlag_ParamsDataView(
      internal::BadgeService_SetFlag_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BadgeService_SetFlag_Params_Data* data_ = nullptr;
};

class BadgeService_ClearBadge_ParamsDataView {
 public:
  BadgeService_ClearBadge_ParamsDataView() {}

  BadgeService_ClearBadge_ParamsDataView(
      internal::BadgeService_ClearBadge_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BadgeService_ClearBadge_Params_Data* data_ = nullptr;
};







}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_PARAMS_DATA_H_