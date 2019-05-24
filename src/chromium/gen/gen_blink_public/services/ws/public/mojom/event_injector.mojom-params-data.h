// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_PARAMS_DATA_H_

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
class  EventInjector_InjectEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EventInjector_InjectEvent_Params_Data));
      new (data()) EventInjector_InjectEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EventInjector_InjectEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EventInjector_InjectEvent_Params_Data>(index_);
    }
    EventInjector_InjectEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  EventInjector_InjectEvent_Params_Data();
  ~EventInjector_InjectEvent_Params_Data() = delete;
};
static_assert(sizeof(EventInjector_InjectEvent_Params_Data) == 24,
              "Bad sizeof(EventInjector_InjectEvent_Params_Data)");
class  EventInjector_InjectEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EventInjector_InjectEvent_ResponseParams_Data));
      new (data()) EventInjector_InjectEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EventInjector_InjectEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EventInjector_InjectEvent_ResponseParams_Data>(index_);
    }
    EventInjector_InjectEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  EventInjector_InjectEvent_ResponseParams_Data();
  ~EventInjector_InjectEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(EventInjector_InjectEvent_ResponseParams_Data) == 16,
              "Bad sizeof(EventInjector_InjectEvent_ResponseParams_Data)");
class  EventInjector_InjectEventNoAck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EventInjector_InjectEventNoAck_Params_Data));
      new (data()) EventInjector_InjectEventNoAck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EventInjector_InjectEventNoAck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EventInjector_InjectEventNoAck_Params_Data>(index_);
    }
    EventInjector_InjectEventNoAck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  EventInjector_InjectEventNoAck_Params_Data();
  ~EventInjector_InjectEventNoAck_Params_Data() = delete;
};
static_assert(sizeof(EventInjector_InjectEventNoAck_Params_Data) == 24,
              "Bad sizeof(EventInjector_InjectEventNoAck_Params_Data)");
class  EventInjector_InjectEventNoAckNoRewriters_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EventInjector_InjectEventNoAckNoRewriters_Params_Data));
      new (data()) EventInjector_InjectEventNoAckNoRewriters_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EventInjector_InjectEventNoAckNoRewriters_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EventInjector_InjectEventNoAckNoRewriters_Params_Data>(index_);
    }
    EventInjector_InjectEventNoAckNoRewriters_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  EventInjector_InjectEventNoAckNoRewriters_Params_Data();
  ~EventInjector_InjectEventNoAckNoRewriters_Params_Data() = delete;
};
static_assert(sizeof(EventInjector_InjectEventNoAckNoRewriters_Params_Data) == 24,
              "Bad sizeof(EventInjector_InjectEventNoAckNoRewriters_Params_Data)");

}  // namespace internal
class EventInjector_InjectEvent_ParamsDataView {
 public:
  EventInjector_InjectEvent_ParamsDataView() {}

  EventInjector_InjectEvent_ParamsDataView(
      internal::EventInjector_InjectEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::EventInjector_InjectEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EventInjector_InjectEvent_ResponseParamsDataView {
 public:
  EventInjector_InjectEvent_ResponseParamsDataView() {}

  EventInjector_InjectEvent_ResponseParamsDataView(
      internal::EventInjector_InjectEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::EventInjector_InjectEvent_ResponseParams_Data* data_ = nullptr;
};

class EventInjector_InjectEventNoAck_ParamsDataView {
 public:
  EventInjector_InjectEventNoAck_ParamsDataView() {}

  EventInjector_InjectEventNoAck_ParamsDataView(
      internal::EventInjector_InjectEventNoAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::EventInjector_InjectEventNoAck_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EventInjector_InjectEventNoAckNoRewriters_ParamsDataView {
 public:
  EventInjector_InjectEventNoAckNoRewriters_ParamsDataView() {}

  EventInjector_InjectEventNoAckNoRewriters_ParamsDataView(
      internal::EventInjector_InjectEventNoAckNoRewriters_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::EventInjector_InjectEventNoAckNoRewriters_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void EventInjector_InjectEvent_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}




inline void EventInjector_InjectEventNoAck_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}


inline void EventInjector_InjectEventNoAckNoRewriters_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_PARAMS_DATA_H_