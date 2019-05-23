// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_Find_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_Find_Params_Data));
      new (data()) FindInPage_Find_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_Find_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_Find_Params_Data>(index_);
    }
    FindInPage_Find_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> search_text;
  mojo::internal::Pointer<internal::FindOptions_Data> options;

 private:
  FindInPage_Find_Params_Data();
  ~FindInPage_Find_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_Find_Params_Data) == 32,
              "Bad sizeof(FindInPage_Find_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_StopFinding_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_StopFinding_Params_Data));
      new (data()) FindInPage_StopFinding_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_StopFinding_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_StopFinding_Params_Data>(index_);
    }
    FindInPage_StopFinding_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  FindInPage_StopFinding_Params_Data();
  ~FindInPage_StopFinding_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_StopFinding_Params_Data) == 16,
              "Bad sizeof(FindInPage_StopFinding_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_ClearActiveFindMatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_ClearActiveFindMatch_Params_Data));
      new (data()) FindInPage_ClearActiveFindMatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_ClearActiveFindMatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_ClearActiveFindMatch_Params_Data>(index_);
    }
    FindInPage_ClearActiveFindMatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FindInPage_ClearActiveFindMatch_Params_Data();
  ~FindInPage_ClearActiveFindMatch_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_ClearActiveFindMatch_Params_Data) == 8,
              "Bad sizeof(FindInPage_ClearActiveFindMatch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_GetNearestFindResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_GetNearestFindResult_Params_Data));
      new (data()) FindInPage_GetNearestFindResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_GetNearestFindResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_GetNearestFindResult_Params_Data>(index_);
    }
    FindInPage_GetNearestFindResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> point;

 private:
  FindInPage_GetNearestFindResult_Params_Data();
  ~FindInPage_GetNearestFindResult_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_GetNearestFindResult_Params_Data) == 16,
              "Bad sizeof(FindInPage_GetNearestFindResult_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_GetNearestFindResult_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_GetNearestFindResult_ResponseParams_Data));
      new (data()) FindInPage_GetNearestFindResult_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_GetNearestFindResult_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_GetNearestFindResult_ResponseParams_Data>(index_);
    }
    FindInPage_GetNearestFindResult_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float distance;
  uint8_t padfinal_[4];

 private:
  FindInPage_GetNearestFindResult_ResponseParams_Data();
  ~FindInPage_GetNearestFindResult_ResponseParams_Data() = delete;
};
static_assert(sizeof(FindInPage_GetNearestFindResult_ResponseParams_Data) == 16,
              "Bad sizeof(FindInPage_GetNearestFindResult_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_ActivateNearestFindResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_ActivateNearestFindResult_Params_Data));
      new (data()) FindInPage_ActivateNearestFindResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_ActivateNearestFindResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_ActivateNearestFindResult_Params_Data>(index_);
    }
    FindInPage_ActivateNearestFindResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> point;

 private:
  FindInPage_ActivateNearestFindResult_Params_Data();
  ~FindInPage_ActivateNearestFindResult_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_ActivateNearestFindResult_Params_Data) == 24,
              "Bad sizeof(FindInPage_ActivateNearestFindResult_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_SetClient_Params_Data));
      new (data()) FindInPage_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_SetClient_Params_Data>(index_);
    }
    FindInPage_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  FindInPage_SetClient_Params_Data();
  ~FindInPage_SetClient_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_SetClient_Params_Data) == 16,
              "Bad sizeof(FindInPage_SetClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_FindMatchRects_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_FindMatchRects_Params_Data));
      new (data()) FindInPage_FindMatchRects_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_FindMatchRects_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_FindMatchRects_Params_Data>(index_);
    }
    FindInPage_FindMatchRects_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t current_version;
  uint8_t padfinal_[4];

 private:
  FindInPage_FindMatchRects_Params_Data();
  ~FindInPage_FindMatchRects_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_FindMatchRects_Params_Data) == 16,
              "Bad sizeof(FindInPage_FindMatchRects_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_FindMatchRects_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_FindMatchRects_ResponseParams_Data));
      new (data()) FindInPage_FindMatchRects_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_FindMatchRects_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_FindMatchRects_ResponseParams_Data>(index_);
    }
    FindInPage_FindMatchRects_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t version;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data>>> rects;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> active_match_rect;

 private:
  FindInPage_FindMatchRects_ResponseParams_Data();
  ~FindInPage_FindMatchRects_ResponseParams_Data() = delete;
};
static_assert(sizeof(FindInPage_FindMatchRects_ResponseParams_Data) == 32,
              "Bad sizeof(FindInPage_FindMatchRects_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPageClient_SetNumberOfMatches_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPageClient_SetNumberOfMatches_Params_Data));
      new (data()) FindInPageClient_SetNumberOfMatches_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPageClient_SetNumberOfMatches_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPageClient_SetNumberOfMatches_Params_Data>(index_);
    }
    FindInPageClient_SetNumberOfMatches_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  uint32_t number_of_matches;
  int32_t update_type;
  uint8_t padfinal_[4];

 private:
  FindInPageClient_SetNumberOfMatches_Params_Data();
  ~FindInPageClient_SetNumberOfMatches_Params_Data() = delete;
};
static_assert(sizeof(FindInPageClient_SetNumberOfMatches_Params_Data) == 24,
              "Bad sizeof(FindInPageClient_SetNumberOfMatches_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPageClient_SetActiveMatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPageClient_SetActiveMatch_Params_Data));
      new (data()) FindInPageClient_SetActiveMatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPageClient_SetActiveMatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPageClient_SetActiveMatch_Params_Data>(index_);
    }
    FindInPageClient_SetActiveMatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  int32_t active_match_ordinal;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> active_match_rect;
  int32_t update_type;
  uint8_t padfinal_[4];

 private:
  FindInPageClient_SetActiveMatch_Params_Data();
  ~FindInPageClient_SetActiveMatch_Params_Data() = delete;
};
static_assert(sizeof(FindInPageClient_SetActiveMatch_Params_Data) == 32,
              "Bad sizeof(FindInPageClient_SetActiveMatch_Params_Data)");

}  // namespace internal
class FindInPage_Find_ParamsDataView {
 public:
  FindInPage_Find_ParamsDataView() {}

