// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_PARAMS_DATA_H_

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
namespace network {
namespace mojom {
namespace internal {
class  NetLogExporter_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Start_Params_Data));
      new (data()) NetLogExporter_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Start_Params_Data>(index_);
    }
    NetLogExporter_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> destination;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> extra_constants;
  int32_t capture_mode;
  uint8_t pad2_[4];
  uint64_t max_file_size;

 private:
  NetLogExporter_Start_Params_Data();
  ~NetLogExporter_Start_Params_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Start_Params_Data) == 40,
              "Bad sizeof(NetLogExporter_Start_Params_Data)");
class  NetLogExporter_Start_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Start_ResponseParams_Data));
      new (data()) NetLogExporter_Start_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Start_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Start_ResponseParams_Data>(index_);
    }
    NetLogExporter_Start_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  NetLogExporter_Start_ResponseParams_Data();
  ~NetLogExporter_Start_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Start_ResponseParams_Data) == 16,
              "Bad sizeof(NetLogExporter_Start_ResponseParams_Data)");
class  NetLogExporter_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Stop_Params_Data));
      new (data()) NetLogExporter_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Stop_Params_Data>(index_);
    }
    NetLogExporter_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> polled_values;

 private:
  NetLogExporter_Stop_Params_Data();
  ~NetLogExporter_Stop_Params_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Stop_Params_Data) == 16,
              "Bad sizeof(NetLogExporter_Stop_Params_Data)");
class  NetLogExporter_Stop_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Stop_ResponseParams_Data));
      new (data()) NetLogExporter_Stop_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Stop_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Stop_ResponseParams_Data>(index_);
    }
    NetLogExporter_Stop_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  NetLogExporter_Stop_ResponseParams_Data();
  ~NetLogExporter_Stop_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Stop_ResponseParams_Data) == 16,
              "Bad sizeof(NetLogExporter_Stop_ResponseParams_Data)");

}  // namespace internal
class NetLogExporter_Start_ParamsDataView {
 public:
  NetLogExporter_Start_ParamsDataView() {}

  NetLogExporter_Start_ParamsDataView(
      internal::NetLogExporter_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDestinationDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestination(UserType* output) {
    auto* pointer = data_->destination.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetExtraConstantsDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraConstants(UserType* output) {
    auto* pointer = data_->extra_constants.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaptureMode(UserType* output) const {
    auto data_value = data_->capture_mode;
    return mojo::internal::Deserialize<::network::mojom::NetLogCaptureMode>(
        data_value, output);
  }

  NetLogCaptureMode capture_mode() const {
    return static_cast<NetLogCaptureMode>(data_->capture_mode);
  }
  uint64_t max_file_size() const {
    return data_->max_file_size;
  }
 private:
  internal::NetLogExporter_Start_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetLogExporter_Start_ResponseParamsDataView {
 public:
  NetLogExporter_Start_ResponseParamsDataView() {}

  NetLogExporter_Start_ResponseParamsDataView(
      internal::NetLogExporter_Start_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::NetLogExporter_Start_ResponseParams_Data* data_ = nullptr;
};

class NetLogExporter_Stop_ParamsDataView {
 public:
  NetLogExporter_Stop_ParamsDataView() {}

  NetLogExporter_Stop_ParamsDataView(
      internal::NetLogExporter_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPolledValuesDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPolledValues(UserType* output) {
    auto* pointer = data_->polled_values.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetLogExporter_Stop_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetLogExporter_Stop_ResponseParamsDataView {
 public:
  NetLogExporter_Stop_ResponseParamsDataView() {}

  NetLogExporter_Stop_ResponseParamsDataView(
      internal::NetLogExporter_Stop_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::NetLogExporter_Stop_ResponseParams_Data* data_ = nullptr;
};


inline void NetLogExporter_Start_ParamsDataView::GetDestinationDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->destination.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void NetLogExporter_Start_ParamsDataView::GetExtraConstantsDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->extra_constants.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}




inline void NetLogExporter_Stop_ParamsDataView::GetPolledValuesDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->polled_values.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_PARAMS_DATA_H_