// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_PARAMS_DATA_H_

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
class  Sensor_GetDefaultConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_GetDefaultConfiguration_Params_Data));
      new (data()) Sensor_GetDefaultConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_GetDefaultConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_GetDefaultConfiguration_Params_Data>(index_);
    }
    Sensor_GetDefaultConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Sensor_GetDefaultConfiguration_Params_Data();
  ~Sensor_GetDefaultConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Sensor_GetDefaultConfiguration_Params_Data) == 8,
              "Bad sizeof(Sensor_GetDefaultConfiguration_Params_Data)");
class  Sensor_GetDefaultConfiguration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_GetDefaultConfiguration_ResponseParams_Data));
      new (data()) Sensor_GetDefaultConfiguration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_GetDefaultConfiguration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_GetDefaultConfiguration_ResponseParams_Data>(index_);
    }
    Sensor_GetDefaultConfiguration_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SensorConfiguration_Data> configuration;

 private:
  Sensor_GetDefaultConfiguration_ResponseParams_Data();
  ~Sensor_GetDefaultConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(Sensor_GetDefaultConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(Sensor_GetDefaultConfiguration_ResponseParams_Data)");
class  Sensor_AddConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_AddConfiguration_Params_Data));
      new (data()) Sensor_AddConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_AddConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_AddConfiguration_Params_Data>(index_);
    }
    Sensor_AddConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SensorConfiguration_Data> configuration;

 private:
  Sensor_AddConfiguration_Params_Data();
  ~Sensor_AddConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Sensor_AddConfiguration_Params_Data) == 16,
              "Bad sizeof(Sensor_AddConfiguration_Params_Data)");
class  Sensor_AddConfiguration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_AddConfiguration_ResponseParams_Data));
      new (data()) Sensor_AddConfiguration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_AddConfiguration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_AddConfiguration_ResponseParams_Data>(index_);
    }
    Sensor_AddConfiguration_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Sensor_AddConfiguration_ResponseParams_Data();
  ~Sensor_AddConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(Sensor_AddConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(Sensor_AddConfiguration_ResponseParams_Data)");
class  Sensor_RemoveConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_RemoveConfiguration_Params_Data));
      new (data()) Sensor_RemoveConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_RemoveConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_RemoveConfiguration_Params_Data>(index_);
    }
    Sensor_RemoveConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SensorConfiguration_Data> configuration;

 private:
  Sensor_RemoveConfiguration_Params_Data();
  ~Sensor_RemoveConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Sensor_RemoveConfiguration_Params_Data) == 16,
              "Bad sizeof(Sensor_RemoveConfiguration_Params_Data)");
class  Sensor_Suspend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_Suspend_Params_Data));
      new (data()) Sensor_Suspend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_Suspend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_Suspend_Params_Data>(index_);
    }
    Sensor_Suspend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Sensor_Suspend_Params_Data();
  ~Sensor_Suspend_Params_Data() = delete;
};
static_assert(sizeof(Sensor_Suspend_Params_Data) == 8,
              "Bad sizeof(Sensor_Suspend_Params_Data)");
class  Sensor_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_Resume_Params_Data));
      new (data()) Sensor_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_Resume_Params_Data>(index_);
    }
    Sensor_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Sensor_Resume_Params_Data();
  ~Sensor_Resume_Params_Data() = delete;
};
static_assert(sizeof(Sensor_Resume_Params_Data) == 8,
              "Bad sizeof(Sensor_Resume_Params_Data)");
class  Sensor_ConfigureReadingChangeNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_ConfigureReadingChangeNotifications_Params_Data));
      new (data()) Sensor_ConfigureReadingChangeNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_ConfigureReadingChangeNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_ConfigureReadingChangeNotifications_Params_Data>(index_);
    }
    Sensor_ConfigureReadingChangeNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  Sensor_ConfigureReadingChangeNotifications_Params_Data();
  ~Sensor_ConfigureReadingChangeNotifications_Params_Data() = delete;
};
static_assert(sizeof(Sensor_ConfigureReadingChangeNotifications_Params_Data) == 16,
              "Bad sizeof(Sensor_ConfigureReadingChangeNotifications_Params_Data)");
class  SensorClient_RaiseError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SensorClient_RaiseError_Params_Data));
      new (data()) SensorClient_RaiseError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SensorClient_RaiseError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SensorClient_RaiseError_Params_Data>(index_);
    }
    SensorClient_RaiseError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SensorClient_RaiseError_Params_Data();
  ~SensorClient_RaiseError_Params_Data() = delete;
};
static_assert(sizeof(SensorClient_RaiseError_Params_Data) == 8,
              "Bad sizeof(SensorClient_RaiseError_Params_Data)");
