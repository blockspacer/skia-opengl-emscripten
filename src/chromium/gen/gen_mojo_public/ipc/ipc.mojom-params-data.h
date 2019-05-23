// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_PARAMS_DATA_H_
#define IPC_IPC_MOJOM_PARAMS_DATA_H_

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
namespace IPC {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(IPC_MOJOM_SHARED) Channel_SetPeerPid_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Channel_SetPeerPid_Params_Data));
      new (data()) Channel_SetPeerPid_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Channel_SetPeerPid_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Channel_SetPeerPid_Params_Data>(index_);
    }
    Channel_SetPeerPid_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pid;
  uint8_t padfinal_[4];

 private:
  Channel_SetPeerPid_Params_Data();
  ~Channel_SetPeerPid_Params_Data() = delete;
};
static_assert(sizeof(Channel_SetPeerPid_Params_Data) == 16,
              "Bad sizeof(Channel_SetPeerPid_Params_Data)");
class COMPONENT_EXPORT(IPC_MOJOM_SHARED) Channel_Receive_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Channel_Receive_Params_Data));
      new (data()) Channel_Receive_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Channel_Receive_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Channel_Receive_Params_Data>(index_);
    }
    Channel_Receive_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Message_Data> message;

 private:
  Channel_Receive_Params_Data();
  ~Channel_Receive_Params_Data() = delete;
};
static_assert(sizeof(Channel_Receive_Params_Data) == 16,
              "Bad sizeof(Channel_Receive_Params_Data)");
class COMPONENT_EXPORT(IPC_MOJOM_SHARED) Channel_GetAssociatedInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Channel_GetAssociatedInterface_Params_Data));
      new (data()) Channel_GetAssociatedInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Channel_GetAssociatedInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Channel_GetAssociatedInterface_Params_Data>(index_);
    }
    Channel_GetAssociatedInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::AssociatedEndpointHandle_Data request;
  uint8_t padfinal_[4];

 private:
  Channel_GetAssociatedInterface_Params_Data();
  ~Channel_GetAssociatedInterface_Params_Data() = delete;
};
static_assert(sizeof(Channel_GetAssociatedInterface_Params_Data) == 24,
              "Bad sizeof(Channel_GetAssociatedInterface_Params_Data)");

}  // namespace internal
class Channel_SetPeerPid_ParamsDataView {
 public:
  Channel_SetPeerPid_ParamsDataView() {}

  Channel_SetPeerPid_ParamsDataView(
      internal::Channel_SetPeerPid_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t pid() const {
    return data_->pid;
  }
 private:
  internal::Channel_SetPeerPid_Params_Data* data_ = nullptr;
};

class Channel_Receive_ParamsDataView {
 public:
  Channel_Receive_ParamsDataView() {}

  Channel_Receive_ParamsDataView(
      internal::Channel_Receive_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      MessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::IPC::mojom::MessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::Channel_Receive_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Channel_GetAssociatedInterface_ParamsDataView {
 public:
  Channel_GetAssociatedInterface_ParamsDataView() {}

  Channel_GetAssociatedInterface_ParamsDataView(
      internal::Channel_GetAssociatedInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::IPC::mojom::GenericInterfaceAssociatedRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Channel_GetAssociatedInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void Channel_Receive_ParamsDataView::GetMessageDataView(
    MessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = MessageDataView(pointer, context_);
}


inline void Channel_GetAssociatedInterface_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace IPC

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // IPC_IPC_MOJOM_PARAMS_DATA_H_