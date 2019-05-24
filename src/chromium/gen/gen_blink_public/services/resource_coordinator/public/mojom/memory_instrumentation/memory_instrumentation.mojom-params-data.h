// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_PARAMS_DATA_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_PARAMS_DATA_H_

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
namespace memory_instrumentation {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ClientProcess_RequestChromeMemoryDump_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClientProcess_RequestChromeMemoryDump_Params_Data));
      new (data()) ClientProcess_RequestChromeMemoryDump_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClientProcess_RequestChromeMemoryDump_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClientProcess_RequestChromeMemoryDump_Params_Data>(index_);
    }
    ClientProcess_RequestChromeMemoryDump_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RequestArgs_Data> args;

 private:
  ClientProcess_RequestChromeMemoryDump_Params_Data();
  ~ClientProcess_RequestChromeMemoryDump_Params_Data() = delete;
};
static_assert(sizeof(ClientProcess_RequestChromeMemoryDump_Params_Data) == 16,
              "Bad sizeof(ClientProcess_RequestChromeMemoryDump_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ClientProcess_RequestChromeMemoryDump_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClientProcess_RequestChromeMemoryDump_ResponseParams_Data));
      new (data()) ClientProcess_RequestChromeMemoryDump_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClientProcess_RequestChromeMemoryDump_ResponseParams_Data>(index_);
    }
    ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  uint64_t dump_id;
  mojo::internal::Pointer<internal::RawProcessMemoryDump_Data> raw_process_memory_dump;

 private:
  ClientProcess_RequestChromeMemoryDump_ResponseParams_Data();
  ~ClientProcess_RequestChromeMemoryDump_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClientProcess_RequestChromeMemoryDump_ResponseParams_Data) == 32,
              "Bad sizeof(ClientProcess_RequestChromeMemoryDump_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ClientProcess_RequestOSMemoryDump_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClientProcess_RequestOSMemoryDump_Params_Data));
      new (data()) ClientProcess_RequestOSMemoryDump_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClientProcess_RequestOSMemoryDump_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClientProcess_RequestOSMemoryDump_Params_Data>(index_);
    }
    ClientProcess_RequestOSMemoryDump_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t option;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data>>> pids;

 private:
  ClientProcess_RequestOSMemoryDump_Params_Data();
  ~ClientProcess_RequestOSMemoryDump_Params_Data() = delete;
};
static_assert(sizeof(ClientProcess_RequestOSMemoryDump_Params_Data) == 24,
              "Bad sizeof(ClientProcess_RequestOSMemoryDump_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ClientProcess_RequestOSMemoryDump_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClientProcess_RequestOSMemoryDump_ResponseParams_Data));
      new (data()) ClientProcess_RequestOSMemoryDump_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClientProcess_RequestOSMemoryDump_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClientProcess_RequestOSMemoryDump_ResponseParams_Data>(index_);
    }
    ClientProcess_RequestOSMemoryDump_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data>, mojo::internal::Pointer<internal::RawOSMemDump_Data>>> dumps;

 private:
  ClientProcess_RequestOSMemoryDump_ResponseParams_Data();
  ~ClientProcess_RequestOSMemoryDump_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClientProcess_RequestOSMemoryDump_ResponseParams_Data) == 24,
              "Bad sizeof(ClientProcess_RequestOSMemoryDump_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) HeapProfiler_DumpProcessesForTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HeapProfiler_DumpProcessesForTracing_Params_Data));
      new (data()) HeapProfiler_DumpProcessesForTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HeapProfiler_DumpProcessesForTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HeapProfiler_DumpProcessesForTracing_Params_Data>(index_);
    }
    HeapProfiler_DumpProcessesForTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t strip_path_from_mapped_files : 1;
  uint8_t padfinal_[7];

 private:
  HeapProfiler_DumpProcessesForTracing_Params_Data();
  ~HeapProfiler_DumpProcessesForTracing_Params_Data() = delete;
};
static_assert(sizeof(HeapProfiler_DumpProcessesForTracing_Params_Data) == 16,
              "Bad sizeof(HeapProfiler_DumpProcessesForTracing_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) HeapProfiler_DumpProcessesForTracing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HeapProfiler_DumpProcessesForTracing_ResponseParams_Data));
      new (data()) HeapProfiler_DumpProcessesForTracing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HeapProfiler_DumpProcessesForTracing_ResponseParams_Data>(index_);
    }
    HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HeapProfileResult_Data>>> results;

 private:
  HeapProfiler_DumpProcessesForTracing_ResponseParams_Data();
  ~HeapProfiler_DumpProcessesForTracing_ResponseParams_Data() = delete;
};
static_assert(sizeof(HeapProfiler_DumpProcessesForTracing_ResponseParams_Data) == 16,
              "Bad sizeof(HeapProfiler_DumpProcessesForTracing_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data));
      new (data()) HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data>(index_);
    }
    HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data>>> pids;

 private:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data();
  ~HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data() = delete;
};
static_assert(sizeof(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data) == 16,
              "Bad sizeof(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data));
      new (data()) HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data>(index_);
    }
    HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VmRegion_Data>>>>> vm_regions;

 private:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data();
  ~HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data() = delete;
};
static_assert(sizeof(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data) == 16,
              "Bad sizeof(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RegisterClientProcess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RegisterClientProcess_Params_Data));
      new (data()) Coordinator_RegisterClientProcess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RegisterClientProcess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RegisterClientProcess_Params_Data>(index_);
    }
    Coordinator_RegisterClientProcess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client_process;
  int32_t process_type;
  uint8_t padfinal_[4];

 private:
  Coordinator_RegisterClientProcess_Params_Data();
  ~Coordinator_RegisterClientProcess_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RegisterClientProcess_Params_Data) == 24,
              "Bad sizeof(Coordinator_RegisterClientProcess_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestGlobalMemoryDump_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestGlobalMemoryDump_Params_Data));
      new (data()) Coordinator_RequestGlobalMemoryDump_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestGlobalMemoryDump_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestGlobalMemoryDump_Params_Data>(index_);
    }
    Coordinator_RequestGlobalMemoryDump_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t dump_type;
  int32_t level_of_detail;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> allocator_dump_names;

 private:
  Coordinator_RequestGlobalMemoryDump_Params_Data();
  ~Coordinator_RequestGlobalMemoryDump_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestGlobalMemoryDump_Params_Data) == 24,
              "Bad sizeof(Coordinator_RequestGlobalMemoryDump_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestGlobalMemoryDump_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestGlobalMemoryDump_ResponseParams_Data));
      new (data()) Coordinator_RequestGlobalMemoryDump_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestGlobalMemoryDump_ResponseParams_Data>(index_);
    }
    Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<internal::GlobalMemoryDump_Data> global_memory_dump;

 private:
  Coordinator_RequestGlobalMemoryDump_ResponseParams_Data();
  ~Coordinator_RequestGlobalMemoryDump_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestGlobalMemoryDump_ResponseParams_Data) == 24,
              "Bad sizeof(Coordinator_RequestGlobalMemoryDump_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestGlobalMemoryDumpForPid_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestGlobalMemoryDumpForPid_Params_Data));
      new (data()) Coordinator_RequestGlobalMemoryDumpForPid_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestGlobalMemoryDumpForPid_Params_Data>(index_);
    }
    Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> allocator_dump_names;

 private:
  Coordinator_RequestGlobalMemoryDumpForPid_Params_Data();
  ~Coordinator_RequestGlobalMemoryDumpForPid_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestGlobalMemoryDumpForPid_Params_Data) == 24,
              "Bad sizeof(Coordinator_RequestGlobalMemoryDumpForPid_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data));
      new (data()) Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data>(index_);
    }
    Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<internal::GlobalMemoryDump_Data> global_memory_dump;

 private:
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data();
  ~Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data) == 24,
              "Bad sizeof(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestPrivateMemoryFootprint_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestPrivateMemoryFootprint_Params_Data));
      new (data()) Coordinator_RequestPrivateMemoryFootprint_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestPrivateMemoryFootprint_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestPrivateMemoryFootprint_Params_Data>(index_);
    }
    Coordinator_RequestPrivateMemoryFootprint_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;

 private:
  Coordinator_RequestPrivateMemoryFootprint_Params_Data();
  ~Coordinator_RequestPrivateMemoryFootprint_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestPrivateMemoryFootprint_Params_Data) == 16,
              "Bad sizeof(Coordinator_RequestPrivateMemoryFootprint_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data));
      new (data()) Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data>(index_);
    }
    Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<internal::GlobalMemoryDump_Data> global_memory_dump;

 private:
  Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data();
  ~Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data) == 24,
              "Bad sizeof(Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data));
      new (data()) Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data>(index_);
    }
    Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t dump_type;
  int32_t level_of_detail;

 private:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data();
  ~Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data) == 16,
              "Bad sizeof(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data));
      new (data()) Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data>(index_);
    }
    Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  uint64_t dump_id;

 private:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data();
  ~Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data) == 24,
              "Bad sizeof(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) Coordinator_RegisterHeapProfiler_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RegisterHeapProfiler_Params_Data));
      new (data()) Coordinator_RegisterHeapProfiler_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RegisterHeapProfiler_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RegisterHeapProfiler_Params_Data>(index_);
    }
    Coordinator_RegisterHeapProfiler_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data heap_profiler;

 private:
  Coordinator_RegisterHeapProfiler_Params_Data();
  ~Coordinator_RegisterHeapProfiler_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RegisterHeapProfiler_Params_Data) == 16,
              "Bad sizeof(Coordinator_RegisterHeapProfiler_Params_Data)");

}  // namespace internal
class ClientProcess_RequestChromeMemoryDump_ParamsDataView {
 public:
  ClientProcess_RequestChromeMemoryDump_ParamsDataView() {}