class  SensorClient_SensorReadingChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SensorClient_SensorReadingChanged_Params_Data));
      new (data()) SensorClient_SensorReadingChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SensorClient_SensorReadingChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SensorClient_SensorReadingChanged_Params_Data>(index_);
    }
    SensorClient_SensorReadingChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SensorClient_SensorReadingChanged_Params_Data();
  ~SensorClient_SensorReadingChanged_Params_Data() = delete;
};
static_assert(sizeof(SensorClient_SensorReadingChanged_Params_Data) == 8,
              "Bad sizeof(SensorClient_SensorReadingChanged_Params_Data)");

}  // namespace internal
class Sensor_GetDefaultConfiguration_ParamsDataView {
 public:
  Sensor_GetDefaultConfiguration_ParamsDataView() {}

  Sensor_GetDefaultConfiguration_ParamsDataView(
      internal::Sensor_GetDefaultConfiguration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Sensor_GetDefaultConfiguration_Params_Data* data_ = nullptr;
};

class Sensor_GetDefaultConfiguration_ResponseParamsDataView {
 public:
  Sensor_GetDefaultConfiguration_ResponseParamsDataView() {}

  Sensor_GetDefaultConfiguration_ResponseParamsDataView(
      internal::Sensor_GetDefaultConfiguration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigurationDataView(
      SensorConfigurationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfiguration(UserType* output) {
    auto* pointer = data_->configuration.Get();
    return mojo::internal::Deserialize<::device::mojom::SensorConfigurationDataView>(
        pointer, output, context_);
  }
 private:
  internal::Sensor_GetDefaultConfiguration_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Sensor_AddConfiguration_ParamsDataView {
 public:
  Sensor_AddConfiguration_ParamsDataView() {}

  Sensor_AddConfiguration_ParamsDataView(
      internal::Sensor_AddConfiguration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigurationDataView(
      SensorConfigurationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfiguration(UserType* output) {
    auto* pointer = data_->configuration.Get();
    return mojo::internal::Deserialize<::device::mojom::SensorConfigurationDataView>(
        pointer, output, context_);
  }
 private:
  internal::Sensor_AddConfiguration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Sensor_AddConfiguration_ResponseParamsDataView {
 public:
  Sensor_AddConfiguration_ResponseParamsDataView() {}

  Sensor_AddConfiguration_ResponseParamsDataView(
      internal::Sensor_AddConfiguration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Sensor_AddConfiguration_ResponseParams_Data* data_ = nullptr;
};

class Sensor_RemoveConfiguration_ParamsDataView {
 public:
  Sensor_RemoveConfiguration_ParamsDataView() {}

  Sensor_RemoveConfiguration_ParamsDataView(
      internal::Sensor_RemoveConfiguration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigurationDataView(
      SensorConfigurationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfiguration(UserType* output) {
    auto* pointer = data_->configuration.Get();
    return mojo::internal::Deserialize<::device::mojom::SensorConfigurationDataView>(
        pointer, output, context_);
  }
 private:
  internal::Sensor_RemoveConfiguration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Sensor_Suspend_ParamsDataView {
 public:
  Sensor_Suspend_ParamsDataView() {}

  Sensor_Suspend_ParamsDataView(
      internal::Sensor_Suspend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Sensor_Suspend_Params_Data* data_ = nullptr;
};

class Sensor_Resume_ParamsDataView {
 public:
  Sensor_Resume_ParamsDataView() {}

  Sensor_Resume_ParamsDataView(
      internal::Sensor_Resume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Sensor_Resume_Params_Data* data_ = nullptr;
};

class Sensor_ConfigureReadingChangeNotifications_ParamsDataView {
 public:
  Sensor_ConfigureReadingChangeNotifications_ParamsDataView() {}

  Sensor_ConfigureReadingChangeNotifications_ParamsDataView(
      internal::Sensor_ConfigureReadingChangeNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::Sensor_ConfigureReadingChangeNotifications_Params_Data* data_ = nullptr;
};

class SensorClient_RaiseError_ParamsDataView {
 public:
  SensorClient_RaiseError_ParamsDataView() {}

  SensorClient_RaiseError_ParamsDataView(
      internal::SensorClient_RaiseError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SensorClient_RaiseError_Params_Data* data_ = nullptr;
};

class SensorClient_SensorReadingChanged_ParamsDataView {
 public:
  SensorClient_SensorReadingChanged_ParamsDataView() {}

  SensorClient_SensorReadingChanged_ParamsDataView(
      internal::SensorClient_SensorReadingChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SensorClient_SensorReadingChanged_Params_Data* data_ = nullptr;
};




inline void Sensor_GetDefaultConfiguration_ResponseParamsDataView::GetConfigurationDataView(
    SensorConfigurationDataView* output) {
  auto pointer = data_->configuration.Get();
  *output = SensorConfigurationDataView(pointer, context_);
}


inline void Sensor_AddConfiguration_ParamsDataView::GetConfigurationDataView(
    SensorConfigurationDataView* output) {
  auto pointer = data_->configuration.Get();
  *output = SensorConfigurationDataView(pointer, context_);
}




inline void Sensor_RemoveConfiguration_ParamsDataView::GetConfigurationDataView(
    SensorConfigurationDataView* output) {
  auto pointer = data_->configuration.Get();
  *output = SensorConfigurationDataView(pointer, context_);
}











}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_PARAMS_DATA_H_