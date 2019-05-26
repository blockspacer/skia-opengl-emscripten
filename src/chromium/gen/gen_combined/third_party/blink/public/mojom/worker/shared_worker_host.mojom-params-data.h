// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerHost_OnConnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnConnected_Params_Data));
      new (data()) SharedWorkerHost_OnConnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnConnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnConnected_Params_Data>(index_);
    }
    SharedWorkerHost_OnConnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t connection_id;
  uint8_t padfinal_[4];

 private:
  SharedWorkerHost_OnConnected_Params_Data();
  ~SharedWorkerHost_OnConnected_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnConnected_Params_Data) == 16,
              "Bad sizeof(SharedWorkerHost_OnConnected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerHost_OnContextClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnContextClosed_Params_Data));
      new (data()) SharedWorkerHost_OnContextClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnContextClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnContextClosed_Params_Data>(index_);
    }
    SharedWorkerHost_OnContextClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnContextClosed_Params_Data();
  ~SharedWorkerHost_OnContextClosed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnContextClosed_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnContextClosed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerHost_OnReadyForInspection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnReadyForInspection_Params_Data));
      new (data()) SharedWorkerHost_OnReadyForInspection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnReadyForInspection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnReadyForInspection_Params_Data>(index_);
    }
    SharedWorkerHost_OnReadyForInspection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnReadyForInspection_Params_Data();
  ~SharedWorkerHost_OnReadyForInspection_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnReadyForInspection_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnReadyForInspection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerHost_OnScriptLoaded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnScriptLoaded_Params_Data));
      new (data()) SharedWorkerHost_OnScriptLoaded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnScriptLoaded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnScriptLoaded_Params_Data>(index_);
    }
    SharedWorkerHost_OnScriptLoaded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnScriptLoaded_Params_Data();
  ~SharedWorkerHost_OnScriptLoaded_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnScriptLoaded_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnScriptLoaded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerHost_OnScriptLoadFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnScriptLoadFailed_Params_Data));
      new (data()) SharedWorkerHost_OnScriptLoadFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnScriptLoadFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnScriptLoadFailed_Params_Data>(index_);
    }
    SharedWorkerHost_OnScriptLoadFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnScriptLoadFailed_Params_Data();
  ~SharedWorkerHost_OnScriptLoadFailed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnScriptLoadFailed_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnScriptLoadFailed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerHost_OnFeatureUsed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnFeatureUsed_Params_Data));
      new (data()) SharedWorkerHost_OnFeatureUsed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnFeatureUsed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnFeatureUsed_Params_Data>(index_);
    }
    SharedWorkerHost_OnFeatureUsed_Params_Data* operator->() { return data(); }

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
  SharedWorkerHost_OnFeatureUsed_Params_Data();
  ~SharedWorkerHost_OnFeatureUsed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnFeatureUsed_Params_Data) == 16,
              "Bad sizeof(SharedWorkerHost_OnFeatureUsed_Params_Data)");

}  // namespace internal
class SharedWorkerHost_OnConnected_ParamsDataView {
 public:
  SharedWorkerHost_OnConnected_ParamsDataView() {}

  SharedWorkerHost_OnConnected_ParamsDataView(
      internal::SharedWorkerHost_OnConnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t connection_id() const {
    return data_->connection_id;
  }
 private:
  internal::SharedWorkerHost_OnConnected_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnContextClosed_ParamsDataView {
 public:
  SharedWorkerHost_OnContextClosed_ParamsDataView() {}

  SharedWorkerHost_OnContextClosed_ParamsDataView(
      internal::SharedWorkerHost_OnContextClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnContextClosed_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnReadyForInspection_ParamsDataView {
 public:
  SharedWorkerHost_OnReadyForInspection_ParamsDataView() {}

  SharedWorkerHost_OnReadyForInspection_ParamsDataView(
      internal::SharedWorkerHost_OnReadyForInspection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnReadyForInspection_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnScriptLoaded_ParamsDataView {
 public:
  SharedWorkerHost_OnScriptLoaded_ParamsDataView() {}

  SharedWorkerHost_OnScriptLoaded_ParamsDataView(
      internal::SharedWorkerHost_OnScriptLoaded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnScriptLoaded_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnScriptLoadFailed_ParamsDataView {
 public:
  SharedWorkerHost_OnScriptLoadFailed_ParamsDataView() {}

  SharedWorkerHost_OnScriptLoadFailed_ParamsDataView(
      internal::SharedWorkerHost_OnScriptLoadFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnScriptLoadFailed_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnFeatureUsed_ParamsDataView {
 public:
  SharedWorkerHost_OnFeatureUsed_ParamsDataView() {}

  SharedWorkerHost_OnFeatureUsed_ParamsDataView(
      internal::SharedWorkerHost_OnFeatureUsed_Params_Data* data,
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
  internal::SharedWorkerHost_OnFeatureUsed_Params_Data* data_ = nullptr;
};













}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_PARAMS_DATA_H_