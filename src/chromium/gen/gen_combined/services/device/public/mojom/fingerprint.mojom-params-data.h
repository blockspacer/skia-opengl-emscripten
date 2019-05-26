// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_PARAMS_DATA_H_

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
namespace device {
namespace mojom {
namespace internal {
class  FingerprintObserver_OnRestarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnRestarted_Params_Data));
      new (data()) FingerprintObserver_OnRestarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnRestarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnRestarted_Params_Data>(index_);
    }
    FingerprintObserver_OnRestarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FingerprintObserver_OnRestarted_Params_Data();
  ~FingerprintObserver_OnRestarted_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnRestarted_Params_Data) == 8,
              "Bad sizeof(FingerprintObserver_OnRestarted_Params_Data)");
class  FingerprintObserver_OnEnrollScanDone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnEnrollScanDone_Params_Data));
      new (data()) FingerprintObserver_OnEnrollScanDone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnEnrollScanDone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnEnrollScanDone_Params_Data>(index_);
    }
    FingerprintObserver_OnEnrollScanDone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t scan_result;
  uint8_t is_complete : 1;
  uint8_t pad1_[3];
  int32_t percent_complete;
  uint8_t padfinal_[4];

 private:
  FingerprintObserver_OnEnrollScanDone_Params_Data();
  ~FingerprintObserver_OnEnrollScanDone_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnEnrollScanDone_Params_Data) == 24,
              "Bad sizeof(FingerprintObserver_OnEnrollScanDone_Params_Data)");
class  FingerprintObserver_OnAuthScanDone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnAuthScanDone_Params_Data));
      new (data()) FingerprintObserver_OnAuthScanDone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnAuthScanDone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnAuthScanDone_Params_Data>(index_);
    }
    FingerprintObserver_OnAuthScanDone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t scan_result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> matches;

 private:
  FingerprintObserver_OnAuthScanDone_Params_Data();
  ~FingerprintObserver_OnAuthScanDone_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnAuthScanDone_Params_Data) == 24,
              "Bad sizeof(FingerprintObserver_OnAuthScanDone_Params_Data)");
class  FingerprintObserver_OnSessionFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnSessionFailed_Params_Data));
      new (data()) FingerprintObserver_OnSessionFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnSessionFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnSessionFailed_Params_Data>(index_);
    }
    FingerprintObserver_OnSessionFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FingerprintObserver_OnSessionFailed_Params_Data();
  ~FingerprintObserver_OnSessionFailed_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnSessionFailed_Params_Data) == 8,
              "Bad sizeof(FingerprintObserver_OnSessionFailed_Params_Data)");
class  Fingerprint_GetRecordsForUser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_GetRecordsForUser_Params_Data));
      new (data()) Fingerprint_GetRecordsForUser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_GetRecordsForUser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_GetRecordsForUser_Params_Data>(index_);
    }
    Fingerprint_GetRecordsForUser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> user_id;

 private:
  Fingerprint_GetRecordsForUser_Params_Data();
  ~Fingerprint_GetRecordsForUser_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_GetRecordsForUser_Params_Data) == 16,
              "Bad sizeof(Fingerprint_GetRecordsForUser_Params_Data)");
class  Fingerprint_GetRecordsForUser_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_GetRecordsForUser_ResponseParams_Data));
      new (data()) Fingerprint_GetRecordsForUser_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_GetRecordsForUser_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_GetRecordsForUser_ResponseParams_Data>(index_);
    }
    Fingerprint_GetRecordsForUser_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> records;

 private:
  Fingerprint_GetRecordsForUser_ResponseParams_Data();
  ~Fingerprint_GetRecordsForUser_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_GetRecordsForUser_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_GetRecordsForUser_ResponseParams_Data)");
class  Fingerprint_StartEnrollSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_StartEnrollSession_Params_Data));
      new (data()) Fingerprint_StartEnrollSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_StartEnrollSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_StartEnrollSession_Params_Data>(index_);
    }
    Fingerprint_StartEnrollSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> user_id;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  Fingerprint_StartEnrollSession_Params_Data();
  ~Fingerprint_StartEnrollSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_StartEnrollSession_Params_Data) == 24,
              "Bad sizeof(Fingerprint_StartEnrollSession_Params_Data)");
