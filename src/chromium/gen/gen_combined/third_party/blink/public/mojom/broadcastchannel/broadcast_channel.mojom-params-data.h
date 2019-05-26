// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BroadcastChannelClient_OnMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BroadcastChannelClient_OnMessage_Params_Data));
      new (data()) BroadcastChannelClient_OnMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BroadcastChannelClient_OnMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BroadcastChannelClient_OnMessage_Params_Data>(index_);
    }
    BroadcastChannelClient_OnMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::CloneableMessage_Data> message;

 private:
  BroadcastChannelClient_OnMessage_Params_Data();
  ~BroadcastChannelClient_OnMessage_Params_Data() = delete;
};
static_assert(sizeof(BroadcastChannelClient_OnMessage_Params_Data) == 16,
              "Bad sizeof(BroadcastChannelClient_OnMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BroadcastChannelProvider_ConnectToChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BroadcastChannelProvider_ConnectToChannel_Params_Data));
      new (data()) BroadcastChannelProvider_ConnectToChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BroadcastChannelProvider_ConnectToChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BroadcastChannelProvider_ConnectToChannel_Params_Data>(index_);
    }
    BroadcastChannelProvider_ConnectToChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::AssociatedInterface_Data receiver;
  mojo::internal::AssociatedEndpointHandle_Data sender;
  uint8_t padfinal_[4];

 private:
  BroadcastChannelProvider_ConnectToChannel_Params_Data();
  ~BroadcastChannelProvider_ConnectToChannel_Params_Data() = delete;
};
static_assert(sizeof(BroadcastChannelProvider_ConnectToChannel_Params_Data) == 40,
              "Bad sizeof(BroadcastChannelProvider_ConnectToChannel_Params_Data)");

}  // namespace internal
class BroadcastChannelClient_OnMessage_ParamsDataView {
 public:
  BroadcastChannelClient_OnMessage_ParamsDataView() {}

  BroadcastChannelClient_OnMessage_ParamsDataView(
      internal::BroadcastChannelClient_OnMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::CloneableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::CloneableMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::BroadcastChannelClient_OnMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BroadcastChannelProvider_ConnectToChannel_ParamsDataView {
 public:
  BroadcastChannelProvider_ConnectToChannel_ParamsDataView() {}

  BroadcastChannelProvider_ConnectToChannel_ParamsDataView(
      internal::BroadcastChannelProvider_ConnectToChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BroadcastChannelClientAssociatedPtrInfoDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSender() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BroadcastChannelClientAssociatedRequestDataView>(
            &data_->sender, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BroadcastChannelProvider_ConnectToChannel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BroadcastChannelClient_OnMessage_ParamsDataView::GetMessageDataView(
    ::blink::mojom::CloneableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::CloneableMessageDataView(pointer, context_);
}


inline void BroadcastChannelProvider_ConnectToChannel_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void BroadcastChannelProvider_ConnectToChannel_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_PARAMS_DATA_H_