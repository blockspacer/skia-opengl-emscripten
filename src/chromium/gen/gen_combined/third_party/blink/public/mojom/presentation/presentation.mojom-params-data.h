// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationConnection_OnMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnection_OnMessage_Params_Data));
      new (data()) PresentationConnection_OnMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnection_OnMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnection_OnMessage_Params_Data>(index_);
    }
    PresentationConnection_OnMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::PresentationConnectionMessage_Data message;

 private:
  PresentationConnection_OnMessage_Params_Data();
  ~PresentationConnection_OnMessage_Params_Data() = delete;
};
static_assert(sizeof(PresentationConnection_OnMessage_Params_Data) == 24,
              "Bad sizeof(PresentationConnection_OnMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationConnection_DidChangeState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnection_DidChangeState_Params_Data));
      new (data()) PresentationConnection_DidChangeState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnection_DidChangeState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnection_DidChangeState_Params_Data>(index_);
    }
    PresentationConnection_DidChangeState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  PresentationConnection_DidChangeState_Params_Data();
  ~PresentationConnection_DidChangeState_Params_Data() = delete;
};
static_assert(sizeof(PresentationConnection_DidChangeState_Params_Data) == 16,
              "Bad sizeof(PresentationConnection_DidChangeState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationConnection_DidClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnection_DidClose_Params_Data));
      new (data()) PresentationConnection_DidClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnection_DidClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnection_DidClose_Params_Data>(index_);
    }
    PresentationConnection_DidClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  PresentationConnection_DidClose_Params_Data();
  ~PresentationConnection_DidClose_Params_Data() = delete;
};
static_assert(sizeof(PresentationConnection_DidClose_Params_Data) == 16,
              "Bad sizeof(PresentationConnection_DidClose_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_SetController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_SetController_Params_Data));
      new (data()) PresentationService_SetController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_SetController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_SetController_Params_Data>(index_);
    }
    PresentationService_SetController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data controller;

 private:
  PresentationService_SetController_Params_Data();
  ~PresentationService_SetController_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetController_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetController_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_SetReceiver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_SetReceiver_Params_Data));
      new (data()) PresentationService_SetReceiver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_SetReceiver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_SetReceiver_Params_Data>(index_);
    }
    PresentationService_SetReceiver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data receiver;

 private:
  PresentationService_SetReceiver_Params_Data();
  ~PresentationService_SetReceiver_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetReceiver_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetReceiver_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_SetDefaultPresentationUrls_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_SetDefaultPresentationUrls_Params_Data));
      new (data()) PresentationService_SetDefaultPresentationUrls_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_SetDefaultPresentationUrls_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_SetDefaultPresentationUrls_Params_Data>(index_);
    }
    PresentationService_SetDefaultPresentationUrls_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> presentation_urls;

 private:
  PresentationService_SetDefaultPresentationUrls_Params_Data();
  ~PresentationService_SetDefaultPresentationUrls_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetDefaultPresentationUrls_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetDefaultPresentationUrls_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_ListenForScreenAvailability_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_ListenForScreenAvailability_Params_Data));
      new (data()) PresentationService_ListenForScreenAvailability_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_ListenForScreenAvailability_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_ListenForScreenAvailability_Params_Data>(index_);
    }
    PresentationService_ListenForScreenAvailability_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> availability_url;

 private:
  PresentationService_ListenForScreenAvailability_Params_Data();
  ~PresentationService_ListenForScreenAvailability_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_ListenForScreenAvailability_Params_Data) == 16,
              "Bad sizeof(PresentationService_ListenForScreenAvailability_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_StopListeningForScreenAvailability_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data));
      new (data()) PresentationService_StopListeningForScreenAvailability_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_StopListeningForScreenAvailability_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_StopListeningForScreenAvailability_Params_Data>(index_);
    }
    PresentationService_StopListeningForScreenAvailability_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> availability_url;

 private:
  PresentationService_StopListeningForScreenAvailability_Params_Data();
  ~PresentationService_StopListeningForScreenAvailability_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data) == 16,
              "Bad sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_StartPresentation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_StartPresentation_Params_Data));
      new (data()) PresentationService_StartPresentation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_StartPresentation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_StartPresentation_Params_Data>(index_);
    }
    PresentationService_StartPresentation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> presentation_urls;

 private:
  PresentationService_StartPresentation_Params_Data();
  ~PresentationService_StartPresentation_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_StartPresentation_Params_Data) == 16,
              "Bad sizeof(PresentationService_StartPresentation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_StartPresentation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_StartPresentation_ResponseParams_Data));
      new (data()) PresentationService_StartPresentation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_StartPresentation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_StartPresentation_ResponseParams_Data>(index_);
    }
    PresentationService_StartPresentation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationConnectionResult_Data> result;
  mojo::internal::Pointer<internal::PresentationError_Data> error;

 private:
  PresentationService_StartPresentation_ResponseParams_Data();
  ~PresentationService_StartPresentation_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationService_StartPresentation_ResponseParams_Data) == 24,
              "Bad sizeof(PresentationService_StartPresentation_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_ReconnectPresentation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_ReconnectPresentation_Params_Data));
      new (data()) PresentationService_ReconnectPresentation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_ReconnectPresentation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_ReconnectPresentation_Params_Data>(index_);
    }
    PresentationService_ReconnectPresentation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> presentation_urls;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;

 private:
  PresentationService_ReconnectPresentation_Params_Data();
  ~PresentationService_ReconnectPresentation_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_ReconnectPresentation_Params_Data) == 24,
              "Bad sizeof(PresentationService_ReconnectPresentation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_ReconnectPresentation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_ReconnectPresentation_ResponseParams_Data));
      new (data()) PresentationService_ReconnectPresentation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_ReconnectPresentation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_ReconnectPresentation_ResponseParams_Data>(index_);
    }
    PresentationService_ReconnectPresentation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationConnectionResult_Data> result;
  mojo::internal::Pointer<internal::PresentationError_Data> error;

 private:
  PresentationService_ReconnectPresentation_ResponseParams_Data();
  ~PresentationService_ReconnectPresentation_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationService_ReconnectPresentation_ResponseParams_Data) == 24,
              "Bad sizeof(PresentationService_ReconnectPresentation_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_CloseConnection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_CloseConnection_Params_Data));
      new (data()) PresentationService_CloseConnection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_CloseConnection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_CloseConnection_Params_Data>(index_);
    }
    PresentationService_CloseConnection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> presentation_url;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;

 private:
  PresentationService_CloseConnection_Params_Data();
  ~PresentationService_CloseConnection_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_CloseConnection_Params_Data) == 24,
              "Bad sizeof(PresentationService_CloseConnection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationService_Terminate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_Terminate_Params_Data));
      new (data()) PresentationService_Terminate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_Terminate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_Terminate_Params_Data>(index_);
    }
    PresentationService_Terminate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> presentation_url;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;

 private:
  PresentationService_Terminate_Params_Data();
  ~PresentationService_Terminate_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_Terminate_Params_Data) == 24,
              "Bad sizeof(PresentationService_Terminate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationController_OnScreenAvailabilityUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnScreenAvailabilityUpdated_Params_Data));
      new (data()) PresentationController_OnScreenAvailabilityUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnScreenAvailabilityUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnScreenAvailabilityUpdated_Params_Data>(index_);
    }
    PresentationController_OnScreenAvailabilityUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t availability;
  uint8_t padfinal_[4];

 private:
  PresentationController_OnScreenAvailabilityUpdated_Params_Data();
  ~PresentationController_OnScreenAvailabilityUpdated_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnScreenAvailabilityUpdated_Params_Data) == 24,
              "Bad sizeof(PresentationController_OnScreenAvailabilityUpdated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationController_OnDefaultPresentationStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnDefaultPresentationStarted_Params_Data));
      new (data()) PresentationController_OnDefaultPresentationStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnDefaultPresentationStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnDefaultPresentationStarted_Params_Data>(index_);
    }
    PresentationController_OnDefaultPresentationStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationConnectionResult_Data> result;

 private:
  PresentationController_OnDefaultPresentationStarted_Params_Data();
  ~PresentationController_OnDefaultPresentationStarted_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnDefaultPresentationStarted_Params_Data) == 16,
              "Bad sizeof(PresentationController_OnDefaultPresentationStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationController_OnConnectionStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnConnectionStateChanged_Params_Data));
      new (data()) PresentationController_OnConnectionStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnConnectionStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnConnectionStateChanged_Params_Data>(index_);
    }
    PresentationController_OnConnectionStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;
  int32_t newState;
  uint8_t padfinal_[4];

 private:
  PresentationController_OnConnectionStateChanged_Params_Data();
  ~PresentationController_OnConnectionStateChanged_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnConnectionStateChanged_Params_Data) == 24,
              "Bad sizeof(PresentationController_OnConnectionStateChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationController_OnConnectionClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnConnectionClosed_Params_Data));
      new (data()) PresentationController_OnConnectionClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnConnectionClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnConnectionClosed_Params_Data>(index_);
    }
    PresentationController_OnConnectionClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;
  int32_t reason;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  PresentationController_OnConnectionClosed_Params_Data();
  ~PresentationController_OnConnectionClosed_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnConnectionClosed_Params_Data) == 32,
              "Bad sizeof(PresentationController_OnConnectionClosed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PresentationReceiver_OnReceiverConnectionAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationReceiver_OnReceiverConnectionAvailable_Params_Data));
      new (data()) PresentationReceiver_OnReceiverConnectionAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationReceiver_OnReceiverConnectionAvailable_Params_Data>(index_);
    }
    PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> info;
  mojo::internal::Interface_Data controller_connection;
  mojo::internal::Handle_Data receiver_connection_request;
  uint8_t padfinal_[4];

 private:
  PresentationReceiver_OnReceiverConnectionAvailable_Params_Data();
  ~PresentationReceiver_OnReceiverConnectionAvailable_Params_Data() = delete;
};
static_assert(sizeof(PresentationReceiver_OnReceiverConnectionAvailable_Params_Data) == 32,
              "Bad sizeof(PresentationReceiver_OnReceiverConnectionAvailable_Params_Data)");

}  // namespace internal
class PresentationConnection_OnMessage_ParamsDataView {
 public:
  PresentationConnection_OnMessage_ParamsDataView() {}

