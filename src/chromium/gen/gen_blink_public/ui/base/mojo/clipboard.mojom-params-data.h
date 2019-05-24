// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_PARAMS_DATA_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_PARAMS_DATA_H_

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
namespace ui {
namespace mojom {
namespace internal {
class  ClipboardHost_GetSequenceNumber_Params_Data {
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
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_GetSequenceNumber_Params_Data();
  ~ClipboardHost_GetSequenceNumber_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_GetSequenceNumber_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_GetSequenceNumber_Params_Data)");
class  ClipboardHost_GetSequenceNumber_ResponseParams_Data {
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
class  ClipboardHost_IsFormatAvailable_Params_Data {
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
  mojo::internal::Pointer<mojo::internal::String_Data> format;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_IsFormatAvailable_Params_Data();
  ~ClipboardHost_IsFormatAvailable_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_IsFormatAvailable_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_IsFormatAvailable_Params_Data)");
class  ClipboardHost_IsFormatAvailable_ResponseParams_Data {
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
class  ClipboardHost_Clear_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_Clear_Params_Data));
      new (data()) ClipboardHost_Clear_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_Clear_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_Clear_Params_Data>(index_);
    }
    ClipboardHost_Clear_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_Clear_Params_Data();
  ~ClipboardHost_Clear_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_Clear_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_Clear_Params_Data)");
class  ClipboardHost_ReadAvailableTypes_Params_Data {
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
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadAvailableTypes_Params_Data();
  ~ClipboardHost_ReadAvailableTypes_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAvailableTypes_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadAvailableTypes_Params_Data)");
class  ClipboardHost_ReadAvailableTypes_ResponseParams_Data {
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
  uint8_t contains_filenames : 1;
  uint8_t padfinal_[7];

 private:
  ClipboardHost_ReadAvailableTypes_ResponseParams_Data();
  ~ClipboardHost_ReadAvailableTypes_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data) == 24,
              "Bad sizeof(ClipboardHost_ReadAvailableTypes_ResponseParams_Data)");
class  ClipboardHost_ReadText_Params_Data {
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
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadText_Params_Data();
  ~ClipboardHost_ReadText_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadText_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadText_Params_Data)");
class  ClipboardHost_ReadText_ResponseParams_Data {
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
class  ClipboardHost_ReadAsciiText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadAsciiText_Params_Data));
      new (data()) ClipboardHost_ReadAsciiText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadAsciiText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadAsciiText_Params_Data>(index_);
    }
    ClipboardHost_ReadAsciiText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadAsciiText_Params_Data();
  ~ClipboardHost_ReadAsciiText_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAsciiText_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadAsciiText_Params_Data)");
class  ClipboardHost_ReadAsciiText_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadAsciiText_ResponseParams_Data));
      new (data()) ClipboardHost_ReadAsciiText_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadAsciiText_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadAsciiText_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadAsciiText_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString_Data> result;

 private:
  ClipboardHost_ReadAsciiText_ResponseParams_Data();
  ~ClipboardHost_ReadAsciiText_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadAsciiText_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadAsciiText_ResponseParams_Data)");
class  ClipboardHost_ReadHTML_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadHTML_Params_Data));
      new (data()) ClipboardHost_ReadHTML_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadHTML_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadHTML_Params_Data>(index_);
    }
    ClipboardHost_ReadHTML_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadHTML_Params_Data();
  ~ClipboardHost_ReadHTML_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadHTML_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadHTML_Params_Data)");
class  ClipboardHost_ReadHTML_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadHTML_ResponseParams_Data));
      new (data()) ClipboardHost_ReadHTML_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadHTML_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadHTML_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadHTML_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> markup;
  mojo::internal::Pointer<mojo::internal::String_Data> src_url;
  uint32_t fragment_start;
  uint32_t fragment_end;

 private:
  ClipboardHost_ReadHTML_ResponseParams_Data();
  ~ClipboardHost_ReadHTML_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadHTML_ResponseParams_Data) == 32,
              "Bad sizeof(ClipboardHost_ReadHTML_ResponseParams_Data)");