class  Fingerprint_CancelCurrentEnrollSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_CancelCurrentEnrollSession_Params_Data));
      new (data()) Fingerprint_CancelCurrentEnrollSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_CancelCurrentEnrollSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_CancelCurrentEnrollSession_Params_Data>(index_);
    }
    Fingerprint_CancelCurrentEnrollSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_CancelCurrentEnrollSession_Params_Data();
  ~Fingerprint_CancelCurrentEnrollSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_CancelCurrentEnrollSession_Params_Data) == 8,
              "Bad sizeof(Fingerprint_CancelCurrentEnrollSession_Params_Data)");
class  Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data));
      new (data()) Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data>(index_);
    }
    Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data();
  ~Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data)");
class  Fingerprint_RequestRecordLabel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestRecordLabel_Params_Data));
      new (data()) Fingerprint_RequestRecordLabel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestRecordLabel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestRecordLabel_Params_Data>(index_);
    }
    Fingerprint_RequestRecordLabel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> record_path;

 private:
  Fingerprint_RequestRecordLabel_Params_Data();
  ~Fingerprint_RequestRecordLabel_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestRecordLabel_Params_Data) == 16,
              "Bad sizeof(Fingerprint_RequestRecordLabel_Params_Data)");
class  Fingerprint_RequestRecordLabel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestRecordLabel_ResponseParams_Data));
      new (data()) Fingerprint_RequestRecordLabel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestRecordLabel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestRecordLabel_ResponseParams_Data>(index_);
    }
    Fingerprint_RequestRecordLabel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  Fingerprint_RequestRecordLabel_ResponseParams_Data();
  ~Fingerprint_RequestRecordLabel_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestRecordLabel_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_RequestRecordLabel_ResponseParams_Data)");
class  Fingerprint_SetRecordLabel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_SetRecordLabel_Params_Data));
      new (data()) Fingerprint_SetRecordLabel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_SetRecordLabel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_SetRecordLabel_Params_Data>(index_);
    }
    Fingerprint_SetRecordLabel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> record_path;
  mojo::internal::Pointer<mojo::internal::String_Data> new_label;

 private:
  Fingerprint_SetRecordLabel_Params_Data();
  ~Fingerprint_SetRecordLabel_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_SetRecordLabel_Params_Data) == 24,
              "Bad sizeof(Fingerprint_SetRecordLabel_Params_Data)");
class  Fingerprint_SetRecordLabel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_SetRecordLabel_ResponseParams_Data));
      new (data()) Fingerprint_SetRecordLabel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_SetRecordLabel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_SetRecordLabel_ResponseParams_Data>(index_);
    }
    Fingerprint_SetRecordLabel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Fingerprint_SetRecordLabel_ResponseParams_Data();
  ~Fingerprint_SetRecordLabel_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_SetRecordLabel_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_SetRecordLabel_ResponseParams_Data)");
class  Fingerprint_RemoveRecord_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RemoveRecord_Params_Data));
      new (data()) Fingerprint_RemoveRecord_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RemoveRecord_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RemoveRecord_Params_Data>(index_);
    }
    Fingerprint_RemoveRecord_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> record_path;

 private:
  Fingerprint_RemoveRecord_Params_Data();
  ~Fingerprint_RemoveRecord_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_RemoveRecord_Params_Data) == 16,
              "Bad sizeof(Fingerprint_RemoveRecord_Params_Data)");
class  Fingerprint_RemoveRecord_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RemoveRecord_ResponseParams_Data));
      new (data()) Fingerprint_RemoveRecord_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RemoveRecord_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RemoveRecord_ResponseParams_Data>(index_);
    }
    Fingerprint_RemoveRecord_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Fingerprint_RemoveRecord_ResponseParams_Data();
  ~Fingerprint_RemoveRecord_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_RemoveRecord_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_RemoveRecord_ResponseParams_Data)");
class  Fingerprint_StartAuthSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_StartAuthSession_Params_Data));
      new (data()) Fingerprint_StartAuthSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_StartAuthSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_StartAuthSession_Params_Data>(index_);
    }
    Fingerprint_StartAuthSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_StartAuthSession_Params_Data();
  ~Fingerprint_StartAuthSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_StartAuthSession_Params_Data) == 8,
              "Bad sizeof(Fingerprint_StartAuthSession_Params_Data)");
