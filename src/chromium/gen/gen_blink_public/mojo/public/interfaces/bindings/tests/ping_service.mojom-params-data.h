// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_PARAMS_DATA_H_

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
namespace mojo {
namespace test {
namespace internal {
class  PingService_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PingService_Ping_Params_Data));
      new (data()) PingService_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PingService_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PingService_Ping_Params_Data>(index_);
    }
    PingService_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PingService_Ping_Params_Data();
  ~PingService_Ping_Params_Data() = delete;
};
static_assert(sizeof(PingService_Ping_Params_Data) == 8,
              "Bad sizeof(PingService_Ping_Params_Data)");
class  PingService_Ping_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PingService_Ping_ResponseParams_Data));
      new (data()) PingService_Ping_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PingService_Ping_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PingService_Ping_ResponseParams_Data>(index_);
    }
    PingService_Ping_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PingService_Ping_ResponseParams_Data();
  ~PingService_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(PingService_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(PingService_Ping_ResponseParams_Data)");
class  EchoService_Echo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EchoService_Echo_Params_Data));
      new (data()) EchoService_Echo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EchoService_Echo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EchoService_Echo_Params_Data>(index_);
    }
    EchoService_Echo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> test_data;

 private:
  EchoService_Echo_Params_Data();
  ~EchoService_Echo_Params_Data() = delete;
};
static_assert(sizeof(EchoService_Echo_Params_Data) == 16,
              "Bad sizeof(EchoService_Echo_Params_Data)");
class  EchoService_Echo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EchoService_Echo_ResponseParams_Data));
      new (data()) EchoService_Echo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EchoService_Echo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EchoService_Echo_ResponseParams_Data>(index_);
    }
    EchoService_Echo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> echo_data;

 private:
  EchoService_Echo_ResponseParams_Data();
  ~EchoService_Echo_ResponseParams_Data() = delete;
};
static_assert(sizeof(EchoService_Echo_ResponseParams_Data) == 16,
              "Bad sizeof(EchoService_Echo_ResponseParams_Data)");
class  HandleTrampoline_BounceOne_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandleTrampoline_BounceOne_Params_Data));
      new (data()) HandleTrampoline_BounceOne_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandleTrampoline_BounceOne_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandleTrampoline_BounceOne_Params_Data>(index_);
    }
    HandleTrampoline_BounceOne_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data one;
  uint8_t padfinal_[4];

 private:
  HandleTrampoline_BounceOne_Params_Data();
  ~HandleTrampoline_BounceOne_Params_Data() = delete;
};
static_assert(sizeof(HandleTrampoline_BounceOne_Params_Data) == 16,
              "Bad sizeof(HandleTrampoline_BounceOne_Params_Data)");
class  HandleTrampoline_BounceOne_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandleTrampoline_BounceOne_ResponseParams_Data));
      new (data()) HandleTrampoline_BounceOne_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandleTrampoline_BounceOne_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandleTrampoline_BounceOne_ResponseParams_Data>(index_);
    }
    HandleTrampoline_BounceOne_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data one;
  uint8_t padfinal_[4];

 private:
  HandleTrampoline_BounceOne_ResponseParams_Data();
  ~HandleTrampoline_BounceOne_ResponseParams_Data() = delete;
};
static_assert(sizeof(HandleTrampoline_BounceOne_ResponseParams_Data) == 16,
              "Bad sizeof(HandleTrampoline_BounceOne_ResponseParams_Data)");
class  HandleTrampoline_BounceTwo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandleTrampoline_BounceTwo_Params_Data));
      new (data()) HandleTrampoline_BounceTwo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandleTrampoline_BounceTwo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandleTrampoline_BounceTwo_Params_Data>(index_);
    }
    HandleTrampoline_BounceTwo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data one;
  mojo::internal::Handle_Data two;

 private:
  HandleTrampoline_BounceTwo_Params_Data();
  ~HandleTrampoline_BounceTwo_Params_Data() = delete;
};
static_assert(sizeof(HandleTrampoline_BounceTwo_Params_Data) == 16,
              "Bad sizeof(HandleTrampoline_BounceTwo_Params_Data)");
