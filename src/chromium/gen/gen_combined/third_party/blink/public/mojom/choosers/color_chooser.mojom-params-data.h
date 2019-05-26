// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooserFactory_OpenColorChooser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ColorChooserFactory_OpenColorChooser_Params_Data));
      new (data()) ColorChooserFactory_OpenColorChooser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ColorChooserFactory_OpenColorChooser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ColorChooserFactory_OpenColorChooser_Params_Data>(index_);
    }
    ColorChooserFactory_OpenColorChooser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data chooser;
  mojo::internal::Interface_Data client;
  uint32_t color;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ColorSuggestion_Data>>> suggestions;

 private:
  ColorChooserFactory_OpenColorChooser_Params_Data();
  ~ColorChooserFactory_OpenColorChooser_Params_Data() = delete;
};
static_assert(sizeof(ColorChooserFactory_OpenColorChooser_Params_Data) == 32,
              "Bad sizeof(ColorChooserFactory_OpenColorChooser_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooser_SetSelectedColor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ColorChooser_SetSelectedColor_Params_Data));
      new (data()) ColorChooser_SetSelectedColor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ColorChooser_SetSelectedColor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ColorChooser_SetSelectedColor_Params_Data>(index_);
    }
    ColorChooser_SetSelectedColor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t padfinal_[4];

 private:
  ColorChooser_SetSelectedColor_Params_Data();
  ~ColorChooser_SetSelectedColor_Params_Data() = delete;
};
static_assert(sizeof(ColorChooser_SetSelectedColor_Params_Data) == 16,
              "Bad sizeof(ColorChooser_SetSelectedColor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooserClient_DidChooseColor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ColorChooserClient_DidChooseColor_Params_Data));
      new (data()) ColorChooserClient_DidChooseColor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ColorChooserClient_DidChooseColor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ColorChooserClient_DidChooseColor_Params_Data>(index_);
    }
    ColorChooserClient_DidChooseColor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t padfinal_[4];

 private:
  ColorChooserClient_DidChooseColor_Params_Data();
  ~ColorChooserClient_DidChooseColor_Params_Data() = delete;
};
static_assert(sizeof(ColorChooserClient_DidChooseColor_Params_Data) == 16,
              "Bad sizeof(ColorChooserClient_DidChooseColor_Params_Data)");

}  // namespace internal
class ColorChooserFactory_OpenColorChooser_ParamsDataView {
 public:
  ColorChooserFactory_OpenColorChooser_ParamsDataView() {}

  ColorChooserFactory_OpenColorChooser_ParamsDataView(
      internal::ColorChooserFactory_OpenColorChooser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeChooser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ColorChooserRequestDataView>(
            &data_->chooser, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ColorChooserClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t color() const {
    return data_->color;
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<ColorSuggestionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ColorSuggestionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ColorChooserFactory_OpenColorChooser_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ColorChooser_SetSelectedColor_ParamsDataView {
 public:
  ColorChooser_SetSelectedColor_ParamsDataView() {}

  ColorChooser_SetSelectedColor_ParamsDataView(
      internal::ColorChooser_SetSelectedColor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
 private:
  internal::ColorChooser_SetSelectedColor_Params_Data* data_ = nullptr;
};

class ColorChooserClient_DidChooseColor_ParamsDataView {
 public:
  ColorChooserClient_DidChooseColor_ParamsDataView() {}

  ColorChooserClient_DidChooseColor_ParamsDataView(
      internal::ColorChooserClient_DidChooseColor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
 private:
  internal::ColorChooserClient_DidChooseColor_Params_Data* data_ = nullptr;
};


inline void ColorChooserFactory_OpenColorChooser_ParamsDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<ColorSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<ColorSuggestionDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_PARAMS_DATA_H_