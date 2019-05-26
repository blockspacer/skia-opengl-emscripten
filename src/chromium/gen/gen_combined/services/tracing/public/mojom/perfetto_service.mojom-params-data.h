// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_PARAMS_DATA_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_PARAMS_DATA_H_

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
namespace tracing {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerHost_CommitData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerHost_CommitData_Params_Data));
      new (data()) ProducerHost_CommitData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerHost_CommitData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerHost_CommitData_Params_Data>(index_);
    }
    ProducerHost_CommitData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CommitDataRequest_Data> data_request;

 private:
  ProducerHost_CommitData_Params_Data();
  ~ProducerHost_CommitData_Params_Data() = delete;
};
static_assert(sizeof(ProducerHost_CommitData_Params_Data) == 16,
              "Bad sizeof(ProducerHost_CommitData_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerHost_RegisterDataSource_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerHost_RegisterDataSource_Params_Data));
      new (data()) ProducerHost_RegisterDataSource_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerHost_RegisterDataSource_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerHost_RegisterDataSource_Params_Data>(index_);
    }
    ProducerHost_RegisterDataSource_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DataSourceRegistration_Data> registration_info;

 private:
  ProducerHost_RegisterDataSource_Params_Data();
  ~ProducerHost_RegisterDataSource_Params_Data() = delete;
};
static_assert(sizeof(ProducerHost_RegisterDataSource_Params_Data) == 16,
              "Bad sizeof(ProducerHost_RegisterDataSource_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerHost_RegisterTraceWriter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerHost_RegisterTraceWriter_Params_Data));
      new (data()) ProducerHost_RegisterTraceWriter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerHost_RegisterTraceWriter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerHost_RegisterTraceWriter_Params_Data>(index_);
    }
    ProducerHost_RegisterTraceWriter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t writer_id;
  uint32_t target_buffer;

 private:
  ProducerHost_RegisterTraceWriter_Params_Data();
  ~ProducerHost_RegisterTraceWriter_Params_Data() = delete;
};
static_assert(sizeof(ProducerHost_RegisterTraceWriter_Params_Data) == 16,
              "Bad sizeof(ProducerHost_RegisterTraceWriter_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerHost_UnregisterTraceWriter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerHost_UnregisterTraceWriter_Params_Data));
      new (data()) ProducerHost_UnregisterTraceWriter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerHost_UnregisterTraceWriter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerHost_UnregisterTraceWriter_Params_Data>(index_);
    }
    ProducerHost_UnregisterTraceWriter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t writer_id;
  uint8_t padfinal_[4];

 private:
  ProducerHost_UnregisterTraceWriter_Params_Data();
  ~ProducerHost_UnregisterTraceWriter_Params_Data() = delete;
};
static_assert(sizeof(ProducerHost_UnregisterTraceWriter_Params_Data) == 16,
              "Bad sizeof(ProducerHost_UnregisterTraceWriter_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_OnTracingStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_OnTracingStart_Params_Data));
      new (data()) ProducerClient_OnTracingStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_OnTracingStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_OnTracingStart_Params_Data>(index_);
    }
    ProducerClient_OnTracingStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data shared_memory;
  uint8_t padfinal_[4];

 private:
  ProducerClient_OnTracingStart_Params_Data();
  ~ProducerClient_OnTracingStart_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_OnTracingStart_Params_Data) == 16,
              "Bad sizeof(ProducerClient_OnTracingStart_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_StartDataSource_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_StartDataSource_Params_Data));
      new (data()) ProducerClient_StartDataSource_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_StartDataSource_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_StartDataSource_Params_Data>(index_);
    }
    ProducerClient_StartDataSource_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;
  mojo::internal::Pointer<internal::DataSourceConfig_Data> data_source_config;

 private:
  ProducerClient_StartDataSource_Params_Data();
  ~ProducerClient_StartDataSource_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_StartDataSource_Params_Data) == 24,
              "Bad sizeof(ProducerClient_StartDataSource_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_StartDataSource_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_StartDataSource_ResponseParams_Data));
      new (data()) ProducerClient_StartDataSource_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_StartDataSource_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_StartDataSource_ResponseParams_Data>(index_);
    }
    ProducerClient_StartDataSource_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProducerClient_StartDataSource_ResponseParams_Data();
  ~ProducerClient_StartDataSource_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProducerClient_StartDataSource_ResponseParams_Data) == 8,
              "Bad sizeof(ProducerClient_StartDataSource_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_StopDataSource_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_StopDataSource_Params_Data));
      new (data()) ProducerClient_StopDataSource_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_StopDataSource_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_StopDataSource_Params_Data>(index_);
    }
    ProducerClient_StopDataSource_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;

 private:
  ProducerClient_StopDataSource_Params_Data();
  ~ProducerClient_StopDataSource_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_StopDataSource_Params_Data) == 16,
              "Bad sizeof(ProducerClient_StopDataSource_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_StopDataSource_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_StopDataSource_ResponseParams_Data));
      new (data()) ProducerClient_StopDataSource_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_StopDataSource_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_StopDataSource_ResponseParams_Data>(index_);
    }
    ProducerClient_StopDataSource_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProducerClient_StopDataSource_ResponseParams_Data();
  ~ProducerClient_StopDataSource_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProducerClient_StopDataSource_ResponseParams_Data) == 8,
              "Bad sizeof(ProducerClient_StopDataSource_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_Flush_Params_Data));
      new (data()) ProducerClient_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_Flush_Params_Data>(index_);
    }
    ProducerClient_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t flush_request_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint64_t>> data_source_ids;

 private:
  ProducerClient_Flush_Params_Data();
  ~ProducerClient_Flush_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_Flush_Params_Data) == 24,
              "Bad sizeof(ProducerClient_Flush_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) PerfettoService_ConnectToProducerHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PerfettoService_ConnectToProducerHost_Params_Data));
      new (data()) PerfettoService_ConnectToProducerHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PerfettoService_ConnectToProducerHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PerfettoService_ConnectToProducerHost_Params_Data>(index_);
    }
    PerfettoService_ConnectToProducerHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data producer_client;
  mojo::internal::Handle_Data producer_host;
  uint8_t padfinal_[4];

 private:
  PerfettoService_ConnectToProducerHost_Params_Data();
  ~PerfettoService_ConnectToProducerHost_Params_Data() = delete;
};
static_assert(sizeof(PerfettoService_ConnectToProducerHost_Params_Data) == 24,
              "Bad sizeof(PerfettoService_ConnectToProducerHost_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ConsumerHost_EnableTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConsumerHost_EnableTracing_Params_Data));
      new (data()) ConsumerHost_EnableTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConsumerHost_EnableTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConsumerHost_EnableTracing_Params_Data>(index_);
    }
    ConsumerHost_EnableTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data tracing_session_host;
  mojo::internal::Interface_Data tracing_session_client;
  int32_t priority;
  mojo::internal::Pointer<internal::TraceConfig_Data> config;

 private:
  ConsumerHost_EnableTracing_Params_Data();
  ~ConsumerHost_EnableTracing_Params_Data() = delete;
};
static_assert(sizeof(ConsumerHost_EnableTracing_Params_Data) == 32,
              "Bad sizeof(ConsumerHost_EnableTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_ChangeTraceConfig_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_ChangeTraceConfig_Params_Data));
      new (data()) TracingSessionHost_ChangeTraceConfig_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_ChangeTraceConfig_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_ChangeTraceConfig_Params_Data>(index_);
    }
    TracingSessionHost_ChangeTraceConfig_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TraceConfig_Data> config;

 private:
  TracingSessionHost_ChangeTraceConfig_Params_Data();
  ~TracingSessionHost_ChangeTraceConfig_Params_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_ChangeTraceConfig_Params_Data) == 16,
              "Bad sizeof(TracingSessionHost_ChangeTraceConfig_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_DisableTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_DisableTracing_Params_Data));
      new (data()) TracingSessionHost_DisableTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_DisableTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_DisableTracing_Params_Data>(index_);
    }
    TracingSessionHost_DisableTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TracingSessionHost_DisableTracing_Params_Data();
  ~TracingSessionHost_DisableTracing_Params_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_DisableTracing_Params_Data) == 8,
              "Bad sizeof(TracingSessionHost_DisableTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_ReadBuffers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_ReadBuffers_Params_Data));
      new (data()) TracingSessionHost_ReadBuffers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_ReadBuffers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_ReadBuffers_Params_Data>(index_);
    }
    TracingSessionHost_ReadBuffers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data stream;
  uint8_t padfinal_[4];

 private:
  TracingSessionHost_ReadBuffers_Params_Data();
  ~TracingSessionHost_ReadBuffers_Params_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_ReadBuffers_Params_Data) == 16,
              "Bad sizeof(TracingSessionHost_ReadBuffers_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_ReadBuffers_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_ReadBuffers_ResponseParams_Data));
      new (data()) TracingSessionHost_ReadBuffers_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_ReadBuffers_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_ReadBuffers_ResponseParams_Data>(index_);
    }
    TracingSessionHost_ReadBuffers_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TracingSessionHost_ReadBuffers_ResponseParams_Data();
  ~TracingSessionHost_ReadBuffers_ResponseParams_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_ReadBuffers_ResponseParams_Data) == 8,
              "Bad sizeof(TracingSessionHost_ReadBuffers_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_RequestBufferUsage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_RequestBufferUsage_Params_Data));
      new (data()) TracingSessionHost_RequestBufferUsage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_RequestBufferUsage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_RequestBufferUsage_Params_Data>(index_);
    }
    TracingSessionHost_RequestBufferUsage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TracingSessionHost_RequestBufferUsage_Params_Data();
  ~TracingSessionHost_RequestBufferUsage_Params_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_RequestBufferUsage_Params_Data) == 8,
              "Bad sizeof(TracingSessionHost_RequestBufferUsage_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_RequestBufferUsage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_RequestBufferUsage_ResponseParams_Data));
      new (data()) TracingSessionHost_RequestBufferUsage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_RequestBufferUsage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_RequestBufferUsage_ResponseParams_Data>(index_);
    }
    TracingSessionHost_RequestBufferUsage_ResponseParams_Data* operator->() { return data(); }

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
  float percent_full;

 private:
  TracingSessionHost_RequestBufferUsage_ResponseParams_Data();
  ~TracingSessionHost_RequestBufferUsage_ResponseParams_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_RequestBufferUsage_ResponseParams_Data) == 16,
              "Bad sizeof(TracingSessionHost_RequestBufferUsage_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_DisableTracingAndEmitJson_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_DisableTracingAndEmitJson_Params_Data));
      new (data()) TracingSessionHost_DisableTracingAndEmitJson_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_DisableTracingAndEmitJson_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_DisableTracingAndEmitJson_Params_Data>(index_);
    }
    TracingSessionHost_DisableTracingAndEmitJson_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> agent_label_filter;
  mojo::internal::Handle_Data stream;
  uint8_t padfinal_[4];

 private:
  TracingSessionHost_DisableTracingAndEmitJson_Params_Data();
  ~TracingSessionHost_DisableTracingAndEmitJson_Params_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_DisableTracingAndEmitJson_Params_Data) == 24,
              "Bad sizeof(TracingSessionHost_DisableTracingAndEmitJson_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data));
      new (data()) TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data>(index_);
    }
    TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data();
  ~TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data() = delete;
};
static_assert(sizeof(TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data) == 8,
              "Bad sizeof(TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionClient_OnTracingEnabled_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionClient_OnTracingEnabled_Params_Data));
      new (data()) TracingSessionClient_OnTracingEnabled_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionClient_OnTracingEnabled_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionClient_OnTracingEnabled_Params_Data>(index_);
    }
    TracingSessionClient_OnTracingEnabled_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TracingSessionClient_OnTracingEnabled_Params_Data();
  ~TracingSessionClient_OnTracingEnabled_Params_Data() = delete;
};
static_assert(sizeof(TracingSessionClient_OnTracingEnabled_Params_Data) == 8,
              "Bad sizeof(TracingSessionClient_OnTracingEnabled_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracingSessionClient_OnTracingDisabled_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracingSessionClient_OnTracingDisabled_Params_Data));
      new (data()) TracingSessionClient_OnTracingDisabled_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracingSessionClient_OnTracingDisabled_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracingSessionClient_OnTracingDisabled_Params_Data>(index_);
    }
    TracingSessionClient_OnTracingDisabled_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TracingSessionClient_OnTracingDisabled_Params_Data();
  ~TracingSessionClient_OnTracingDisabled_Params_Data() = delete;
};
static_assert(sizeof(TracingSessionClient_OnTracingDisabled_Params_Data) == 8,
              "Bad sizeof(TracingSessionClient_OnTracingDisabled_Params_Data)");

}  // namespace internal
class ProducerHost_CommitData_ParamsDataView {
 public:
  ProducerHost_CommitData_ParamsDataView() {}

