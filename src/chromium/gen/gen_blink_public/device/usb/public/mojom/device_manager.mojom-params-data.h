// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_PARAMS_DATA_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_PARAMS_DATA_H_

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
class  UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data));
      new (data()) UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data>(index_);
    }
    UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data* operator->() { return data(); }

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
  UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data();
  ~UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data) == 16,
              "Bad sizeof(UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data)");
class  UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data));
      new (data()) UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data>(index_);
    }
    UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data* operator->() { return data(); }

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
  UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data();
  ~UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data)");
class  UsbDeviceManager_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_GetDevices_Params_Data));
      new (data()) UsbDeviceManager_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_GetDevices_Params_Data>(index_);
    }
    UsbDeviceManager_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::UsbEnumerationOptions_Data> options;

 private:
  UsbDeviceManager_GetDevices_Params_Data();
  ~UsbDeviceManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_GetDevices_Params_Data) == 16,
              "Bad sizeof(UsbDeviceManager_GetDevices_Params_Data)");
class  UsbDeviceManager_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_GetDevices_ResponseParams_Data));
      new (data()) UsbDeviceManager_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_GetDevices_ResponseParams_Data>(index_);
    }
    UsbDeviceManager_GetDevices_ResponseParams_Data* operator->() { return data(); }

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
  UsbDeviceManager_GetDevices_ResponseParams_Data();
  ~UsbDeviceManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDeviceManager_GetDevices_ResponseParams_Data)");
class  UsbDeviceManager_GetDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_GetDevice_Params_Data));
      new (data()) UsbDeviceManager_GetDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_GetDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_GetDevice_Params_Data>(index_);
    }
    UsbDeviceManager_GetDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  mojo::internal::Handle_Data device_request;
  mojo::internal::Interface_Data device_client;
  uint8_t padfinal_[4];

 private:
  UsbDeviceManager_GetDevice_Params_Data();
  ~UsbDeviceManager_GetDevice_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_GetDevice_Params_Data) == 32,
              "Bad sizeof(UsbDeviceManager_GetDevice_Params_Data)");
class  UsbDeviceManager_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_SetClient_Params_Data));
      new (data()) UsbDeviceManager_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_SetClient_Params_Data>(index_);
    }
    UsbDeviceManager_SetClient_Params_Data* operator->() { return data(); }

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
  UsbDeviceManager_SetClient_Params_Data();
  ~UsbDeviceManager_SetClient_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_SetClient_Params_Data) == 16,
              "Bad sizeof(UsbDeviceManager_SetClient_Params_Data)");

}  // namespace internal
class UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsDataView {
 public:
  UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsDataView() {}

  UsbDeviceManager_EnumerateDevicesAndSetClient_ParamsDataView(
      internal::UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data* data,
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
  internal::UsbDeviceManager_EnumerateDevicesAndSetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsDataView {
 public:
  UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsDataView() {}

  UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsDataView(
      internal::UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data* data,
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
  internal::UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_GetDevices_ParamsDataView {
 public:
  UsbDeviceManager_GetDevices_ParamsDataView() {}

  UsbDeviceManager_GetDevices_ParamsDataView(
      internal::UsbDeviceManager_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      ::device::mojom::UsbEnumerationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbEnumerationOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceManager_GetDevices_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_GetDevices_ResponseParamsDataView {
 public:
  UsbDeviceManager_GetDevices_ResponseParamsDataView() {}

  UsbDeviceManager_GetDevices_ResponseParamsDataView(
      internal::UsbDeviceManager_GetDevices_ResponseParams_Data* data,
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
  internal::UsbDeviceManager_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_GetDevice_ParamsDataView {
 public:
  UsbDeviceManager_GetDevice_ParamsDataView() {}

  UsbDeviceManager_GetDevice_ParamsDataView(
      internal::UsbDeviceManager_GetDevice_Params_Data* data,
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
  UserType TakeDeviceRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::UsbDeviceRequestDataView>(
            &data_->device_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeDeviceClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::UsbDeviceClientPtrDataView>(
            &data_->device_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UsbDeviceManager_GetDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceManager_SetClient_ParamsDataView {
 public:
  UsbDeviceManager_SetClient_ParamsDataView() {}

  UsbDeviceManager_SetClient_ParamsDataView(
      internal::UsbDeviceManager_SetClient_Params_Data* data,
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
  internal::UsbDeviceManager_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void UsbDeviceManager_EnumerateDevicesAndSetClient_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>(pointer, context_);
}


inline void UsbDeviceManager_GetDevices_ParamsDataView::GetOptionsDataView(
    ::device::mojom::UsbEnumerationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::device::mojom::UsbEnumerationOptionsDataView(pointer, context_);
}


inline void UsbDeviceManager_GetDevices_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>(pointer, context_);
}


inline void UsbDeviceManager_GetDevice_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_PARAMS_DATA_H_