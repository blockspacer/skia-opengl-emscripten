// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class LeakDetectionResult_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LeakDetectionResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LeakDetectionResult_Data));
      new (data()) LeakDetectionResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LeakDetectionResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LeakDetectionResult_Data>(index_);
    }
    LeakDetectionResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t number_of_live_audio_nodes;
  uint32_t number_of_live_documents;
  uint32_t number_of_live_nodes;
  uint32_t number_of_live_layout_objects;
  uint32_t number_of_live_resources;
  uint32_t number_of_live_context_lifecycle_state_observers;
  uint32_t number_of_live_script_promises;
  uint32_t number_of_live_frames;
  uint32_t number_of_live_v8_per_context_data;
  uint32_t number_of_worker_global_scopes;
  uint32_t number_of_live_ua_css_resources;
  uint32_t number_of_live_resource_fetchers;

 private:
  LeakDetectionResult_Data();
  ~LeakDetectionResult_Data() = delete;
};
static_assert(sizeof(LeakDetectionResult_Data) == 56,
              "Bad sizeof(LeakDetectionResult_Data)");
// Used by LeakDetectionResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LeakDetectionResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LeakDetectionResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LeakDetectionResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LeakDetectionResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LeakDetectionResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_INTERNAL_H_