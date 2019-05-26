// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_PARAMS_DATA_H_

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
namespace sample {
namespace internal {
class  Service_Frobinate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_Frobinate_Params_Data));
      new (data()) Service_Frobinate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_Frobinate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_Frobinate_Params_Data>(index_);
    }
    Service_Frobinate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Foo_Data> foo;
  int32_t baz;
  mojo::internal::Interface_Data port;
  uint8_t padfinal_[4];

 private:
  Service_Frobinate_Params_Data();
  ~Service_Frobinate_Params_Data() = delete;
};
static_assert(sizeof(Service_Frobinate_Params_Data) == 32,
              "Bad sizeof(Service_Frobinate_Params_Data)");
class  Service_Frobinate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_Frobinate_ResponseParams_Data));
      new (data()) Service_Frobinate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_Frobinate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_Frobinate_ResponseParams_Data>(index_);
    }
    Service_Frobinate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  Service_Frobinate_ResponseParams_Data();
  ~Service_Frobinate_ResponseParams_Data() = delete;
};
static_assert(sizeof(Service_Frobinate_ResponseParams_Data) == 16,
              "Bad sizeof(Service_Frobinate_ResponseParams_Data)");
class  Service_GetPort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_GetPort_Params_Data));
      new (data()) Service_GetPort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_GetPort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_GetPort_Params_Data>(index_);
    }
    Service_GetPort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  Service_GetPort_Params_Data();
  ~Service_GetPort_Params_Data() = delete;
};
static_assert(sizeof(Service_GetPort_Params_Data) == 16,
              "Bad sizeof(Service_GetPort_Params_Data)");
class  Port_PostMessageToPort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Port_PostMessageToPort_Params_Data));
      new (data()) Port_PostMessageToPort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Port_PostMessageToPort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Port_PostMessageToPort_Params_Data>(index_);
    }
    Port_PostMessageToPort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message_text;
  mojo::internal::Interface_Data port;

 private:
  Port_PostMessageToPort_Params_Data();
  ~Port_PostMessageToPort_Params_Data() = delete;
};
static_assert(sizeof(Port_PostMessageToPort_Params_Data) == 24,
              "Bad sizeof(Port_PostMessageToPort_Params_Data)");

}  // namespace internal
class Service_Frobinate_ParamsDataView {
 public:
  Service_Frobinate_ParamsDataView() {}

  Service_Frobinate_ParamsDataView(
      internal::Service_Frobinate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFooDataView(
      FooDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFoo(UserType* output) {
    auto* pointer = data_->foo.Get();
    return mojo::internal::Deserialize<::sample::FooDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBaz(UserType* output) const {
    auto data_value = data_->baz;
    return mojo::internal::Deserialize<::sample::Service_BazOptions>(
        data_value, output);
  }

  Service_BazOptions baz() const {
    return static_cast<Service_BazOptions>(data_->baz);
  }
  template <typename UserType>
  UserType TakePort() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::sample::PortInterfaceBase>>(
            &data_->port, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_Frobinate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_Frobinate_ResponseParamsDataView {
 public:
  Service_Frobinate_ResponseParamsDataView() {}

  Service_Frobinate_ResponseParamsDataView(
      internal::Service_Frobinate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::Service_Frobinate_ResponseParams_Data* data_ = nullptr;
};

class Service_GetPort_ParamsDataView {
 public:
  Service_GetPort_ParamsDataView() {}

  Service_GetPort_ParamsDataView(
      internal::Service_GetPort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::sample::PortInterfaceBase>>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_GetPort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Port_PostMessageToPort_ParamsDataView {
 public:
  Port_PostMessageToPort_ParamsDataView() {}

  Port_PostMessageToPort_ParamsDataView(
      internal::Port_PostMessageToPort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessageText(UserType* output) {
    auto* pointer = data_->message_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakePort() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::sample::PortInterfaceBase>>(
            &data_->port, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Port_PostMessageToPort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Service_Frobinate_ParamsDataView::GetFooDataView(
    FooDataView* output) {
  auto pointer = data_->foo.Get();
  *output = FooDataView(pointer, context_);
}






inline void Port_PostMessageToPort_ParamsDataView::GetMessageTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace sample

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_PARAMS_DATA_H_