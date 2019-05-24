// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_PARAMS_DATA_H_

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
namespace ws {
namespace mojom {
namespace internal {
class  IMEDriver_StartSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IMEDriver_StartSession_Params_Data));
      new (data()) IMEDriver_StartSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IMEDriver_StartSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IMEDriver_StartSession_Params_Data>(index_);
    }
    IMEDriver_StartSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data input_method_request;
  mojo::internal::Interface_Data client;
  uint8_t pad1_[4];
  mojo::internal::Pointer<internal::SessionDetails_Data> details;

 private:
  IMEDriver_StartSession_Params_Data();
  ~IMEDriver_StartSession_Params_Data() = delete;
};
static_assert(sizeof(IMEDriver_StartSession_Params_Data) == 32,
              "Bad sizeof(IMEDriver_StartSession_Params_Data)");
class  IMERegistrar_RegisterDriver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IMERegistrar_RegisterDriver_Params_Data));
      new (data()) IMERegistrar_RegisterDriver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IMERegistrar_RegisterDriver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IMERegistrar_RegisterDriver_Params_Data>(index_);
    }
    IMERegistrar_RegisterDriver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data driver;

 private:
  IMERegistrar_RegisterDriver_Params_Data();
  ~IMERegistrar_RegisterDriver_Params_Data() = delete;
};
static_assert(sizeof(IMERegistrar_RegisterDriver_Params_Data) == 16,
              "Bad sizeof(IMERegistrar_RegisterDriver_Params_Data)");
class  InputMethod_OnTextInputStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_OnTextInputStateChanged_Params_Data));
      new (data()) InputMethod_OnTextInputStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_OnTextInputStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_OnTextInputStateChanged_Params_Data>(index_);
    }
    InputMethod_OnTextInputStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TextInputState_Data> text_input_state;

 private:
  InputMethod_OnTextInputStateChanged_Params_Data();
  ~InputMethod_OnTextInputStateChanged_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_OnTextInputStateChanged_Params_Data) == 16,
              "Bad sizeof(InputMethod_OnTextInputStateChanged_Params_Data)");
class  InputMethod_OnCaretBoundsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_OnCaretBoundsChanged_Params_Data));
      new (data()) InputMethod_OnCaretBoundsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_OnCaretBoundsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_OnCaretBoundsChanged_Params_Data>(index_);
    }
    InputMethod_OnCaretBoundsChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> caret_bounds;

 private:
  InputMethod_OnCaretBoundsChanged_Params_Data();
  ~InputMethod_OnCaretBoundsChanged_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_OnCaretBoundsChanged_Params_Data) == 16,
              "Bad sizeof(InputMethod_OnCaretBoundsChanged_Params_Data)");
class  InputMethod_OnTextInputClientDataChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_OnTextInputClientDataChanged_Params_Data));
      new (data()) InputMethod_OnTextInputClientDataChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_OnTextInputClientDataChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_OnTextInputClientDataChanged_Params_Data>(index_);
    }
    InputMethod_OnTextInputClientDataChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TextInputClientData_Data> data;

 private:
  InputMethod_OnTextInputClientDataChanged_Params_Data();
  ~InputMethod_OnTextInputClientDataChanged_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_OnTextInputClientDataChanged_Params_Data) == 16,
              "Bad sizeof(InputMethod_OnTextInputClientDataChanged_Params_Data)");
class  InputMethod_ProcessKeyEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_ProcessKeyEvent_Params_Data));
      new (data()) InputMethod_ProcessKeyEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_ProcessKeyEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_ProcessKeyEvent_Params_Data>(index_);
    }
    InputMethod_ProcessKeyEvent_Params_Data* operator->() { return data(); }

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
  InputMethod_ProcessKeyEvent_Params_Data();
  ~InputMethod_ProcessKeyEvent_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_ProcessKeyEvent_Params_Data) == 16,
              "Bad sizeof(InputMethod_ProcessKeyEvent_Params_Data)");
class  InputMethod_ProcessKeyEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_ProcessKeyEvent_ResponseParams_Data));
      new (data()) InputMethod_ProcessKeyEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_ProcessKeyEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_ProcessKeyEvent_ResponseParams_Data>(index_);
    }
    InputMethod_ProcessKeyEvent_ResponseParams_Data* operator->() { return data(); }

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
  InputMethod_ProcessKeyEvent_ResponseParams_Data();
  ~InputMethod_ProcessKeyEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputMethod_ProcessKeyEvent_ResponseParams_Data) == 16,
              "Bad sizeof(InputMethod_ProcessKeyEvent_ResponseParams_Data)");
