// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceClient_StartWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_StartWorker_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_StartWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_StartWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_StartWorker_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_StartWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::EmbeddedWorkerStartParams_Data> params;

 private:
  EmbeddedWorkerInstanceClient_StartWorker_Params_Data();
  ~EmbeddedWorkerInstanceClient_StartWorker_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_StartWorker_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceClient_StartWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceClient_StopWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_StopWorker_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_StopWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_StopWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_StopWorker_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_StopWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceClient_StopWorker_Params_Data();
  ~EmbeddedWorkerInstanceClient_StopWorker_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_StopWorker_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceClient_StopWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data();
  ~EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t level;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data();
  ~EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data) == 24,
              "Bad sizeof(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* operator->() { return data(); }

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
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data();
  ~EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data) == 24,
              "Bad sizeof(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;

 private:
  EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data();
  ~EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_RequestTermination_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_RequestTermination_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_RequestTermination_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_RequestTermination_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_RequestTermination_Params_Data();
  ~EmbeddedWorkerInstanceHost_RequestTermination_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_RequestTermination_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_RequestTermination_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data));
      new (data()) EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t will_be_terminated : 1;
  uint8_t padfinal_[7];

 private:
  EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data();
  ~EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_CountFeature_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_CountFeature_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_CountFeature_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_CountFeature_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_CountFeature_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_CountFeature_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t feature;
  uint8_t padfinal_[4];

 private:
  EmbeddedWorkerInstanceHost_CountFeature_Params_Data();
  ~EmbeddedWorkerInstanceHost_CountFeature_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_CountFeature_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceHost_CountFeature_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_OnStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnStarted_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnStarted_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  int32_t thread_id;
  mojo::internal::Pointer<internal::EmbeddedWorkerStartTiming_Data> start_timing;

 private:
  EmbeddedWorkerInstanceHost_OnStarted_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnStarted_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnStarted_Params_Data) == 24,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_OnReportException_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnReportException_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnReportException_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnReportException_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnReportException_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnReportException_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> error_message;
  int32_t line_number;
  int32_t column_number;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> source_url;

 private:
  EmbeddedWorkerInstanceHost_OnReportException_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnReportException_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnReportException_Params_Data) == 32,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnReportException_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t source;
  int32_t message_level;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> message;
  int32_t line_number;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> source_url;

 private:
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data) == 40,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerInstanceHost_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnStopped_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnStopped_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnStopped_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnStopped_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnStopped_Params_Data)");

}  // namespace internal
class EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      EmbeddedWorkerStartParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::blink::mojom::EmbeddedWorkerStartParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevel(UserType* output) const {
    auto data_value = data_->level;
    return mojo::internal::Deserialize<::blink::mojom::ConsoleMessageLevel>(
        data_value, output);
  }

  ::blink::mojom::ConsoleMessageLevel level() const {
    return static_cast<::blink::mojom::ConsoleMessageLevel>(data_->level);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* data,
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
  internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSubresourceLoaderFactoriesDataView(
      ::blink::mojom::URLLoaderFactoryBundleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourceLoaderFactories(UserType* output) {
    auto* pointer = data_->subresource_loader_factories.Get();
    return mojo::internal::Deserialize<::blink::mojom::URLLoaderFactoryBundleDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_RequestTermination_ResponseParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_RequestTermination_ResponseParamsDataView() {}

  EmbeddedWorkerInstanceHost_RequestTermination_ResponseParamsDataView(
      internal::EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool will_be_terminated() const {
    return data_->will_be_terminated;
  }
 private:
  internal::EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::WebFeature>(
        data_value, output);
  }

  ::blink::mojom::WebFeature feature() const {
    return static_cast<::blink::mojom::WebFeature>(data_->feature);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerStartStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerStartStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerStartStatus>(data_->status);
  }
  int32_t thread_id() const {
    return data_->thread_id;
  }
  inline void GetStartTimingDataView(
      EmbeddedWorkerStartTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTiming(UserType* output) {
    auto* pointer = data_->start_timing.Get();
    return mojo::internal::Deserialize<::blink::mojom::EmbeddedWorkerStartTimingDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
  inline void GetSourceUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceUrl(UserType* output) {
    auto* pointer = data_->source_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::blink::mojom::ConsoleMessageSource>(
        data_value, output);
  }

  ::blink::mojom::ConsoleMessageSource source() const {
    return static_cast<::blink::mojom::ConsoleMessageSource>(data_->source);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessageLevel(UserType* output) const {
    auto data_value = data_->message_level;
    return mojo::internal::Deserialize<::blink::mojom::ConsoleMessageLevel>(
        data_value, output);
  }

  ::blink::mojom::ConsoleMessageLevel message_level() const {
    return static_cast<::blink::mojom::ConsoleMessageLevel>(data_->message_level);
  }
  inline void GetMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  inline void GetSourceUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceUrl(UserType* output) {
    auto* pointer = data_->source_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data* data_ = nullptr;
};


inline void EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView::GetParamsDataView(
    EmbeddedWorkerStartParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = EmbeddedWorkerStartParamsDataView(pointer, context_);
}






inline void EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_ParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::blink::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::blink::mojom::URLLoaderFactoryBundleDataView(pointer, context_);
}














inline void EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView::GetStartTimingDataView(
    EmbeddedWorkerStartTimingDataView* output) {
  auto pointer = data_->start_timing.Get();
  *output = EmbeddedWorkerStartTimingDataView(pointer, context_);
}


inline void EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView::GetErrorMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->error_message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView::GetSourceUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->source_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView::GetSourceUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->source_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_PARAMS_DATA_H_