  PresentationConnection_OnMessage_ParamsDataView(
      internal::PresentationConnection_OnMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      PresentationConnectionMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = !data_->message.is_null() ? &data_->message : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationConnection_OnMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationConnection_DidChangeState_ParamsDataView {
 public:
  PresentationConnection_DidChangeState_ParamsDataView() {}

  PresentationConnection_DidChangeState_ParamsDataView(
      internal::PresentationConnection_DidChangeState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionState>(
        data_value, output);
  }

  PresentationConnectionState state() const {
    return static_cast<PresentationConnectionState>(data_->state);
  }
 private:
  internal::PresentationConnection_DidChangeState_Params_Data* data_ = nullptr;
};

class PresentationConnection_DidClose_ParamsDataView {
 public:
  PresentationConnection_DidClose_ParamsDataView() {}

  PresentationConnection_DidClose_ParamsDataView(
      internal::PresentationConnection_DidClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionCloseReason>(
        data_value, output);
  }

  PresentationConnectionCloseReason reason() const {
    return static_cast<PresentationConnectionCloseReason>(data_->reason);
  }
 private:
  internal::PresentationConnection_DidClose_Params_Data* data_ = nullptr;
};

class PresentationService_SetController_ParamsDataView {
 public:
  PresentationService_SetController_ParamsDataView() {}

  PresentationService_SetController_ParamsDataView(
      internal::PresentationService_SetController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationControllerPtrDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationService_SetController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_SetReceiver_ParamsDataView {
 public:
  PresentationService_SetReceiver_ParamsDataView() {}

  PresentationService_SetReceiver_ParamsDataView(
      internal::PresentationService_SetReceiver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationReceiverPtrDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationService_SetReceiver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_SetDefaultPresentationUrls_ParamsDataView {
 public:
  PresentationService_SetDefaultPresentationUrls_ParamsDataView() {}

  PresentationService_SetDefaultPresentationUrls_ParamsDataView(
      internal::PresentationService_SetDefaultPresentationUrls_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrls(UserType* output) {
    auto* pointer = data_->presentation_urls.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_SetDefaultPresentationUrls_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_ListenForScreenAvailability_ParamsDataView {
 public:
  PresentationService_ListenForScreenAvailability_ParamsDataView() {}

  PresentationService_ListenForScreenAvailability_ParamsDataView(
      internal::PresentationService_ListenForScreenAvailability_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAvailabilityUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAvailabilityUrl(UserType* output) {
    auto* pointer = data_->availability_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_ListenForScreenAvailability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_StopListeningForScreenAvailability_ParamsDataView {
 public:
  PresentationService_StopListeningForScreenAvailability_ParamsDataView() {}

  PresentationService_StopListeningForScreenAvailability_ParamsDataView(
      internal::PresentationService_StopListeningForScreenAvailability_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAvailabilityUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAvailabilityUrl(UserType* output) {
    auto* pointer = data_->availability_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StopListeningForScreenAvailability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_StartPresentation_ParamsDataView {
 public:
  PresentationService_StartPresentation_ParamsDataView() {}

  PresentationService_StartPresentation_ParamsDataView(
      internal::PresentationService_StartPresentation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrls(UserType* output) {
    auto* pointer = data_->presentation_urls.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StartPresentation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_StartPresentation_ResponseParamsDataView {
 public:
  PresentationService_StartPresentation_ResponseParamsDataView() {}

  PresentationService_StartPresentation_ResponseParamsDataView(
      internal::PresentationService_StartPresentation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      PresentationConnectionResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionResultDataView>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      PresentationErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StartPresentation_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_ReconnectPresentation_ParamsDataView {
 public:
  PresentationService_ReconnectPresentation_ParamsDataView() {}

  PresentationService_ReconnectPresentation_ParamsDataView(
      internal::PresentationService_ReconnectPresentation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrls(UserType* output) {
    auto* pointer = data_->presentation_urls.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_ReconnectPresentation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_ReconnectPresentation_ResponseParamsDataView {
 public:
  PresentationService_ReconnectPresentation_ResponseParamsDataView() {}

  PresentationService_ReconnectPresentation_ResponseParamsDataView(
      internal::PresentationService_ReconnectPresentation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      PresentationConnectionResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionResultDataView>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      PresentationErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_ReconnectPresentation_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_CloseConnection_ParamsDataView {
 public:
  PresentationService_CloseConnection_ParamsDataView() {}

  PresentationService_CloseConnection_ParamsDataView(
      internal::PresentationService_CloseConnection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrl(UserType* output) {
    auto* pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_CloseConnection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_Terminate_ParamsDataView {
 public:
  PresentationService_Terminate_ParamsDataView() {}

  PresentationService_Terminate_ParamsDataView(
      internal::PresentationService_Terminate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrl(UserType* output) {
    auto* pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_Terminate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnScreenAvailabilityUpdated_ParamsDataView {
 public:
  PresentationController_OnScreenAvailabilityUpdated_ParamsDataView() {}

  PresentationController_OnScreenAvailabilityUpdated_ParamsDataView(
      internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAvailability(UserType* output) const {
    auto data_value = data_->availability;
    return mojo::internal::Deserialize<::blink::mojom::ScreenAvailability>(
        data_value, output);
  }

  ScreenAvailability availability() const {
    return static_cast<ScreenAvailability>(data_->availability);
  }
 private:
  internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnDefaultPresentationStarted_ParamsDataView {
 public:
  PresentationController_OnDefaultPresentationStarted_ParamsDataView() {}

  PresentationController_OnDefaultPresentationStarted_ParamsDataView(
      internal::PresentationController_OnDefaultPresentationStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      PresentationConnectionResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationController_OnDefaultPresentationStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnConnectionStateChanged_ParamsDataView {
 public:
  PresentationController_OnConnectionStateChanged_ParamsDataView() {}

  PresentationController_OnConnectionStateChanged_ParamsDataView(
      internal::PresentationController_OnConnectionStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewState(UserType* output) const {
    auto data_value = data_->newState;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionState>(
        data_value, output);
  }

  PresentationConnectionState newState() const {
    return static_cast<PresentationConnectionState>(data_->newState);
  }
 private:
  internal::PresentationController_OnConnectionStateChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnConnectionClosed_ParamsDataView {
 public:
  PresentationController_OnConnectionClosed_ParamsDataView() {}

  PresentationController_OnConnectionClosed_ParamsDataView(
      internal::PresentationController_OnConnectionClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionCloseReason>(
        data_value, output);
  }

  PresentationConnectionCloseReason reason() const {
    return static_cast<PresentationConnectionCloseReason>(data_->reason);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationController_OnConnectionClosed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView {
 public:
  PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView() {}

  PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView(
      internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeControllerConnection() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionPtrDataView>(
            &data_->controller_connection, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeReceiverConnectionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionRequestDataView>(
            &data_->receiver_connection_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PresentationConnection_OnMessage_ParamsDataView::GetMessageDataView(
    PresentationConnectionMessageDataView* output) {
  auto pointer = &data_->message;
  *output = PresentationConnectionMessageDataView(pointer, context_);
}










inline void PresentationService_SetDefaultPresentationUrls_ParamsDataView::GetPresentationUrlsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->presentation_urls.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}


inline void PresentationService_ListenForScreenAvailability_ParamsDataView::GetAvailabilityUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->availability_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PresentationService_StopListeningForScreenAvailability_ParamsDataView::GetAvailabilityUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->availability_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PresentationService_StartPresentation_ParamsDataView::GetPresentationUrlsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->presentation_urls.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}


inline void PresentationService_StartPresentation_ResponseParamsDataView::GetResultDataView(
    PresentationConnectionResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = PresentationConnectionResultDataView(pointer, context_);
}
inline void PresentationService_StartPresentation_ResponseParamsDataView::GetErrorDataView(
    PresentationErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = PresentationErrorDataView(pointer, context_);
}


inline void PresentationService_ReconnectPresentation_ParamsDataView::GetPresentationUrlsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->presentation_urls.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}
inline void PresentationService_ReconnectPresentation_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationService_ReconnectPresentation_ResponseParamsDataView::GetResultDataView(
    PresentationConnectionResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = PresentationConnectionResultDataView(pointer, context_);
}
inline void PresentationService_ReconnectPresentation_ResponseParamsDataView::GetErrorDataView(
    PresentationErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = PresentationErrorDataView(pointer, context_);
}


inline void PresentationService_CloseConnection_ParamsDataView::GetPresentationUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PresentationService_CloseConnection_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationService_Terminate_ParamsDataView::GetPresentationUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PresentationService_Terminate_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationController_OnScreenAvailabilityUpdated_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PresentationController_OnDefaultPresentationStarted_ParamsDataView::GetResultDataView(
    PresentationConnectionResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = PresentationConnectionResultDataView(pointer, context_);
}


inline void PresentationController_OnConnectionStateChanged_ParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}


inline void PresentationController_OnConnectionClosed_ParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}
inline void PresentationController_OnConnectionClosed_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView::GetInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_PARAMS_DATA_H_