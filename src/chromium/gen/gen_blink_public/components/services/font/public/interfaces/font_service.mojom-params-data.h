// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_PARAMS_DATA_H_

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
namespace font_service {
namespace mojom {
namespace internal {
class  FontService_MatchFamilyName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_MatchFamilyName_Params_Data));
      new (data()) FontService_MatchFamilyName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_MatchFamilyName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_MatchFamilyName_Params_Data>(index_);
    }
    FontService_MatchFamilyName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> family_name;
  mojo::internal::Pointer<internal::TypefaceStyle_Data> style;

 private:
  FontService_MatchFamilyName_Params_Data();
  ~FontService_MatchFamilyName_Params_Data() = delete;
};
static_assert(sizeof(FontService_MatchFamilyName_Params_Data) == 24,
              "Bad sizeof(FontService_MatchFamilyName_Params_Data)");
class  FontService_MatchFamilyName_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_MatchFamilyName_ResponseParams_Data));
      new (data()) FontService_MatchFamilyName_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_MatchFamilyName_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_MatchFamilyName_ResponseParams_Data>(index_);
    }
    FontService_MatchFamilyName_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FontIdentity_Data> identity;
  mojo::internal::Pointer<mojo::internal::String_Data> family_name;
  mojo::internal::Pointer<internal::TypefaceStyle_Data> style;

 private:
  FontService_MatchFamilyName_ResponseParams_Data();
  ~FontService_MatchFamilyName_ResponseParams_Data() = delete;
};
static_assert(sizeof(FontService_MatchFamilyName_ResponseParams_Data) == 32,
              "Bad sizeof(FontService_MatchFamilyName_ResponseParams_Data)");
class  FontService_OpenStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_OpenStream_Params_Data));
      new (data()) FontService_OpenStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_OpenStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_OpenStream_Params_Data>(index_);
    }
    FontService_OpenStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id_number;
  uint8_t padfinal_[4];

 private:
  FontService_OpenStream_Params_Data();
  ~FontService_OpenStream_Params_Data() = delete;
};
static_assert(sizeof(FontService_OpenStream_Params_Data) == 16,
              "Bad sizeof(FontService_OpenStream_Params_Data)");
class  FontService_OpenStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_OpenStream_ResponseParams_Data));
      new (data()) FontService_OpenStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_OpenStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_OpenStream_ResponseParams_Data>(index_);
    }
    FontService_OpenStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> font_handle;

 private:
  FontService_OpenStream_ResponseParams_Data();
  ~FontService_OpenStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(FontService_OpenStream_ResponseParams_Data) == 16,
              "Bad sizeof(FontService_OpenStream_ResponseParams_Data)");
class  FontService_FallbackFontForCharacter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_FallbackFontForCharacter_Params_Data));
      new (data()) FontService_FallbackFontForCharacter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_FallbackFontForCharacter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_FallbackFontForCharacter_Params_Data>(index_);
    }
    FontService_FallbackFontForCharacter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t character;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> locale;

 private:
  FontService_FallbackFontForCharacter_Params_Data();
  ~FontService_FallbackFontForCharacter_Params_Data() = delete;
};
static_assert(sizeof(FontService_FallbackFontForCharacter_Params_Data) == 24,
              "Bad sizeof(FontService_FallbackFontForCharacter_Params_Data)");
class  FontService_FallbackFontForCharacter_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_FallbackFontForCharacter_ResponseParams_Data));
      new (data()) FontService_FallbackFontForCharacter_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_FallbackFontForCharacter_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_FallbackFontForCharacter_ResponseParams_Data>(index_);
    }
    FontService_FallbackFontForCharacter_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FontIdentity_Data> identity;
  mojo::internal::Pointer<mojo::internal::String_Data> family_name;
  uint8_t is_bold : 1;
  uint8_t is_italic : 1;
  uint8_t padfinal_[7];

 private:
  FontService_FallbackFontForCharacter_ResponseParams_Data();
  ~FontService_FallbackFontForCharacter_ResponseParams_Data() = delete;
};
static_assert(sizeof(FontService_FallbackFontForCharacter_ResponseParams_Data) == 32,
              "Bad sizeof(FontService_FallbackFontForCharacter_ResponseParams_Data)");
