// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_PARAMS_DATA_H_

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
class  UserActivityObserver_OnUserActivity_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserActivityObserver_OnUserActivity_Params_Data));
      new (data()) UserActivityObserver_OnUserActivity_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserActivityObserver_OnUserActivity_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserActivityObserver_OnUserActivity_Params_Data>(index_);
    }
    UserActivityObserver_OnUserActivity_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UserActivityObserver_OnUserActivity_Params_Data();
  ~UserActivityObserver_OnUserActivity_Params_Data() = delete;
};
static_assert(sizeof(UserActivityObserver_OnUserActivity_Params_Data) == 8,
              "Bad sizeof(UserActivityObserver_OnUserActivity_Params_Data)");
class  UserIdleObserver_OnUserIdleStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserIdleObserver_OnUserIdleStateChanged_Params_Data));
      new (data()) UserIdleObserver_OnUserIdleStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserIdleObserver_OnUserIdleStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserIdleObserver_OnUserIdleStateChanged_Params_Data>(index_);
    }
    UserIdleObserver_OnUserIdleStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t new_state;
  uint8_t padfinal_[4];

 private:
  UserIdleObserver_OnUserIdleStateChanged_Params_Data();
  ~UserIdleObserver_OnUserIdleStateChanged_Params_Data() = delete;
};
static_assert(sizeof(UserIdleObserver_OnUserIdleStateChanged_Params_Data) == 16,
              "Bad sizeof(UserIdleObserver_OnUserIdleStateChanged_Params_Data)");
class  UserActivityMonitor_AddUserActivityObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserActivityMonitor_AddUserActivityObserver_Params_Data));
      new (data()) UserActivityMonitor_AddUserActivityObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserActivityMonitor_AddUserActivityObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserActivityMonitor_AddUserActivityObserver_Params_Data>(index_);
    }
    UserActivityMonitor_AddUserActivityObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t delay_between_notify_secs;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  UserActivityMonitor_AddUserActivityObserver_Params_Data();
  ~UserActivityMonitor_AddUserActivityObserver_Params_Data() = delete;
};
static_assert(sizeof(UserActivityMonitor_AddUserActivityObserver_Params_Data) == 24,
              "Bad sizeof(UserActivityMonitor_AddUserActivityObserver_Params_Data)");
class  UserActivityMonitor_AddUserIdleObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserActivityMonitor_AddUserIdleObserver_Params_Data));
      new (data()) UserActivityMonitor_AddUserIdleObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserActivityMonitor_AddUserIdleObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserActivityMonitor_AddUserIdleObserver_Params_Data>(index_);
    }
    UserActivityMonitor_AddUserIdleObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t idle_time_in_minutes;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  UserActivityMonitor_AddUserIdleObserver_Params_Data();
  ~UserActivityMonitor_AddUserIdleObserver_Params_Data() = delete;
};
static_assert(sizeof(UserActivityMonitor_AddUserIdleObserver_Params_Data) == 24,
              "Bad sizeof(UserActivityMonitor_AddUserIdleObserver_Params_Data)");

}  // namespace internal
class UserActivityObserver_OnUserActivity_ParamsDataView {
 public:
  UserActivityObserver_OnUserActivity_ParamsDataView() {}

  UserActivityObserver_OnUserActivity_ParamsDataView(
      internal::UserActivityObserver_OnUserActivity_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UserActivityObserver_OnUserActivity_Params_Data* data_ = nullptr;
};

class UserIdleObserver_OnUserIdleStateChanged_ParamsDataView {
 public:
  UserIdleObserver_OnUserIdleStateChanged_ParamsDataView() {}

  UserIdleObserver_OnUserIdleStateChanged_ParamsDataView(
      internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewState(UserType* output) const {
    auto data_value = data_->new_state;
    return mojo::internal::Deserialize<::ws::mojom::UserIdleObserver_IdleState>(
        data_value, output);
  }

  UserIdleObserver_IdleState new_state() const {
    return static_cast<UserIdleObserver_IdleState>(data_->new_state);
  }
 private:
  internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data* data_ = nullptr;
};

class UserActivityMonitor_AddUserActivityObserver_ParamsDataView {
 public:
  UserActivityMonitor_AddUserActivityObserver_ParamsDataView() {}

  UserActivityMonitor_AddUserActivityObserver_ParamsDataView(
      internal::UserActivityMonitor_AddUserActivityObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t delay_between_notify_secs() const {
    return data_->delay_between_notify_secs;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::UserActivityObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UserActivityMonitor_AddUserActivityObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UserActivityMonitor_AddUserIdleObserver_ParamsDataView {
 public:
  UserActivityMonitor_AddUserIdleObserver_ParamsDataView() {}

  UserActivityMonitor_AddUserIdleObserver_ParamsDataView(
      internal::UserActivityMonitor_AddUserIdleObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t idle_time_in_minutes() const {
    return data_->idle_time_in_minutes;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::UserIdleObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UserActivityMonitor_AddUserIdleObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};









}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_PARAMS_DATA_H_