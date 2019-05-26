// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_PARAMS_DATA_H_

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
namespace sample {
namespace internal {
class  NamedObject_SetName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NamedObject_SetName_Params_Data));
      new (data()) NamedObject_SetName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NamedObject_SetName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NamedObject_SetName_Params_Data>(index_);
    }
    NamedObject_SetName_Params_Data* operator->() { return data(); }

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
  NamedObject_SetName_Params_Data();
  ~NamedObject_SetName_Params_Data() = delete;
};
static_assert(sizeof(NamedObject_SetName_Params_Data) == 16,
              "Bad sizeof(NamedObject_SetName_Params_Data)");
class  NamedObject_GetName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NamedObject_GetName_Params_Data));
      new (data()) NamedObject_GetName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NamedObject_GetName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NamedObject_GetName_Params_Data>(index_);
    }
    NamedObject_GetName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NamedObject_GetName_Params_Data();
  ~NamedObject_GetName_Params_Data() = delete;
};
static_assert(sizeof(NamedObject_GetName_Params_Data) == 8,
              "Bad sizeof(NamedObject_GetName_Params_Data)");
class  NamedObject_GetName_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NamedObject_GetName_ResponseParams_Data));
      new (data()) NamedObject_GetName_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NamedObject_GetName_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NamedObject_GetName_ResponseParams_Data>(index_);
    }
    NamedObject_GetName_ResponseParams_Data* operator->() { return data(); }

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
  NamedObject_GetName_ResponseParams_Data();
  ~NamedObject_GetName_ResponseParams_Data() = delete;
};
static_assert(sizeof(NamedObject_GetName_ResponseParams_Data) == 16,
              "Bad sizeof(NamedObject_GetName_ResponseParams_Data)");
class  Factory_DoStuff_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_DoStuff_Params_Data));
      new (data()) Factory_DoStuff_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_DoStuff_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_DoStuff_Params_Data>(index_);
    }
    Factory_DoStuff_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Request_Data> request;
  mojo::internal::Handle_Data pipe;
  uint8_t padfinal_[4];

 private:
  Factory_DoStuff_Params_Data();
  ~Factory_DoStuff_Params_Data() = delete;
};
static_assert(sizeof(Factory_DoStuff_Params_Data) == 24,
              "Bad sizeof(Factory_DoStuff_Params_Data)");
class  Factory_DoStuff_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_DoStuff_ResponseParams_Data));
      new (data()) Factory_DoStuff_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_DoStuff_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_DoStuff_ResponseParams_Data>(index_);
    }
    Factory_DoStuff_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Response_Data> response;
  mojo::internal::Pointer<mojo::internal::String_Data> text;

 private:
  Factory_DoStuff_ResponseParams_Data();
  ~Factory_DoStuff_ResponseParams_Data() = delete;
};
static_assert(sizeof(Factory_DoStuff_ResponseParams_Data) == 24,
              "Bad sizeof(Factory_DoStuff_ResponseParams_Data)");
class  Factory_DoStuff2_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_DoStuff2_Params_Data));
      new (data()) Factory_DoStuff2_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_DoStuff2_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_DoStuff2_Params_Data>(index_);
    }
    Factory_DoStuff2_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data pipe;
  uint8_t padfinal_[4];

 private:
  Factory_DoStuff2_Params_Data();
  ~Factory_DoStuff2_Params_Data() = delete;
};
static_assert(sizeof(Factory_DoStuff2_Params_Data) == 16,
              "Bad sizeof(Factory_DoStuff2_Params_Data)");
class  Factory_DoStuff2_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_DoStuff2_ResponseParams_Data));
      new (data()) Factory_DoStuff2_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_DoStuff2_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_DoStuff2_ResponseParams_Data>(index_);
    }
    Factory_DoStuff2_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> text;

 private:
  Factory_DoStuff2_ResponseParams_Data();
  ~Factory_DoStuff2_ResponseParams_Data() = delete;
};
static_assert(sizeof(Factory_DoStuff2_ResponseParams_Data) == 16,
              "Bad sizeof(Factory_DoStuff2_ResponseParams_Data)");
class  Factory_CreateNamedObject_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_CreateNamedObject_Params_Data));
      new (data()) Factory_CreateNamedObject_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_CreateNamedObject_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_CreateNamedObject_Params_Data>(index_);
    }
    Factory_CreateNamedObject_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data obj;
  uint8_t padfinal_[4];

 private:
  Factory_CreateNamedObject_Params_Data();
  ~Factory_CreateNamedObject_Params_Data() = delete;
};
static_assert(sizeof(Factory_CreateNamedObject_Params_Data) == 16,
              "Bad sizeof(Factory_CreateNamedObject_Params_Data)");
class  Factory_RequestImportedInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_RequestImportedInterface_Params_Data));
      new (data()) Factory_RequestImportedInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_RequestImportedInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_RequestImportedInterface_Params_Data>(index_);
    }
    Factory_RequestImportedInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data obj;
  uint8_t padfinal_[4];

 private:
  Factory_RequestImportedInterface_Params_Data();
  ~Factory_RequestImportedInterface_Params_Data() = delete;
};
static_assert(sizeof(Factory_RequestImportedInterface_Params_Data) == 16,
              "Bad sizeof(Factory_RequestImportedInterface_Params_Data)");
class  Factory_RequestImportedInterface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_RequestImportedInterface_ResponseParams_Data));
      new (data()) Factory_RequestImportedInterface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_RequestImportedInterface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_RequestImportedInterface_ResponseParams_Data>(index_);
    }
    Factory_RequestImportedInterface_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data obj;
  uint8_t padfinal_[4];

 private:
  Factory_RequestImportedInterface_ResponseParams_Data();
  ~Factory_RequestImportedInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(Factory_RequestImportedInterface_ResponseParams_Data) == 16,
              "Bad sizeof(Factory_RequestImportedInterface_ResponseParams_Data)");
