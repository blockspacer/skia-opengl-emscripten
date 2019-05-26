// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_GetSequenceNumber_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_GetSequenceNumber_Params_Data));
      new (data()) ClipboardHost_GetSequenceNumber_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_GetSequenceNumber_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_GetSequenceNumber_Params_Data>(index_);
    }
    ClipboardHost_GetSequenceNumber_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_GetSequenceNumber_Params_Data();
  ~ClipboardHost_GetSequenceNumber_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_GetSequenceNumber_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_GetSequenceNumber_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_GetSequenceNumber_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_GetSequenceNumber_ResponseParams_Data));
      new (data()) ClipboardHost_GetSequenceNumber_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_GetSequenceNumber_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_GetSequenceNumber_ResponseParams_Data>(index_);
    }
    ClipboardHost_GetSequenceNumber_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t result;

 private:
  ClipboardHost_GetSequenceNumber_ResponseParams_Data();
  ~ClipboardHost_GetSequenceNumber_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_GetSequenceNumber_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_GetSequenceNumber_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_IsFormatAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_IsFormatAvailable_Params_Data));
      new (data()) ClipboardHost_IsFormatAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_IsFormatAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_IsFormatAvailable_Params_Data>(index_);
    }
    ClipboardHost_IsFormatAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t format;
  int32_t buffer;

 private:
  ClipboardHost_IsFormatAvailable_Params_Data();
  ~ClipboardHost_IsFormatAvailable_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_IsFormatAvailable_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_IsFormatAvailable_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_IsFormatAvailable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_IsFormatAvailable_ResponseParams_Data));
      new (data()) ClipboardHost_IsFormatAvailable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_IsFormatAvailable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_IsFormatAvailable_ResponseParams_Data>(index_);
    }
    ClipboardHost_IsFormatAvailable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  ClipboardHost_IsFormatAvailable_ResponseParams_Data();
  ~ClipboardHost_IsFormatAvailable_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_IsFormatAvailable_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_IsFormatAvailable_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadAvailableTypes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadAvailableTypes_Params_Data));
      new (data()) ClipboardHost_ReadAvailableTypes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadAvailableTypes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadAvailableTypes_Params_Data>(index_);
    }
    ClipboardHost_ReadAvailableTypes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadAvailableTypes_Params_Data();
  ~ClipboardHost_ReadAvailableTypes_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAvailableTypes_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadAvailableTypes_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadAvailableTypes_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data));
      new (data()) ClipboardHost_ReadAvailableTypes_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadAvailableTypes_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadAvailableTypes_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadAvailableTypes_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> types;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  ClipboardHost_ReadAvailableTypes_ResponseParams_Data();
  ~ClipboardHost_ReadAvailableTypes_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data) == 24,
              "Bad sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadText_Params_Data));
      new (data()) ClipboardHost_ReadText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadText_Params_Data>(index_);
    }
    ClipboardHost_ReadText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadText_Params_Data();
  ~ClipboardHost_ReadText_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadText_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadText_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadText_ResponseParams_Data));
      new (data()) ClipboardHost_ReadText_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadText_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadText_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadText_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> result;

 private:
  ClipboardHost_ReadText_ResponseParams_Data();
  ~ClipboardHost_ReadText_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadText_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadText_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadHtml_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadHtml_Params_Data));
      new (data()) ClipboardHost_ReadHtml_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadHtml_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadHtml_Params_Data>(index_);
    }
    ClipboardHost_ReadHtml_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadHtml_Params_Data();
  ~ClipboardHost_ReadHtml_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadHtml_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadHtml_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadHtml_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadHtml_ResponseParams_Data));
      new (data()) ClipboardHost_ReadHtml_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadHtml_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadHtml_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadHtml_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> markup;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  uint32_t fragment_start;
  uint32_t fragment_end;

 private:
  ClipboardHost_ReadHtml_ResponseParams_Data();
  ~ClipboardHost_ReadHtml_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadHtml_ResponseParams_Data) == 32,
              "Bad sizeof(ClipboardHost_ReadHtml_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadRtf_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadRtf_Params_Data));
      new (data()) ClipboardHost_ReadRtf_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadRtf_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadRtf_Params_Data>(index_);
    }
    ClipboardHost_ReadRtf_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadRtf_Params_Data();
  ~ClipboardHost_ReadRtf_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadRtf_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadRtf_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadRtf_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadRtf_ResponseParams_Data));
      new (data()) ClipboardHost_ReadRtf_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadRtf_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadRtf_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadRtf_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> result;

 private:
  ClipboardHost_ReadRtf_ResponseParams_Data();
  ~ClipboardHost_ReadRtf_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadRtf_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadRtf_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadImage_Params_Data));
      new (data()) ClipboardHost_ReadImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadImage_Params_Data>(index_);
    }
    ClipboardHost_ReadImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadImage_Params_Data();
  ~ClipboardHost_ReadImage_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadImage_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadImage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadImage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadImage_ResponseParams_Data));
      new (data()) ClipboardHost_ReadImage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadImage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadImage_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadImage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> image;

 private:
  ClipboardHost_ReadImage_ResponseParams_Data();
  ~ClipboardHost_ReadImage_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadImage_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadImage_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadCustomData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadCustomData_Params_Data));
      new (data()) ClipboardHost_ReadCustomData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadCustomData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadCustomData_Params_Data>(index_);
    }
    ClipboardHost_ReadCustomData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> type;

 private:
  ClipboardHost_ReadCustomData_Params_Data();
  ~ClipboardHost_ReadCustomData_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadCustomData_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_ReadCustomData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_ReadCustomData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadCustomData_ResponseParams_Data));
      new (data()) ClipboardHost_ReadCustomData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadCustomData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadCustomData_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadCustomData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> result;

 private:
  ClipboardHost_ReadCustomData_ResponseParams_Data();
  ~ClipboardHost_ReadCustomData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadCustomData_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadCustomData_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteText_Params_Data));
      new (data()) ClipboardHost_WriteText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteText_Params_Data>(index_);
    }
    ClipboardHost_WriteText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> text;

 private:
  ClipboardHost_WriteText_Params_Data();
  ~ClipboardHost_WriteText_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteText_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_WriteText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteHtml_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteHtml_Params_Data));
      new (data()) ClipboardHost_WriteHtml_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteHtml_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteHtml_Params_Data>(index_);
    }
    ClipboardHost_WriteHtml_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> markup;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ClipboardHost_WriteHtml_Params_Data();
  ~ClipboardHost_WriteHtml_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteHtml_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_WriteHtml_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteSmartPasteMarker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteSmartPasteMarker_Params_Data));
      new (data()) ClipboardHost_WriteSmartPasteMarker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteSmartPasteMarker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteSmartPasteMarker_Params_Data>(index_);
    }
    ClipboardHost_WriteSmartPasteMarker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ClipboardHost_WriteSmartPasteMarker_Params_Data();
  ~ClipboardHost_WriteSmartPasteMarker_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteSmartPasteMarker_Params_Data) == 8,
              "Bad sizeof(ClipboardHost_WriteSmartPasteMarker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteCustomData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteCustomData_Params_Data));
      new (data()) ClipboardHost_WriteCustomData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteCustomData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteCustomData_Params_Data>(index_);
    }
    ClipboardHost_WriteCustomData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>, mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data>>> data;

 private:
  ClipboardHost_WriteCustomData_Params_Data();
  ~ClipboardHost_WriteCustomData_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteCustomData_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_WriteCustomData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteBookmark_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteBookmark_Params_Data));
      new (data()) ClipboardHost_WriteBookmark_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteBookmark_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteBookmark_Params_Data>(index_);
    }
    ClipboardHost_WriteBookmark_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;

 private:
  ClipboardHost_WriteBookmark_Params_Data();
  ~ClipboardHost_WriteBookmark_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteBookmark_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_WriteBookmark_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_WriteImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteImage_Params_Data));
      new (data()) ClipboardHost_WriteImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteImage_Params_Data>(index_);
    }
    ClipboardHost_WriteImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> image;

 private:
  ClipboardHost_WriteImage_Params_Data();
  ~ClipboardHost_WriteImage_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteImage_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_WriteImage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardHost_CommitWrite_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_CommitWrite_Params_Data));
      new (data()) ClipboardHost_CommitWrite_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_CommitWrite_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_CommitWrite_Params_Data>(index_);
    }
    ClipboardHost_CommitWrite_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ClipboardHost_CommitWrite_Params_Data();
  ~ClipboardHost_CommitWrite_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_CommitWrite_Params_Data) == 8,
              "Bad sizeof(ClipboardHost_CommitWrite_Params_Data)");

}  // namespace internal
class ClipboardHost_GetSequenceNumber_ParamsDataView {
 public:
  ClipboardHost_GetSequenceNumber_ParamsDataView() {}

