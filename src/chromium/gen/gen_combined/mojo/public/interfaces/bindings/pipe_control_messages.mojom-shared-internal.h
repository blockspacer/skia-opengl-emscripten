// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojo {
namespace pipe_control {
namespace internal {
class RunOrClosePipeMessageParams_Data;
class DisconnectReason_Data;
class PeerAssociatedEndpointClosedEvent_Data;
class RunOrClosePipeInput_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunOrClosePipeInput_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  RunOrClosePipeInput_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~RunOrClosePipeInput_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunOrClosePipeInput_Data));
      new (data()) RunOrClosePipeInput_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) RunOrClosePipeInput_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunOrClosePipeInput_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunOrClosePipeInput_Data>(index_);
    }
    RunOrClosePipeInput_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<RunOrClosePipeInput_Tag>(0);
    data.unknown = 0U;
  }

  enum class RunOrClosePipeInput_Tag : uint32_t {

    
    PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::PeerAssociatedEndpointClosedEvent_Data> f_peer_associated_endpoint_closed_event;
    uint64_t unknown;
  };

  uint32_t size;
  RunOrClosePipeInput_Tag tag;
  Union_ data;
};
static_assert(sizeof(RunOrClosePipeInput_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(RunOrClosePipeInput_Data)");
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunOrClosePipeMessageParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunOrClosePipeMessageParams_Data));
      new (data()) RunOrClosePipeMessageParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunOrClosePipeMessageParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunOrClosePipeMessageParams_Data>(index_);
    }
    RunOrClosePipeMessageParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::RunOrClosePipeInput_Data input;

 private:
  RunOrClosePipeMessageParams_Data();
  ~RunOrClosePipeMessageParams_Data() = delete;
};
static_assert(sizeof(RunOrClosePipeMessageParams_Data) == 24,
              "Bad sizeof(RunOrClosePipeMessageParams_Data)");
// Used by RunOrClosePipeMessageParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RunOrClosePipeMessageParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RunOrClosePipeMessageParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RunOrClosePipeMessageParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RunOrClosePipeMessageParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RunOrClosePipeMessageParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) DisconnectReason_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisconnectReason_Data));
      new (data()) DisconnectReason_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisconnectReason_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisconnectReason_Data>(index_);
    }
    DisconnectReason_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t custom_reason;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> description;

 private:
  DisconnectReason_Data();
  ~DisconnectReason_Data() = delete;
};
static_assert(sizeof(DisconnectReason_Data) == 24,
              "Bad sizeof(DisconnectReason_Data)");
// Used by DisconnectReason::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DisconnectReason_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DisconnectReason_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DisconnectReason_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DisconnectReason_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DisconnectReason_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) PeerAssociatedEndpointClosedEvent_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PeerAssociatedEndpointClosedEvent_Data));
      new (data()) PeerAssociatedEndpointClosedEvent_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PeerAssociatedEndpointClosedEvent_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PeerAssociatedEndpointClosedEvent_Data>(index_);
    }
    PeerAssociatedEndpointClosedEvent_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::DisconnectReason_Data> disconnect_reason;

 private:
  PeerAssociatedEndpointClosedEvent_Data();
  ~PeerAssociatedEndpointClosedEvent_Data() = delete;
};
static_assert(sizeof(PeerAssociatedEndpointClosedEvent_Data) == 24,
              "Bad sizeof(PeerAssociatedEndpointClosedEvent_Data)");
// Used by PeerAssociatedEndpointClosedEvent::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PeerAssociatedEndpointClosedEvent_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PeerAssociatedEndpointClosedEvent_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PeerAssociatedEndpointClosedEvent_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PeerAssociatedEndpointClosedEvent_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PeerAssociatedEndpointClosedEvent_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace pipe_control
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_