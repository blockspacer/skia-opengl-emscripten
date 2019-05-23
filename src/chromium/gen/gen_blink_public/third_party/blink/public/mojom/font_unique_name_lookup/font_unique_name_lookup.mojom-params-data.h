// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data));
      new (data()) FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data>(index_);
    }
    FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data();
  ~FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data() = delete;
};
static_assert(sizeof(FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data) == 8,
              "Bad sizeof(FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data));
      new (data()) FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data>(index_);
    }
    FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> font_lookup_table;

 private:
  FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data();
  ~FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data() = delete;
};
static_assert(sizeof(FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data) == 16,
              "Bad sizeof(FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data)");

}  // namespace internal
class FontUniqueNameLookup_GetUniqueNameLookupTable_ParamsDataView {
 public:
  FontUniqueNameLookup_GetUniqueNameLookupTable_ParamsDataView() {}

  FontUniqueNameLookup_GetUniqueNameLookupTable_ParamsDataView(
      internal::FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data* data_ = nullptr;
};

class FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParamsDataView {
 public:
  FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParamsDataView() {}

  FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParamsDataView(
      internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFontLookupTableDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFontLookupTable(UserType* output) {
    auto* pointer = data_->font_lookup_table.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParamsDataView::GetFontLookupTableDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  auto pointer = data_->font_lookup_table.Get();
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_PARAMS_DATA_H_