// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionHost_StartSuggestionMenuTimer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionHost_StartSuggestionMenuTimer_Params_Data));
      new (data()) TextSuggestionHost_StartSuggestionMenuTimer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionHost_StartSuggestionMenuTimer_Params_Data>(index_);
    }
    TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextSuggestionHost_StartSuggestionMenuTimer_Params_Data();
  ~TextSuggestionHost_StartSuggestionMenuTimer_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionHost_StartSuggestionMenuTimer_Params_Data) == 8,
              "Bad sizeof(TextSuggestionHost_StartSuggestionMenuTimer_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data));
      new (data()) TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data>(index_);
    }
    TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double caret_x;
  double caret_y;
  mojo::internal::Pointer<mojo::internal::String_Data> marked_text;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SpellCheckSuggestion_Data>>> suggestions;

 private:
  TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data();
  ~TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data) == 40,
              "Bad sizeof(TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionHost_ShowTextSuggestionMenu_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionHost_ShowTextSuggestionMenu_Params_Data));
      new (data()) TextSuggestionHost_ShowTextSuggestionMenu_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionHost_ShowTextSuggestionMenu_Params_Data>(index_);
    }
    TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double caret_x;
  double caret_y;
  mojo::internal::Pointer<mojo::internal::String_Data> marked_text;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TextSuggestion_Data>>> suggestions;

 private:
  TextSuggestionHost_ShowTextSuggestionMenu_Params_Data();
  ~TextSuggestionHost_ShowTextSuggestionMenu_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionHost_ShowTextSuggestionMenu_Params_Data) == 40,
              "Bad sizeof(TextSuggestionHost_ShowTextSuggestionMenu_Params_Data)");

}  // namespace internal
class TextSuggestionHost_StartSuggestionMenuTimer_ParamsDataView {
 public:
  TextSuggestionHost_StartSuggestionMenuTimer_ParamsDataView() {}

  TextSuggestionHost_StartSuggestionMenuTimer_ParamsDataView(
      internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* data_ = nullptr;
};

class TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView {
 public:
  TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView() {}

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView(
      internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  double caret_x() const {
    return data_->caret_x;
  }
  double caret_y() const {
    return data_->caret_y;
  }
  inline void GetMarkedTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkedText(UserType* output) {
    auto* pointer = data_->marked_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<SpellCheckSuggestionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SpellCheckSuggestionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView {
 public:
  TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView() {}

  TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView(
      internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  double caret_x() const {
    return data_->caret_x;
  }
  double caret_y() const {
    return data_->caret_y;
  }
  inline void GetMarkedTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkedText(UserType* output) {
    auto* pointer = data_->marked_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<TextSuggestionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::TextSuggestionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView::GetMarkedTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->marked_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<SpellCheckSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<SpellCheckSuggestionDataView>(pointer, context_);
}


inline void TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView::GetMarkedTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->marked_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<TextSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<TextSuggestionDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_PARAMS_DATA_H_