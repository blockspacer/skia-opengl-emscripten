// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_PARAMS_DATA_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_PARAMS_DATA_H_

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
namespace resource_coordinator {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data));
      new (data()) DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data>(index_);
    }
    DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data();
  ~DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data() = delete;
};
static_assert(sizeof(DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data) == 8,
              "Bad sizeof(DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) DocumentCoordinationUnit_SetLifecycleState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentCoordinationUnit_SetLifecycleState_Params_Data));
      new (data()) DocumentCoordinationUnit_SetLifecycleState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentCoordinationUnit_SetLifecycleState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentCoordinationUnit_SetLifecycleState_Params_Data>(index_);
    }
    DocumentCoordinationUnit_SetLifecycleState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  DocumentCoordinationUnit_SetLifecycleState_Params_Data();
  ~DocumentCoordinationUnit_SetLifecycleState_Params_Data() = delete;
};
static_assert(sizeof(DocumentCoordinationUnit_SetLifecycleState_Params_Data) == 16,
              "Bad sizeof(DocumentCoordinationUnit_SetLifecycleState_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data));
      new (data()) DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data>(index_);
    }
    DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_nonempty_beforeunload : 1;
  uint8_t padfinal_[7];

 private:
  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data();
  ~DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data() = delete;
};
static_assert(sizeof(DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data) == 16,
              "Bad sizeof(DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) DocumentCoordinationUnit_SetInterventionPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentCoordinationUnit_SetInterventionPolicy_Params_Data));
      new (data()) DocumentCoordinationUnit_SetInterventionPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentCoordinationUnit_SetInterventionPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentCoordinationUnit_SetInterventionPolicy_Params_Data>(index_);
    }
    DocumentCoordinationUnit_SetInterventionPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t intervention;
  int32_t policy;

 private:
  DocumentCoordinationUnit_SetInterventionPolicy_Params_Data();
  ~DocumentCoordinationUnit_SetInterventionPolicy_Params_Data() = delete;
};
static_assert(sizeof(DocumentCoordinationUnit_SetInterventionPolicy_Params_Data) == 16,
              "Bad sizeof(DocumentCoordinationUnit_SetInterventionPolicy_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) DocumentCoordinationUnit_SetIsAdFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentCoordinationUnit_SetIsAdFrame_Params_Data));
      new (data()) DocumentCoordinationUnit_SetIsAdFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentCoordinationUnit_SetIsAdFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentCoordinationUnit_SetIsAdFrame_Params_Data>(index_);
    }
    DocumentCoordinationUnit_SetIsAdFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DocumentCoordinationUnit_SetIsAdFrame_Params_Data();
  ~DocumentCoordinationUnit_SetIsAdFrame_Params_Data() = delete;
};
static_assert(sizeof(DocumentCoordinationUnit_SetIsAdFrame_Params_Data) == 8,
              "Bad sizeof(DocumentCoordinationUnit_SetIsAdFrame_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data));
      new (data()) DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data>(index_);
    }
    DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data();
  ~DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data() = delete;
};
static_assert(sizeof(DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data) == 8,
              "Bad sizeof(DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data));
      new (data()) ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data>(index_);
    }
    ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;

 private:
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data();
  ~ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data));
      new (data()) ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data>(index_);
    }
    ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t main_thread_task_load_is_low : 1;
  uint8_t padfinal_[7];

 private:
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data();
  ~ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data)");

}  // namespace internal
class DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView {
 public:
  DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView() {}

  DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView(
      internal::DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data* data_ = nullptr;
};

class DocumentCoordinationUnit_SetLifecycleState_ParamsDataView {
 public:
  DocumentCoordinationUnit_SetLifecycleState_ParamsDataView() {}

  DocumentCoordinationUnit_SetLifecycleState_ParamsDataView(
      internal::DocumentCoordinationUnit_SetLifecycleState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::resource_coordinator::mojom::LifecycleState>(
        data_value, output);
  }

  ::resource_coordinator::mojom::LifecycleState state() const {
    return static_cast<::resource_coordinator::mojom::LifecycleState>(data_->state);
  }
 private:
  internal::DocumentCoordinationUnit_SetLifecycleState_Params_Data* data_ = nullptr;
};

class DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsDataView {
 public:
  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsDataView() {}

  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsDataView(
      internal::DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_nonempty_beforeunload() const {
    return data_->has_nonempty_beforeunload;
  }
 private:
  internal::DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data* data_ = nullptr;
};

class DocumentCoordinationUnit_SetInterventionPolicy_ParamsDataView {
 public:
  DocumentCoordinationUnit_SetInterventionPolicy_ParamsDataView() {}

  DocumentCoordinationUnit_SetInterventionPolicy_ParamsDataView(
      internal::DocumentCoordinationUnit_SetInterventionPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIntervention(UserType* output) const {
    auto data_value = data_->intervention;
    return mojo::internal::Deserialize<::resource_coordinator::mojom::PolicyControlledIntervention>(
        data_value, output);
  }

  PolicyControlledIntervention intervention() const {
    return static_cast<PolicyControlledIntervention>(data_->intervention);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPolicy(UserType* output) const {
    auto data_value = data_->policy;
    return mojo::internal::Deserialize<::resource_coordinator::mojom::InterventionPolicy>(
        data_value, output);
  }

  InterventionPolicy policy() const {
    return static_cast<InterventionPolicy>(data_->policy);
  }
 private:
  internal::DocumentCoordinationUnit_SetInterventionPolicy_Params_Data* data_ = nullptr;
};

class DocumentCoordinationUnit_SetIsAdFrame_ParamsDataView {
 public:
  DocumentCoordinationUnit_SetIsAdFrame_ParamsDataView() {}

  DocumentCoordinationUnit_SetIsAdFrame_ParamsDataView(
      internal::DocumentCoordinationUnit_SetIsAdFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DocumentCoordinationUnit_SetIsAdFrame_Params_Data* data_ = nullptr;
};

class DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView {
 public:
  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView() {}

  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView(
      internal::DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* data_ = nullptr;
};

class ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView {
 public:
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView() {}

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView(
      internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView {
 public:
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView() {}

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView(
      internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool main_thread_task_load_is_low() const {
    return data_->main_thread_task_load_is_low;
  }
 private:
  internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* data_ = nullptr;
};














inline void ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace resource_coordinator

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_PARAMS_DATA_H_