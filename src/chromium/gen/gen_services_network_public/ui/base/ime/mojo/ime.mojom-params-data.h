// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_MOJOM_PARAMS_DATA_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_PARAMS_DATA_H_

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
namespace ime {
namespace mojom {
namespace internal {
class  ImeEngine_StartInput_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngine_StartInput_Params_Data));
      new (data()) ImeEngine_StartInput_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngine_StartInput_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngine_StartInput_Params_Data>(index_);
    }
    ImeEngine_StartInput_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::EditorInfo_Data> info;

 private:
  ImeEngine_StartInput_Params_Data();
  ~ImeEngine_StartInput_Params_Data() = delete;
};
static_assert(sizeof(ImeEngine_StartInput_Params_Data) == 16,
              "Bad sizeof(ImeEngine_StartInput_Params_Data)");
class  ImeEngine_FinishInput_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngine_FinishInput_Params_Data));
      new (data()) ImeEngine_FinishInput_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngine_FinishInput_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngine_FinishInput_Params_Data>(index_);
    }
    ImeEngine_FinishInput_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImeEngine_FinishInput_Params_Data();
  ~ImeEngine_FinishInput_Params_Data() = delete;
};
static_assert(sizeof(ImeEngine_FinishInput_Params_Data) == 8,
              "Bad sizeof(ImeEngine_FinishInput_Params_Data)");
class  ImeEngine_CancelInput_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngine_CancelInput_Params_Data));
      new (data()) ImeEngine_CancelInput_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngine_CancelInput_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngine_CancelInput_Params_Data>(index_);
    }
    ImeEngine_CancelInput_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImeEngine_CancelInput_Params_Data();
  ~ImeEngine_CancelInput_Params_Data() = delete;
};
static_assert(sizeof(ImeEngine_CancelInput_Params_Data) == 8,
              "Bad sizeof(ImeEngine_CancelInput_Params_Data)");
class  ImeEngine_ProcessKeyEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngine_ProcessKeyEvent_Params_Data));
      new (data()) ImeEngine_ProcessKeyEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngine_ProcessKeyEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngine_ProcessKeyEvent_Params_Data>(index_);
    }
    ImeEngine_ProcessKeyEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> key_event;

 private:
  ImeEngine_ProcessKeyEvent_Params_Data();
  ~ImeEngine_ProcessKeyEvent_Params_Data() = delete;
};
static_assert(sizeof(ImeEngine_ProcessKeyEvent_Params_Data) == 16,
              "Bad sizeof(ImeEngine_ProcessKeyEvent_Params_Data)");
class  ImeEngine_ProcessKeyEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngine_ProcessKeyEvent_ResponseParams_Data));
      new (data()) ImeEngine_ProcessKeyEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngine_ProcessKeyEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngine_ProcessKeyEvent_ResponseParams_Data>(index_);
    }
    ImeEngine_ProcessKeyEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t handled : 1;
  uint8_t padfinal_[7];

 private:
  ImeEngine_ProcessKeyEvent_ResponseParams_Data();
  ~ImeEngine_ProcessKeyEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImeEngine_ProcessKeyEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ImeEngine_ProcessKeyEvent_ResponseParams_Data)");
class  ImeEngine_UpdateSurroundingInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngine_UpdateSurroundingInfo_Params_Data));
      new (data()) ImeEngine_UpdateSurroundingInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngine_UpdateSurroundingInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngine_UpdateSurroundingInfo_Params_Data>(index_);
    }
    ImeEngine_UpdateSurroundingInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> text;
  int32_t cursor;
  int32_t anchor;
  int32_t offset;
  uint8_t padfinal_[4];

 private:
  ImeEngine_UpdateSurroundingInfo_Params_Data();
  ~ImeEngine_UpdateSurroundingInfo_Params_Data() = delete;
};
static_assert(sizeof(ImeEngine_UpdateSurroundingInfo_Params_Data) == 32,
              "Bad sizeof(ImeEngine_UpdateSurroundingInfo_Params_Data)");
class  ImeEngine_UpdateCompositionBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngine_UpdateCompositionBounds_Params_Data));
      new (data()) ImeEngine_UpdateCompositionBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngine_UpdateCompositionBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngine_UpdateCompositionBounds_Params_Data>(index_);
    }
    ImeEngine_UpdateCompositionBounds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data>>> bounds;

 private:
  ImeEngine_UpdateCompositionBounds_Params_Data();
  ~ImeEngine_UpdateCompositionBounds_Params_Data() = delete;
};
static_assert(sizeof(ImeEngine_UpdateCompositionBounds_Params_Data) == 16,
              "Bad sizeof(ImeEngine_UpdateCompositionBounds_Params_Data)");
class  ImeEngineClient_CommitText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngineClient_CommitText_Params_Data));
      new (data()) ImeEngineClient_CommitText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngineClient_CommitText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngineClient_CommitText_Params_Data>(index_);
    }
    ImeEngineClient_CommitText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> text;

 private:
  ImeEngineClient_CommitText_Params_Data();
  ~ImeEngineClient_CommitText_Params_Data() = delete;
};
static_assert(sizeof(ImeEngineClient_CommitText_Params_Data) == 16,
              "Bad sizeof(ImeEngineClient_CommitText_Params_Data)");