class  FontService_FontRenderStyleForStrike_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_FontRenderStyleForStrike_Params_Data));
      new (data()) FontService_FontRenderStyleForStrike_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_FontRenderStyleForStrike_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_FontRenderStyleForStrike_Params_Data>(index_);
    }
    FontService_FontRenderStyleForStrike_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> family;
  uint32_t size;
  uint8_t is_italic : 1;
  uint8_t is_bold : 1;
  uint8_t pad3_[3];
  float device_scale_factor;
  uint8_t padfinal_[4];

 private:
  FontService_FontRenderStyleForStrike_Params_Data();
  ~FontService_FontRenderStyleForStrike_Params_Data() = delete;
};
static_assert(sizeof(FontService_FontRenderStyleForStrike_Params_Data) == 32,
              "Bad sizeof(FontService_FontRenderStyleForStrike_Params_Data)");
class  FontService_FontRenderStyleForStrike_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_FontRenderStyleForStrike_ResponseParams_Data));
      new (data()) FontService_FontRenderStyleForStrike_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_FontRenderStyleForStrike_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_FontRenderStyleForStrike_ResponseParams_Data>(index_);
    }
    FontService_FontRenderStyleForStrike_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FontRenderStyle_Data> font_render_style;

 private:
  FontService_FontRenderStyleForStrike_ResponseParams_Data();
  ~FontService_FontRenderStyleForStrike_ResponseParams_Data() = delete;
};
static_assert(sizeof(FontService_FontRenderStyleForStrike_ResponseParams_Data) == 16,
              "Bad sizeof(FontService_FontRenderStyleForStrike_ResponseParams_Data)");
class  FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data));
      new (data()) FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data>(index_);
    }
    FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> postscript_name_or_full_font_name;

 private:
  FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data();
  ~FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data() = delete;
};
static_assert(sizeof(FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data) == 16,
              "Bad sizeof(FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data)");
class  FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data));
      new (data()) FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data>(index_);
    }
    FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FontIdentity_Data> identity;

 private:
  FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data();
  ~FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data() = delete;
};
static_assert(sizeof(FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data) == 16,
              "Bad sizeof(FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data)");
class  FontService_MatchFontWithFallback_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_MatchFontWithFallback_Params_Data));
      new (data()) FontService_MatchFontWithFallback_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_MatchFontWithFallback_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_MatchFontWithFallback_Params_Data>(index_);
    }
    FontService_MatchFontWithFallback_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> family;
  uint8_t is_bold : 1;
  uint8_t is_italic : 1;
  uint8_t pad2_[3];
  uint32_t charset;
  uint32_t fallback_family_type;
  uint8_t padfinal_[4];

 private:
  FontService_MatchFontWithFallback_Params_Data();
  ~FontService_MatchFontWithFallback_Params_Data() = delete;
};
static_assert(sizeof(FontService_MatchFontWithFallback_Params_Data) == 32,
              "Bad sizeof(FontService_MatchFontWithFallback_Params_Data)");
class  FontService_MatchFontWithFallback_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontService_MatchFontWithFallback_ResponseParams_Data));
      new (data()) FontService_MatchFontWithFallback_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontService_MatchFontWithFallback_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontService_MatchFontWithFallback_ResponseParams_Data>(index_);
    }
    FontService_MatchFontWithFallback_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> font_file_handle;

 private:
  FontService_MatchFontWithFallback_ResponseParams_Data();
  ~FontService_MatchFontWithFallback_ResponseParams_Data() = delete;
};
static_assert(sizeof(FontService_MatchFontWithFallback_ResponseParams_Data) == 16,
              "Bad sizeof(FontService_MatchFontWithFallback_ResponseParams_Data)");

}  // namespace internal
class FontService_MatchFamilyName_ParamsDataView {
 public:
  FontService_MatchFamilyName_ParamsDataView() {}