class  Fingerprint_EndCurrentAuthSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_EndCurrentAuthSession_Params_Data));
      new (data()) Fingerprint_EndCurrentAuthSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_EndCurrentAuthSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_EndCurrentAuthSession_Params_Data>(index_);
    }
    Fingerprint_EndCurrentAuthSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_EndCurrentAuthSession_Params_Data();
  ~Fingerprint_EndCurrentAuthSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_EndCurrentAuthSession_Params_Data) == 8,
              "Bad sizeof(Fingerprint_EndCurrentAuthSession_Params_Data)");
class  Fingerprint_EndCurrentAuthSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_EndCurrentAuthSession_ResponseParams_Data));
      new (data()) Fingerprint_EndCurrentAuthSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_EndCurrentAuthSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_EndCurrentAuthSession_ResponseParams_Data>(index_);
    }
    Fingerprint_EndCurrentAuthSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Fingerprint_EndCurrentAuthSession_ResponseParams_Data();
  ~Fingerprint_EndCurrentAuthSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_EndCurrentAuthSession_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_EndCurrentAuthSession_ResponseParams_Data)");
class  Fingerprint_DestroyAllRecords_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_DestroyAllRecords_Params_Data));
      new (data()) Fingerprint_DestroyAllRecords_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_DestroyAllRecords_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_DestroyAllRecords_Params_Data>(index_);
    }
    Fingerprint_DestroyAllRecords_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_DestroyAllRecords_Params_Data();
  ~Fingerprint_DestroyAllRecords_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_DestroyAllRecords_Params_Data) == 8,
              "Bad sizeof(Fingerprint_DestroyAllRecords_Params_Data)");
class  Fingerprint_DestroyAllRecords_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_DestroyAllRecords_ResponseParams_Data));
      new (data()) Fingerprint_DestroyAllRecords_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_DestroyAllRecords_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_DestroyAllRecords_ResponseParams_Data>(index_);
    }
    Fingerprint_DestroyAllRecords_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Fingerprint_DestroyAllRecords_ResponseParams_Data();
  ~Fingerprint_DestroyAllRecords_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_DestroyAllRecords_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_DestroyAllRecords_ResponseParams_Data)");
class  Fingerprint_AddFingerprintObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_AddFingerprintObserver_Params_Data));
      new (data()) Fingerprint_AddFingerprintObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_AddFingerprintObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_AddFingerprintObserver_Params_Data>(index_);
    }
    Fingerprint_AddFingerprintObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  Fingerprint_AddFingerprintObserver_Params_Data();
  ~Fingerprint_AddFingerprintObserver_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_AddFingerprintObserver_Params_Data) == 16,
              "Bad sizeof(Fingerprint_AddFingerprintObserver_Params_Data)");
class  Fingerprint_RequestType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestType_Params_Data));
      new (data()) Fingerprint_RequestType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestType_Params_Data>(index_);
    }
    Fingerprint_RequestType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_RequestType_Params_Data();
  ~Fingerprint_RequestType_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestType_Params_Data) == 8,
              "Bad sizeof(Fingerprint_RequestType_Params_Data)");
class  Fingerprint_RequestType_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestType_ResponseParams_Data));
      new (data()) Fingerprint_RequestType_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestType_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestType_ResponseParams_Data>(index_);
    }
    Fingerprint_RequestType_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  Fingerprint_RequestType_ResponseParams_Data();
  ~Fingerprint_RequestType_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestType_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_RequestType_ResponseParams_Data)");

}  // namespace internal
class FingerprintObserver_OnRestarted_ParamsDataView {
 public:
  FingerprintObserver_OnRestarted_ParamsDataView() {}

  FingerprintObserver_OnRestarted_ParamsDataView(
      internal::FingerprintObserver_OnRestarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FingerprintObserver_OnRestarted_Params_Data* data_ = nullptr;
};

class FingerprintObserver_OnEnrollScanDone_ParamsDataView {
 public:
  FingerprintObserver_OnEnrollScanDone_ParamsDataView() {}

