// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_SHARED_INTERNAL_H_
#define UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gfx {
namespace mojom {
namespace internal {
class PresentationFeedback_Data;

#pragma pack(push, 1)
class  PresentationFeedback_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationFeedback_Data));
      new (data()) PresentationFeedback_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationFeedback_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationFeedback_Data>(index_);
    }
    PresentationFeedback_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> interval;
  uint32_t flags;
  uint8_t padfinal_[4];

 private:
  PresentationFeedback_Data();
  ~PresentationFeedback_Data() = delete;
};
static_assert(sizeof(PresentationFeedback_Data) == 32,
              "Bad sizeof(PresentationFeedback_Data)");
// Used by PresentationFeedback::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PresentationFeedback_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PresentationFeedback_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PresentationFeedback_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PresentationFeedback_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PresentationFeedback_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_SHARED_INTERNAL_H_