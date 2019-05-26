// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsAgent_AttachDevToolsSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsAgent_AttachDevToolsSession_Params_Data));
      new (data()) DevToolsAgent_AttachDevToolsSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsAgent_AttachDevToolsSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsAgent_AttachDevToolsSession_Params_Data>(index_);
    }
    DevToolsAgent_AttachDevToolsSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data host;
  mojo::internal::AssociatedEndpointHandle_Data session;
  mojo::internal::Handle_Data io_session;
  mojo::internal::Pointer<internal::DevToolsSessionState_Data> reattach_session_state;

 private:
  DevToolsAgent_AttachDevToolsSession_Params_Data();
  ~DevToolsAgent_AttachDevToolsSession_Params_Data() = delete;
};
static_assert(sizeof(DevToolsAgent_AttachDevToolsSession_Params_Data) == 32,
              "Bad sizeof(DevToolsAgent_AttachDevToolsSession_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsAgent_InspectElement_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsAgent_InspectElement_Params_Data));
      new (data()) DevToolsAgent_InspectElement_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsAgent_InspectElement_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsAgent_InspectElement_Params_Data>(index_);
    }
    DevToolsAgent_InspectElement_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> point;

 private:
  DevToolsAgent_InspectElement_Params_Data();
  ~DevToolsAgent_InspectElement_Params_Data() = delete;
};
static_assert(sizeof(DevToolsAgent_InspectElement_Params_Data) == 16,
              "Bad sizeof(DevToolsAgent_InspectElement_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsAgent_ReportChildWorkers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsAgent_ReportChildWorkers_Params_Data));
      new (data()) DevToolsAgent_ReportChildWorkers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsAgent_ReportChildWorkers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsAgent_ReportChildWorkers_Params_Data>(index_);
    }
    DevToolsAgent_ReportChildWorkers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report : 1;
  uint8_t wait_for_debugger : 1;
  uint8_t padfinal_[7];

 private:
  DevToolsAgent_ReportChildWorkers_Params_Data();
  ~DevToolsAgent_ReportChildWorkers_Params_Data() = delete;
};
static_assert(sizeof(DevToolsAgent_ReportChildWorkers_Params_Data) == 16,
              "Bad sizeof(DevToolsAgent_ReportChildWorkers_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsAgent_ReportChildWorkers_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsAgent_ReportChildWorkers_ResponseParams_Data));
      new (data()) DevToolsAgent_ReportChildWorkers_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsAgent_ReportChildWorkers_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsAgent_ReportChildWorkers_ResponseParams_Data>(index_);
    }
    DevToolsAgent_ReportChildWorkers_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DevToolsAgent_ReportChildWorkers_ResponseParams_Data();
  ~DevToolsAgent_ReportChildWorkers_ResponseParams_Data() = delete;
};
static_assert(sizeof(DevToolsAgent_ReportChildWorkers_ResponseParams_Data) == 8,
              "Bad sizeof(DevToolsAgent_ReportChildWorkers_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsAgentHost_ChildWorkerCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsAgentHost_ChildWorkerCreated_Params_Data));
      new (data()) DevToolsAgentHost_ChildWorkerCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsAgentHost_ChildWorkerCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsAgentHost_ChildWorkerCreated_Params_Data>(index_);
    }
    DevToolsAgentHost_ChildWorkerCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data worker_devtools_agent;
  mojo::internal::Handle_Data worker_devtools_agent_host;
  uint8_t waiting_for_debugger : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_worker_token;

 private:
  DevToolsAgentHost_ChildWorkerCreated_Params_Data();
  ~DevToolsAgentHost_ChildWorkerCreated_Params_Data() = delete;
};
static_assert(sizeof(DevToolsAgentHost_ChildWorkerCreated_Params_Data) == 48,
              "Bad sizeof(DevToolsAgentHost_ChildWorkerCreated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsSession_DispatchProtocolCommand_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsSession_DispatchProtocolCommand_Params_Data));
      new (data()) DevToolsSession_DispatchProtocolCommand_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsSession_DispatchProtocolCommand_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsSession_DispatchProtocolCommand_Params_Data>(index_);
    }
    DevToolsSession_DispatchProtocolCommand_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t call_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<internal::DevToolsMessage_Data> message;

 private:
  DevToolsSession_DispatchProtocolCommand_Params_Data();
  ~DevToolsSession_DispatchProtocolCommand_Params_Data() = delete;
};
static_assert(sizeof(DevToolsSession_DispatchProtocolCommand_Params_Data) == 32,
              "Bad sizeof(DevToolsSession_DispatchProtocolCommand_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsSessionHost_DispatchProtocolResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsSessionHost_DispatchProtocolResponse_Params_Data));
      new (data()) DevToolsSessionHost_DispatchProtocolResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsSessionHost_DispatchProtocolResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsSessionHost_DispatchProtocolResponse_Params_Data>(index_);
    }
    DevToolsSessionHost_DispatchProtocolResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DevToolsMessage_Data> message;
  int32_t call_id;
  uint8_t pad1_[4];
  mojo::internal::Pointer<internal::DevToolsSessionState_Data> updates;

 private:
  DevToolsSessionHost_DispatchProtocolResponse_Params_Data();
  ~DevToolsSessionHost_DispatchProtocolResponse_Params_Data() = delete;
};
static_assert(sizeof(DevToolsSessionHost_DispatchProtocolResponse_Params_Data) == 32,
              "Bad sizeof(DevToolsSessionHost_DispatchProtocolResponse_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsSessionHost_DispatchProtocolNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsSessionHost_DispatchProtocolNotification_Params_Data));
      new (data()) DevToolsSessionHost_DispatchProtocolNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsSessionHost_DispatchProtocolNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsSessionHost_DispatchProtocolNotification_Params_Data>(index_);
    }
    DevToolsSessionHost_DispatchProtocolNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DevToolsMessage_Data> message;
  mojo::internal::Pointer<internal::DevToolsSessionState_Data> updates;

 private:
  DevToolsSessionHost_DispatchProtocolNotification_Params_Data();
  ~DevToolsSessionHost_DispatchProtocolNotification_Params_Data() = delete;
};
static_assert(sizeof(DevToolsSessionHost_DispatchProtocolNotification_Params_Data) == 24,
              "Bad sizeof(DevToolsSessionHost_DispatchProtocolNotification_Params_Data)");

}  // namespace internal
class DevToolsAgent_AttachDevToolsSession_ParamsDataView {
 public:
  DevToolsAgent_AttachDevToolsSession_ParamsDataView() {}