  FontService_MatchFamilyName_ParamsDataView(
      internal::FontService_MatchFamilyName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFamilyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFamilyName(UserType* output) {
    auto* pointer = data_->family_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStyleDataView(
      TypefaceStyleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStyle(UserType* output) {
    auto* pointer = data_->style.Get();
    return mojo::internal::Deserialize<::font_service::mojom::TypefaceStyleDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_MatchFamilyName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_MatchFamilyName_ResponseParamsDataView {
 public:
  FontService_MatchFamilyName_ResponseParamsDataView() {}

  FontService_MatchFamilyName_ResponseParamsDataView(
      internal::FontService_MatchFamilyName_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      FontIdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::font_service::mojom::FontIdentityDataView>(
        pointer, output, context_);
  }
  inline void GetFamilyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFamilyName(UserType* output) {
    auto* pointer = data_->family_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStyleDataView(
      TypefaceStyleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStyle(UserType* output) {
    auto* pointer = data_->style.Get();
    return mojo::internal::Deserialize<::font_service::mojom::TypefaceStyleDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_MatchFamilyName_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_OpenStream_ParamsDataView {
 public:
  FontService_OpenStream_ParamsDataView() {}

  FontService_OpenStream_ParamsDataView(
      internal::FontService_OpenStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id_number() const {
    return data_->id_number;
  }
 private:
  internal::FontService_OpenStream_Params_Data* data_ = nullptr;
};

class FontService_OpenStream_ResponseParamsDataView {
 public:
  FontService_OpenStream_ResponseParamsDataView() {}

  FontService_OpenStream_ResponseParamsDataView(
      internal::FontService_OpenStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFontHandleDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFontHandle(UserType* output) {
    auto* pointer = data_->font_handle.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_OpenStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_FallbackFontForCharacter_ParamsDataView {
 public:
  FontService_FallbackFontForCharacter_ParamsDataView() {}

  FontService_FallbackFontForCharacter_ParamsDataView(
      internal::FontService_FallbackFontForCharacter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t character() const {
    return data_->character;
  }
  inline void GetLocaleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocale(UserType* output) {
    auto* pointer = data_->locale.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_FallbackFontForCharacter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_FallbackFontForCharacter_ResponseParamsDataView {
 public:
  FontService_FallbackFontForCharacter_ResponseParamsDataView() {}

  FontService_FallbackFontForCharacter_ResponseParamsDataView(
      internal::FontService_FallbackFontForCharacter_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      FontIdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::font_service::mojom::FontIdentityDataView>(
        pointer, output, context_);
  }
  inline void GetFamilyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFamilyName(UserType* output) {
    auto* pointer = data_->family_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_bold() const {
    return data_->is_bold;
  }
  bool is_italic() const {
    return data_->is_italic;
  }
 private:
  internal::FontService_FallbackFontForCharacter_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_FontRenderStyleForStrike_ParamsDataView {
 public:
  FontService_FontRenderStyleForStrike_ParamsDataView() {}

  FontService_FontRenderStyleForStrike_ParamsDataView(
      internal::FontService_FontRenderStyleForStrike_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFamilyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFamily(UserType* output) {
    auto* pointer = data_->family.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t size() const {
    return data_->size;
  }
  bool is_italic() const {
    return data_->is_italic;
  }
  bool is_bold() const {
    return data_->is_bold;
  }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
 private:
  internal::FontService_FontRenderStyleForStrike_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_FontRenderStyleForStrike_ResponseParamsDataView {
 public:
  FontService_FontRenderStyleForStrike_ResponseParamsDataView() {}

  FontService_FontRenderStyleForStrike_ResponseParamsDataView(
      internal::FontService_FontRenderStyleForStrike_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFontRenderStyleDataView(
      FontRenderStyleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFontRenderStyle(UserType* output) {
    auto* pointer = data_->font_render_style.Get();
    return mojo::internal::Deserialize<::font_service::mojom::FontRenderStyleDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_FontRenderStyleForStrike_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_MatchFontByPostscriptNameOrFullFontName_ParamsDataView {
 public:
  FontService_MatchFontByPostscriptNameOrFullFontName_ParamsDataView() {}

  FontService_MatchFontByPostscriptNameOrFullFontName_ParamsDataView(
      internal::FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPostscriptNameOrFullFontNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPostscriptNameOrFullFontName(UserType* output) {
    auto* pointer = data_->postscript_name_or_full_font_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParamsDataView {
 public:
  FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParamsDataView() {}

  FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParamsDataView(
      internal::FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      FontIdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::font_service::mojom::FontIdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_MatchFontWithFallback_ParamsDataView {
 public:
  FontService_MatchFontWithFallback_ParamsDataView() {}

  FontService_MatchFontWithFallback_ParamsDataView(
      internal::FontService_MatchFontWithFallback_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFamilyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFamily(UserType* output) {
    auto* pointer = data_->family.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_bold() const {
    return data_->is_bold;
  }
  bool is_italic() const {
    return data_->is_italic;
  }
  uint32_t charset() const {
    return data_->charset;
  }
  uint32_t fallback_family_type() const {
    return data_->fallback_family_type;
  }
 private:
  internal::FontService_MatchFontWithFallback_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_MatchFontWithFallback_ResponseParamsDataView {
 public:
  FontService_MatchFontWithFallback_ResponseParamsDataView() {}

  FontService_MatchFontWithFallback_ResponseParamsDataView(
      internal::FontService_MatchFontWithFallback_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFontFileHandleDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFontFileHandle(UserType* output) {
    auto* pointer = data_->font_file_handle.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_MatchFontWithFallback_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FontService_MatchFamilyName_ParamsDataView::GetFamilyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->family_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FontService_MatchFamilyName_ParamsDataView::GetStyleDataView(
    TypefaceStyleDataView* output) {
  auto pointer = data_->style.Get();
  *output = TypefaceStyleDataView(pointer, context_);
}


inline void FontService_MatchFamilyName_ResponseParamsDataView::GetIdentityDataView(
    FontIdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = FontIdentityDataView(pointer, context_);
}
inline void FontService_MatchFamilyName_ResponseParamsDataView::GetFamilyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->family_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FontService_MatchFamilyName_ResponseParamsDataView::GetStyleDataView(
    TypefaceStyleDataView* output) {
  auto pointer = data_->style.Get();
  *output = TypefaceStyleDataView(pointer, context_);
}




inline void FontService_OpenStream_ResponseParamsDataView::GetFontHandleDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->font_handle.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}


inline void FontService_FallbackFontForCharacter_ParamsDataView::GetLocaleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->locale.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FontService_FallbackFontForCharacter_ResponseParamsDataView::GetIdentityDataView(
    FontIdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = FontIdentityDataView(pointer, context_);
}
inline void FontService_FallbackFontForCharacter_ResponseParamsDataView::GetFamilyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->family_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FontService_FontRenderStyleForStrike_ParamsDataView::GetFamilyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->family.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FontService_FontRenderStyleForStrike_ResponseParamsDataView::GetFontRenderStyleDataView(
    FontRenderStyleDataView* output) {
  auto pointer = data_->font_render_style.Get();
  *output = FontRenderStyleDataView(pointer, context_);
}


inline void FontService_MatchFontByPostscriptNameOrFullFontName_ParamsDataView::GetPostscriptNameOrFullFontNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->postscript_name_or_full_font_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParamsDataView::GetIdentityDataView(
    FontIdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = FontIdentityDataView(pointer, context_);
}


inline void FontService_MatchFontWithFallback_ParamsDataView::GetFamilyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->family.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FontService_MatchFontWithFallback_ResponseParamsDataView::GetFontFileHandleDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->font_file_handle.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace font_service

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_PARAMS_DATA_H_