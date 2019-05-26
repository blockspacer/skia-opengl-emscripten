// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnCreated_Params_Data));
      new (data()) SharedWorkerClient_OnCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnCreated_Params_Data>(index_);
    }
    SharedWorkerClient_OnCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t creation_context_type;
  uint8_t padfinal_[4];

 private:
  SharedWorkerClient_OnCreated_Params_Data();
  ~SharedWorkerClient_OnCreated_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnCreated_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnCreated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnConnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnConnected_Params_Data));
      new (data()) SharedWorkerClient_OnConnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnConnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnConnected_Params_Data>(index_);
    }
    SharedWorkerClient_OnConnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> features_used;

 private:
  SharedWorkerClient_OnConnected_Params_Data();
  ~SharedWorkerClient_OnConnected_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnConnected_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnConnected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnScriptLoadFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data));
      new (data()) SharedWorkerClient_OnScriptLoadFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnScriptLoadFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnScriptLoadFailed_Params_Data>(index_);
    }
    SharedWorkerClient_OnScriptLoadFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerClient_OnScriptLoadFailed_Params_Data();
  ~SharedWorkerClient_OnScriptLoadFailed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data) == 8,
              "Bad sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnFeatureUsed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data));
      new (data()) SharedWorkerClient_OnFeatureUsed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnFeatureUsed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnFeatureUsed_Params_Data>(index_);
    }
    SharedWorkerClient_OnFeatureUsed_Params_Data* operator->() { return data(); }

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
  SharedWorkerClient_OnFeatureUsed_Params_Data();
  ~SharedWorkerClient_OnFeatureUsed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data)");

}  // namespace internal
class SharedWorkerClient_OnCreated_ParamsDataView {
 public:
  SharedWorkerClient_OnCreated_ParamsDataView() {}

  SharedWorkerClient_OnCreated_ParamsDataView(
      internal::SharedWorkerClient_OnCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreationContextType(UserType* output) const {
    auto data_value = data_->creation_context_type;
    return mojo::internal::Deserialize<::blink::mojom::SharedWorkerCreationContextType>(
        data_value, output);
  }

  ::blink::mojom::SharedWorkerCreationContextType creation_context_type() const {
    return static_cast<::blink::mojom::SharedWorkerCreationContextType>(data_->creation_context_type);
  }
 private:
  internal::SharedWorkerClient_OnCreated_Params_Data* data_ = nullptr;
};

class SharedWorkerClient_OnConnected_ParamsDataView {
 public:
  SharedWorkerClient_OnConnected_ParamsDataView() {}

  SharedWorkerClient_OnConnected_ParamsDataView(
      internal::SharedWorkerClient_OnConnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesUsedDataView(
      mojo::ArrayDataView<::blink::mojom::WebFeature>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeaturesUsed(UserType* output) {
    auto* pointer = data_->features_used.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        pointer, output, context_);
  }
 private:
  internal::SharedWorkerClient_OnConnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SharedWorkerClient_OnScriptLoadFailed_ParamsDataView {
 public:
  SharedWorkerClient_OnScriptLoadFailed_ParamsDataView() {}

  SharedWorkerClient_OnScriptLoadFailed_ParamsDataView(
      internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data* data_ = nullptr;
};

class SharedWorkerClient_OnFeatureUsed_ParamsDataView {
 public:
  SharedWorkerClient_OnFeatureUsed_ParamsDataView() {}

  SharedWorkerClient_OnFeatureUsed_ParamsDataView(
      internal::SharedWorkerClient_OnFeatureUsed_Params_Data* data,
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
  internal::SharedWorkerClient_OnFeatureUsed_Params_Data* data_ = nullptr;
};




inline void SharedWorkerClient_OnConnected_ParamsDataView::GetFeaturesUsedDataView(
    mojo::ArrayDataView<::blink::mojom::WebFeature>* output) {
  auto pointer = data_->features_used.Get();
  *output = mojo::ArrayDataView<::blink::mojom::WebFeature>(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_PARAMS_DATA_H_