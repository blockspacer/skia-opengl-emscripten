// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemManager_GetSandboxedFileSystem_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemManager_GetSandboxedFileSystem_Params_Data));
      new (data()) NativeFileSystemManager_GetSandboxedFileSystem_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemManager_GetSandboxedFileSystem_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemManager_GetSandboxedFileSystem_Params_Data>(index_);
    }
    NativeFileSystemManager_GetSandboxedFileSystem_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeFileSystemManager_GetSandboxedFileSystem_Params_Data();
  ~NativeFileSystemManager_GetSandboxedFileSystem_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemManager_GetSandboxedFileSystem_Params_Data) == 8,
              "Bad sizeof(NativeFileSystemManager_GetSandboxedFileSystem_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data));
      new (data()) NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data>(index_);
    }
    NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data* operator->() { return data(); }

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
  NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data();
  ~NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemManager_ChooseEntries_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemManager_ChooseEntries_Params_Data));
      new (data()) NativeFileSystemManager_ChooseEntries_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemManager_ChooseEntries_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemManager_ChooseEntries_Params_Data>(index_);
    }
    NativeFileSystemManager_ChooseEntries_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t include_accepts_all : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChooseFileSystemEntryAcceptsOption_Data>>> accepts;

 private:
  NativeFileSystemManager_ChooseEntries_Params_Data();
  ~NativeFileSystemManager_ChooseEntries_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemManager_ChooseEntries_Params_Data) == 24,
              "Bad sizeof(NativeFileSystemManager_ChooseEntries_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemManager_ChooseEntries_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemManager_ChooseEntries_ResponseParams_Data));
      new (data()) NativeFileSystemManager_ChooseEntries_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemManager_ChooseEntries_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemManager_ChooseEntries_ResponseParams_Data>(index_);
    }
    NativeFileSystemManager_ChooseEntries_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemEntry_Data>>> entries;

 private:
  NativeFileSystemManager_ChooseEntries_ResponseParams_Data();
  ~NativeFileSystemManager_ChooseEntries_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemManager_ChooseEntries_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemManager_ChooseEntries_ResponseParams_Data)");

}  // namespace internal
class NativeFileSystemManager_GetSandboxedFileSystem_ParamsDataView {
 public:
  NativeFileSystemManager_GetSandboxedFileSystem_ParamsDataView() {}

  NativeFileSystemManager_GetSandboxedFileSystem_ParamsDataView(
      internal::NativeFileSystemManager_GetSandboxedFileSystem_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeFileSystemManager_GetSandboxedFileSystem_Params_Data* data_ = nullptr;
};

class NativeFileSystemManager_GetSandboxedFileSystem_ResponseParamsDataView {
 public:
  NativeFileSystemManager_GetSandboxedFileSystem_ResponseParamsDataView() {}

  NativeFileSystemManager_GetSandboxedFileSystem_ResponseParamsDataView(
      internal::NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data* data,
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
  internal::NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemManager_ChooseEntries_ParamsDataView {
 public:
  NativeFileSystemManager_ChooseEntries_ParamsDataView() {}

  NativeFileSystemManager_ChooseEntries_ParamsDataView(
      internal::NativeFileSystemManager_ChooseEntries_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::ChooseFileSystemEntryType>(
        data_value, output);
  }

  ChooseFileSystemEntryType type() const {
    return static_cast<ChooseFileSystemEntryType>(data_->type);
  }
  inline void GetAcceptsDataView(
      mojo::ArrayDataView<ChooseFileSystemEntryAcceptsOptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccepts(UserType* output) {
    auto* pointer = data_->accepts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ChooseFileSystemEntryAcceptsOptionDataView>>(
        pointer, output, context_);
  }
  bool include_accepts_all() const {
    return data_->include_accepts_all;
  }
 private:
  internal::NativeFileSystemManager_ChooseEntries_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemManager_ChooseEntries_ResponseParamsDataView {
 public:
  NativeFileSystemManager_ChooseEntries_ResponseParamsDataView() {}

  NativeFileSystemManager_ChooseEntries_ResponseParamsDataView(
      internal::NativeFileSystemManager_ChooseEntries_ResponseParams_Data* data,
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
      mojo::ArrayDataView<::blink::mojom::NativeFileSystemEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::NativeFileSystemEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemManager_ChooseEntries_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void NativeFileSystemManager_GetSandboxedFileSystem_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}


inline void NativeFileSystemManager_ChooseEntries_ParamsDataView::GetAcceptsDataView(
    mojo::ArrayDataView<ChooseFileSystemEntryAcceptsOptionDataView>* output) {
  auto pointer = data_->accepts.Get();
  *output = mojo::ArrayDataView<ChooseFileSystemEntryAcceptsOptionDataView>(pointer, context_);
}


inline void NativeFileSystemManager_ChooseEntries_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}
inline void NativeFileSystemManager_ChooseEntries_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<::blink::mojom::NativeFileSystemEntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<::blink::mojom::NativeFileSystemEntryDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_PARAMS_DATA_H_