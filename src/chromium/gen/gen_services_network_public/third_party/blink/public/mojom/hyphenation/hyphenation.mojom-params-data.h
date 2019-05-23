// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Hyphenation_OpenDictionary_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Hyphenation_OpenDictionary_Params_Data));
      new (data()) Hyphenation_OpenDictionary_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Hyphenation_OpenDictionary_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Hyphenation_OpenDictionary_Params_Data>(index_);
    }
    Hyphenation_OpenDictionary_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> locale;

 private:
  Hyphenation_OpenDictionary_Params_Data();
  ~Hyphenation_OpenDictionary_Params_Data() = delete;
};
static_assert(sizeof(Hyphenation_OpenDictionary_Params_Data) == 16,
              "Bad sizeof(Hyphenation_OpenDictionary_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Hyphenation_OpenDictionary_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Hyphenation_OpenDictionary_ResponseParams_Data));
      new (data()) Hyphenation_OpenDictionary_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Hyphenation_OpenDictionary_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Hyphenation_OpenDictionary_ResponseParams_Data>(index_);
    }
    Hyphenation_OpenDictionary_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> hyphenation_dictionary_handle;

 private:
  Hyphenation_OpenDictionary_ResponseParams_Data();
  ~Hyphenation_OpenDictionary_ResponseParams_Data() = delete;
};
static_assert(sizeof(Hyphenation_OpenDictionary_ResponseParams_Data) == 16,
              "Bad sizeof(Hyphenation_OpenDictionary_ResponseParams_Data)");

}  // namespace internal
class Hyphenation_OpenDictionary_ParamsDataView {
 public:
  Hyphenation_OpenDictionary_ParamsDataView() {}

  Hyphenation_OpenDictionary_ParamsDataView(
      internal::Hyphenation_OpenDictionary_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocaleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocale(UserType* output) {
    auto* pointer = data_->locale.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Hyphenation_OpenDictionary_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Hyphenation_OpenDictionary_ResponseParamsDataView {
 public:
  Hyphenation_OpenDictionary_ResponseParamsDataView() {}

  Hyphenation_OpenDictionary_ResponseParamsDataView(
      internal::Hyphenation_OpenDictionary_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHyphenationDictionaryHandleDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHyphenationDictionaryHandle(UserType* output) {
    auto* pointer = data_->hyphenation_dictionary_handle.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::Hyphenation_OpenDictionary_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Hyphenation_OpenDictionary_ParamsDataView::GetLocaleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->locale.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Hyphenation_OpenDictionary_ResponseParamsDataView::GetHyphenationDictionaryHandleDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->hyphenation_dictionary_handle.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_PARAMS_DATA_H_