  DevToolsAgent_AttachDevToolsSession_ParamsDataView(
      internal::DevToolsAgent_AttachDevToolsSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsSessionHostAssociatedPtrInfoDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSession() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsSessionAssociatedRequestDataView>(
            &data_->session, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeIoSession() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsSessionRequestDataView>(
            &data_->io_session, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetReattachSessionStateDataView(
      DevToolsSessionStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReattachSessionState(UserType* output) {
    auto* pointer = data_->reattach_session_state.Get();
    return mojo::internal::Deserialize<::blink::mojom::DevToolsSessionStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsAgent_AttachDevToolsSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsAgent_InspectElement_ParamsDataView {
 public:
  DevToolsAgent_InspectElement_ParamsDataView() {}

  DevToolsAgent_InspectElement_ParamsDataView(
      internal::DevToolsAgent_InspectElement_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsAgent_InspectElement_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsAgent_ReportChildWorkers_ParamsDataView {
 public:
  DevToolsAgent_ReportChildWorkers_ParamsDataView() {}

  DevToolsAgent_ReportChildWorkers_ParamsDataView(
      internal::DevToolsAgent_ReportChildWorkers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool report() const {
    return data_->report;
  }
  bool wait_for_debugger() const {
    return data_->wait_for_debugger;
  }
 private:
  internal::DevToolsAgent_ReportChildWorkers_Params_Data* data_ = nullptr;
};

class DevToolsAgent_ReportChildWorkers_ResponseParamsDataView {
 public:
  DevToolsAgent_ReportChildWorkers_ResponseParamsDataView() {}

  DevToolsAgent_ReportChildWorkers_ResponseParamsDataView(
      internal::DevToolsAgent_ReportChildWorkers_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DevToolsAgent_ReportChildWorkers_ResponseParams_Data* data_ = nullptr;
};

class DevToolsAgentHost_ChildWorkerCreated_ParamsDataView {
 public:
  DevToolsAgentHost_ChildWorkerCreated_ParamsDataView() {}

  DevToolsAgentHost_ChildWorkerCreated_ParamsDataView(
      internal::DevToolsAgentHost_ChildWorkerCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeWorkerDevtoolsAgent() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsAgentPtrDataView>(
            &data_->worker_devtools_agent, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeWorkerDevtoolsAgentHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsAgentHostRequestDataView>(
            &data_->worker_devtools_agent_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsWorkerTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsWorkerToken(UserType* output) {
    auto* pointer = data_->devtools_worker_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  bool waiting_for_debugger() const {
    return data_->waiting_for_debugger;
  }
 private:
  internal::DevToolsAgentHost_ChildWorkerCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsSession_DispatchProtocolCommand_ParamsDataView {
 public:
  DevToolsSession_DispatchProtocolCommand_ParamsDataView() {}

  DevToolsSession_DispatchProtocolCommand_ParamsDataView(
      internal::DevToolsSession_DispatchProtocolCommand_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t call_id() const {
    return data_->call_id;
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      DevToolsMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::DevToolsMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsSession_DispatchProtocolCommand_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView {
 public:
  DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView() {}

  DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView(
      internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      DevToolsMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::DevToolsMessageDataView>(
        pointer, output, context_);
  }
  int32_t call_id() const {
    return data_->call_id;
  }
  inline void GetUpdatesDataView(
      DevToolsSessionStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdates(UserType* output) {
    auto* pointer = data_->updates.Get();
    return mojo::internal::Deserialize<::blink::mojom::DevToolsSessionStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView {
 public:
  DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView() {}

  DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView(
      internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      DevToolsMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::DevToolsMessageDataView>(
        pointer, output, context_);
  }
  inline void GetUpdatesDataView(
      DevToolsSessionStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdates(UserType* output) {
    auto* pointer = data_->updates.Get();
    return mojo::internal::Deserialize<::blink::mojom::DevToolsSessionStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DevToolsAgent_AttachDevToolsSession_ParamsDataView::GetReattachSessionStateDataView(
    DevToolsSessionStateDataView* output) {
  auto pointer = data_->reattach_session_state.Get();
  *output = DevToolsSessionStateDataView(pointer, context_);
}


inline void DevToolsAgent_InspectElement_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}






inline void DevToolsAgentHost_ChildWorkerCreated_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void DevToolsAgentHost_ChildWorkerCreated_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DevToolsAgentHost_ChildWorkerCreated_ParamsDataView::GetDevtoolsWorkerTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_worker_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void DevToolsSession_DispatchProtocolCommand_ParamsDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DevToolsSession_DispatchProtocolCommand_ParamsDataView::GetMessageDataView(
    DevToolsMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = DevToolsMessageDataView(pointer, context_);
}


inline void DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView::GetMessageDataView(
    DevToolsMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = DevToolsMessageDataView(pointer, context_);
}
inline void DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView::GetUpdatesDataView(
    DevToolsSessionStateDataView* output) {
  auto pointer = data_->updates.Get();
  *output = DevToolsSessionStateDataView(pointer, context_);
}


inline void DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView::GetMessageDataView(
    DevToolsMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = DevToolsMessageDataView(pointer, context_);
}
inline void DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView::GetUpdatesDataView(
    DevToolsSessionStateDataView* output) {
  auto pointer = data_->updates.Get();
  *output = DevToolsSessionStateDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_PARAMS_DATA_H_