// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data));
      new (data()) TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data>(index_);
    }
    TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> suggestion;

 private:
  TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data();
  ~TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionBackend_ApplyTextSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_ApplyTextSuggestion_Params_Data));
      new (data()) TextSuggestionBackend_ApplyTextSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_ApplyTextSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_ApplyTextSuggestion_Params_Data>(index_);
    }
    TextSuggestionBackend_ApplyTextSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t marker_tag;
  int32_t suggestion_index;

 private:
  TextSuggestionBackend_ApplyTextSuggestion_Params_Data();
  ~TextSuggestionBackend_ApplyTextSuggestion_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_ApplyTextSuggestion_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_ApplyTextSuggestion_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data));
      new (data()) TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data>(index_);
    }
    TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data();
  ~TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data) == 8,
              "Bad sizeof(TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data));
      new (data()) TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data>(index_);
    }
    TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> suggestion;

 private:
  TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data();
  ~TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data));
      new (data()) TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data>(index_);
    }
    TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data();
  ~TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data) == 8,
              "Bad sizeof(TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data));
      new (data()) TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data>(index_);
    }
    TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t max_number_of_suggestions;
  uint8_t padfinal_[4];

 private:
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data();
  ~TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data)");

}  // namespace internal
class TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView {
 public:
  TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView() {}

  TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView(
      internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSuggestionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestion(UserType* output) {
    auto* pointer = data_->suggestion.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionBackend_ApplyTextSuggestion_ParamsDataView {
 public:
  TextSuggestionBackend_ApplyTextSuggestion_ParamsDataView() {}

  TextSuggestionBackend_ApplyTextSuggestion_ParamsDataView(
      internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t marker_tag() const {
    return data_->marker_tag;
  }
  int32_t suggestion_index() const {
    return data_->suggestion_index;
  }
 private:
  internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data* data_ = nullptr;
};

class TextSuggestionBackend_DeleteActiveSuggestionRange_ParamsDataView {
 public:
  TextSuggestionBackend_DeleteActiveSuggestionRange_ParamsDataView() {}

  TextSuggestionBackend_DeleteActiveSuggestionRange_ParamsDataView(
      internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* data_ = nullptr;
};

class TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView {
 public:
  TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView() {}

  TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView(
      internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSuggestionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestion(UserType* output) {
    auto* pointer = data_->suggestion.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionBackend_OnSuggestionMenuClosed_ParamsDataView {
 public:
  TextSuggestionBackend_OnSuggestionMenuClosed_ParamsDataView() {}

  TextSuggestionBackend_OnSuggestionMenuClosed_ParamsDataView(
      internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* data_ = nullptr;
};

class TextSuggestionBackend_SuggestionMenuTimeoutCallback_ParamsDataView {
 public:
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_ParamsDataView() {}

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_ParamsDataView(
      internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t max_number_of_suggestions() const {
    return data_->max_number_of_suggestions;
  }
 private:
  internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* data_ = nullptr;
};


inline void TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView::GetSuggestionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->suggestion.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView::GetSuggestionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->suggestion.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_PARAMS_DATA_H_