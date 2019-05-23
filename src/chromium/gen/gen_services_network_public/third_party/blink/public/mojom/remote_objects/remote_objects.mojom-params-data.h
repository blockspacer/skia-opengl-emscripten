// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObjectHost_GetObject_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObjectHost_GetObject_Params_Data));
      new (data()) RemoteObjectHost_GetObject_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObjectHost_GetObject_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObjectHost_GetObject_Params_Data>(index_);
    }
    RemoteObjectHost_GetObject_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t object_id;
  mojo::internal::Handle_Data request;

 private:
  RemoteObjectHost_GetObject_Params_Data();
  ~RemoteObjectHost_GetObject_Params_Data() = delete;
};
static_assert(sizeof(RemoteObjectHost_GetObject_Params_Data) == 16,
              "Bad sizeof(RemoteObjectHost_GetObject_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObjectHost_ReleaseObject_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObjectHost_ReleaseObject_Params_Data));
      new (data()) RemoteObjectHost_ReleaseObject_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObjectHost_ReleaseObject_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObjectHost_ReleaseObject_Params_Data>(index_);
    }
    RemoteObjectHost_ReleaseObject_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t object_id;
  uint8_t padfinal_[4];

 private:
  RemoteObjectHost_ReleaseObject_Params_Data();
  ~RemoteObjectHost_ReleaseObject_Params_Data() = delete;
};
static_assert(sizeof(RemoteObjectHost_ReleaseObject_Params_Data) == 16,
              "Bad sizeof(RemoteObjectHost_ReleaseObject_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObject_HasMethod_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObject_HasMethod_Params_Data));
      new (data()) RemoteObject_HasMethod_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObject_HasMethod_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObject_HasMethod_Params_Data>(index_);
    }
    RemoteObject_HasMethod_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  RemoteObject_HasMethod_Params_Data();
  ~RemoteObject_HasMethod_Params_Data() = delete;
};
static_assert(sizeof(RemoteObject_HasMethod_Params_Data) == 16,
              "Bad sizeof(RemoteObject_HasMethod_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObject_HasMethod_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObject_HasMethod_ResponseParams_Data));
      new (data()) RemoteObject_HasMethod_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObject_HasMethod_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObject_HasMethod_ResponseParams_Data>(index_);
    }
    RemoteObject_HasMethod_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t method_exists : 1;
  uint8_t padfinal_[7];

 private:
  RemoteObject_HasMethod_ResponseParams_Data();
  ~RemoteObject_HasMethod_ResponseParams_Data() = delete;
};
static_assert(sizeof(RemoteObject_HasMethod_ResponseParams_Data) == 16,
              "Bad sizeof(RemoteObject_HasMethod_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObject_GetMethods_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObject_GetMethods_Params_Data));
      new (data()) RemoteObject_GetMethods_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObject_GetMethods_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObject_GetMethods_Params_Data>(index_);
    }
    RemoteObject_GetMethods_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RemoteObject_GetMethods_Params_Data();
  ~RemoteObject_GetMethods_Params_Data() = delete;
};
static_assert(sizeof(RemoteObject_GetMethods_Params_Data) == 8,
              "Bad sizeof(RemoteObject_GetMethods_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObject_GetMethods_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObject_GetMethods_ResponseParams_Data));
      new (data()) RemoteObject_GetMethods_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObject_GetMethods_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObject_GetMethods_ResponseParams_Data>(index_);
    }
    RemoteObject_GetMethods_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> method_names;

 private:
  RemoteObject_GetMethods_ResponseParams_Data();
  ~RemoteObject_GetMethods_ResponseParams_Data() = delete;
};
static_assert(sizeof(RemoteObject_GetMethods_ResponseParams_Data) == 16,
              "Bad sizeof(RemoteObject_GetMethods_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObject_InvokeMethod_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObject_InvokeMethod_Params_Data));
      new (data()) RemoteObject_InvokeMethod_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObject_InvokeMethod_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObject_InvokeMethod_Params_Data>(index_);
    }
    RemoteObject_InvokeMethod_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::RemoteInvocationArgument_Data>> arguments;

 private:
  RemoteObject_InvokeMethod_Params_Data();
  ~RemoteObject_InvokeMethod_Params_Data() = delete;
};
static_assert(sizeof(RemoteObject_InvokeMethod_Params_Data) == 24,
              "Bad sizeof(RemoteObject_InvokeMethod_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteObject_InvokeMethod_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteObject_InvokeMethod_ResponseParams_Data));
      new (data()) RemoteObject_InvokeMethod_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteObject_InvokeMethod_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteObject_InvokeMethod_ResponseParams_Data>(index_);
    }
    RemoteObject_InvokeMethod_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RemoteInvocationResult_Data> result;

 private:
  RemoteObject_InvokeMethod_ResponseParams_Data();
  ~RemoteObject_InvokeMethod_ResponseParams_Data() = delete;
};
static_assert(sizeof(RemoteObject_InvokeMethod_ResponseParams_Data) == 16,
              "Bad sizeof(RemoteObject_InvokeMethod_ResponseParams_Data)");

}  // namespace internal
class RemoteObjectHost_GetObject_ParamsDataView {
 public:
  RemoteObjectHost_GetObject_ParamsDataView() {}