class  ClipboardHost_ReadRTF_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadRTF_Params_Data));
      new (data()) ClipboardHost_ReadRTF_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadRTF_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadRTF_Params_Data>(index_);
    }
    ClipboardHost_ReadRTF_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadRTF_Params_Data();
  ~ClipboardHost_ReadRTF_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadRTF_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadRTF_Params_Data)");
class  ClipboardHost_ReadRTF_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadRTF_ResponseParams_Data));
      new (data()) ClipboardHost_ReadRTF_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadRTF_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadRTF_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadRTF_ResponseParams_Data* operator->() { return data(); }

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
  ClipboardHost_ReadRTF_ResponseParams_Data();
  ~ClipboardHost_ReadRTF_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadRTF_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadRTF_ResponseParams_Data)");
class  ClipboardHost_ReadImage_Params_Data {
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
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_ReadImage_Params_Data();
  ~ClipboardHost_ReadImage_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadImage_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadImage_Params_Data)");
class  ClipboardHost_ReadImage_ResponseParams_Data {
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
class  ClipboardHost_ReadCustomData_Params_Data {
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
  int32_t clipboard_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> type;

 private:
  ClipboardHost_ReadCustomData_Params_Data();
  ~ClipboardHost_ReadCustomData_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadCustomData_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_ReadCustomData_Params_Data)");
class  ClipboardHost_ReadCustomData_ResponseParams_Data {
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
class  ClipboardHost_ReadBookmark_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadBookmark_Params_Data));
      new (data()) ClipboardHost_ReadBookmark_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadBookmark_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadBookmark_Params_Data>(index_);
    }
    ClipboardHost_ReadBookmark_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ClipboardHost_ReadBookmark_Params_Data();
  ~ClipboardHost_ReadBookmark_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadBookmark_Params_Data) == 8,
              "Bad sizeof(ClipboardHost_ReadBookmark_Params_Data)");
class  ClipboardHost_ReadBookmark_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadBookmark_ResponseParams_Data));
      new (data()) ClipboardHost_ReadBookmark_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadBookmark_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadBookmark_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadBookmark_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  mojo::internal::Pointer<mojo::internal::String_Data> url;

 private:
  ClipboardHost_ReadBookmark_ResponseParams_Data();
  ~ClipboardHost_ReadBookmark_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadBookmark_ResponseParams_Data) == 24,
              "Bad sizeof(ClipboardHost_ReadBookmark_ResponseParams_Data)");
class  ClipboardHost_ReadData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadData_Params_Data));
      new (data()) ClipboardHost_ReadData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadData_Params_Data>(index_);
    }
    ClipboardHost_ReadData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> format;

 private:
  ClipboardHost_ReadData_Params_Data();
  ~ClipboardHost_ReadData_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadData_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadData_Params_Data)");
class  ClipboardHost_ReadData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ReadData_ResponseParams_Data));
      new (data()) ClipboardHost_ReadData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ReadData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ReadData_ResponseParams_Data>(index_);
    }
    ClipboardHost_ReadData_ResponseParams_Data* operator->() { return data(); }

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
  ClipboardHost_ReadData_ResponseParams_Data();
  ~ClipboardHost_ReadData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ReadData_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_ReadData_ResponseParams_Data)");
class  ClipboardHost_GetLastModifiedTime_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_GetLastModifiedTime_Params_Data));
      new (data()) ClipboardHost_GetLastModifiedTime_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_GetLastModifiedTime_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_GetLastModifiedTime_Params_Data>(index_);
    }
    ClipboardHost_GetLastModifiedTime_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ClipboardHost_GetLastModifiedTime_Params_Data();
  ~ClipboardHost_GetLastModifiedTime_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_GetLastModifiedTime_Params_Data) == 8,
              "Bad sizeof(ClipboardHost_GetLastModifiedTime_Params_Data)");
class  ClipboardHost_GetLastModifiedTime_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_GetLastModifiedTime_ResponseParams_Data));
      new (data()) ClipboardHost_GetLastModifiedTime_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_GetLastModifiedTime_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_GetLastModifiedTime_ResponseParams_Data>(index_);
    }
    ClipboardHost_GetLastModifiedTime_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> time;

 private:
  ClipboardHost_GetLastModifiedTime_ResponseParams_Data();
  ~ClipboardHost_GetLastModifiedTime_ResponseParams_Data() = delete;
};
static_assert(sizeof(ClipboardHost_GetLastModifiedTime_ResponseParams_Data) == 16,
              "Bad sizeof(ClipboardHost_GetLastModifiedTime_ResponseParams_Data)");