class  Factory_TakeImportedInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_TakeImportedInterface_Params_Data));
      new (data()) Factory_TakeImportedInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_TakeImportedInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_TakeImportedInterface_Params_Data>(index_);
    }
    Factory_TakeImportedInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data obj;

 private:
  Factory_TakeImportedInterface_Params_Data();
  ~Factory_TakeImportedInterface_Params_Data() = delete;
};
static_assert(sizeof(Factory_TakeImportedInterface_Params_Data) == 16,
              "Bad sizeof(Factory_TakeImportedInterface_Params_Data)");
class  Factory_TakeImportedInterface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_TakeImportedInterface_ResponseParams_Data));
      new (data()) Factory_TakeImportedInterface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_TakeImportedInterface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_TakeImportedInterface_ResponseParams_Data>(index_);
    }
    Factory_TakeImportedInterface_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data obj;

 private:
  Factory_TakeImportedInterface_ResponseParams_Data();
  ~Factory_TakeImportedInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(Factory_TakeImportedInterface_ResponseParams_Data) == 16,
              "Bad sizeof(Factory_TakeImportedInterface_ResponseParams_Data)");

}  // namespace internal
class NamedObject_SetName_ParamsDataView {
 public:
  NamedObject_SetName_ParamsDataView() {}

  NamedObject_SetName_ParamsDataView(
      internal::NamedObject_SetName_Params_Data* data,
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
  internal::NamedObject_SetName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NamedObject_GetName_ParamsDataView {
 public:
  NamedObject_GetName_ParamsDataView() {}

  NamedObject_GetName_ParamsDataView(
      internal::NamedObject_GetName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NamedObject_GetName_Params_Data* data_ = nullptr;
};

class NamedObject_GetName_ResponseParamsDataView {
 public:
  NamedObject_GetName_ResponseParamsDataView() {}

  NamedObject_GetName_ResponseParamsDataView(
      internal::NamedObject_GetName_ResponseParams_Data* data,
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
  internal::NamedObject_GetName_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_DoStuff_ParamsDataView {
 public:
  Factory_DoStuff_ParamsDataView() {}

  Factory_DoStuff_ParamsDataView(
      internal::Factory_DoStuff_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      RequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::sample::RequestDataView>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakePipe() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Factory_DoStuff_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_DoStuff_ResponseParamsDataView {
 public:
  Factory_DoStuff_ResponseParamsDataView() {}

  Factory_DoStuff_ResponseParamsDataView(
      internal::Factory_DoStuff_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      ResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::sample::ResponseDataView>(
        pointer, output, context_);
  }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Factory_DoStuff_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_DoStuff2_ParamsDataView {
 public:
  Factory_DoStuff2_ParamsDataView() {}

  Factory_DoStuff2_ParamsDataView(
      internal::Factory_DoStuff2_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakePipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Factory_DoStuff2_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_DoStuff2_ResponseParamsDataView {
 public:
  Factory_DoStuff2_ResponseParamsDataView() {}

  Factory_DoStuff2_ResponseParamsDataView(
      internal::Factory_DoStuff2_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Factory_DoStuff2_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_CreateNamedObject_ParamsDataView {
 public:
  Factory_CreateNamedObject_ParamsDataView() {}

  Factory_CreateNamedObject_ParamsDataView(
      internal::Factory_CreateNamedObject_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObj() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::sample::NamedObjectInterfaceBase>>(
            &data_->obj, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Factory_CreateNamedObject_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_RequestImportedInterface_ParamsDataView {
 public:
  Factory_RequestImportedInterface_ParamsDataView() {}

  Factory_RequestImportedInterface_ParamsDataView(
      internal::Factory_RequestImportedInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObj() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::imported::ImportedInterfaceInterfaceBase>>(
            &data_->obj, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Factory_RequestImportedInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_RequestImportedInterface_ResponseParamsDataView {
 public:
  Factory_RequestImportedInterface_ResponseParamsDataView() {}

  Factory_RequestImportedInterface_ResponseParamsDataView(
      internal::Factory_RequestImportedInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObj() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::imported::ImportedInterfaceInterfaceBase>>(
            &data_->obj, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Factory_RequestImportedInterface_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_TakeImportedInterface_ParamsDataView {
 public:
  Factory_TakeImportedInterface_ParamsDataView() {}

  Factory_TakeImportedInterface_ParamsDataView(
      internal::Factory_TakeImportedInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObj() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::imported::ImportedInterfaceInterfaceBase>>(
            &data_->obj, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Factory_TakeImportedInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_TakeImportedInterface_ResponseParamsDataView {
 public:
  Factory_TakeImportedInterface_ResponseParamsDataView() {}

  Factory_TakeImportedInterface_ResponseParamsDataView(
      internal::Factory_TakeImportedInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObj() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::imported::ImportedInterfaceInterfaceBase>>(
            &data_->obj, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Factory_TakeImportedInterface_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NamedObject_SetName_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void NamedObject_GetName_ResponseParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Factory_DoStuff_ParamsDataView::GetRequestDataView(
    RequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = RequestDataView(pointer, context_);
}


inline void Factory_DoStuff_ResponseParamsDataView::GetResponseDataView(
    ResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ResponseDataView(pointer, context_);
}
inline void Factory_DoStuff_ResponseParamsDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Factory_DoStuff2_ResponseParamsDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}











}  // namespace sample

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_PARAMS_DATA_H_