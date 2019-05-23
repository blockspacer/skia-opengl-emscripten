// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_PARAMS_DATA_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) AgentRegistry_RegisterAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AgentRegistry_RegisterAgent_Params_Data));
      new (data()) AgentRegistry_RegisterAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AgentRegistry_RegisterAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AgentRegistry_RegisterAgent_Params_Data>(index_);
    }
    AgentRegistry_RegisterAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data agent;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  int32_t type;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;

 private:
  AgentRegistry_RegisterAgent_Params_Data();
  ~AgentRegistry_RegisterAgent_Params_Data() = delete;
};
static_assert(sizeof(AgentRegistry_RegisterAgent_Params_Data) == 40,
              "Bad sizeof(AgentRegistry_RegisterAgent_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_StartTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_StartTracing_Params_Data));
      new (data()) Agent_StartTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_StartTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_StartTracing_Params_Data>(index_);
    }
    Agent_StartTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> config;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> coordinator_time;

 private:
  Agent_StartTracing_Params_Data();
  ~Agent_StartTracing_Params_Data() = delete;
};
static_assert(sizeof(Agent_StartTracing_Params_Data) == 24,
              "Bad sizeof(Agent_StartTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_StartTracing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_StartTracing_ResponseParams_Data));
      new (data()) Agent_StartTracing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_StartTracing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_StartTracing_ResponseParams_Data>(index_);
    }
    Agent_StartTracing_ResponseParams_Data* operator->() { return data(); }

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
  Agent_StartTracing_ResponseParams_Data();
  ~Agent_StartTracing_ResponseParams_Data() = delete;
};
static_assert(sizeof(Agent_StartTracing_ResponseParams_Data) == 16,
              "Bad sizeof(Agent_StartTracing_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_StopAndFlush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_StopAndFlush_Params_Data));
      new (data()) Agent_StopAndFlush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_StopAndFlush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_StopAndFlush_Params_Data>(index_);
    }
    Agent_StopAndFlush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data recorder;

 private:
  Agent_StopAndFlush_Params_Data();
  ~Agent_StopAndFlush_Params_Data() = delete;
};
static_assert(sizeof(Agent_StopAndFlush_Params_Data) == 16,
              "Bad sizeof(Agent_StopAndFlush_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_RequestBufferStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_RequestBufferStatus_Params_Data));
      new (data()) Agent_RequestBufferStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_RequestBufferStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_RequestBufferStatus_Params_Data>(index_);
    }
    Agent_RequestBufferStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Agent_RequestBufferStatus_Params_Data();
  ~Agent_RequestBufferStatus_Params_Data() = delete;
};
static_assert(sizeof(Agent_RequestBufferStatus_Params_Data) == 8,
              "Bad sizeof(Agent_RequestBufferStatus_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_RequestBufferStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_RequestBufferStatus_ResponseParams_Data));
      new (data()) Agent_RequestBufferStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_RequestBufferStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_RequestBufferStatus_ResponseParams_Data>(index_);
    }
    Agent_RequestBufferStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t capacity;
  uint32_t count;

 private:
  Agent_RequestBufferStatus_ResponseParams_Data();
  ~Agent_RequestBufferStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(Agent_RequestBufferStatus_ResponseParams_Data) == 16,
              "Bad sizeof(Agent_RequestBufferStatus_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Recorder_AddChunk_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Recorder_AddChunk_Params_Data));
      new (data()) Recorder_AddChunk_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Recorder_AddChunk_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Recorder_AddChunk_Params_Data>(index_);
    }
    Recorder_AddChunk_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> chunk;

 private:
  Recorder_AddChunk_Params_Data();
  ~Recorder_AddChunk_Params_Data() = delete;
};
static_assert(sizeof(Recorder_AddChunk_Params_Data) == 16,
              "Bad sizeof(Recorder_AddChunk_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Recorder_AddMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Recorder_AddMetadata_Params_Data));
      new (data()) Recorder_AddMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Recorder_AddMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Recorder_AddMetadata_Params_Data>(index_);
    }
    Recorder_AddMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;

 private:
  Recorder_AddMetadata_Params_Data();
  ~Recorder_AddMetadata_Params_Data() = delete;
};
static_assert(sizeof(Recorder_AddMetadata_Params_Data) == 16,
              "Bad sizeof(Recorder_AddMetadata_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StartTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StartTracing_Params_Data));
      new (data()) Coordinator_StartTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StartTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StartTracing_Params_Data>(index_);
    }
    Coordinator_StartTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> config;

 private:
  Coordinator_StartTracing_Params_Data();
  ~Coordinator_StartTracing_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_StartTracing_Params_Data) == 16,
              "Bad sizeof(Coordinator_StartTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StartTracing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StartTracing_ResponseParams_Data));
      new (data()) Coordinator_StartTracing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StartTracing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StartTracing_ResponseParams_Data>(index_);
    }
    Coordinator_StartTracing_ResponseParams_Data* operator->() { return data(); }

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
  Coordinator_StartTracing_ResponseParams_Data();
  ~Coordinator_StartTracing_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_StartTracing_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_StartTracing_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlush_Params_Data));
      new (data()) Coordinator_StopAndFlush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlush_Params_Data>(index_);
    }
    Coordinator_StopAndFlush_Params_Data* operator->() { return data(); }

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
  Coordinator_StopAndFlush_Params_Data();
  ~Coordinator_StopAndFlush_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlush_Params_Data) == 16,
              "Bad sizeof(Coordinator_StopAndFlush_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlush_ResponseParams_Data));
      new (data()) Coordinator_StopAndFlush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlush_ResponseParams_Data>(index_);
    }
    Coordinator_StopAndFlush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;

 private:
  Coordinator_StopAndFlush_ResponseParams_Data();
  ~Coordinator_StopAndFlush_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlush_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_StopAndFlush_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlushAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlushAgent_Params_Data));
      new (data()) Coordinator_StopAndFlushAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlushAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlushAgent_Params_Data>(index_);
    }
    Coordinator_StopAndFlushAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data stream;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> agent_label;

 private:
  Coordinator_StopAndFlushAgent_Params_Data();
  ~Coordinator_StopAndFlushAgent_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlushAgent_Params_Data) == 24,
              "Bad sizeof(Coordinator_StopAndFlushAgent_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlushAgent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlushAgent_ResponseParams_Data));
      new (data()) Coordinator_StopAndFlushAgent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlushAgent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlushAgent_ResponseParams_Data>(index_);
    }
    Coordinator_StopAndFlushAgent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;

 private:
  Coordinator_StopAndFlushAgent_ResponseParams_Data();
  ~Coordinator_StopAndFlushAgent_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlushAgent_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_StopAndFlushAgent_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_IsTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_IsTracing_Params_Data));
      new (data()) Coordinator_IsTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_IsTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_IsTracing_Params_Data>(index_);
    }
    Coordinator_IsTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Coordinator_IsTracing_Params_Data();
  ~Coordinator_IsTracing_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_IsTracing_Params_Data) == 8,
              "Bad sizeof(Coordinator_IsTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_IsTracing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_IsTracing_ResponseParams_Data));
      new (data()) Coordinator_IsTracing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_IsTracing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_IsTracing_ResponseParams_Data>(index_);
    }
    Coordinator_IsTracing_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_tracing : 1;
  uint8_t padfinal_[7];

 private:
  Coordinator_IsTracing_ResponseParams_Data();
  ~Coordinator_IsTracing_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_IsTracing_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_IsTracing_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_RequestBufferUsage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestBufferUsage_Params_Data));
      new (data()) Coordinator_RequestBufferUsage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestBufferUsage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestBufferUsage_Params_Data>(index_);
    }
    Coordinator_RequestBufferUsage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Coordinator_RequestBufferUsage_Params_Data();
  ~Coordinator_RequestBufferUsage_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestBufferUsage_Params_Data) == 8,
              "Bad sizeof(Coordinator_RequestBufferUsage_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_RequestBufferUsage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestBufferUsage_ResponseParams_Data));
      new (data()) Coordinator_RequestBufferUsage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestBufferUsage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestBufferUsage_ResponseParams_Data>(index_);
    }
    Coordinator_RequestBufferUsage_ResponseParams_Data* operator->() { return data(); }

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
  uint32_t approximate_count;
  uint8_t padfinal_[4];

 private:
  Coordinator_RequestBufferUsage_ResponseParams_Data();
  ~Coordinator_RequestBufferUsage_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestBufferUsage_ResponseParams_Data) == 24,
              "Bad sizeof(Coordinator_RequestBufferUsage_ResponseParams_Data)");

}  // namespace internal
class AgentRegistry_RegisterAgent_ParamsDataView {
 public:
  AgentRegistry_RegisterAgent_ParamsDataView() {}

