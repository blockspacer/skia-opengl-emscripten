// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_

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
namespace test {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetUniqueId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUniqueId_Params_Data));
      new (data()) VirtualAuthenticator_GetUniqueId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUniqueId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUniqueId_Params_Data>(index_);
    }
    VirtualAuthenticator_GetUniqueId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_GetUniqueId_Params_Data();
  ~VirtualAuthenticator_GetUniqueId_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUniqueId_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetUniqueId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetUniqueId_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data));
      new (data()) VirtualAuthenticator_GetUniqueId_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUniqueId_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_GetUniqueId_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  VirtualAuthenticator_GetUniqueId_ResponseParams_Data();
  ~VirtualAuthenticator_GetUniqueId_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_AddRegistration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_AddRegistration_Params_Data));
      new (data()) VirtualAuthenticator_AddRegistration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_AddRegistration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_AddRegistration_Params_Data>(index_);
    }
    VirtualAuthenticator_AddRegistration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RegisteredKey_Data> key;

 private:
  VirtualAuthenticator_AddRegistration_Params_Data();
  ~VirtualAuthenticator_AddRegistration_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_AddRegistration_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_AddRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_AddRegistration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data));
      new (data()) VirtualAuthenticator_AddRegistration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_AddRegistration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_AddRegistration_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_AddRegistration_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t added : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticator_AddRegistration_ResponseParams_Data();
  ~VirtualAuthenticator_AddRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetRegistrations_Params_Data));
      new (data()) VirtualAuthenticator_GetRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetRegistrations_Params_Data>(index_);
    }
    VirtualAuthenticator_GetRegistrations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_GetRegistrations_Params_Data();
  ~VirtualAuthenticator_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetRegistrations_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data));
      new (data()) VirtualAuthenticator_GetRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetRegistrations_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_GetRegistrations_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RegisteredKey_Data>>> keys;

 private:
  VirtualAuthenticator_GetRegistrations_ResponseParams_Data();
  ~VirtualAuthenticator_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_ClearRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data));
      new (data()) VirtualAuthenticator_ClearRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_ClearRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_ClearRegistrations_Params_Data>(index_);
    }
    VirtualAuthenticator_ClearRegistrations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_ClearRegistrations_Params_Data();
  ~VirtualAuthenticator_ClearRegistrations_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_ClearRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data));
      new (data()) VirtualAuthenticator_ClearRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_ClearRegistrations_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_ClearRegistrations_ResponseParams_Data();
  ~VirtualAuthenticator_ClearRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_SetUserPresence_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_SetUserPresence_Params_Data));
      new (data()) VirtualAuthenticator_SetUserPresence_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_SetUserPresence_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_SetUserPresence_Params_Data>(index_);
    }
    VirtualAuthenticator_SetUserPresence_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t present : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticator_SetUserPresence_Params_Data();
  ~VirtualAuthenticator_SetUserPresence_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetUserPresence_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_SetUserPresence_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_SetUserPresence_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_SetUserPresence_ResponseParams_Data));
      new (data()) VirtualAuthenticator_SetUserPresence_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_SetUserPresence_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_SetUserPresence_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_SetUserPresence_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_SetUserPresence_ResponseParams_Data();
  ~VirtualAuthenticator_SetUserPresence_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetUserPresence_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_SetUserPresence_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetUserPresence_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUserPresence_Params_Data));
      new (data()) VirtualAuthenticator_GetUserPresence_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUserPresence_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUserPresence_Params_Data>(index_);
    }
    VirtualAuthenticator_GetUserPresence_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticator_GetUserPresence_Params_Data();
  ~VirtualAuthenticator_GetUserPresence_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUserPresence_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetUserPresence_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetUserPresence_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticator_GetUserPresence_ResponseParams_Data));
      new (data()) VirtualAuthenticator_GetUserPresence_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticator_GetUserPresence_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticator_GetUserPresence_ResponseParams_Data>(index_);
    }
    VirtualAuthenticator_GetUserPresence_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t present : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticator_GetUserPresence_ResponseParams_Data();
  ~VirtualAuthenticator_GetUserPresence_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUserPresence_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetUserPresence_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_CreateAuthenticator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data));
      new (data()) VirtualAuthenticatorManager_CreateAuthenticator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_CreateAuthenticator_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VirtualAuthenticatorOptions_Data> options;

 private:
  VirtualAuthenticatorManager_CreateAuthenticator_Params_Data();
  ~VirtualAuthenticatorManager_CreateAuthenticator_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data authenticator;

 private:
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data();
  ~VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_GetAuthenticators_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data));
      new (data()) VirtualAuthenticatorManager_GetAuthenticators_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_GetAuthenticators_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_GetAuthenticators_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticatorManager_GetAuthenticators_Params_Data();
  ~VirtualAuthenticatorManager_GetAuthenticators_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> authenticators;

 private:
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data();
  ~VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data));
      new (data()) VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data();
  ~VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t removed : 1;
  uint8_t padfinal_[7];

 private:
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data();
  ~VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_ClearAuthenticators_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data));
      new (data()) VirtualAuthenticatorManager_ClearAuthenticators_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_ClearAuthenticators_Params_Data>(index_);
    }
    VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticatorManager_ClearAuthenticators_Params_Data();
  ~VirtualAuthenticatorManager_ClearAuthenticators_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data));
      new (data()) VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data>(index_);
    }
    VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data();
  ~VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data)");

}  // namespace internal
class VirtualAuthenticator_GetUniqueId_ParamsDataView {
 public:
  VirtualAuthenticator_GetUniqueId_ParamsDataView() {}

