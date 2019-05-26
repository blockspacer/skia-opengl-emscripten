// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorker_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorker_Connect_Params_Data));
      new (data()) SharedWorker_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorker_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorker_Connect_Params_Data>(index_);
    }
    SharedWorker_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t connection_id;
  mojo::internal::Handle_Data message_port;

 private:
  SharedWorker_Connect_Params_Data();
  ~SharedWorker_Connect_Params_Data() = delete;
};
static_assert(sizeof(SharedWorker_Connect_Params_Data) == 16,
              "Bad sizeof(SharedWorker_Connect_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorker_Terminate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorker_Terminate_Params_Data));
      new (data()) SharedWorker_Terminate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorker_Terminate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorker_Terminate_Params_Data>(index_);
    }
    SharedWorker_Terminate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorker_Terminate_Params_Data();
  ~SharedWorker_Terminate_Params_Data() = delete;
};
static_assert(sizeof(SharedWorker_Terminate_Params_Data) == 8,
              "Bad sizeof(SharedWorker_Terminate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorker_BindDevToolsAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorker_BindDevToolsAgent_Params_Data));
      new (data()) SharedWorker_BindDevToolsAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorker_BindDevToolsAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorker_BindDevToolsAgent_Params_Data>(index_);
    }
    SharedWorker_BindDevToolsAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data agent_host;
  mojo::internal::AssociatedEndpointHandle_Data agent;
  uint8_t padfinal_[4];

 private:
  SharedWorker_BindDevToolsAgent_Params_Data();
  ~SharedWorker_BindDevToolsAgent_Params_Data() = delete;
};
static_assert(sizeof(SharedWorker_BindDevToolsAgent_Params_Data) == 24,
              "Bad sizeof(SharedWorker_BindDevToolsAgent_Params_Data)");

}  // namespace internal
class SharedWorker_Connect_ParamsDataView {
 public:
  SharedWorker_Connect_ParamsDataView() {}

  SharedWorker_Connect_ParamsDataView(
      internal::SharedWorker_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t connection_id() const {
    return data_->connection_id;
  }
  mojo::ScopedMessagePipeHandle TakeMessagePort() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->message_port, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SharedWorker_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SharedWorker_Terminate_ParamsDataView {
 public:
  SharedWorker_Terminate_ParamsDataView() {}

  SharedWorker_Terminate_ParamsDataView(
      internal::SharedWorker_Terminate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorker_Terminate_Params_Data* data_ = nullptr;
};

class SharedWorker_BindDevToolsAgent_ParamsDataView {
 public:
  SharedWorker_BindDevToolsAgent_ParamsDataView() {}

  SharedWorker_BindDevToolsAgent_ParamsDataView(
      internal::SharedWorker_BindDevToolsAgent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAgentHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsAgentHostAssociatedPtrInfoDataView>(
            &data_->agent_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeAgent() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsAgentAssociatedRequestDataView>(
            &data_->agent, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SharedWorker_BindDevToolsAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};







}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_PARAMS_DATA_H_