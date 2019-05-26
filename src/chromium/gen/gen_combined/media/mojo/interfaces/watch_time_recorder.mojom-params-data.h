// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_PARAMS_DATA_H_

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
namespace media {
namespace mojom {
namespace internal {
class  WatchTimeRecorder_RecordWatchTime_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_RecordWatchTime_Params_Data));
      new (data()) WatchTimeRecorder_RecordWatchTime_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_RecordWatchTime_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_RecordWatchTime_Params_Data>(index_);
    }
    WatchTimeRecorder_RecordWatchTime_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t key;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> watch_time;

 private:
  WatchTimeRecorder_RecordWatchTime_Params_Data();
  ~WatchTimeRecorder_RecordWatchTime_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_RecordWatchTime_Params_Data) == 24,
              "Bad sizeof(WatchTimeRecorder_RecordWatchTime_Params_Data)");
class  WatchTimeRecorder_FinalizeWatchTime_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_FinalizeWatchTime_Params_Data));
      new (data()) WatchTimeRecorder_FinalizeWatchTime_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_FinalizeWatchTime_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_FinalizeWatchTime_Params_Data>(index_);
    }
    WatchTimeRecorder_FinalizeWatchTime_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> watch_time_keys;

 private:
  WatchTimeRecorder_FinalizeWatchTime_Params_Data();
  ~WatchTimeRecorder_FinalizeWatchTime_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_FinalizeWatchTime_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_FinalizeWatchTime_Params_Data)");
class  WatchTimeRecorder_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_OnError_Params_Data));
      new (data()) WatchTimeRecorder_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_OnError_Params_Data>(index_);
    }
    WatchTimeRecorder_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  WatchTimeRecorder_OnError_Params_Data();
  ~WatchTimeRecorder_OnError_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_OnError_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_OnError_Params_Data)");
class  WatchTimeRecorder_UpdateSecondaryProperties_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_UpdateSecondaryProperties_Params_Data));
      new (data()) WatchTimeRecorder_UpdateSecondaryProperties_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_UpdateSecondaryProperties_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_UpdateSecondaryProperties_Params_Data>(index_);
    }
    WatchTimeRecorder_UpdateSecondaryProperties_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SecondaryPlaybackProperties_Data> secondary_properties;

 private:
  WatchTimeRecorder_UpdateSecondaryProperties_Params_Data();
  ~WatchTimeRecorder_UpdateSecondaryProperties_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_UpdateSecondaryProperties_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_UpdateSecondaryProperties_Params_Data)");
class  WatchTimeRecorder_SetAutoplayInitiated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_SetAutoplayInitiated_Params_Data));
      new (data()) WatchTimeRecorder_SetAutoplayInitiated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_SetAutoplayInitiated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_SetAutoplayInitiated_Params_Data>(index_);
    }
    WatchTimeRecorder_SetAutoplayInitiated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t value : 1;
  uint8_t padfinal_[7];

 private:
  WatchTimeRecorder_SetAutoplayInitiated_Params_Data();
  ~WatchTimeRecorder_SetAutoplayInitiated_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_SetAutoplayInitiated_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_SetAutoplayInitiated_Params_Data)");
class  WatchTimeRecorder_OnDurationChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_OnDurationChanged_Params_Data));
      new (data()) WatchTimeRecorder_OnDurationChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_OnDurationChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_OnDurationChanged_Params_Data>(index_);
    }
    WatchTimeRecorder_OnDurationChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;

 private:
  WatchTimeRecorder_OnDurationChanged_Params_Data();
  ~WatchTimeRecorder_OnDurationChanged_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_OnDurationChanged_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_OnDurationChanged_Params_Data)");
class  WatchTimeRecorder_UpdateUnderflowCount_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WatchTimeRecorder_UpdateUnderflowCount_Params_Data));
      new (data()) WatchTimeRecorder_UpdateUnderflowCount_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WatchTimeRecorder_UpdateUnderflowCount_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WatchTimeRecorder_UpdateUnderflowCount_Params_Data>(index_);
    }
    WatchTimeRecorder_UpdateUnderflowCount_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t count;
  uint8_t padfinal_[4];

 private:
  WatchTimeRecorder_UpdateUnderflowCount_Params_Data();
  ~WatchTimeRecorder_UpdateUnderflowCount_Params_Data() = delete;
};
static_assert(sizeof(WatchTimeRecorder_UpdateUnderflowCount_Params_Data) == 16,
              "Bad sizeof(WatchTimeRecorder_UpdateUnderflowCount_Params_Data)");

}  // namespace internal
class WatchTimeRecorder_RecordWatchTime_ParamsDataView {
 public:
  WatchTimeRecorder_RecordWatchTime_ParamsDataView() {}

