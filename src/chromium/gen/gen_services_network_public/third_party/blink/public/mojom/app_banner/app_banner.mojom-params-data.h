// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerController_BannerPromptRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerController_BannerPromptRequest_Params_Data));
      new (data()) AppBannerController_BannerPromptRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerController_BannerPromptRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerController_BannerPromptRequest_Params_Data>(index_);
    }
    AppBannerController_BannerPromptRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data service;
  mojo::internal::Handle_Data event;
  uint8_t require_gesture : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> platform;

 private:
  AppBannerController_BannerPromptRequest_Params_Data();
  ~AppBannerController_BannerPromptRequest_Params_Data() = delete;
};
static_assert(sizeof(AppBannerController_BannerPromptRequest_Params_Data) == 32,
              "Bad sizeof(AppBannerController_BannerPromptRequest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerController_BannerPromptRequest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data));
      new (data()) AppBannerController_BannerPromptRequest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerController_BannerPromptRequest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerController_BannerPromptRequest_ResponseParams_Data>(index_);
    }
    AppBannerController_BannerPromptRequest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reply;
  uint8_t padfinal_[4];

 private:
  AppBannerController_BannerPromptRequest_ResponseParams_Data();
  ~AppBannerController_BannerPromptRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data) == 16,
              "Bad sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerEvent_BannerAccepted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerEvent_BannerAccepted_Params_Data));
      new (data()) AppBannerEvent_BannerAccepted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerEvent_BannerAccepted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerEvent_BannerAccepted_Params_Data>(index_);
    }
    AppBannerEvent_BannerAccepted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> platform;

 private:
  AppBannerEvent_BannerAccepted_Params_Data();
  ~AppBannerEvent_BannerAccepted_Params_Data() = delete;
};
static_assert(sizeof(AppBannerEvent_BannerAccepted_Params_Data) == 16,
              "Bad sizeof(AppBannerEvent_BannerAccepted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerEvent_BannerDismissed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerEvent_BannerDismissed_Params_Data));
      new (data()) AppBannerEvent_BannerDismissed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerEvent_BannerDismissed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerEvent_BannerDismissed_Params_Data>(index_);
    }
    AppBannerEvent_BannerDismissed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AppBannerEvent_BannerDismissed_Params_Data();
  ~AppBannerEvent_BannerDismissed_Params_Data() = delete;
};
static_assert(sizeof(AppBannerEvent_BannerDismissed_Params_Data) == 8,
              "Bad sizeof(AppBannerEvent_BannerDismissed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerService_DisplayAppBanner_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerService_DisplayAppBanner_Params_Data));
      new (data()) AppBannerService_DisplayAppBanner_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerService_DisplayAppBanner_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerService_DisplayAppBanner_Params_Data>(index_);
    }
    AppBannerService_DisplayAppBanner_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AppBannerService_DisplayAppBanner_Params_Data();
  ~AppBannerService_DisplayAppBanner_Params_Data() = delete;
};
static_assert(sizeof(AppBannerService_DisplayAppBanner_Params_Data) == 8,
              "Bad sizeof(AppBannerService_DisplayAppBanner_Params_Data)");

}  // namespace internal
class AppBannerController_BannerPromptRequest_ParamsDataView {
 public:
  AppBannerController_BannerPromptRequest_ParamsDataView() {}

  AppBannerController_BannerPromptRequest_ParamsDataView(
      internal::AppBannerController_BannerPromptRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeService() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::AppBannerServicePtrDataView>(
            &data_->service, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeEvent() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::AppBannerEventRequestDataView>(
            &data_->event, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetPlatformDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatform(UserType* output) {
    auto* pointer = data_->platform.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  bool require_gesture() const {
    return data_->require_gesture;
  }
 private:
  internal::AppBannerController_BannerPromptRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppBannerController_BannerPromptRequest_ResponseParamsDataView {
 public:
  AppBannerController_BannerPromptRequest_ResponseParamsDataView() {}

  AppBannerController_BannerPromptRequest_ResponseParamsDataView(
      internal::AppBannerController_BannerPromptRequest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReply(UserType* output) const {
    auto data_value = data_->reply;
    return mojo::internal::Deserialize<::blink::mojom::AppBannerPromptReply>(
        data_value, output);
  }

  AppBannerPromptReply reply() const {
    return static_cast<AppBannerPromptReply>(data_->reply);
  }
 private:
  internal::AppBannerController_BannerPromptRequest_ResponseParams_Data* data_ = nullptr;
};

class AppBannerEvent_BannerAccepted_ParamsDataView {
 public:
  AppBannerEvent_BannerAccepted_ParamsDataView() {}

  AppBannerEvent_BannerAccepted_ParamsDataView(
      internal::AppBannerEvent_BannerAccepted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPlatformDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatform(UserType* output) {
    auto* pointer = data_->platform.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppBannerEvent_BannerAccepted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppBannerEvent_BannerDismissed_ParamsDataView {
 public:
  AppBannerEvent_BannerDismissed_ParamsDataView() {}

  AppBannerEvent_BannerDismissed_ParamsDataView(
      internal::AppBannerEvent_BannerDismissed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppBannerEvent_BannerDismissed_Params_Data* data_ = nullptr;
};

class AppBannerService_DisplayAppBanner_ParamsDataView {
 public:
  AppBannerService_DisplayAppBanner_ParamsDataView() {}

  AppBannerService_DisplayAppBanner_ParamsDataView(
      internal::AppBannerService_DisplayAppBanner_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppBannerService_DisplayAppBanner_Params_Data* data_ = nullptr;
};


inline void AppBannerController_BannerPromptRequest_ParamsDataView::GetPlatformDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->platform.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void AppBannerEvent_BannerAccepted_ParamsDataView::GetPlatformDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->platform.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_PARAMS_DATA_H_