  FingerprintObserver_OnEnrollScanDone_ParamsDataView(
      internal::FingerprintObserver_OnEnrollScanDone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScanResult(UserType* output) const {
    auto data_value = data_->scan_result;
    return mojo::internal::Deserialize<::device::mojom::ScanResult>(
        data_value, output);
  }

  ScanResult scan_result() const {
    return static_cast<ScanResult>(data_->scan_result);
  }
  bool is_complete() const {
    return data_->is_complete;
  }
  int32_t percent_complete() const {
    return data_->percent_complete;
  }
 private:
  internal::FingerprintObserver_OnEnrollScanDone_Params_Data* data_ = nullptr;
};

class FingerprintObserver_OnAuthScanDone_ParamsDataView {
 public:
  FingerprintObserver_OnAuthScanDone_ParamsDataView() {}

  FingerprintObserver_OnAuthScanDone_ParamsDataView(
      internal::FingerprintObserver_OnAuthScanDone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScanResult(UserType* output) const {
    auto data_value = data_->scan_result;
    return mojo::internal::Deserialize<::device::mojom::ScanResult>(
        data_value, output);
  }

  ScanResult scan_result() const {
    return static_cast<ScanResult>(data_->scan_result);
  }
  inline void GetMatchesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatches(UserType* output) {
    auto* pointer = data_->matches.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::FingerprintObserver_OnAuthScanDone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FingerprintObserver_OnSessionFailed_ParamsDataView {
 public:
  FingerprintObserver_OnSessionFailed_ParamsDataView() {}

  FingerprintObserver_OnSessionFailed_ParamsDataView(
      internal::FingerprintObserver_OnSessionFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FingerprintObserver_OnSessionFailed_Params_Data* data_ = nullptr;
};

class Fingerprint_GetRecordsForUser_ParamsDataView {
 public:
  Fingerprint_GetRecordsForUser_ParamsDataView() {}

  Fingerprint_GetRecordsForUser_ParamsDataView(
      internal::Fingerprint_GetRecordsForUser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUserIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserId(UserType* output) {
    auto* pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_GetRecordsForUser_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_GetRecordsForUser_ResponseParamsDataView {
 public:
  Fingerprint_GetRecordsForUser_ResponseParamsDataView() {}

  Fingerprint_GetRecordsForUser_ResponseParamsDataView(
      internal::Fingerprint_GetRecordsForUser_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordsDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecords(UserType* output) {
    auto* pointer = data_->records.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_GetRecordsForUser_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_StartEnrollSession_ParamsDataView {
 public:
  Fingerprint_StartEnrollSession_ParamsDataView() {}

  Fingerprint_StartEnrollSession_ParamsDataView(
      internal::Fingerprint_StartEnrollSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUserIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserId(UserType* output) {
    auto* pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_StartEnrollSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_CancelCurrentEnrollSession_ParamsDataView {
 public:
  Fingerprint_CancelCurrentEnrollSession_ParamsDataView() {}

  Fingerprint_CancelCurrentEnrollSession_ParamsDataView(
      internal::Fingerprint_CancelCurrentEnrollSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_CancelCurrentEnrollSession_Params_Data* data_ = nullptr;
};

class Fingerprint_CancelCurrentEnrollSession_ResponseParamsDataView {
 public:
  Fingerprint_CancelCurrentEnrollSession_ResponseParamsDataView() {}

  Fingerprint_CancelCurrentEnrollSession_ResponseParamsDataView(
      internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_RequestRecordLabel_ParamsDataView {
 public:
  Fingerprint_RequestRecordLabel_ParamsDataView() {}

  Fingerprint_RequestRecordLabel_ParamsDataView(
      internal::Fingerprint_RequestRecordLabel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordPath(UserType* output) {
    auto* pointer = data_->record_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_RequestRecordLabel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_RequestRecordLabel_ResponseParamsDataView {
 public:
  Fingerprint_RequestRecordLabel_ResponseParamsDataView() {}

  Fingerprint_RequestRecordLabel_ResponseParamsDataView(
      internal::Fingerprint_RequestRecordLabel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_RequestRecordLabel_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_SetRecordLabel_ParamsDataView {
 public:
  Fingerprint_SetRecordLabel_ParamsDataView() {}

  Fingerprint_SetRecordLabel_ParamsDataView(
      internal::Fingerprint_SetRecordLabel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordPath(UserType* output) {
    auto* pointer = data_->record_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNewLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewLabel(UserType* output) {
    auto* pointer = data_->new_label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_SetRecordLabel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_SetRecordLabel_ResponseParamsDataView {
 public:
  Fingerprint_SetRecordLabel_ResponseParamsDataView() {}

  Fingerprint_SetRecordLabel_ResponseParamsDataView(
      internal::Fingerprint_SetRecordLabel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_SetRecordLabel_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_RemoveRecord_ParamsDataView {
 public:
  Fingerprint_RemoveRecord_ParamsDataView() {}

  Fingerprint_RemoveRecord_ParamsDataView(
      internal::Fingerprint_RemoveRecord_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordPath(UserType* output) {
    auto* pointer = data_->record_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_RemoveRecord_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_RemoveRecord_ResponseParamsDataView {
 public:
  Fingerprint_RemoveRecord_ResponseParamsDataView() {}

  Fingerprint_RemoveRecord_ResponseParamsDataView(
      internal::Fingerprint_RemoveRecord_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_RemoveRecord_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_StartAuthSession_ParamsDataView {
 public:
  Fingerprint_StartAuthSession_ParamsDataView() {}

  Fingerprint_StartAuthSession_ParamsDataView(
      internal::Fingerprint_StartAuthSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_StartAuthSession_Params_Data* data_ = nullptr;
};

class Fingerprint_EndCurrentAuthSession_ParamsDataView {
 public:
  Fingerprint_EndCurrentAuthSession_ParamsDataView() {}

  Fingerprint_EndCurrentAuthSession_ParamsDataView(
      internal::Fingerprint_EndCurrentAuthSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_EndCurrentAuthSession_Params_Data* data_ = nullptr;
};

class Fingerprint_EndCurrentAuthSession_ResponseParamsDataView {
 public:
  Fingerprint_EndCurrentAuthSession_ResponseParamsDataView() {}

  Fingerprint_EndCurrentAuthSession_ResponseParamsDataView(
      internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_DestroyAllRecords_ParamsDataView {
 public:
  Fingerprint_DestroyAllRecords_ParamsDataView() {}

  Fingerprint_DestroyAllRecords_ParamsDataView(
      internal::Fingerprint_DestroyAllRecords_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_DestroyAllRecords_Params_Data* data_ = nullptr;
};

class Fingerprint_DestroyAllRecords_ResponseParamsDataView {
 public:
  Fingerprint_DestroyAllRecords_ResponseParamsDataView() {}

  Fingerprint_DestroyAllRecords_ResponseParamsDataView(
      internal::Fingerprint_DestroyAllRecords_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_DestroyAllRecords_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_AddFingerprintObserver_ParamsDataView {
 public:
  Fingerprint_AddFingerprintObserver_ParamsDataView() {}

  Fingerprint_AddFingerprintObserver_ParamsDataView(
      internal::Fingerprint_AddFingerprintObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::FingerprintObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Fingerprint_AddFingerprintObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_RequestType_ParamsDataView {
 public:
  Fingerprint_RequestType_ParamsDataView() {}

  Fingerprint_RequestType_ParamsDataView(
      internal::Fingerprint_RequestType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_RequestType_Params_Data* data_ = nullptr;
};

class Fingerprint_RequestType_ResponseParamsDataView {
 public:
  Fingerprint_RequestType_ResponseParamsDataView() {}

  Fingerprint_RequestType_ResponseParamsDataView(
      internal::Fingerprint_RequestType_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::BiometricType>(
        data_value, output);
  }

  BiometricType type() const {
    return static_cast<BiometricType>(data_->type);
  }
 private:
  internal::Fingerprint_RequestType_ResponseParams_Data* data_ = nullptr;
};






inline void FingerprintObserver_OnAuthScanDone_ParamsDataView::GetMatchesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->matches.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}




inline void Fingerprint_GetRecordsForUser_ParamsDataView::GetUserIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Fingerprint_GetRecordsForUser_ResponseParamsDataView::GetRecordsDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->records.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}


inline void Fingerprint_StartEnrollSession_ParamsDataView::GetUserIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Fingerprint_StartEnrollSession_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void Fingerprint_RequestRecordLabel_ParamsDataView::GetRecordPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->record_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Fingerprint_RequestRecordLabel_ResponseParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Fingerprint_SetRecordLabel_ParamsDataView::GetRecordPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->record_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Fingerprint_SetRecordLabel_ParamsDataView::GetNewLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_label.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Fingerprint_RemoveRecord_ParamsDataView::GetRecordPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->record_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}



















}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_PARAMS_DATA_H_