class  ClipboardHost_ClearLastModifiedTime_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_ClearLastModifiedTime_Params_Data));
      new (data()) ClipboardHost_ClearLastModifiedTime_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_ClearLastModifiedTime_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_ClearLastModifiedTime_Params_Data>(index_);
    }
    ClipboardHost_ClearLastModifiedTime_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ClipboardHost_ClearLastModifiedTime_Params_Data();
  ~ClipboardHost_ClearLastModifiedTime_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_ClearLastModifiedTime_Params_Data) == 8,
              "Bad sizeof(ClipboardHost_ClearLastModifiedTime_Params_Data)");
class  ClipboardHost_WriteText_Params_Data {
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
class  ClipboardHost_WriteHTML_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteHTML_Params_Data));
      new (data()) ClipboardHost_WriteHTML_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteHTML_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteHTML_Params_Data>(index_);
    }
    ClipboardHost_WriteHTML_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> markup;
  mojo::internal::Pointer<mojo::internal::String_Data> url;

 private:
  ClipboardHost_WriteHTML_Params_Data();
  ~ClipboardHost_WriteHTML_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteHTML_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_WriteHTML_Params_Data)");
class  ClipboardHost_WriteRTF_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteRTF_Params_Data));
      new (data()) ClipboardHost_WriteRTF_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteRTF_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteRTF_Params_Data>(index_);
    }
    ClipboardHost_WriteRTF_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> rtf;

 private:
  ClipboardHost_WriteRTF_Params_Data();
  ~ClipboardHost_WriteRTF_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteRTF_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_WriteRTF_Params_Data)");
class  ClipboardHost_WriteBookmark_Params_Data {
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
class  ClipboardHost_WriteWebSmartPaste_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteWebSmartPaste_Params_Data));
      new (data()) ClipboardHost_WriteWebSmartPaste_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteWebSmartPaste_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteWebSmartPaste_Params_Data>(index_);
    }
    ClipboardHost_WriteWebSmartPaste_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ClipboardHost_WriteWebSmartPaste_Params_Data();
  ~ClipboardHost_WriteWebSmartPaste_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteWebSmartPaste_Params_Data) == 8,
              "Bad sizeof(ClipboardHost_WriteWebSmartPaste_Params_Data)");
class  ClipboardHost_WriteBitmap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteBitmap_Params_Data));
      new (data()) ClipboardHost_WriteBitmap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteBitmap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteBitmap_Params_Data>(index_);
    }
    ClipboardHost_WriteBitmap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> bitmap;

 private:
  ClipboardHost_WriteBitmap_Params_Data();
  ~ClipboardHost_WriteBitmap_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteBitmap_Params_Data) == 16,
              "Bad sizeof(ClipboardHost_WriteBitmap_Params_Data)");
class  ClipboardHost_WriteData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardHost_WriteData_Params_Data));
      new (data()) ClipboardHost_WriteData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardHost_WriteData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardHost_WriteData_Params_Data>(index_);
    }
    ClipboardHost_WriteData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString_Data> data;

 private:
  ClipboardHost_WriteData_Params_Data();
  ~ClipboardHost_WriteData_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_WriteData_Params_Data) == 24,
              "Bad sizeof(ClipboardHost_WriteData_Params_Data)");
class  ClipboardHost_CommitWrite_Params_Data {
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
  int32_t type;
  uint8_t padfinal_[4];

 private:
  ClipboardHost_CommitWrite_Params_Data();
  ~ClipboardHost_CommitWrite_Params_Data() = delete;
};
static_assert(sizeof(ClipboardHost_CommitWrite_Params_Data) == 16,
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
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
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
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) {
    auto* pointer = data_->format.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
  }
 private:
  internal::ClipboardHost_IsFormatAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
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

class ClipboardHost_Clear_ParamsDataView {
 public:
  ClipboardHost_Clear_ParamsDataView() {}