class  ImeEngineClient_UpdateCompositionText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngineClient_UpdateCompositionText_Params_Data));
      new (data()) ImeEngineClient_UpdateCompositionText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngineClient_UpdateCompositionText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngineClient_UpdateCompositionText_Params_Data>(index_);
    }
    ImeEngineClient_UpdateCompositionText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::CompositionText_Data> composition_text;
  uint32_t cursor_pos;
  uint8_t visible : 1;
  uint8_t padfinal_[3];

 private:
  ImeEngineClient_UpdateCompositionText_Params_Data();
  ~ImeEngineClient_UpdateCompositionText_Params_Data() = delete;
};
static_assert(sizeof(ImeEngineClient_UpdateCompositionText_Params_Data) == 24,
              "Bad sizeof(ImeEngineClient_UpdateCompositionText_Params_Data)");
class  ImeEngineClient_DeleteSurroundingText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngineClient_DeleteSurroundingText_Params_Data));
      new (data()) ImeEngineClient_DeleteSurroundingText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngineClient_DeleteSurroundingText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngineClient_DeleteSurroundingText_Params_Data>(index_);
    }
    ImeEngineClient_DeleteSurroundingText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t offset;
  uint32_t length;

 private:
  ImeEngineClient_DeleteSurroundingText_Params_Data();
  ~ImeEngineClient_DeleteSurroundingText_Params_Data() = delete;
};
static_assert(sizeof(ImeEngineClient_DeleteSurroundingText_Params_Data) == 16,
              "Bad sizeof(ImeEngineClient_DeleteSurroundingText_Params_Data)");
class  ImeEngineClient_SendKeyEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngineClient_SendKeyEvent_Params_Data));
      new (data()) ImeEngineClient_SendKeyEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngineClient_SendKeyEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngineClient_SendKeyEvent_Params_Data>(index_);
    }
    ImeEngineClient_SendKeyEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> key_event;

 private:
  ImeEngineClient_SendKeyEvent_Params_Data();
  ~ImeEngineClient_SendKeyEvent_Params_Data() = delete;
};
static_assert(sizeof(ImeEngineClient_SendKeyEvent_Params_Data) == 16,
              "Bad sizeof(ImeEngineClient_SendKeyEvent_Params_Data)");
class  ImeEngineClient_Reconnect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngineClient_Reconnect_Params_Data));
      new (data()) ImeEngineClient_Reconnect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngineClient_Reconnect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngineClient_Reconnect_Params_Data>(index_);
    }
    ImeEngineClient_Reconnect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImeEngineClient_Reconnect_Params_Data();
  ~ImeEngineClient_Reconnect_Params_Data() = delete;
};
static_assert(sizeof(ImeEngineClient_Reconnect_Params_Data) == 8,
              "Bad sizeof(ImeEngineClient_Reconnect_Params_Data)");
class  ImeEngineFactory_CreateEngine_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngineFactory_CreateEngine_Params_Data));
      new (data()) ImeEngineFactory_CreateEngine_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngineFactory_CreateEngine_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngineFactory_CreateEngine_Params_Data>(index_);
    }
    ImeEngineFactory_CreateEngine_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data engine_request;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  ImeEngineFactory_CreateEngine_Params_Data();
  ~ImeEngineFactory_CreateEngine_Params_Data() = delete;
};
static_assert(sizeof(ImeEngineFactory_CreateEngine_Params_Data) == 24,
              "Bad sizeof(ImeEngineFactory_CreateEngine_Params_Data)");

}  // namespace internal
class ImeEngine_StartInput_ParamsDataView {
 public:
  ImeEngine_StartInput_ParamsDataView() {}