  FindInPage_Find_ParamsDataView(
      internal::FindInPage_Find_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetSearchTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearchText(UserType* output) {
    auto* pointer = data_->search_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      FindOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::FindOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::FindInPage_Find_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPage_StopFinding_ParamsDataView {
 public:
  FindInPage_StopFinding_ParamsDataView() {}

  FindInPage_StopFinding_ParamsDataView(
      internal::FindInPage_StopFinding_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::blink::mojom::StopFindAction>(
        data_value, output);
  }

  StopFindAction action() const {
    return static_cast<StopFindAction>(data_->action);
  }
 private:
  internal::FindInPage_StopFinding_Params_Data* data_ = nullptr;
};

class FindInPage_ClearActiveFindMatch_ParamsDataView {
 public:
  FindInPage_ClearActiveFindMatch_ParamsDataView() {}

  FindInPage_ClearActiveFindMatch_ParamsDataView(
      internal::FindInPage_ClearActiveFindMatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FindInPage_ClearActiveFindMatch_Params_Data* data_ = nullptr;
};

class FindInPage_GetNearestFindResult_ParamsDataView {
 public:
  FindInPage_GetNearestFindResult_ParamsDataView() {}

  FindInPage_GetNearestFindResult_ParamsDataView(
      internal::FindInPage_GetNearestFindResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::FindInPage_GetNearestFindResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPage_GetNearestFindResult_ResponseParamsDataView {
 public:
  FindInPage_GetNearestFindResult_ResponseParamsDataView() {}

  FindInPage_GetNearestFindResult_ResponseParamsDataView(
      internal::FindInPage_GetNearestFindResult_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float distance() const {
    return data_->distance;
  }
 private:
  internal::FindInPage_GetNearestFindResult_ResponseParams_Data* data_ = nullptr;
};

class FindInPage_ActivateNearestFindResult_ParamsDataView {
 public:
  FindInPage_ActivateNearestFindResult_ParamsDataView() {}

  FindInPage_ActivateNearestFindResult_ParamsDataView(
      internal::FindInPage_ActivateNearestFindResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetPointDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::FindInPage_ActivateNearestFindResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPage_SetClient_ParamsDataView {
 public:
  FindInPage_SetClient_ParamsDataView() {}

  FindInPage_SetClient_ParamsDataView(
      internal::FindInPage_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::FindInPageClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FindInPage_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPage_FindMatchRects_ParamsDataView {
 public:
  FindInPage_FindMatchRects_ParamsDataView() {}

  FindInPage_FindMatchRects_ParamsDataView(
      internal::FindInPage_FindMatchRects_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t current_version() const {
    return data_->current_version;
  }
 private:
  internal::FindInPage_FindMatchRects_Params_Data* data_ = nullptr;
};

class FindInPage_FindMatchRects_ResponseParamsDataView {
 public:
  FindInPage_FindMatchRects_ResponseParamsDataView() {}

  FindInPage_FindMatchRects_ResponseParamsDataView(
      internal::FindInPage_FindMatchRects_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t version() const {
    return data_->version;
  }
  inline void GetRectsDataView(
      mojo::ArrayDataView<::gfx::mojom::RectFDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRects(UserType* output) {
    auto* pointer = data_->rects.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::RectFDataView>>(
        pointer, output, context_);
  }
  inline void GetActiveMatchRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActiveMatchRect(UserType* output) {
    auto* pointer = data_->active_match_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
 private:
  internal::FindInPage_FindMatchRects_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPageClient_SetNumberOfMatches_ParamsDataView {
 public:
  FindInPageClient_SetNumberOfMatches_ParamsDataView() {}

  FindInPageClient_SetNumberOfMatches_ParamsDataView(
      internal::FindInPageClient_SetNumberOfMatches_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  uint32_t number_of_matches() const {
    return data_->number_of_matches;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateType(UserType* output) const {
    auto data_value = data_->update_type;
    return mojo::internal::Deserialize<::blink::mojom::FindMatchUpdateType>(
        data_value, output);
  }

  FindMatchUpdateType update_type() const {
    return static_cast<FindMatchUpdateType>(data_->update_type);
  }
 private:
  internal::FindInPageClient_SetNumberOfMatches_Params_Data* data_ = nullptr;
};

class FindInPageClient_SetActiveMatch_ParamsDataView {
 public:
  FindInPageClient_SetActiveMatch_ParamsDataView() {}

  FindInPageClient_SetActiveMatch_ParamsDataView(
      internal::FindInPageClient_SetActiveMatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetActiveMatchRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActiveMatchRect(UserType* output) {
    auto* pointer = data_->active_match_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  int32_t active_match_ordinal() const {
    return data_->active_match_ordinal;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateType(UserType* output) const {
    auto data_value = data_->update_type;
    return mojo::internal::Deserialize<::blink::mojom::FindMatchUpdateType>(
        data_value, output);
  }

  FindMatchUpdateType update_type() const {
    return static_cast<FindMatchUpdateType>(data_->update_type);
  }
 private:
  internal::FindInPageClient_SetActiveMatch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FindInPage_Find_ParamsDataView::GetSearchTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->search_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FindInPage_Find_ParamsDataView::GetOptionsDataView(
    FindOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = FindOptionsDataView(pointer, context_);
}






inline void FindInPage_GetNearestFindResult_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}




inline void FindInPage_ActivateNearestFindResult_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}






inline void FindInPage_FindMatchRects_ResponseParamsDataView::GetRectsDataView(
    mojo::ArrayDataView<::gfx::mojom::RectFDataView>* output) {
  auto pointer = data_->rects.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::RectFDataView>(pointer, context_);
}
inline void FindInPage_FindMatchRects_ResponseParamsDataView::GetActiveMatchRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->active_match_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}




inline void FindInPageClient_SetActiveMatch_ParamsDataView::GetActiveMatchRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->active_match_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_PARAMS_DATA_H_