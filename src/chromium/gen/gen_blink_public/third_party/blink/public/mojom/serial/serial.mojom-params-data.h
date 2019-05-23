// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SerialService_GetPorts_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialService_GetPorts_Params_Data));
      new (data()) SerialService_GetPorts_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialService_GetPorts_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialService_GetPorts_Params_Data>(index_);
    }
    SerialService_GetPorts_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialService_GetPorts_Params_Data();
  ~SerialService_GetPorts_Params_Data() = delete;
};
static_assert(sizeof(SerialService_GetPorts_Params_Data) == 8,
              "Bad sizeof(SerialService_GetPorts_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SerialService_GetPorts_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialService_GetPorts_ResponseParams_Data));
      new (data()) SerialService_GetPorts_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialService_GetPorts_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialService_GetPorts_ResponseParams_Data>(index_);
    }
    SerialService_GetPorts_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SerialPortInfo_Data>>> ports;

 private:
  SerialService_GetPorts_ResponseParams_Data();
  ~SerialService_GetPorts_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialService_GetPorts_ResponseParams_Data) == 16,
              "Bad sizeof(SerialService_GetPorts_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SerialService_RequestPort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialService_RequestPort_Params_Data));
      new (data()) SerialService_RequestPort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialService_RequestPort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialService_RequestPort_Params_Data>(index_);
    }
    SerialService_RequestPort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SerialPortFilter_Data>>> filters;

 private:
  SerialService_RequestPort_Params_Data();
  ~SerialService_RequestPort_Params_Data() = delete;
};
static_assert(sizeof(SerialService_RequestPort_Params_Data) == 16,
              "Bad sizeof(SerialService_RequestPort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SerialService_RequestPort_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialService_RequestPort_ResponseParams_Data));
      new (data()) SerialService_RequestPort_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialService_RequestPort_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialService_RequestPort_ResponseParams_Data>(index_);
    }
    SerialService_RequestPort_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialPortInfo_Data> port;

 private:
  SerialService_RequestPort_ResponseParams_Data();
  ~SerialService_RequestPort_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialService_RequestPort_ResponseParams_Data) == 16,
              "Bad sizeof(SerialService_RequestPort_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SerialService_GetPort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialService_GetPort_Params_Data));
      new (data()) SerialService_GetPort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialService_GetPort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialService_GetPort_Params_Data>(index_);
    }
    SerialService_GetPort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  mojo::internal::Handle_Data port_request;
  uint8_t padfinal_[4];

 private:
  SerialService_GetPort_Params_Data();
  ~SerialService_GetPort_Params_Data() = delete;
};
static_assert(sizeof(SerialService_GetPort_Params_Data) == 24,
              "Bad sizeof(SerialService_GetPort_Params_Data)");

}  // namespace internal
class SerialService_GetPorts_ParamsDataView {
 public:
  SerialService_GetPorts_ParamsDataView() {}

  SerialService_GetPorts_ParamsDataView(
      internal::SerialService_GetPorts_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialService_GetPorts_Params_Data* data_ = nullptr;
};

class SerialService_GetPorts_ResponseParamsDataView {
 public:
  SerialService_GetPorts_ResponseParamsDataView() {}

  SerialService_GetPorts_ResponseParamsDataView(
      internal::SerialService_GetPorts_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPortsDataView(
      mojo::ArrayDataView<SerialPortInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPorts(UserType* output) {
    auto* pointer = data_->ports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SerialPortInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SerialService_GetPorts_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialService_RequestPort_ParamsDataView {
 public:
  SerialService_RequestPort_ParamsDataView() {}

  SerialService_RequestPort_ParamsDataView(
      internal::SerialService_RequestPort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<SerialPortFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilters(UserType* output) {
    auto* pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SerialPortFilterDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SerialService_RequestPort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialService_RequestPort_ResponseParamsDataView {
 public:
  SerialService_RequestPort_ResponseParamsDataView() {}

  SerialService_RequestPort_ResponseParamsDataView(
      internal::SerialService_RequestPort_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPortDataView(
      SerialPortInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPort(UserType* output) {
    auto* pointer = data_->port.Get();
    return mojo::internal::Deserialize<::blink::mojom::SerialPortInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialService_RequestPort_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialService_GetPort_ParamsDataView {
 public:
  SerialService_GetPort_ParamsDataView() {}

  SerialService_GetPort_ParamsDataView(
      internal::SerialService_GetPort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakePortRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SerialPortRequestDataView>(
            &data_->port_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SerialService_GetPort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void SerialService_GetPorts_ResponseParamsDataView::GetPortsDataView(
    mojo::ArrayDataView<SerialPortInfoDataView>* output) {
  auto pointer = data_->ports.Get();
  *output = mojo::ArrayDataView<SerialPortInfoDataView>(pointer, context_);
}


inline void SerialService_RequestPort_ParamsDataView::GetFiltersDataView(
    mojo::ArrayDataView<SerialPortFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<SerialPortFilterDataView>(pointer, context_);
}


inline void SerialService_RequestPort_ResponseParamsDataView::GetPortDataView(
    SerialPortInfoDataView* output) {
  auto pointer = data_->port.Get();
  *output = SerialPortInfoDataView(pointer, context_);
}


inline void SerialService_GetPort_ParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_PARAMS_DATA_H_