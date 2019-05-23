// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Portal_Navigate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Portal_Navigate_Params_Data));
      new (data()) Portal_Navigate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Portal_Navigate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Portal_Navigate_Params_Data>(index_);
    }
    Portal_Navigate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  Portal_Navigate_Params_Data();
  ~Portal_Navigate_Params_Data() = delete;
};
static_assert(sizeof(Portal_Navigate_Params_Data) == 16,
              "Bad sizeof(Portal_Navigate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Portal_Activate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Portal_Activate_Params_Data));
      new (data()) Portal_Activate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Portal_Activate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Portal_Activate_Params_Data>(index_);
    }
    Portal_Activate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> data;

 private:
  Portal_Activate_Params_Data();
  ~Portal_Activate_Params_Data() = delete;
};
static_assert(sizeof(Portal_Activate_Params_Data) == 16,
              "Bad sizeof(Portal_Activate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Portal_Activate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Portal_Activate_ResponseParams_Data));
      new (data()) Portal_Activate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Portal_Activate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Portal_Activate_ResponseParams_Data>(index_);
    }
    Portal_Activate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t was_adopted : 1;
  uint8_t padfinal_[7];

 private:
  Portal_Activate_ResponseParams_Data();
  ~Portal_Activate_ResponseParams_Data() = delete;
};
static_assert(sizeof(Portal_Activate_ResponseParams_Data) == 16,
              "Bad sizeof(Portal_Activate_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Portal_PostMessageToGuest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Portal_PostMessageToGuest_Params_Data));
      new (data()) Portal_PostMessageToGuest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Portal_PostMessageToGuest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Portal_PostMessageToGuest_Params_Data>(index_);
    }
    Portal_PostMessageToGuest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> target_origin;

 private:
  Portal_PostMessageToGuest_Params_Data();
  ~Portal_PostMessageToGuest_Params_Data() = delete;
};
static_assert(sizeof(Portal_PostMessageToGuest_Params_Data) == 24,
              "Bad sizeof(Portal_PostMessageToGuest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PortalClient_ForwardMessageFromGuest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PortalClient_ForwardMessageFromGuest_Params_Data));
      new (data()) PortalClient_ForwardMessageFromGuest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PortalClient_ForwardMessageFromGuest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PortalClient_ForwardMessageFromGuest_Params_Data>(index_);
    }
    PortalClient_ForwardMessageFromGuest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> source_origin;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> target_origin;

 private:
  PortalClient_ForwardMessageFromGuest_Params_Data();
  ~PortalClient_ForwardMessageFromGuest_Params_Data() = delete;
};
static_assert(sizeof(PortalClient_ForwardMessageFromGuest_Params_Data) == 32,
              "Bad sizeof(PortalClient_ForwardMessageFromGuest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PortalClient_DispatchLoadEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PortalClient_DispatchLoadEvent_Params_Data));
      new (data()) PortalClient_DispatchLoadEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PortalClient_DispatchLoadEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PortalClient_DispatchLoadEvent_Params_Data>(index_);
    }
    PortalClient_DispatchLoadEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PortalClient_DispatchLoadEvent_Params_Data();
  ~PortalClient_DispatchLoadEvent_Params_Data() = delete;
};
static_assert(sizeof(PortalClient_DispatchLoadEvent_Params_Data) == 8,
              "Bad sizeof(PortalClient_DispatchLoadEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PortalHost_PostMessageToHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PortalHost_PostMessageToHost_Params_Data));
      new (data()) PortalHost_PostMessageToHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PortalHost_PostMessageToHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PortalHost_PostMessageToHost_Params_Data>(index_);
    }
    PortalHost_PostMessageToHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> target_origin;

 private:
  PortalHost_PostMessageToHost_Params_Data();
  ~PortalHost_PostMessageToHost_Params_Data() = delete;
};
static_assert(sizeof(PortalHost_PostMessageToHost_Params_Data) == 24,
              "Bad sizeof(PortalHost_PostMessageToHost_Params_Data)");

}  // namespace internal
class Portal_Navigate_ParamsDataView {
 public:
  Portal_Navigate_ParamsDataView() {}

  Portal_Navigate_ParamsDataView(
      internal::Portal_Navigate_Params_Data* data,
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
 private:
  internal::Portal_Navigate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Portal_Activate_ParamsDataView {
 public:
  Portal_Activate_ParamsDataView() {}

  Portal_Activate_ParamsDataView(
      internal::Portal_Activate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::Portal_Activate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Portal_Activate_ResponseParamsDataView {
 public:
  Portal_Activate_ResponseParamsDataView() {}

  Portal_Activate_ResponseParamsDataView(
      internal::Portal_Activate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool was_adopted() const {
    return data_->was_adopted;
  }
 private:
  internal::Portal_Activate_ResponseParams_Data* data_ = nullptr;
};

class Portal_PostMessageToGuest_ParamsDataView {
 public:
  Portal_PostMessageToGuest_ParamsDataView() {}

  Portal_PostMessageToGuest_ParamsDataView(
      internal::Portal_PostMessageToGuest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
  inline void GetTargetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetOrigin(UserType* output) {
    auto* pointer = data_->target_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::Portal_PostMessageToGuest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PortalClient_ForwardMessageFromGuest_ParamsDataView {
 public:
  PortalClient_ForwardMessageFromGuest_ParamsDataView() {}

  PortalClient_ForwardMessageFromGuest_ParamsDataView(
      internal::PortalClient_ForwardMessageFromGuest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
  inline void GetSourceOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceOrigin(UserType* output) {
    auto* pointer = data_->source_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetTargetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetOrigin(UserType* output) {
    auto* pointer = data_->target_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::PortalClient_ForwardMessageFromGuest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PortalClient_DispatchLoadEvent_ParamsDataView {
 public:
  PortalClient_DispatchLoadEvent_ParamsDataView() {}

  PortalClient_DispatchLoadEvent_ParamsDataView(
      internal::PortalClient_DispatchLoadEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PortalClient_DispatchLoadEvent_Params_Data* data_ = nullptr;
};

class PortalHost_PostMessageToHost_ParamsDataView {
 public:
  PortalHost_PostMessageToHost_ParamsDataView() {}

  PortalHost_PostMessageToHost_ParamsDataView(
      internal::PortalHost_PostMessageToHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
  inline void GetTargetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetOrigin(UserType* output) {
    auto* pointer = data_->target_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::PortalHost_PostMessageToHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Portal_Navigate_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void Portal_Activate_ParamsDataView::GetDataDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}




inline void Portal_PostMessageToGuest_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}
inline void Portal_PostMessageToGuest_ParamsDataView::GetTargetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->target_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void PortalClient_ForwardMessageFromGuest_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}
inline void PortalClient_ForwardMessageFromGuest_ParamsDataView::GetSourceOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->source_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void PortalClient_ForwardMessageFromGuest_ParamsDataView::GetTargetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->target_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}




inline void PortalHost_PostMessageToHost_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}
inline void PortalHost_PostMessageToHost_ParamsDataView::GetTargetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->target_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_PARAMS_DATA_H_