class  InputMethod_CancelComposition_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_CancelComposition_Params_Data));
      new (data()) InputMethod_CancelComposition_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_CancelComposition_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_CancelComposition_Params_Data>(index_);
    }
    InputMethod_CancelComposition_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputMethod_CancelComposition_Params_Data();
  ~InputMethod_CancelComposition_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_CancelComposition_Params_Data) == 8,
              "Bad sizeof(InputMethod_CancelComposition_Params_Data)");
class  InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data));
      new (data()) InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data>(index_);
    }
    InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data();
  ~InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data) == 8,
              "Bad sizeof(InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data)");
class  TextInputClient_SetCompositionText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_SetCompositionText_Params_Data));
      new (data()) TextInputClient_SetCompositionText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_SetCompositionText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_SetCompositionText_Params_Data>(index_);
    }
    TextInputClient_SetCompositionText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::CompositionText_Data> composition;

 private:
  TextInputClient_SetCompositionText_Params_Data();
  ~TextInputClient_SetCompositionText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_SetCompositionText_Params_Data) == 16,
              "Bad sizeof(TextInputClient_SetCompositionText_Params_Data)");
class  TextInputClient_ConfirmCompositionText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_ConfirmCompositionText_Params_Data));
      new (data()) TextInputClient_ConfirmCompositionText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_ConfirmCompositionText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_ConfirmCompositionText_Params_Data>(index_);
    }
    TextInputClient_ConfirmCompositionText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextInputClient_ConfirmCompositionText_Params_Data();
  ~TextInputClient_ConfirmCompositionText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_ConfirmCompositionText_Params_Data) == 8,
              "Bad sizeof(TextInputClient_ConfirmCompositionText_Params_Data)");
class  TextInputClient_ClearCompositionText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_ClearCompositionText_Params_Data));
      new (data()) TextInputClient_ClearCompositionText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_ClearCompositionText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_ClearCompositionText_Params_Data>(index_);
    }
    TextInputClient_ClearCompositionText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextInputClient_ClearCompositionText_Params_Data();
  ~TextInputClient_ClearCompositionText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_ClearCompositionText_Params_Data) == 8,
              "Bad sizeof(TextInputClient_ClearCompositionText_Params_Data)");
class  TextInputClient_InsertText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_InsertText_Params_Data));
      new (data()) TextInputClient_InsertText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_InsertText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_InsertText_Params_Data>(index_);
    }
    TextInputClient_InsertText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;

 private:
  TextInputClient_InsertText_Params_Data();
  ~TextInputClient_InsertText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_InsertText_Params_Data) == 16,
              "Bad sizeof(TextInputClient_InsertText_Params_Data)");
class  TextInputClient_InsertChar_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_InsertChar_Params_Data));
      new (data()) TextInputClient_InsertChar_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_InsertChar_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_InsertChar_Params_Data>(index_);
    }
    TextInputClient_InsertChar_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  TextInputClient_InsertChar_Params_Data();
  ~TextInputClient_InsertChar_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_InsertChar_Params_Data) == 16,
              "Bad sizeof(TextInputClient_InsertChar_Params_Data)");
class  TextInputClient_DispatchKeyEventPostIME_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_DispatchKeyEventPostIME_Params_Data));
      new (data()) TextInputClient_DispatchKeyEventPostIME_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_DispatchKeyEventPostIME_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_DispatchKeyEventPostIME_Params_Data>(index_);
    }
    TextInputClient_DispatchKeyEventPostIME_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  TextInputClient_DispatchKeyEventPostIME_Params_Data();
  ~TextInputClient_DispatchKeyEventPostIME_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_DispatchKeyEventPostIME_Params_Data) == 16,
              "Bad sizeof(TextInputClient_DispatchKeyEventPostIME_Params_Data)");
class  TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data));
      new (data()) TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data>(index_);
    }
    TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t handled : 1;
  uint8_t stopped_propagation : 1;
  uint8_t padfinal_[7];

 private:
  TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data();
  ~TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data() = delete;
};
static_assert(sizeof(TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data) == 16,
              "Bad sizeof(TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data)");