  VirtualAuthenticator_GetUniqueId_ParamsDataView(
      internal::VirtualAuthenticator_GetUniqueId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetUniqueId_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetUniqueId_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetUniqueId_ResponseParamsDataView() {}

  VirtualAuthenticator_GetUniqueId_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticator_AddRegistration_ParamsDataView {
 public:
  VirtualAuthenticator_AddRegistration_ParamsDataView() {}

  VirtualAuthenticator_AddRegistration_ParamsDataView(
      internal::VirtualAuthenticator_AddRegistration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      RegisteredKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::test::mojom::RegisteredKeyDataView>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticator_AddRegistration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticator_AddRegistration_ResponseParamsDataView {
 public:
  VirtualAuthenticator_AddRegistration_ResponseParamsDataView() {}

  VirtualAuthenticator_AddRegistration_ResponseParamsDataView(
      internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool added() const {
    return data_->added;
  }
 private:
  internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetRegistrations_ParamsDataView {
 public:
  VirtualAuthenticator_GetRegistrations_ParamsDataView() {}

  VirtualAuthenticator_GetRegistrations_ParamsDataView(
      internal::VirtualAuthenticator_GetRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetRegistrations_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetRegistrations_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetRegistrations_ResponseParamsDataView() {}

  VirtualAuthenticator_GetRegistrations_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<RegisteredKeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::test::mojom::RegisteredKeyDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticator_ClearRegistrations_ParamsDataView {
 public:
  VirtualAuthenticator_ClearRegistrations_ParamsDataView() {}

  VirtualAuthenticator_ClearRegistrations_ParamsDataView(
      internal::VirtualAuthenticator_ClearRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_ClearRegistrations_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView {
 public:
  VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView() {}

  VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView(
      internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticator_SetUserPresence_ParamsDataView {
 public:
  VirtualAuthenticator_SetUserPresence_ParamsDataView() {}

  VirtualAuthenticator_SetUserPresence_ParamsDataView(
      internal::VirtualAuthenticator_SetUserPresence_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool present() const {
    return data_->present;
  }
 private:
  internal::VirtualAuthenticator_SetUserPresence_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_SetUserPresence_ResponseParamsDataView {
 public:
  VirtualAuthenticator_SetUserPresence_ResponseParamsDataView() {}

  VirtualAuthenticator_SetUserPresence_ResponseParamsDataView(
      internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetUserPresence_ParamsDataView {
 public:
  VirtualAuthenticator_GetUserPresence_ParamsDataView() {}

  VirtualAuthenticator_GetUserPresence_ParamsDataView(
      internal::VirtualAuthenticator_GetUserPresence_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetUserPresence_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetUserPresence_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetUserPresence_ResponseParamsDataView() {}

  VirtualAuthenticator_GetUserPresence_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool present() const {
    return data_->present;
  }
 private:
  internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView {
 public:
  VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView() {}

  VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView(
      internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      VirtualAuthenticatorOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::test::mojom::VirtualAuthenticatorOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAuthenticator() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::test::mojom::VirtualAuthenticatorPtrDataView>(
            &data_->authenticator, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView {
 public:
  VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView() {}

  VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView(
      internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAuthenticatorsDataView(
      mojo::ArrayDataView<VirtualAuthenticatorPtrDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticators(UserType* output) {
    auto* pointer = data_->authenticators.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::test::mojom::VirtualAuthenticatorPtrDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView {
 public:
  VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView() {}

  VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView(
      internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool removed() const {
    return data_->removed;
  }
 private:
  internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView {
 public:
  VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView() {}

  VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView(
      internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data_ = nullptr;
};




inline void VirtualAuthenticator_GetUniqueId_ResponseParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void VirtualAuthenticator_AddRegistration_ParamsDataView::GetKeyDataView(
    RegisteredKeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = RegisteredKeyDataView(pointer, context_);
}






inline void VirtualAuthenticator_GetRegistrations_ResponseParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<RegisteredKeyDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<RegisteredKeyDataView>(pointer, context_);
}














inline void VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView::GetOptionsDataView(
    VirtualAuthenticatorOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = VirtualAuthenticatorOptionsDataView(pointer, context_);
}






inline void VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView::GetAuthenticatorsDataView(
    mojo::ArrayDataView<VirtualAuthenticatorPtrDataView>* output) {
  auto pointer = data_->authenticators.Get();
  *output = mojo::ArrayDataView<VirtualAuthenticatorPtrDataView>(pointer, context_);
}


inline void VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace test
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_