  RemoteObjectHost_GetObject_ParamsDataView(
      internal::RemoteObjectHost_GetObject_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t object_id() const {
    return data_->object_id;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::RemoteObjectRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RemoteObjectHost_GetObject_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemoteObjectHost_ReleaseObject_ParamsDataView {
 public:
  RemoteObjectHost_ReleaseObject_ParamsDataView() {}

  RemoteObjectHost_ReleaseObject_ParamsDataView(
      internal::RemoteObjectHost_ReleaseObject_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t object_id() const {
    return data_->object_id;
  }
 private:
  internal::RemoteObjectHost_ReleaseObject_Params_Data* data_ = nullptr;
};

class RemoteObject_HasMethod_ParamsDataView {
 public:
  RemoteObject_HasMethod_ParamsDataView() {}

  RemoteObject_HasMethod_ParamsDataView(
      internal::RemoteObject_HasMethod_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RemoteObject_HasMethod_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemoteObject_HasMethod_ResponseParamsDataView {
 public:
  RemoteObject_HasMethod_ResponseParamsDataView() {}

  RemoteObject_HasMethod_ResponseParamsDataView(
      internal::RemoteObject_HasMethod_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool method_exists() const {
    return data_->method_exists;
  }
 private:
  internal::RemoteObject_HasMethod_ResponseParams_Data* data_ = nullptr;
};

class RemoteObject_GetMethods_ParamsDataView {
 public:
  RemoteObject_GetMethods_ParamsDataView() {}

  RemoteObject_GetMethods_ParamsDataView(
      internal::RemoteObject_GetMethods_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RemoteObject_GetMethods_Params_Data* data_ = nullptr;
};

class RemoteObject_GetMethods_ResponseParamsDataView {
 public:
  RemoteObject_GetMethods_ResponseParamsDataView() {}

  RemoteObject_GetMethods_ResponseParamsDataView(
      internal::RemoteObject_GetMethods_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethodNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodNames(UserType* output) {
    auto* pointer = data_->method_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RemoteObject_GetMethods_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemoteObject_InvokeMethod_ParamsDataView {
 public:
  RemoteObject_InvokeMethod_ParamsDataView() {}

  RemoteObject_InvokeMethod_ParamsDataView(
      internal::RemoteObject_InvokeMethod_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetArgumentsDataView(
      mojo::ArrayDataView<RemoteInvocationArgumentDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArguments(UserType* output) {
    auto* pointer = data_->arguments.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::RemoteInvocationArgumentDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RemoteObject_InvokeMethod_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemoteObject_InvokeMethod_ResponseParamsDataView {
 public:
  RemoteObject_InvokeMethod_ResponseParamsDataView() {}

  RemoteObject_InvokeMethod_ResponseParamsDataView(
      internal::RemoteObject_InvokeMethod_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      RemoteInvocationResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::RemoteInvocationResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::RemoteObject_InvokeMethod_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void RemoteObject_HasMethod_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void RemoteObject_GetMethods_ResponseParamsDataView::GetMethodNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->method_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void RemoteObject_InvokeMethod_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RemoteObject_InvokeMethod_ParamsDataView::GetArgumentsDataView(
    mojo::ArrayDataView<RemoteInvocationArgumentDataView>* output) {
  auto pointer = data_->arguments.Get();
  *output = mojo::ArrayDataView<RemoteInvocationArgumentDataView>(pointer, context_);
}


inline void RemoteObject_InvokeMethod_ResponseParamsDataView::GetResultDataView(
    RemoteInvocationResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = RemoteInvocationResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_PARAMS_DATA_H_