  ClipboardHost_GetSequenceNumber_ParamsDataView(
      internal::ClipboardHost_GetSequenceNumber_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_GetSequenceNumber_Params_Data* data_ = nullptr;
};

class ClipboardHost_GetSequenceNumber_ResponseParamsDataView {
 public:
  ClipboardHost_GetSequenceNumber_ResponseParamsDataView() {}

  ClipboardHost_GetSequenceNumber_ResponseParamsDataView(
      internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t result() const {
    return data_->result;
  }
 private:
  internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data* data_ = nullptr;
};

class ClipboardHost_IsFormatAvailable_ParamsDataView {
 public:
  ClipboardHost_IsFormatAvailable_ParamsDataView() {}

  ClipboardHost_IsFormatAvailable_ParamsDataView(
      internal::ClipboardHost_IsFormatAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardFormat>(
        data_value, output);
  }

  ClipboardFormat format() const {
    return static_cast<ClipboardFormat>(data_->format);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_IsFormatAvailable_Params_Data* data_ = nullptr;
};

class ClipboardHost_IsFormatAvailable_ResponseParamsDataView {
 public:
  ClipboardHost_IsFormatAvailable_ResponseParamsDataView() {}

  ClipboardHost_IsFormatAvailable_ResponseParamsDataView(
      internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data* data_ = nullptr;
};

class ClipboardHost_ReadAvailableTypes_ParamsDataView {
 public:
  ClipboardHost_ReadAvailableTypes_ParamsDataView() {}