  AgentRegistry_RegisterAgent_ParamsDataView(
      internal::AgentRegistry_RegisterAgent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAgent() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::AgentPtrDataView>(
            &data_->agent, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::tracing::mojom::TraceDataType>(
        data_value, output);
  }

  TraceDataType type() const {
    return static_cast<TraceDataType>(data_->type);
  }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::AgentRegistry_RegisterAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_StartTracing_ParamsDataView {
 public:
  Agent_StartTracing_ParamsDataView() {}

  Agent_StartTracing_ParamsDataView(
      internal::Agent_StartTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCoordinatorTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCoordinatorTime(UserType* output) {
    auto* pointer = data_->coordinator_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::Agent_StartTracing_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_StartTracing_ResponseParamsDataView {
 public:
  Agent_StartTracing_ResponseParamsDataView() {}

  Agent_StartTracing_ResponseParamsDataView(
      internal::Agent_StartTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Agent_StartTracing_ResponseParams_Data* data_ = nullptr;
};

class Agent_StopAndFlush_ParamsDataView {
 public:
  Agent_StopAndFlush_ParamsDataView() {}

  Agent_StopAndFlush_ParamsDataView(
      internal::Agent_StopAndFlush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRecorder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::RecorderPtrDataView>(
            &data_->recorder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Agent_StopAndFlush_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_RequestBufferStatus_ParamsDataView {
 public:
  Agent_RequestBufferStatus_ParamsDataView() {}

  Agent_RequestBufferStatus_ParamsDataView(
      internal::Agent_RequestBufferStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Agent_RequestBufferStatus_Params_Data* data_ = nullptr;
};

class Agent_RequestBufferStatus_ResponseParamsDataView {
 public:
  Agent_RequestBufferStatus_ResponseParamsDataView() {}

  Agent_RequestBufferStatus_ResponseParamsDataView(
      internal::Agent_RequestBufferStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t capacity() const {
    return data_->capacity;
  }
  uint32_t count() const {
    return data_->count;
  }
 private:
  internal::Agent_RequestBufferStatus_ResponseParams_Data* data_ = nullptr;
};

class Recorder_AddChunk_ParamsDataView {
 public:
  Recorder_AddChunk_ParamsDataView() {}

  Recorder_AddChunk_ParamsDataView(
      internal::Recorder_AddChunk_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChunkDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChunk(UserType* output) {
    auto* pointer = data_->chunk.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Recorder_AddChunk_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Recorder_AddMetadata_ParamsDataView {
 public:
  Recorder_AddMetadata_ParamsDataView() {}

  Recorder_AddMetadata_ParamsDataView(
      internal::Recorder_AddMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Recorder_AddMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StartTracing_ParamsDataView {
 public:
  Coordinator_StartTracing_ParamsDataView() {}

  Coordinator_StartTracing_ParamsDataView(
      internal::Coordinator_StartTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StartTracing_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StartTracing_ResponseParamsDataView {
 public:
  Coordinator_StartTracing_ResponseParamsDataView() {}

  Coordinator_StartTracing_ResponseParamsDataView(
      internal::Coordinator_StartTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Coordinator_StartTracing_ResponseParams_Data* data_ = nullptr;
};

class Coordinator_StopAndFlush_ParamsDataView {
 public:
  Coordinator_StopAndFlush_ParamsDataView() {}

  Coordinator_StopAndFlush_ParamsDataView(
      internal::Coordinator_StopAndFlush_Params_Data* data,
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
  internal::Coordinator_StopAndFlush_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StopAndFlush_ResponseParamsDataView {
 public:
  Coordinator_StopAndFlush_ResponseParamsDataView() {}

  Coordinator_StopAndFlush_ResponseParamsDataView(
      internal::Coordinator_StopAndFlush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StopAndFlush_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StopAndFlushAgent_ParamsDataView {
 public:
  Coordinator_StopAndFlushAgent_ParamsDataView() {}

  Coordinator_StopAndFlushAgent_ParamsDataView(
      internal::Coordinator_StopAndFlushAgent_Params_Data* data,
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
  inline void GetAgentLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAgentLabel(UserType* output) {
    auto* pointer = data_->agent_label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StopAndFlushAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StopAndFlushAgent_ResponseParamsDataView {
 public:
  Coordinator_StopAndFlushAgent_ResponseParamsDataView() {}

  Coordinator_StopAndFlushAgent_ResponseParamsDataView(
      internal::Coordinator_StopAndFlushAgent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StopAndFlushAgent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_IsTracing_ParamsDataView {
 public:
  Coordinator_IsTracing_ParamsDataView() {}

  Coordinator_IsTracing_ParamsDataView(
      internal::Coordinator_IsTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Coordinator_IsTracing_Params_Data* data_ = nullptr;
};

class Coordinator_IsTracing_ResponseParamsDataView {
 public:
  Coordinator_IsTracing_ResponseParamsDataView() {}

  Coordinator_IsTracing_ResponseParamsDataView(
      internal::Coordinator_IsTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_tracing() const {
    return data_->is_tracing;
  }
 private:
  internal::Coordinator_IsTracing_ResponseParams_Data* data_ = nullptr;
};

class Coordinator_RequestBufferUsage_ParamsDataView {
 public:
  Coordinator_RequestBufferUsage_ParamsDataView() {}

  Coordinator_RequestBufferUsage_ParamsDataView(
      internal::Coordinator_RequestBufferUsage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Coordinator_RequestBufferUsage_Params_Data* data_ = nullptr;
};

class Coordinator_RequestBufferUsage_ResponseParamsDataView {
 public:
  Coordinator_RequestBufferUsage_ResponseParamsDataView() {}

  Coordinator_RequestBufferUsage_ResponseParamsDataView(
      internal::Coordinator_RequestBufferUsage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  float percent_full() const {
    return data_->percent_full;
  }
  uint32_t approximate_count() const {
    return data_->approximate_count;
  }
 private:
  internal::Coordinator_RequestBufferUsage_ResponseParams_Data* data_ = nullptr;
};


inline void AgentRegistry_RegisterAgent_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AgentRegistry_RegisterAgent_ParamsDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}


inline void Agent_StartTracing_ParamsDataView::GetConfigDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->config.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Agent_StartTracing_ParamsDataView::GetCoordinatorTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->coordinator_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}










inline void Recorder_AddChunk_ParamsDataView::GetChunkDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->chunk.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Recorder_AddMetadata_ParamsDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void Coordinator_StartTracing_ParamsDataView::GetConfigDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->config.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void Coordinator_StopAndFlush_ResponseParamsDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void Coordinator_StopAndFlushAgent_ParamsDataView::GetAgentLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->agent_label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Coordinator_StopAndFlushAgent_ResponseParamsDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_PARAMS_DATA_H_