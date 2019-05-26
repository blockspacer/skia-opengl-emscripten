// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebUsbService_GetDevices_Params_Data));
      new (data()) WebUsbService_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebUsbService_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebUsbService_GetDevices_Params_Data>(index_);
    }
    WebUsbService_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WebUsbService_GetDevices_Params_Data();
  ~WebUsbService_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetDevices_Params_Data) == 8,
              "Bad sizeof(WebUsbService_GetDevices_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebUsbService_GetDevices_ResponseParams_Data));
      new (data()) WebUsbService_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebUsbService_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebUsbService_GetDevices_ResponseParams_Data>(index_);
    }
    WebUsbService_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data>>> results;

 private:
  WebUsbService_GetDevices_ResponseParams_Data();
  ~WebUsbService_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(WebUsbService_GetDevices_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebUsbService_GetDevice_Params_Data));
      new (data()) WebUsbService_GetDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebUsbService_GetDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebUsbService_GetDevice_Params_Data>(index_);
    }
    WebUsbService_GetDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  mojo::internal::Handle_Data device_requestd;
  uint8_t padfinal_[4];

 private:
  WebUsbService_GetDevice_Params_Data();
  ~WebUsbService_GetDevice_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetDevice_Params_Data) == 24,
              "Bad sizeof(WebUsbService_GetDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetPermission_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebUsbService_GetPermission_Params_Data));
      new (data()) WebUsbService_GetPermission_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebUsbService_GetPermission_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebUsbService_GetPermission_Params_Data>(index_);
    }
    WebUsbService_GetPermission_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::device::mojom::internal::UsbDeviceFilter_Data>>> device_filters;

 private:
  WebUsbService_GetPermission_Params_Data();
  ~WebUsbService_GetPermission_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetPermission_Params_Data) == 16,
              "Bad sizeof(WebUsbService_GetPermission_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetPermission_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebUsbService_GetPermission_ResponseParams_Data));
      new (data()) WebUsbService_GetPermission_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebUsbService_GetPermission_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebUsbService_GetPermission_ResponseParams_Data>(index_);
    }
    WebUsbService_GetPermission_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data> result;

 private:
  WebUsbService_GetPermission_ResponseParams_Data();
  ~WebUsbService_GetPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetPermission_ResponseParams_Data) == 16,
              "Bad sizeof(WebUsbService_GetPermission_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebUsbService_SetClient_Params_Data));
      new (data()) WebUsbService_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebUsbService_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebUsbService_SetClient_Params_Data>(index_);
    }
    WebUsbService_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  WebUsbService_SetClient_Params_Data();
  ~WebUsbService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_SetClient_Params_Data) == 16,
              "Bad sizeof(WebUsbService_SetClient_Params_Data)");

}  // namespace internal
class WebUsbService_GetDevices_ParamsDataView {
 public:
  WebUsbService_GetDevices_ParamsDataView() {}

  WebUsbService_GetDevices_ParamsDataView(
      internal::WebUsbService_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebUsbService_GetDevices_Params_Data* data_ = nullptr;
};

class WebUsbService_GetDevices_ResponseParamsDataView {
 public:
  WebUsbService_GetDevices_ResponseParamsDataView() {}

  WebUsbService_GetDevices_ResponseParamsDataView(
      internal::WebUsbService_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebUsbService_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebUsbService_GetDevice_ParamsDataView {
 public:
  WebUsbService_GetDevice_ParamsDataView() {}

  WebUsbService_GetDevice_ParamsDataView(
      internal::WebUsbService_GetDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGuid(UserType* output) {
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDeviceRequestd() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::UsbDeviceRequestDataView>(
            &data_->device_requestd, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebUsbService_GetDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebUsbService_GetPermission_ParamsDataView {
 public:
  WebUsbService_GetPermission_ParamsDataView() {}

  WebUsbService_GetPermission_ParamsDataView(
      internal::WebUsbService_GetPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceFiltersDataView(
      mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceFilters(UserType* output) {
    auto* pointer = data_->device_filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebUsbService_GetPermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebUsbService_GetPermission_ResponseParamsDataView {
 public:
  WebUsbService_GetPermission_ResponseParamsDataView() {}

  WebUsbService_GetPermission_ResponseParamsDataView(
      internal::WebUsbService_GetPermission_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::device::mojom::UsbDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebUsbService_GetPermission_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebUsbService_SetClient_ParamsDataView {
 public:
  WebUsbService_SetClient_ParamsDataView() {}

  WebUsbService_SetClient_ParamsDataView(
      internal::WebUsbService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::UsbDeviceManagerClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebUsbService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void WebUsbService_GetDevices_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>(pointer, context_);
}


inline void WebUsbService_GetDevice_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebUsbService_GetPermission_ParamsDataView::GetDeviceFiltersDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>* output) {
  auto pointer = data_->device_filters.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>(pointer, context_);
}


inline void WebUsbService_GetPermission_ResponseParamsDataView::GetResultDataView(
    ::device::mojom::UsbDeviceInfoDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::device::mojom::UsbDeviceInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_PARAMS_DATA_H_