  WatchTimeRecorder_RecordWatchTime_ParamsDataView(
      internal::WatchTimeRecorder_RecordWatchTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) const {
    auto data_value = data_->key;
    return mojo::internal::Deserialize<::media::mojom::WatchTimeKey>(
        data_value, output);
  }

  ::media::mojom::WatchTimeKey key() const {
    return static_cast<::media::mojom::WatchTimeKey>(data_->key);
  }
  inline void GetWatchTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWatchTime(UserType* output) {
    auto* pointer = data_->watch_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_RecordWatchTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_FinalizeWatchTime_ParamsDataView {
 public:
  WatchTimeRecorder_FinalizeWatchTime_ParamsDataView() {}

  WatchTimeRecorder_FinalizeWatchTime_ParamsDataView(
      internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWatchTimeKeysDataView(
      mojo::ArrayDataView<::media::mojom::WatchTimeKey>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWatchTimeKeys(UserType* output) {
    auto* pointer = data_->watch_time_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::WatchTimeKey>>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_OnError_ParamsDataView {
 public:
  WatchTimeRecorder_OnError_ParamsDataView() {}

  WatchTimeRecorder_OnError_ParamsDataView(
      internal::WatchTimeRecorder_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::PipelineStatus>(
        data_value, output);
  }

  ::media::mojom::PipelineStatus status() const {
    return static_cast<::media::mojom::PipelineStatus>(data_->status);
  }
 private:
  internal::WatchTimeRecorder_OnError_Params_Data* data_ = nullptr;
};

class WatchTimeRecorder_UpdateSecondaryProperties_ParamsDataView {
 public:
  WatchTimeRecorder_UpdateSecondaryProperties_ParamsDataView() {}

  WatchTimeRecorder_UpdateSecondaryProperties_ParamsDataView(
      internal::WatchTimeRecorder_UpdateSecondaryProperties_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSecondaryPropertiesDataView(
      SecondaryPlaybackPropertiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecondaryProperties(UserType* output) {
    auto* pointer = data_->secondary_properties.Get();
    return mojo::internal::Deserialize<::media::mojom::SecondaryPlaybackPropertiesDataView>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_UpdateSecondaryProperties_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView {
 public:
  WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView() {}

  WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView(
      internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool value() const {
    return data_->value;
  }
 private:
  internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data* data_ = nullptr;
};

class WatchTimeRecorder_OnDurationChanged_ParamsDataView {
 public:
  WatchTimeRecorder_OnDurationChanged_ParamsDataView() {}

  WatchTimeRecorder_OnDurationChanged_ParamsDataView(
      internal::WatchTimeRecorder_OnDurationChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_OnDurationChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView {
 public:
  WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView() {}

  WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView(
      internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t count() const {
    return data_->count;
  }
 private:
  internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data* data_ = nullptr;
};


inline void WatchTimeRecorder_RecordWatchTime_ParamsDataView::GetWatchTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->watch_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void WatchTimeRecorder_FinalizeWatchTime_ParamsDataView::GetWatchTimeKeysDataView(
    mojo::ArrayDataView<::media::mojom::WatchTimeKey>* output) {
  auto pointer = data_->watch_time_keys.Get();
  *output = mojo::ArrayDataView<::media::mojom::WatchTimeKey>(pointer, context_);
}




inline void WatchTimeRecorder_UpdateSecondaryProperties_ParamsDataView::GetSecondaryPropertiesDataView(
    SecondaryPlaybackPropertiesDataView* output) {
  auto pointer = data_->secondary_properties.Get();
  *output = SecondaryPlaybackPropertiesDataView(pointer, context_);
}




inline void WatchTimeRecorder_OnDurationChanged_ParamsDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_PARAMS_DATA_H_