  ClientProcess_RequestChromeMemoryDump_ParamsDataView(
      internal::ClientProcess_RequestChromeMemoryDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetArgsDataView(
      RequestArgsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArgs(UserType* output) {
    auto* pointer = data_->args.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::RequestArgsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestChromeMemoryDump_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView {
 public:
  ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView() {}

  ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView(
      internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint64_t dump_id() const {
    return data_->dump_id;
  }
  inline void GetRawProcessMemoryDumpDataView(
      RawProcessMemoryDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawProcessMemoryDump(UserType* output) {
    auto* pointer = data_->raw_process_memory_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClientProcess_RequestOSMemoryDump_ParamsDataView {
 public:
  ClientProcess_RequestOSMemoryDump_ParamsDataView() {}

  ClientProcess_RequestOSMemoryDump_ParamsDataView(
      internal::ClientProcess_RequestOSMemoryDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOption(UserType* output) const {
    auto data_value = data_->option;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::MemoryMapOption>(
        data_value, output);
  }

  MemoryMapOption option() const {
    return static_cast<MemoryMapOption>(data_->option);
  }
  inline void GetPidsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPids(UserType* output) {
    auto* pointer = data_->pids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestOSMemoryDump_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClientProcess_RequestOSMemoryDump_ResponseParamsDataView {
 public:
  ClientProcess_RequestOSMemoryDump_ResponseParamsDataView() {}

  ClientProcess_RequestOSMemoryDump_ResponseParamsDataView(
      internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetDumpsDataView(
      mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, RawOSMemDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumps(UserType* output) {
    auto* pointer = data_->dumps.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, ::memory_instrumentation::mojom::RawOSMemDumpDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfiler_DumpProcessesForTracing_ParamsDataView {
 public:
  HeapProfiler_DumpProcessesForTracing_ParamsDataView() {}

  HeapProfiler_DumpProcessesForTracing_ParamsDataView(
      internal::HeapProfiler_DumpProcessesForTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool strip_path_from_mapped_files() const {
    return data_->strip_path_from_mapped_files;
  }
 private:
  internal::HeapProfiler_DumpProcessesForTracing_Params_Data* data_ = nullptr;
};

class HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView {
 public:
  HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView() {}

  HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView(
      internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<HeapProfileResultDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::HeapProfileResultDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView {
 public:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView() {}

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView(
      internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPids(UserType* output) {
    auto* pointer = data_->pids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView {
 public:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView() {}

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView(
      internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVmRegionsDataView(
      mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<VmRegionDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVmRegions(UserType* output) {
    auto* pointer = data_->vm_regions.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<::memory_instrumentation::mojom::VmRegionDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RegisterClientProcess_ParamsDataView {
 public:
  Coordinator_RegisterClientProcess_ParamsDataView() {}

  Coordinator_RegisterClientProcess_ParamsDataView(
      internal::Coordinator_RegisterClientProcess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClientProcess() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::memory_instrumentation::mojom::ClientProcessPtrDataView>(
            &data_->client_process, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessType(UserType* output) const {
    auto data_value = data_->process_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::ProcessType>(
        data_value, output);
  }

  ProcessType process_type() const {
    return static_cast<ProcessType>(data_->process_type);
  }
 private:
  internal::Coordinator_RegisterClientProcess_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDump_ParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDump_ParamsDataView() {}

  Coordinator_RequestGlobalMemoryDump_ParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumpType(UserType* output) const {
    auto data_value = data_->dump_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::DumpType>(
        data_value, output);
  }

  DumpType dump_type() const {
    return static_cast<DumpType>(data_->dump_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
  inline void GetAllocatorDumpNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumpNames(UserType* output) {
    auto* pointer = data_->allocator_dump_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDump_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView() {}

  Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetGlobalMemoryDumpDataView(
      GlobalMemoryDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlobalMemoryDump(UserType* output) {
    auto* pointer = data_->global_memory_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
  inline void GetAllocatorDumpNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumpNames(UserType* output) {
    auto* pointer = data_->allocator_dump_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetGlobalMemoryDumpDataView(
      GlobalMemoryDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlobalMemoryDump(UserType* output) {
    auto* pointer = data_->global_memory_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestPrivateMemoryFootprint_ParamsDataView {
 public:
  Coordinator_RequestPrivateMemoryFootprint_ParamsDataView() {}

  Coordinator_RequestPrivateMemoryFootprint_ParamsDataView(
      internal::Coordinator_RequestPrivateMemoryFootprint_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestPrivateMemoryFootprint_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestPrivateMemoryFootprint_ResponseParamsDataView {
 public:
  Coordinator_RequestPrivateMemoryFootprint_ResponseParamsDataView() {}

  Coordinator_RequestPrivateMemoryFootprint_ResponseParamsDataView(
      internal::Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetGlobalMemoryDumpDataView(
      GlobalMemoryDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlobalMemoryDump(UserType* output) {
    auto* pointer = data_->global_memory_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumpType(UserType* output) const {
    auto data_value = data_->dump_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::DumpType>(
        data_value, output);
  }

  DumpType dump_type() const {
    return static_cast<DumpType>(data_->dump_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* data_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint64_t dump_id() const {
    return data_->dump_id;
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* data_ = nullptr;
};

class Coordinator_RegisterHeapProfiler_ParamsDataView {
 public:
  Coordinator_RegisterHeapProfiler_ParamsDataView() {}

  Coordinator_RegisterHeapProfiler_ParamsDataView(
      internal::Coordinator_RegisterHeapProfiler_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHeapProfiler() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::memory_instrumentation::mojom::HeapProfilerPtrDataView>(
            &data_->heap_profiler, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Coordinator_RegisterHeapProfiler_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ClientProcess_RequestChromeMemoryDump_ParamsDataView::GetArgsDataView(
    RequestArgsDataView* output) {
  auto pointer = data_->args.Get();
  *output = RequestArgsDataView(pointer, context_);
}


inline void ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView::GetRawProcessMemoryDumpDataView(
    RawProcessMemoryDumpDataView* output) {
  auto pointer = data_->raw_process_memory_dump.Get();
  *output = RawProcessMemoryDumpDataView(pointer, context_);
}


inline void ClientProcess_RequestOSMemoryDump_ParamsDataView::GetPidsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output) {
  auto pointer = data_->pids.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>(pointer, context_);
}


inline void ClientProcess_RequestOSMemoryDump_ResponseParamsDataView::GetDumpsDataView(
    mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, RawOSMemDumpDataView>* output) {
  auto pointer = data_->dumps.Get();
  *output = mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, RawOSMemDumpDataView>(pointer, context_);
}




inline void HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<HeapProfileResultDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<HeapProfileResultDataView>(pointer, context_);
}


inline void HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView::GetPidsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output) {
  auto pointer = data_->pids.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>(pointer, context_);
}


inline void HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView::GetVmRegionsDataView(
    mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<VmRegionDataView>>* output) {
  auto pointer = data_->vm_regions.Get();
  *output = mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<VmRegionDataView>>(pointer, context_);
}




inline void Coordinator_RequestGlobalMemoryDump_ParamsDataView::GetAllocatorDumpNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->allocator_dump_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView::GetGlobalMemoryDumpDataView(
    GlobalMemoryDumpDataView* output) {
  auto pointer = data_->global_memory_dump.Get();
  *output = GlobalMemoryDumpDataView(pointer, context_);
}


inline void Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView::GetAllocatorDumpNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->allocator_dump_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView::GetGlobalMemoryDumpDataView(
    GlobalMemoryDumpDataView* output) {
  auto pointer = data_->global_memory_dump.Get();
  *output = GlobalMemoryDumpDataView(pointer, context_);
}


inline void Coordinator_RequestPrivateMemoryFootprint_ParamsDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}


inline void Coordinator_RequestPrivateMemoryFootprint_ResponseParamsDataView::GetGlobalMemoryDumpDataView(
    GlobalMemoryDumpDataView* output) {
  auto pointer = data_->global_memory_dump.Get();
  *output = GlobalMemoryDumpDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace memory_instrumentation

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_PARAMS_DATA_H_