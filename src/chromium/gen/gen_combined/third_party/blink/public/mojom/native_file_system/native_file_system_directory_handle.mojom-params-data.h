// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_GetFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_GetFile_Params_Data));
      new (data()) NativeFileSystemDirectoryHandle_GetFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_GetFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_GetFile_Params_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_GetFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint8_t create : 1;
  uint8_t padfinal_[7];

 private:
  NativeFileSystemDirectoryHandle_GetFile_Params_Data();
  ~NativeFileSystemDirectoryHandle_GetFile_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_GetFile_Params_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_GetFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data));
      new (data()) NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  mojo::internal::Interface_Data file;

 private:
  NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data();
  ~NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_GetDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_GetDirectory_Params_Data));
      new (data()) NativeFileSystemDirectoryHandle_GetDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_GetDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_GetDirectory_Params_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_GetDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint8_t create : 1;
  uint8_t padfinal_[7];

 private:
  NativeFileSystemDirectoryHandle_GetDirectory_Params_Data();
  ~NativeFileSystemDirectoryHandle_GetDirectory_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_GetDirectory_Params_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_GetDirectory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data));
      new (data()) NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  mojo::internal::Interface_Data directory;

 private:
  NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data();
  ~NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_GetEntries_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_GetEntries_Params_Data));
      new (data()) NativeFileSystemDirectoryHandle_GetEntries_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_GetEntries_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_GetEntries_Params_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_GetEntries_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeFileSystemDirectoryHandle_GetEntries_Params_Data();
  ~NativeFileSystemDirectoryHandle_GetEntries_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_GetEntries_Params_Data) == 8,
              "Bad sizeof(NativeFileSystemDirectoryHandle_GetEntries_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data));
      new (data()) NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::NativeFileSystemEntry_Data>>> entries;

 private:
  NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data();
  ~NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_MoveFrom_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_MoveFrom_Params_Data));
      new (data()) NativeFileSystemDirectoryHandle_MoveFrom_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_MoveFrom_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_MoveFrom_Params_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_MoveFrom_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data source;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  NativeFileSystemDirectoryHandle_MoveFrom_Params_Data();
  ~NativeFileSystemDirectoryHandle_MoveFrom_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_MoveFrom_Params_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_MoveFrom_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data));
      new (data()) NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  mojo::internal::Pointer<internal::NativeFileSystemEntry_Data> entry;

 private:
  NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data();
  ~NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_CopyFrom_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_CopyFrom_Params_Data));
      new (data()) NativeFileSystemDirectoryHandle_CopyFrom_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_CopyFrom_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_CopyFrom_Params_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_CopyFrom_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data source;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  NativeFileSystemDirectoryHandle_CopyFrom_Params_Data();
  ~NativeFileSystemDirectoryHandle_CopyFrom_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_CopyFrom_Params_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_CopyFrom_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data));
      new (data()) NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  mojo::internal::Pointer<internal::NativeFileSystemEntry_Data> entry;

 private:
  NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data();
  ~NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_Remove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_Remove_Params_Data));
      new (data()) NativeFileSystemDirectoryHandle_Remove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_Remove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_Remove_Params_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_Remove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t recurse : 1;
  uint8_t padfinal_[7];

 private:
  NativeFileSystemDirectoryHandle_Remove_Params_Data();
  ~NativeFileSystemDirectoryHandle_Remove_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_Remove_Params_Data) == 16,
              "Bad sizeof(NativeFileSystemDirectoryHandle_Remove_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data));
      new (data()) NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;

 private:
  NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data();
  ~NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data) == 16,
              "Bad sizeof(NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemDirectoryHandle_Transfer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemDirectoryHandle_Transfer_Params_Data));
      new (data()) NativeFileSystemDirectoryHandle_Transfer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemDirectoryHandle_Transfer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemDirectoryHandle_Transfer_Params_Data>(index_);
    }
    NativeFileSystemDirectoryHandle_Transfer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data token;
  uint8_t padfinal_[4];

 private:
  NativeFileSystemDirectoryHandle_Transfer_Params_Data();
  ~NativeFileSystemDirectoryHandle_Transfer_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemDirectoryHandle_Transfer_Params_Data) == 16,
              "Bad sizeof(NativeFileSystemDirectoryHandle_Transfer_Params_Data)");

}  // namespace internal
class NativeFileSystemDirectoryHandle_GetFile_ParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_GetFile_ParamsDataView() {}

  NativeFileSystemDirectoryHandle_GetFile_ParamsDataView(
      internal::NativeFileSystemDirectoryHandle_GetFile_Params_Data* data,
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
  bool create() const {
    return data_->create;
  }
 private:
  internal::NativeFileSystemDirectoryHandle_GetFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_GetFile_ResponseParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_GetFile_ResponseParamsDataView() {}

  NativeFileSystemDirectoryHandle_GetFile_ResponseParamsDataView(
      internal::NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeFile() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemFileHandlePtrDataView>(
            &data_->file, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_GetDirectory_ParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_GetDirectory_ParamsDataView() {}

  NativeFileSystemDirectoryHandle_GetDirectory_ParamsDataView(
      internal::NativeFileSystemDirectoryHandle_GetDirectory_Params_Data* data,
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
  bool create() const {
    return data_->create;
  }
 private:
  internal::NativeFileSystemDirectoryHandle_GetDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_GetDirectory_ResponseParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_GetDirectory_ResponseParamsDataView() {}

  NativeFileSystemDirectoryHandle_GetDirectory_ResponseParamsDataView(
      internal::NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDirectory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemDirectoryHandlePtrDataView>(
            &data_->directory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_GetEntries_ParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_GetEntries_ParamsDataView() {}

  NativeFileSystemDirectoryHandle_GetEntries_ParamsDataView(
      internal::NativeFileSystemDirectoryHandle_GetEntries_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeFileSystemDirectoryHandle_GetEntries_Params_Data* data_ = nullptr;
};

class NativeFileSystemDirectoryHandle_GetEntries_ResponseParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_GetEntries_ResponseParamsDataView() {}

  NativeFileSystemDirectoryHandle_GetEntries_ResponseParamsDataView(
      internal::NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<NativeFileSystemEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::NativeFileSystemEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_MoveFrom_ParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_MoveFrom_ParamsDataView() {}

  NativeFileSystemDirectoryHandle_MoveFrom_ParamsDataView(
      internal::NativeFileSystemDirectoryHandle_MoveFrom_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSource() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemTransferTokenPtrDataView>(
            &data_->source, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemDirectoryHandle_MoveFrom_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_MoveFrom_ResponseParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_MoveFrom_ResponseParamsDataView() {}

  NativeFileSystemDirectoryHandle_MoveFrom_ResponseParamsDataView(
      internal::NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  inline void GetEntryDataView(
      NativeFileSystemEntryDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntry(UserType* output) {
    auto* pointer = data_->entry.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemEntryDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_CopyFrom_ParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_CopyFrom_ParamsDataView() {}

  NativeFileSystemDirectoryHandle_CopyFrom_ParamsDataView(
      internal::NativeFileSystemDirectoryHandle_CopyFrom_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSource() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemTransferTokenPtrDataView>(
            &data_->source, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemDirectoryHandle_CopyFrom_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_CopyFrom_ResponseParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_CopyFrom_ResponseParamsDataView() {}

  NativeFileSystemDirectoryHandle_CopyFrom_ResponseParamsDataView(
      internal::NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  inline void GetEntryDataView(
      NativeFileSystemEntryDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntry(UserType* output) {
    auto* pointer = data_->entry.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemEntryDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_Remove_ParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_Remove_ParamsDataView() {}

  NativeFileSystemDirectoryHandle_Remove_ParamsDataView(
      internal::NativeFileSystemDirectoryHandle_Remove_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool recurse() const {
    return data_->recurse;
  }
 private:
  internal::NativeFileSystemDirectoryHandle_Remove_Params_Data* data_ = nullptr;
};

class NativeFileSystemDirectoryHandle_Remove_ResponseParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_Remove_ResponseParamsDataView() {}

  NativeFileSystemDirectoryHandle_Remove_ResponseParamsDataView(
      internal::NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemDirectoryHandle_Transfer_ParamsDataView {
 public:
  NativeFileSystemDirectoryHandle_Transfer_ParamsDataView() {}

  NativeFileSystemDirectoryHandle_Transfer_ParamsDataView(
      internal::NativeFileSystemDirectoryHandle_Transfer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemTransferTokenRequestDataView>(
            &data_->token, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativeFileSystemDirectoryHandle_Transfer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NativeFileSystemDirectoryHandle_GetFile_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NativeFileSystemDirectoryHandle_GetFile_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}


inline void NativeFileSystemDirectoryHandle_GetDirectory_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NativeFileSystemDirectoryHandle_GetDirectory_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}




inline void NativeFileSystemDirectoryHandle_GetEntries_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}
inline void NativeFileSystemDirectoryHandle_GetEntries_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<NativeFileSystemEntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<NativeFileSystemEntryDataView>(pointer, context_);
}


inline void NativeFileSystemDirectoryHandle_MoveFrom_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NativeFileSystemDirectoryHandle_MoveFrom_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}
inline void NativeFileSystemDirectoryHandle_MoveFrom_ResponseParamsDataView::GetEntryDataView(
    NativeFileSystemEntryDataView* output) {
  auto pointer = data_->entry.Get();
  *output = NativeFileSystemEntryDataView(pointer, context_);
}


inline void NativeFileSystemDirectoryHandle_CopyFrom_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NativeFileSystemDirectoryHandle_CopyFrom_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}
inline void NativeFileSystemDirectoryHandle_CopyFrom_ResponseParamsDataView::GetEntryDataView(
    NativeFileSystemEntryDataView* output) {
  auto pointer = data_->entry.Get();
  *output = NativeFileSystemEntryDataView(pointer, context_);
}




inline void NativeFileSystemDirectoryHandle_Remove_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_PARAMS_DATA_H_