  ProducerHost_CommitData_ParamsDataView(
      internal::ProducerHost_CommitData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataRequestDataView(
      CommitDataRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataRequest(UserType* output) {
    auto* pointer = data_->data_request.Get();
    return mojo::internal::Deserialize<::tracing::mojom::CommitDataRequestDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProducerHost_CommitData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerHost_RegisterDataSource_ParamsDataView {
 public:
  ProducerHost_RegisterDataSource_ParamsDataView() {}

  ProducerHost_RegisterDataSource_ParamsDataView(
      internal::ProducerHost_RegisterDataSource_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationInfoDataView(
      DataSourceRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistrationInfo(UserType* output) {
    auto* pointer = data_->registration_info.Get();
    return mojo::internal::Deserialize<::tracing::mojom::DataSourceRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProducerHost_RegisterDataSource_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerHost_RegisterTraceWriter_ParamsDataView {
 public:
  ProducerHost_RegisterTraceWriter_ParamsDataView() {}

  ProducerHost_RegisterTraceWriter_ParamsDataView(
      internal::ProducerHost_RegisterTraceWriter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t writer_id() const {
    return data_->writer_id;
  }
  uint32_t target_buffer() const {
    return data_->target_buffer;
  }
 private:
  internal::ProducerHost_RegisterTraceWriter_Params_Data* data_ = nullptr;
};

class ProducerHost_UnregisterTraceWriter_ParamsDataView {
 public:
  ProducerHost_UnregisterTraceWriter_ParamsDataView() {}

  ProducerHost_UnregisterTraceWriter_ParamsDataView(
      internal::ProducerHost_UnregisterTraceWriter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t writer_id() const {
    return data_->writer_id;
  }
 private:
  internal::ProducerHost_UnregisterTraceWriter_Params_Data* data_ = nullptr;
};

class ProducerClient_OnTracingStart_ParamsDataView {
 public:
  ProducerClient_OnTracingStart_ParamsDataView() {}

  ProducerClient_OnTracingStart_ParamsDataView(
      internal::ProducerClient_OnTracingStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeSharedMemory() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->shared_memory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProducerClient_OnTracingStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerClient_StartDataSource_ParamsDataView {
 public:
  ProducerClient_StartDataSource_ParamsDataView() {}

  ProducerClient_StartDataSource_ParamsDataView(
      internal::ProducerClient_StartDataSource_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
  inline void GetDataSourceConfigDataView(
      DataSourceConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataSourceConfig(UserType* output) {
    auto* pointer = data_->data_source_config.Get();
    return mojo::internal::Deserialize<::tracing::mojom::DataSourceConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProducerClient_StartDataSource_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerClient_StartDataSource_ResponseParamsDataView {
 public:
  ProducerClient_StartDataSource_ResponseParamsDataView() {}

  ProducerClient_StartDataSource_ResponseParamsDataView(
      internal::ProducerClient_StartDataSource_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProducerClient_StartDataSource_ResponseParams_Data* data_ = nullptr;
};

class ProducerClient_StopDataSource_ParamsDataView {
 public:
  ProducerClient_StopDataSource_ParamsDataView() {}

  ProducerClient_StopDataSource_ParamsDataView(
      internal::ProducerClient_StopDataSource_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
 private:
  internal::ProducerClient_StopDataSource_Params_Data* data_ = nullptr;
};

class ProducerClient_StopDataSource_ResponseParamsDataView {
 public:
  ProducerClient_StopDataSource_ResponseParamsDataView() {}

  ProducerClient_StopDataSource_ResponseParamsDataView(
      internal::ProducerClient_StopDataSource_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProducerClient_StopDataSource_ResponseParams_Data* data_ = nullptr;
};

class ProducerClient_Flush_ParamsDataView {
 public:
  ProducerClient_Flush_ParamsDataView() {}

  ProducerClient_Flush_ParamsDataView(
      internal::ProducerClient_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t flush_request_id() const {
    return data_->flush_request_id;
  }
  inline void GetDataSourceIdsDataView(
      mojo::ArrayDataView<uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataSourceIds(UserType* output) {
    auto* pointer = data_->data_source_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::ProducerClient_Flush_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PerfettoService_ConnectToProducerHost_ParamsDataView {
 public:
  PerfettoService_ConnectToProducerHost_ParamsDataView() {}

  PerfettoService_ConnectToProducerHost_ParamsDataView(
      internal::PerfettoService_ConnectToProducerHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeProducerClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::ProducerClientPtrDataView>(
            &data_->producer_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeProducerHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::ProducerHostRequestDataView>(
            &data_->producer_host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PerfettoService_ConnectToProducerHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConsumerHost_EnableTracing_ParamsDataView {
 public:
  ConsumerHost_EnableTracing_ParamsDataView() {}

  ConsumerHost_EnableTracing_ParamsDataView(
      internal::ConsumerHost_EnableTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeTracingSessionHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::TracingSessionHostRequestDataView>(
            &data_->tracing_session_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeTracingSessionClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::TracingSessionClientPtrDataView>(
            &data_->tracing_session_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetConfigDataView(
      TraceConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::tracing::mojom::TraceConfigDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::tracing::mojom::TracingClientPriority>(
        data_value, output);
  }

  TracingClientPriority priority() const {
    return static_cast<TracingClientPriority>(data_->priority);
  }
 private:
  internal::ConsumerHost_EnableTracing_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TracingSessionHost_ChangeTraceConfig_ParamsDataView {
 public:
  TracingSessionHost_ChangeTraceConfig_ParamsDataView() {}

  TracingSessionHost_ChangeTraceConfig_ParamsDataView(
      internal::TracingSessionHost_ChangeTraceConfig_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      TraceConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::tracing::mojom::TraceConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::TracingSessionHost_ChangeTraceConfig_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TracingSessionHost_DisableTracing_ParamsDataView {
 public:
  TracingSessionHost_DisableTracing_ParamsDataView() {}

  TracingSessionHost_DisableTracing_ParamsDataView(
      internal::TracingSessionHost_DisableTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TracingSessionHost_DisableTracing_Params_Data* data_ = nullptr;
};

class TracingSessionHost_ReadBuffers_ParamsDataView {
 public:
  TracingSessionHost_ReadBuffers_ParamsDataView() {}

  TracingSessionHost_ReadBuffers_ParamsDataView(
      internal::TracingSessionHost_ReadBuffers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakeStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TracingSessionHost_ReadBuffers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TracingSessionHost_ReadBuffers_ResponseParamsDataView {
 public:
  TracingSessionHost_ReadBuffers_ResponseParamsDataView() {}

  TracingSessionHost_ReadBuffers_ResponseParamsDataView(
      internal::TracingSessionHost_ReadBuffers_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TracingSessionHost_ReadBuffers_ResponseParams_Data* data_ = nullptr;
};

class TracingSessionHost_RequestBufferUsage_ParamsDataView {
 public:
  TracingSessionHost_RequestBufferUsage_ParamsDataView() {}

  TracingSessionHost_RequestBufferUsage_ParamsDataView(
      internal::TracingSessionHost_RequestBufferUsage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TracingSessionHost_RequestBufferUsage_Params_Data* data_ = nullptr;
};

class TracingSessionHost_RequestBufferUsage_ResponseParamsDataView {
 public:
  TracingSessionHost_RequestBufferUsage_ResponseParamsDataView() {}

  TracingSessionHost_RequestBufferUsage_ResponseParamsDataView(
      internal::TracingSessionHost_RequestBufferUsage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  float percent_full() const {
    return data_->percent_full;
  }
 private:
  internal::TracingSessionHost_RequestBufferUsage_ResponseParams_Data* data_ = nullptr;
};

class TracingSessionHost_DisableTracingAndEmitJson_ParamsDataView {
 public:
  TracingSessionHost_DisableTracingAndEmitJson_ParamsDataView() {}

  TracingSessionHost_DisableTracingAndEmitJson_ParamsDataView(
      internal::TracingSessionHost_DisableTracingAndEmitJson_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAgentLabelFilterDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAgentLabelFilter(UserType* output) {
    auto* pointer = data_->agent_label_filter.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  mojo::ScopedDataPipeProducerHandle TakeStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TracingSessionHost_DisableTracingAndEmitJson_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TracingSessionHost_DisableTracingAndEmitJson_ResponseParamsDataView {
 public:
  TracingSessionHost_DisableTracingAndEmitJson_ResponseParamsDataView() {}

  TracingSessionHost_DisableTracingAndEmitJson_ResponseParamsDataView(
      internal::TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data* data_ = nullptr;
};

class TracingSessionClient_OnTracingEnabled_ParamsDataView {
 public:
  TracingSessionClient_OnTracingEnabled_ParamsDataView() {}

  TracingSessionClient_OnTracingEnabled_ParamsDataView(
      internal::TracingSessionClient_OnTracingEnabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TracingSessionClient_OnTracingEnabled_Params_Data* data_ = nullptr;
};

class TracingSessionClient_OnTracingDisabled_ParamsDataView {
 public:
  TracingSessionClient_OnTracingDisabled_ParamsDataView() {}

  TracingSessionClient_OnTracingDisabled_ParamsDataView(
      internal::TracingSessionClient_OnTracingDisabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TracingSessionClient_OnTracingDisabled_Params_Data* data_ = nullptr;
};


inline void ProducerHost_CommitData_ParamsDataView::GetDataRequestDataView(
    CommitDataRequestDataView* output) {
  auto pointer = data_->data_request.Get();
  *output = CommitDataRequestDataView(pointer, context_);
}


inline void ProducerHost_RegisterDataSource_ParamsDataView::GetRegistrationInfoDataView(
    DataSourceRegistrationDataView* output) {
  auto pointer = data_->registration_info.Get();
  *output = DataSourceRegistrationDataView(pointer, context_);
}








inline void ProducerClient_StartDataSource_ParamsDataView::GetDataSourceConfigDataView(
    DataSourceConfigDataView* output) {
  auto pointer = data_->data_source_config.Get();
  *output = DataSourceConfigDataView(pointer, context_);
}








inline void ProducerClient_Flush_ParamsDataView::GetDataSourceIdsDataView(
    mojo::ArrayDataView<uint64_t>* output) {
  auto pointer = data_->data_source_ids.Get();
  *output = mojo::ArrayDataView<uint64_t>(pointer, context_);
}




inline void ConsumerHost_EnableTracing_ParamsDataView::GetConfigDataView(
    TraceConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = TraceConfigDataView(pointer, context_);
}


inline void TracingSessionHost_ChangeTraceConfig_ParamsDataView::GetConfigDataView(
    TraceConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = TraceConfigDataView(pointer, context_);
}












inline void TracingSessionHost_DisableTracingAndEmitJson_ParamsDataView::GetAgentLabelFilterDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->agent_label_filter.Get();
  *output = mojo::StringDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_PARAMS_DATA_H_