class  TextInputClient_EnsureCaretNotInRect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_EnsureCaretNotInRect_Params_Data));
      new (data()) TextInputClient_EnsureCaretNotInRect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_EnsureCaretNotInRect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_EnsureCaretNotInRect_Params_Data>(index_);
    }
    TextInputClient_EnsureCaretNotInRect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> rect;

 private:
  TextInputClient_EnsureCaretNotInRect_Params_Data();
  ~TextInputClient_EnsureCaretNotInRect_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_EnsureCaretNotInRect_Params_Data) == 16,
              "Bad sizeof(TextInputClient_EnsureCaretNotInRect_Params_Data)");
class  TextInputClient_SetEditableSelectionRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_SetEditableSelectionRange_Params_Data));
      new (data()) TextInputClient_SetEditableSelectionRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_SetEditableSelectionRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_SetEditableSelectionRange_Params_Data>(index_);
    }
    TextInputClient_SetEditableSelectionRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> range;

 private:
  TextInputClient_SetEditableSelectionRange_Params_Data();
  ~TextInputClient_SetEditableSelectionRange_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_SetEditableSelectionRange_Params_Data) == 16,
              "Bad sizeof(TextInputClient_SetEditableSelectionRange_Params_Data)");
class  TextInputClient_DeleteRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_DeleteRange_Params_Data));
      new (data()) TextInputClient_DeleteRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_DeleteRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_DeleteRange_Params_Data>(index_);
    }
    TextInputClient_DeleteRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> range;

 private:
  TextInputClient_DeleteRange_Params_Data();
  ~TextInputClient_DeleteRange_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_DeleteRange_Params_Data) == 16,
              "Bad sizeof(TextInputClient_DeleteRange_Params_Data)");
class  TextInputClient_OnInputMethodChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_OnInputMethodChanged_Params_Data));
      new (data()) TextInputClient_OnInputMethodChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_OnInputMethodChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_OnInputMethodChanged_Params_Data>(index_);
    }
    TextInputClient_OnInputMethodChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextInputClient_OnInputMethodChanged_Params_Data();
  ~TextInputClient_OnInputMethodChanged_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_OnInputMethodChanged_Params_Data) == 8,
              "Bad sizeof(TextInputClient_OnInputMethodChanged_Params_Data)");
class  TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data));
      new (data()) TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data>(index_);
    }
    TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t direction;
  uint8_t padfinal_[4];

 private:
  TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data();
  ~TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data) == 16,
              "Bad sizeof(TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data)");
class  TextInputClient_ExtendSelectionAndDelete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_ExtendSelectionAndDelete_Params_Data));
      new (data()) TextInputClient_ExtendSelectionAndDelete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_ExtendSelectionAndDelete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_ExtendSelectionAndDelete_Params_Data>(index_);
    }
    TextInputClient_ExtendSelectionAndDelete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t before;
  uint32_t after;

 private:
  TextInputClient_ExtendSelectionAndDelete_Params_Data();
  ~TextInputClient_ExtendSelectionAndDelete_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_ExtendSelectionAndDelete_Params_Data) == 16,
              "Bad sizeof(TextInputClient_ExtendSelectionAndDelete_Params_Data)");

}  // namespace internal
class IMEDriver_StartSession_ParamsDataView {
 public:
  IMEDriver_StartSession_ParamsDataView() {}

