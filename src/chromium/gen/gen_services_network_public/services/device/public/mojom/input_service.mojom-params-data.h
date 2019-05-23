// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_PARAMS_DATA_H_

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
class  InputDeviceManagerClient_InputDeviceAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManagerClient_InputDeviceAdded_Params_Data));
      new (data()) InputDeviceManagerClient_InputDeviceAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManagerClient_InputDeviceAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManagerClient_InputDeviceAdded_Params_Data>(index_);
    }
    InputDeviceManagerClient_InputDeviceAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::InputDeviceInfo_Data> device_info;

 private:
  InputDeviceManagerClient_InputDeviceAdded_Params_Data();
  ~InputDeviceManagerClient_InputDeviceAdded_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManagerClient_InputDeviceAdded_Params_Data) == 16,
              "Bad sizeof(InputDeviceManagerClient_InputDeviceAdded_Params_Data)");
class  InputDeviceManagerClient_InputDeviceRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManagerClient_InputDeviceRemoved_Params_Data));
      new (data()) InputDeviceManagerClient_InputDeviceRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManagerClient_InputDeviceRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManagerClient_InputDeviceRemoved_Params_Data>(index_);
    }
    InputDeviceManagerClient_InputDeviceRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  InputDeviceManagerClient_InputDeviceRemoved_Params_Data();
  ~InputDeviceManagerClient_InputDeviceRemoved_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManagerClient_InputDeviceRemoved_Params_Data) == 16,
              "Bad sizeof(InputDeviceManagerClient_InputDeviceRemoved_Params_Data)");
class  InputDeviceManager_GetDevicesAndSetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevicesAndSetClient_Params_Data));
      new (data()) InputDeviceManager_GetDevicesAndSetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevicesAndSetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevicesAndSetClient_Params_Data>(index_);
    }
    InputDeviceManager_GetDevicesAndSetClient_Params_Data* operator->() { return data(); }

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
  InputDeviceManager_GetDevicesAndSetClient_Params_Data();
  ~InputDeviceManager_GetDevicesAndSetClient_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevicesAndSetClient_Params_Data) == 16,
              "Bad sizeof(InputDeviceManager_GetDevicesAndSetClient_Params_Data)");
class  InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data));
      new (data()) InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data>(index_);
    }
    InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::InputDeviceInfo_Data>>> devices;

 private:
  InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data();
  ~InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data) == 16,
              "Bad sizeof(InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data)");
class  InputDeviceManager_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevices_Params_Data));
      new (data()) InputDeviceManager_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevices_Params_Data>(index_);
    }
    InputDeviceManager_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputDeviceManager_GetDevices_Params_Data();
  ~InputDeviceManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevices_Params_Data) == 8,
              "Bad sizeof(InputDeviceManager_GetDevices_Params_Data)");
class  InputDeviceManager_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevices_ResponseParams_Data));
      new (data()) InputDeviceManager_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevices_ResponseParams_Data>(index_);
    }
    InputDeviceManager_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::InputDeviceInfo_Data>>> devices;

 private:
  InputDeviceManager_GetDevices_ResponseParams_Data();
  ~InputDeviceManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(InputDeviceManager_GetDevices_ResponseParams_Data)");

}  // namespace internal
class InputDeviceManagerClient_InputDeviceAdded_ParamsDataView {
 public:
  InputDeviceManagerClient_InputDeviceAdded_ParamsDataView() {}

  InputDeviceManagerClient_InputDeviceAdded_ParamsDataView(
      internal::InputDeviceManagerClient_InputDeviceAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      InputDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfo(UserType* output) {
    auto* pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::mojom::InputDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputDeviceManagerClient_InputDeviceAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceManagerClient_InputDeviceRemoved_ParamsDataView {
 public:
  InputDeviceManagerClient_InputDeviceRemoved_ParamsDataView() {}

  InputDeviceManagerClient_InputDeviceRemoved_ParamsDataView(
      internal::InputDeviceManagerClient_InputDeviceRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputDeviceManagerClient_InputDeviceRemoved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceManager_GetDevicesAndSetClient_ParamsDataView {
 public:
  InputDeviceManager_GetDevicesAndSetClient_ParamsDataView() {}

  InputDeviceManager_GetDevicesAndSetClient_ParamsDataView(
      internal::InputDeviceManager_GetDevicesAndSetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::InputDeviceManagerClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InputDeviceManager_GetDevicesAndSetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceManager_GetDevicesAndSetClient_ResponseParamsDataView {
 public:
  InputDeviceManager_GetDevicesAndSetClient_ResponseParamsDataView() {}

  InputDeviceManager_GetDevicesAndSetClient_ResponseParamsDataView(
      internal::InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<InputDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::InputDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceManager_GetDevices_ParamsDataView {
 public:
  InputDeviceManager_GetDevices_ParamsDataView() {}

  InputDeviceManager_GetDevices_ParamsDataView(
      internal::InputDeviceManager_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputDeviceManager_GetDevices_Params_Data* data_ = nullptr;
};

class InputDeviceManager_GetDevices_ResponseParamsDataView {
 public:
  InputDeviceManager_GetDevices_ResponseParamsDataView() {}

  InputDeviceManager_GetDevices_ResponseParamsDataView(
      internal::InputDeviceManager_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<InputDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::InputDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InputDeviceManager_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void InputDeviceManagerClient_InputDeviceAdded_ParamsDataView::GetDeviceInfoDataView(
    InputDeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = InputDeviceInfoDataView(pointer, context_);
}


inline void InputDeviceManagerClient_InputDeviceRemoved_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void InputDeviceManager_GetDevicesAndSetClient_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<InputDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<InputDeviceInfoDataView>(pointer, context_);
}




inline void InputDeviceManager_GetDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<InputDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<InputDeviceInfoDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_PARAMS_DATA_H_