  ClipboardHost_Clear_ParamsDataView(
      internal::ClipboardHost_Clear_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
  }
 private:
  internal::ClipboardHost_Clear_Params_Data* data_ = nullptr;
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
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
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
  bool contains_filenames() const {
    return data_->contains_filenames;
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
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
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

class ClipboardHost_ReadAsciiText_ParamsDataView {
 public:
  ClipboardHost_ReadAsciiText_ParamsDataView() {}

  ClipboardHost_ReadAsciiText_ParamsDataView(
      internal::ClipboardHost_ReadAsciiText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
  }
 private:
  internal::ClipboardHost_ReadAsciiText_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadAsciiText_ResponseParamsDataView {
 public:
  ClipboardHost_ReadAsciiText_ResponseParamsDataView() {}

  ClipboardHost_ReadAsciiText_ResponseParamsDataView(
      internal::ClipboardHost_ReadAsciiText_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::BigStringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigStringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadAsciiText_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadHTML_ParamsDataView {
 public:
  ClipboardHost_ReadHTML_ParamsDataView() {}

  ClipboardHost_ReadHTML_ParamsDataView(
      internal::ClipboardHost_ReadHTML_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
  }
 private:
  internal::ClipboardHost_ReadHTML_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadHTML_ResponseParamsDataView {
 public:
  ClipboardHost_ReadHTML_ResponseParamsDataView() {}

  ClipboardHost_ReadHTML_ResponseParamsDataView(
      internal::ClipboardHost_ReadHTML_ResponseParams_Data* data,
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
  inline void GetSrcUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrcUrl(UserType* output) {
    auto* pointer = data_->src_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t fragment_start() const {
    return data_->fragment_start;
  }
  uint32_t fragment_end() const {
    return data_->fragment_end;
  }
 private:
  internal::ClipboardHost_ReadHTML_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadRTF_ParamsDataView {
 public:
  ClipboardHost_ReadRTF_ParamsDataView() {}

  ClipboardHost_ReadRTF_ParamsDataView(
      internal::ClipboardHost_ReadRTF_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
  }
 private:
  internal::ClipboardHost_ReadRTF_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadRTF_ResponseParamsDataView {
 public:
  ClipboardHost_ReadRTF_ResponseParamsDataView() {}

  ClipboardHost_ReadRTF_ResponseParamsDataView(
      internal::ClipboardHost_ReadRTF_ResponseParams_Data* data,
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
  internal::ClipboardHost_ReadRTF_ResponseParams_Data* data_ = nullptr;
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
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
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
  WARN_UNUSED_RESULT bool ReadClipboardType(UserType* output) const {
    auto data_value = data_->clipboard_type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType clipboard_type() const {
    return static_cast<ClipboardType>(data_->clipboard_type);
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

class ClipboardHost_ReadBookmark_ParamsDataView {
 public:
  ClipboardHost_ReadBookmark_ParamsDataView() {}

  ClipboardHost_ReadBookmark_ParamsDataView(
      internal::ClipboardHost_ReadBookmark_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ClipboardHost_ReadBookmark_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadBookmark_ResponseParamsDataView {
 public:
  ClipboardHost_ReadBookmark_ResponseParamsDataView() {}

  ClipboardHost_ReadBookmark_ResponseParamsDataView(
      internal::ClipboardHost_ReadBookmark_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadBookmark_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadData_ParamsDataView {
 public:
  ClipboardHost_ReadData_ParamsDataView() {}

  ClipboardHost_ReadData_ParamsDataView(
      internal::ClipboardHost_ReadData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) {
    auto* pointer = data_->format.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadData_ResponseParamsDataView {
 public:
  ClipboardHost_ReadData_ResponseParamsDataView() {}

  ClipboardHost_ReadData_ResponseParamsDataView(
      internal::ClipboardHost_ReadData_ResponseParams_Data* data,
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
  internal::ClipboardHost_ReadData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_GetLastModifiedTime_ParamsDataView {
 public:
  ClipboardHost_GetLastModifiedTime_ParamsDataView() {}

  ClipboardHost_GetLastModifiedTime_ParamsDataView(
      internal::ClipboardHost_GetLastModifiedTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ClipboardHost_GetLastModifiedTime_Params_Data* data_ = nullptr;
};

class ClipboardHost_GetLastModifiedTime_ResponseParamsDataView {
 public:
  ClipboardHost_GetLastModifiedTime_ResponseParamsDataView() {}

  ClipboardHost_GetLastModifiedTime_ResponseParamsDataView(
      internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ClearLastModifiedTime_ParamsDataView {
 public:
  ClipboardHost_ClearLastModifiedTime_ParamsDataView() {}

  ClipboardHost_ClearLastModifiedTime_ParamsDataView(
      internal::ClipboardHost_ClearLastModifiedTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ClipboardHost_ClearLastModifiedTime_Params_Data* data_ = nullptr;
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

class ClipboardHost_WriteHTML_ParamsDataView {
 public:
  ClipboardHost_WriteHTML_ParamsDataView() {}

  ClipboardHost_WriteHTML_ParamsDataView(
      internal::ClipboardHost_WriteHTML_Params_Data* data,
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
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteHTML_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteRTF_ParamsDataView {
 public:
  ClipboardHost_WriteRTF_ParamsDataView() {}

  ClipboardHost_WriteRTF_ParamsDataView(
      internal::ClipboardHost_WriteRTF_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRtfDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRtf(UserType* output) {
    auto* pointer = data_->rtf.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteRTF_Params_Data* data_ = nullptr;
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

class ClipboardHost_WriteWebSmartPaste_ParamsDataView {
 public:
  ClipboardHost_WriteWebSmartPaste_ParamsDataView() {}

  ClipboardHost_WriteWebSmartPaste_ParamsDataView(
      internal::ClipboardHost_WriteWebSmartPaste_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ClipboardHost_WriteWebSmartPaste_Params_Data* data_ = nullptr;
};

class ClipboardHost_WriteBitmap_ParamsDataView {
 public:
  ClipboardHost_WriteBitmap_ParamsDataView() {}

  ClipboardHost_WriteBitmap_ParamsDataView(
      internal::ClipboardHost_WriteBitmap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitmapDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitmap(UserType* output) {
    auto* pointer = data_->bitmap.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteBitmap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteData_ParamsDataView {
 public:
  ClipboardHost_WriteData_ParamsDataView() {}

  ClipboardHost_WriteData_ParamsDataView(
      internal::ClipboardHost_WriteData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigStringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigStringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteData_Params_Data* data_ = nullptr;
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ClipboardType>(
        data_value, output);
  }

  ClipboardType type() const {
    return static_cast<ClipboardType>(data_->type);
  }
 private:
  internal::ClipboardHost_CommitWrite_Params_Data* data_ = nullptr;
};






inline void ClipboardHost_IsFormatAvailable_ParamsDataView::GetFormatDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->format.Get();
  *output = mojo::StringDataView(pointer, context_);
}








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




inline void ClipboardHost_ReadAsciiText_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::BigStringDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::mojo_base::mojom::BigStringDataView(pointer, context_);
}




inline void ClipboardHost_ReadHTML_ResponseParamsDataView::GetMarkupDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->markup.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}
inline void ClipboardHost_ReadHTML_ResponseParamsDataView::GetSrcUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->src_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ClipboardHost_ReadRTF_ResponseParamsDataView::GetResultDataView(
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




inline void ClipboardHost_ReadBookmark_ResponseParamsDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ClipboardHost_ReadBookmark_ResponseParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ClipboardHost_ReadData_ParamsDataView::GetFormatDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->format.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ClipboardHost_ReadData_ResponseParamsDataView::GetResultDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->result.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ClipboardHost_GetLastModifiedTime_ResponseParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void ClipboardHost_WriteText_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}


inline void ClipboardHost_WriteHTML_ParamsDataView::GetMarkupDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->markup.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}
inline void ClipboardHost_WriteHTML_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ClipboardHost_WriteRTF_ParamsDataView::GetRtfDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->rtf.Get();
  *output = mojo::StringDataView(pointer, context_);
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




inline void ClipboardHost_WriteBitmap_ParamsDataView::GetBitmapDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->bitmap.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}


inline void ClipboardHost_WriteData_ParamsDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ClipboardHost_WriteData_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::BigStringDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::BigStringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // UI_BASE_MOJO_CLIPBOARD_MOJOM_PARAMS_DATA_H_