  IMEDriver_StartSession_ParamsDataView(
      internal::IMEDriver_StartSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeInputMethodRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::InputMethodRequestDataView>(
            &data_->input_method_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::TextInputClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDetailsDataView(
      SessionDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) {
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<::ws::mojom::SessionDetailsDataView>(
        pointer, output, context_);
  }
 private:
  internal::IMEDriver_StartSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IMERegistrar_RegisterDriver_ParamsDataView {
 public:
  IMERegistrar_RegisterDriver_ParamsDataView() {}

  IMERegistrar_RegisterDriver_ParamsDataView(
      internal::IMERegistrar_RegisterDriver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDriver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::IMEDriverPtrDataView>(
            &data_->driver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IMERegistrar_RegisterDriver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_OnTextInputStateChanged_ParamsDataView {
 public:
  InputMethod_OnTextInputStateChanged_ParamsDataView() {}

  InputMethod_OnTextInputStateChanged_ParamsDataView(
      internal::InputMethod_OnTextInputStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextInputStateDataView(
      TextInputStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextInputState(UserType* output) {
    auto* pointer = data_->text_input_state.Get();
    return mojo::internal::Deserialize<::ws::mojom::TextInputStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputMethod_OnTextInputStateChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_OnCaretBoundsChanged_ParamsDataView {
 public:
  InputMethod_OnCaretBoundsChanged_ParamsDataView() {}

  InputMethod_OnCaretBoundsChanged_ParamsDataView(
      internal::InputMethod_OnCaretBoundsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCaretBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaretBounds(UserType* output) {
    auto* pointer = data_->caret_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputMethod_OnCaretBoundsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_OnTextInputClientDataChanged_ParamsDataView {
 public:
  InputMethod_OnTextInputClientDataChanged_ParamsDataView() {}

  InputMethod_OnTextInputClientDataChanged_ParamsDataView(
      internal::InputMethod_OnTextInputClientDataChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      TextInputClientDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::ws::mojom::TextInputClientDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputMethod_OnTextInputClientDataChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_ProcessKeyEvent_ParamsDataView {
 public:
  InputMethod_ProcessKeyEvent_ParamsDataView() {}

  InputMethod_ProcessKeyEvent_ParamsDataView(
      internal::InputMethod_ProcessKeyEvent_Params_Data* data,
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
  internal::InputMethod_ProcessKeyEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputMethod_ProcessKeyEvent_ResponseParamsDataView {
 public:
  InputMethod_ProcessKeyEvent_ResponseParamsDataView() {}

  InputMethod_ProcessKeyEvent_ResponseParamsDataView(
      internal::InputMethod_ProcessKeyEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool handled() const {
    return data_->handled;
  }
 private:
  internal::InputMethod_ProcessKeyEvent_ResponseParams_Data* data_ = nullptr;
};

class InputMethod_CancelComposition_ParamsDataView {
 public:
  InputMethod_CancelComposition_ParamsDataView() {}

  InputMethod_CancelComposition_ParamsDataView(
      internal::InputMethod_CancelComposition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputMethod_CancelComposition_Params_Data* data_ = nullptr;
};

class InputMethod_ShowVirtualKeyboardIfEnabled_ParamsDataView {
 public:
  InputMethod_ShowVirtualKeyboardIfEnabled_ParamsDataView() {}

  InputMethod_ShowVirtualKeyboardIfEnabled_ParamsDataView(
      internal::InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data* data_ = nullptr;
};

class TextInputClient_SetCompositionText_ParamsDataView {
 public:
  TextInputClient_SetCompositionText_ParamsDataView() {}

  TextInputClient_SetCompositionText_ParamsDataView(
      internal::TextInputClient_SetCompositionText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCompositionDataView(
      ::ui::mojom::CompositionTextDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadComposition(UserType* output) {
    auto* pointer = data_->composition.Get();
    return mojo::internal::Deserialize<::ui::mojom::CompositionTextDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_SetCompositionText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_ConfirmCompositionText_ParamsDataView {
 public:
  TextInputClient_ConfirmCompositionText_ParamsDataView() {}

  TextInputClient_ConfirmCompositionText_ParamsDataView(
      internal::TextInputClient_ConfirmCompositionText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextInputClient_ConfirmCompositionText_Params_Data* data_ = nullptr;
};

class TextInputClient_ClearCompositionText_ParamsDataView {
 public:
  TextInputClient_ClearCompositionText_ParamsDataView() {}

  TextInputClient_ClearCompositionText_ParamsDataView(
      internal::TextInputClient_ClearCompositionText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextInputClient_ClearCompositionText_Params_Data* data_ = nullptr;
};

class TextInputClient_InsertText_ParamsDataView {
 public:
  TextInputClient_InsertText_ParamsDataView() {}

  TextInputClient_InsertText_ParamsDataView(
      internal::TextInputClient_InsertText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_InsertText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_InsertChar_ParamsDataView {
 public:
  TextInputClient_InsertChar_ParamsDataView() {}

  TextInputClient_InsertChar_ParamsDataView(
      internal::TextInputClient_InsertChar_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_InsertChar_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_DispatchKeyEventPostIME_ParamsDataView {
 public:
  TextInputClient_DispatchKeyEventPostIME_ParamsDataView() {}

  TextInputClient_DispatchKeyEventPostIME_ParamsDataView(
      internal::TextInputClient_DispatchKeyEventPostIME_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_DispatchKeyEventPostIME_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView {
 public:
  TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView() {}

  TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView(
      internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool handled() const {
    return data_->handled;
  }
  bool stopped_propagation() const {
    return data_->stopped_propagation;
  }
 private:
  internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* data_ = nullptr;
};

class TextInputClient_EnsureCaretNotInRect_ParamsDataView {
 public:
  TextInputClient_EnsureCaretNotInRect_ParamsDataView() {}

  TextInputClient_EnsureCaretNotInRect_ParamsDataView(
      internal::TextInputClient_EnsureCaretNotInRect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_EnsureCaretNotInRect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_SetEditableSelectionRange_ParamsDataView {
 public:
  TextInputClient_SetEditableSelectionRange_ParamsDataView() {}

  TextInputClient_SetEditableSelectionRange_ParamsDataView(
      internal::TextInputClient_SetEditableSelectionRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRange(UserType* output) {
    auto* pointer = data_->range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_SetEditableSelectionRange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_DeleteRange_ParamsDataView {
 public:
  TextInputClient_DeleteRange_ParamsDataView() {}

  TextInputClient_DeleteRange_ParamsDataView(
      internal::TextInputClient_DeleteRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRange(UserType* output) {
    auto* pointer = data_->range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClient_DeleteRange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputClient_OnInputMethodChanged_ParamsDataView {
 public:
  TextInputClient_OnInputMethodChanged_ParamsDataView() {}

  TextInputClient_OnInputMethodChanged_ParamsDataView(
      internal::TextInputClient_OnInputMethodChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextInputClient_OnInputMethodChanged_Params_Data* data_ = nullptr;
};

class TextInputClient_ChangeTextDirectionAndLayoutAlignment_ParamsDataView {
 public:
  TextInputClient_ChangeTextDirectionAndLayoutAlignment_ParamsDataView() {}

  TextInputClient_ChangeTextDirectionAndLayoutAlignment_ParamsDataView(
      internal::TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::mojo_base::mojom::TextDirection>(
        data_value, output);
  }

  ::mojo_base::mojom::TextDirection direction() const {
    return static_cast<::mojo_base::mojom::TextDirection>(data_->direction);
  }
 private:
  internal::TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data* data_ = nullptr;
};

class TextInputClient_ExtendSelectionAndDelete_ParamsDataView {
 public:
  TextInputClient_ExtendSelectionAndDelete_ParamsDataView() {}

  TextInputClient_ExtendSelectionAndDelete_ParamsDataView(
      internal::TextInputClient_ExtendSelectionAndDelete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t before() const {
    return data_->before;
  }
  uint32_t after() const {
    return data_->after;
  }
 private:
  internal::TextInputClient_ExtendSelectionAndDelete_Params_Data* data_ = nullptr;
};


inline void IMEDriver_StartSession_ParamsDataView::GetDetailsDataView(
    SessionDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = SessionDetailsDataView(pointer, context_);
}




inline void InputMethod_OnTextInputStateChanged_ParamsDataView::GetTextInputStateDataView(
    TextInputStateDataView* output) {
  auto pointer = data_->text_input_state.Get();
  *output = TextInputStateDataView(pointer, context_);
}


inline void InputMethod_OnCaretBoundsChanged_ParamsDataView::GetCaretBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->caret_bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void InputMethod_OnTextInputClientDataChanged_ParamsDataView::GetDataDataView(
    TextInputClientDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = TextInputClientDataDataView(pointer, context_);
}


inline void InputMethod_ProcessKeyEvent_ParamsDataView::GetKeyEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->key_event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}








inline void TextInputClient_SetCompositionText_ParamsDataView::GetCompositionDataView(
    ::ui::mojom::CompositionTextDataView* output) {
  auto pointer = data_->composition.Get();
  *output = ::ui::mojom::CompositionTextDataView(pointer, context_);
}






inline void TextInputClient_InsertText_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void TextInputClient_InsertChar_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}


inline void TextInputClient_DispatchKeyEventPostIME_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}




inline void TextInputClient_EnsureCaretNotInRect_ParamsDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void TextInputClient_SetEditableSelectionRange_ParamsDataView::GetRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}


inline void TextInputClient_DeleteRange_ParamsDataView::GetRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_PARAMS_DATA_H_