  ClipboardHost_ReadAvailableTypes_ParamsDataView(
      internal::ClipboardHost_ReadAvailableTypes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadAvailableTypes_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadAvailableTypes_ResponseParamsDataView {
 public:
  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView() {}

  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView(
      internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypesDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTypes(UserType* output) {
    auto* pointer = data_->types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
  bool result() const {
    return data_->result;
  }
 private:
  internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadText_ParamsDataView {
 public:
  ClipboardHost_ReadText_ParamsDataView() {}

  ClipboardHost_ReadText_ParamsDataView(
      internal::ClipboardHost_ReadText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadText_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadText_ResponseParamsDataView {
 public:
  ClipboardHost_ReadText_ResponseParamsDataView() {}

  ClipboardHost_ReadText_ResponseParamsDataView(
      internal::ClipboardHost_ReadText_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadText_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadHtml_ParamsDataView {
 public:
  ClipboardHost_ReadHtml_ParamsDataView() {}

  ClipboardHost_ReadHtml_ParamsDataView(
      internal::ClipboardHost_ReadHtml_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadHtml_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadHtml_ResponseParamsDataView {
 public:
  ClipboardHost_ReadHtml_ResponseParamsDataView() {}

  ClipboardHost_ReadHtml_ResponseParamsDataView(
      internal::ClipboardHost_ReadHtml_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMarkupDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkup(UserType* output) {
    auto* pointer = data_->markup.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  uint32_t fragment_start() const {
    return data_->fragment_start;
  }
  uint32_t fragment_end() const {
    return data_->fragment_end;
  }
 private:
  internal::ClipboardHost_ReadHtml_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadRtf_ParamsDataView {
 public:
  ClipboardHost_ReadRtf_ParamsDataView() {}

  ClipboardHost_ReadRtf_ParamsDataView(
      internal::ClipboardHost_ReadRtf_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadRtf_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadRtf_ResponseParamsDataView {
 public:
  ClipboardHost_ReadRtf_ResponseParamsDataView() {}

  ClipboardHost_ReadRtf_ResponseParamsDataView(
      internal::ClipboardHost_ReadRtf_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadRtf_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadImage_ParamsDataView {
 public:
  ClipboardHost_ReadImage_ParamsDataView() {}

  ClipboardHost_ReadImage_ParamsDataView(
      internal::ClipboardHost_ReadImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadImage_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadImage_ResponseParamsDataView {
 public:
  ClipboardHost_ReadImage_ResponseParamsDataView() {}

  ClipboardHost_ReadImage_ResponseParamsDataView(
      internal::ClipboardHost_ReadImage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImage(UserType* output) {
    auto* pointer = data_->image.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadImage_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadCustomData_ParamsDataView {
 public:
  ClipboardHost_ReadCustomData_ParamsDataView() {}

  ClipboardHost_ReadCustomData_ParamsDataView(
      internal::ClipboardHost_ReadCustomData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
  inline void GetTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadCustomData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadCustomData_ResponseParamsDataView {
 public:
  ClipboardHost_ReadCustomData_ResponseParamsDataView() {}

  ClipboardHost_ReadCustomData_ResponseParamsDataView(
      internal::ClipboardHost_ReadCustomData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadCustomData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteText_ParamsDataView {
 public:
  ClipboardHost_WriteText_ParamsDataView() {}

  ClipboardHost_WriteText_ParamsDataView(
      internal::ClipboardHost_WriteText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteHtml_ParamsDataView {
 public:
  ClipboardHost_WriteHtml_ParamsDataView() {}

  ClipboardHost_WriteHtml_ParamsDataView(
      internal::ClipboardHost_WriteHtml_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMarkupDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkup(UserType* output) {
    auto* pointer = data_->markup.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteHtml_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteSmartPasteMarker_ParamsDataView {
 public:
  ClipboardHost_WriteSmartPasteMarker_ParamsDataView() {}

  ClipboardHost_WriteSmartPasteMarker_ParamsDataView(
      internal::ClipboardHost_WriteSmartPasteMarker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ClipboardHost_WriteSmartPasteMarker_Params_Data* data_ = nullptr;
};

class ClipboardHost_WriteCustomData_ParamsDataView {
 public:
  ClipboardHost_WriteCustomData_ParamsDataView() {}

  ClipboardHost_WriteCustomData_ParamsDataView(
      internal::ClipboardHost_WriteCustomData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteCustomData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteBookmark_ParamsDataView {
 public:
  ClipboardHost_WriteBookmark_ParamsDataView() {}

  ClipboardHost_WriteBookmark_ParamsDataView(
      internal::ClipboardHost_WriteBookmark_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteBookmark_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteImage_ParamsDataView {
 public:
  ClipboardHost_WriteImage_ParamsDataView() {}

  ClipboardHost_WriteImage_ParamsDataView(
      internal::ClipboardHost_WriteImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImage(UserType* output) {
    auto* pointer = data_->image.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_CommitWrite_ParamsDataView {
 public:
  ClipboardHost_CommitWrite_ParamsDataView() {}

  ClipboardHost_CommitWrite_ParamsDataView(
      internal::ClipboardHost_CommitWrite_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ClipboardHost_CommitWrite_Params_Data* data_ = nullptr;
};












inline void ClipboardHost_ReadAvailableTypes_ResponseParamsDataView::GetTypesDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->types.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}




inline void ClipboardHost_ReadText_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->result.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}




inline void ClipboardHost_ReadHtml_ResponseParamsDataView::GetMarkupDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->markup.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}
inline void ClipboardHost_ReadHtml_ResponseParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void ClipboardHost_ReadRtf_ResponseParamsDataView::GetResultDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->result.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ClipboardHost_ReadImage_ResponseParamsDataView::GetImageDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->image.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}


inline void ClipboardHost_ReadCustomData_ParamsDataView::GetTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ClipboardHost_ReadCustomData_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->result.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}


inline void ClipboardHost_WriteText_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}


inline void ClipboardHost_WriteHtml_ParamsDataView::GetMarkupDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->markup.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}
inline void ClipboardHost_WriteHtml_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void ClipboardHost_WriteCustomData_ParamsDataView::GetDataDataView(
    mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>(pointer, context_);
}


inline void ClipboardHost_WriteBookmark_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ClipboardHost_WriteBookmark_ParamsDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ClipboardHost_WriteImage_ParamsDataView::GetImageDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->image.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_PARAMS_DATA_H_