class  HandleTrampoline_BounceTwo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandleTrampoline_BounceTwo_ResponseParams_Data));
      new (data()) HandleTrampoline_BounceTwo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandleTrampoline_BounceTwo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandleTrampoline_BounceTwo_ResponseParams_Data>(index_);
    }
    HandleTrampoline_BounceTwo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data one;
  mojo::internal::Handle_Data two;

 private:
  HandleTrampoline_BounceTwo_ResponseParams_Data();
  ~HandleTrampoline_BounceTwo_ResponseParams_Data() = delete;
};
static_assert(sizeof(HandleTrampoline_BounceTwo_ResponseParams_Data) == 16,
              "Bad sizeof(HandleTrampoline_BounceTwo_ResponseParams_Data)");

}  // namespace internal
class PingService_Ping_ParamsDataView {
 public:
  PingService_Ping_ParamsDataView() {}

  PingService_Ping_ParamsDataView(
      internal::PingService_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PingService_Ping_Params_Data* data_ = nullptr;
};

class PingService_Ping_ResponseParamsDataView {
 public:
  PingService_Ping_ResponseParamsDataView() {}

  PingService_Ping_ResponseParamsDataView(
      internal::PingService_Ping_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PingService_Ping_ResponseParams_Data* data_ = nullptr;
};

class EchoService_Echo_ParamsDataView {
 public:
  EchoService_Echo_ParamsDataView() {}

  EchoService_Echo_ParamsDataView(
      internal::EchoService_Echo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTestDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTestData(UserType* output) {
    auto* pointer = data_->test_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::EchoService_Echo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EchoService_Echo_ResponseParamsDataView {
 public:
  EchoService_Echo_ResponseParamsDataView() {}

  EchoService_Echo_ResponseParamsDataView(
      internal::EchoService_Echo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEchoDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEchoData(UserType* output) {
    auto* pointer = data_->echo_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::EchoService_Echo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandleTrampoline_BounceOne_ParamsDataView {
 public:
  HandleTrampoline_BounceOne_ParamsDataView() {}

  HandleTrampoline_BounceOne_ParamsDataView(
      internal::HandleTrampoline_BounceOne_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedMessagePipeHandle TakeOne() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->one, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HandleTrampoline_BounceOne_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandleTrampoline_BounceOne_ResponseParamsDataView {
 public:
  HandleTrampoline_BounceOne_ResponseParamsDataView() {}

  HandleTrampoline_BounceOne_ResponseParamsDataView(
      internal::HandleTrampoline_BounceOne_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedMessagePipeHandle TakeOne() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->one, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HandleTrampoline_BounceOne_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandleTrampoline_BounceTwo_ParamsDataView {
 public:
  HandleTrampoline_BounceTwo_ParamsDataView() {}

  HandleTrampoline_BounceTwo_ParamsDataView(
      internal::HandleTrampoline_BounceTwo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedMessagePipeHandle TakeOne() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->one, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedMessagePipeHandle TakeTwo() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->two, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HandleTrampoline_BounceTwo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandleTrampoline_BounceTwo_ResponseParamsDataView {
 public:
  HandleTrampoline_BounceTwo_ResponseParamsDataView() {}

  HandleTrampoline_BounceTwo_ResponseParamsDataView(
      internal::HandleTrampoline_BounceTwo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedMessagePipeHandle TakeOne() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->one, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedMessagePipeHandle TakeTwo() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->two, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HandleTrampoline_BounceTwo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void EchoService_Echo_ParamsDataView::GetTestDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->test_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void EchoService_Echo_ResponseParamsDataView::GetEchoDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->echo_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}









}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_PARAMS_DATA_H_