  ImeEngine_StartInput_ParamsDataView(
      internal::ImeEngine_StartInput_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      EditorInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::ime::mojom::EditorInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImeEngine_StartInput_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeEngine_FinishInput_ParamsDataView {
 public:
  ImeEngine_FinishInput_ParamsDataView() {}

  ImeEngine_FinishInput_ParamsDataView(
      internal::ImeEngine_FinishInput_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImeEngine_FinishInput_Params_Data* data_ = nullptr;
};

class ImeEngine_CancelInput_ParamsDataView {
 public:
  ImeEngine_CancelInput_ParamsDataView() {}

  ImeEngine_CancelInput_ParamsDataView(
      internal::ImeEngine_CancelInput_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImeEngine_CancelInput_Params_Data* data_ = nullptr;
};

class ImeEngine_ProcessKeyEvent_ParamsDataView {
 public:
  ImeEngine_ProcessKeyEvent_ParamsDataView() {}

  ImeEngine_ProcessKeyEvent_ParamsDataView(
      internal::ImeEngine_ProcessKeyEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyEvent(UserType* output) {
    auto* pointer = data_->key_event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImeEngine_ProcessKeyEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeEngine_ProcessKeyEvent_ResponseParamsDataView {
 public:
  ImeEngine_ProcessKeyEvent_ResponseParamsDataView() {}

  ImeEngine_ProcessKeyEvent_ResponseParamsDataView(
      internal::ImeEngine_ProcessKeyEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool handled() const {
    return data_->handled;
  }
 private:
  internal::ImeEngine_ProcessKeyEvent_ResponseParams_Data* data_ = nullptr;
};

class ImeEngine_UpdateSurroundingInfo_ParamsDataView {
 public:
  ImeEngine_UpdateSurroundingInfo_ParamsDataView() {}

  ImeEngine_UpdateSurroundingInfo_ParamsDataView(
      internal::ImeEngine_UpdateSurroundingInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t cursor() const {
    return data_->cursor;
  }
  int32_t anchor() const {
    return data_->anchor;
  }
  int32_t offset() const {
    return data_->offset;
  }
 private:
  internal::ImeEngine_UpdateSurroundingInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeEngine_UpdateCompositionBounds_ParamsDataView {
 public:
  ImeEngine_UpdateCompositionBounds_ParamsDataView() {}

  ImeEngine_UpdateCompositionBounds_ParamsDataView(
      internal::ImeEngine_UpdateCompositionBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBoundsDataView(
      mojo::ArrayDataView<::gfx::mojom::RectDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ImeEngine_UpdateCompositionBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeEngineClient_CommitText_ParamsDataView {
 public:
  ImeEngineClient_CommitText_ParamsDataView() {}

  ImeEngineClient_CommitText_ParamsDataView(
      internal::ImeEngineClient_CommitText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImeEngineClient_CommitText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeEngineClient_UpdateCompositionText_ParamsDataView {
 public:
  ImeEngineClient_UpdateCompositionText_ParamsDataView() {}

  ImeEngineClient_UpdateCompositionText_ParamsDataView(
      internal::ImeEngineClient_UpdateCompositionText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCompositionTextDataView(
      ::ui::mojom::CompositionTextDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCompositionText(UserType* output) {
    auto* pointer = data_->composition_text.Get();
    return mojo::internal::Deserialize<::ui::mojom::CompositionTextDataView>(
        pointer, output, context_);
  }
  uint32_t cursor_pos() const {
    return data_->cursor_pos;
  }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::ImeEngineClient_UpdateCompositionText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeEngineClient_DeleteSurroundingText_ParamsDataView {
 public:
  ImeEngineClient_DeleteSurroundingText_ParamsDataView() {}

  ImeEngineClient_DeleteSurroundingText_ParamsDataView(
      internal::ImeEngineClient_DeleteSurroundingText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t offset() const {
    return data_->offset;
  }
  uint32_t length() const {
    return data_->length;
  }
 private:
  internal::ImeEngineClient_DeleteSurroundingText_Params_Data* data_ = nullptr;
};

class ImeEngineClient_SendKeyEvent_ParamsDataView {
 public:
  ImeEngineClient_SendKeyEvent_ParamsDataView() {}

  ImeEngineClient_SendKeyEvent_ParamsDataView(
      internal::ImeEngineClient_SendKeyEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyEvent(UserType* output) {
    auto* pointer = data_->key_event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImeEngineClient_SendKeyEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImeEngineClient_Reconnect_ParamsDataView {
 public:
  ImeEngineClient_Reconnect_ParamsDataView() {}

  ImeEngineClient_Reconnect_ParamsDataView(
      internal::ImeEngineClient_Reconnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImeEngineClient_Reconnect_Params_Data* data_ = nullptr;
};

class ImeEngineFactory_CreateEngine_ParamsDataView {
 public:
  ImeEngineFactory_CreateEngine_ParamsDataView() {}

  ImeEngineFactory_CreateEngine_ParamsDataView(
      internal::ImeEngineFactory_CreateEngine_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeEngineRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ime::mojom::ImeEngineRequestDataView>(
            &data_->engine_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ime::mojom::ImeEngineClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ImeEngineFactory_CreateEngine_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImeEngine_StartInput_ParamsDataView::GetInfoDataView(
    EditorInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = EditorInfoDataView(pointer, context_);
}






inline void ImeEngine_ProcessKeyEvent_ParamsDataView::GetKeyEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->key_event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}




inline void ImeEngine_UpdateSurroundingInfo_ParamsDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ImeEngine_UpdateCompositionBounds_ParamsDataView::GetBoundsDataView(
    mojo::ArrayDataView<::gfx::mojom::RectDataView>* output) {
  auto pointer = data_->bounds.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::RectDataView>(pointer, context_);
}


inline void ImeEngineClient_CommitText_ParamsDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ImeEngineClient_UpdateCompositionText_ParamsDataView::GetCompositionTextDataView(
    ::ui::mojom::CompositionTextDataView* output) {
  auto pointer = data_->composition_text.Get();
  *output = ::ui::mojom::CompositionTextDataView(pointer, context_);
}




inline void ImeEngineClient_SendKeyEvent_ParamsDataView::GetKeyEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->key_event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace ime

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // UI_BASE_IME_MOJO_IME_MOJOM_PARAMS_DATA_H_