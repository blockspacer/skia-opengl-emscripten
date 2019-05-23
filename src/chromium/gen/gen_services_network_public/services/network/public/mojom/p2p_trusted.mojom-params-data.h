// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_PARAMS_DATA_H_

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
class  P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data));
      new (data()) P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data>(index_);
    }
    P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data();
  ~P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data() = delete;
};
static_assert(sizeof(P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data) == 8,
              "Bad sizeof(P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data)");
class  P2PTrustedSocketManagerClient_DumpPacket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PTrustedSocketManagerClient_DumpPacket_Params_Data));
      new (data()) P2PTrustedSocketManagerClient_DumpPacket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PTrustedSocketManagerClient_DumpPacket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PTrustedSocketManagerClient_DumpPacket_Params_Data>(index_);
    }
    P2PTrustedSocketManagerClient_DumpPacket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> packet_header;
  uint64_t packet_length;
  uint8_t incoming : 1;
  uint8_t padfinal_[7];

 private:
  P2PTrustedSocketManagerClient_DumpPacket_Params_Data();
  ~P2PTrustedSocketManagerClient_DumpPacket_Params_Data() = delete;
};
static_assert(sizeof(P2PTrustedSocketManagerClient_DumpPacket_Params_Data) == 32,
              "Bad sizeof(P2PTrustedSocketManagerClient_DumpPacket_Params_Data)");
class  P2PTrustedSocketManager_StartRtpDump_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PTrustedSocketManager_StartRtpDump_Params_Data));
      new (data()) P2PTrustedSocketManager_StartRtpDump_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PTrustedSocketManager_StartRtpDump_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PTrustedSocketManager_StartRtpDump_Params_Data>(index_);
    }
    P2PTrustedSocketManager_StartRtpDump_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t incoming : 1;
  uint8_t outgoing : 1;
  uint8_t padfinal_[7];

 private:
  P2PTrustedSocketManager_StartRtpDump_Params_Data();
  ~P2PTrustedSocketManager_StartRtpDump_Params_Data() = delete;
};
static_assert(sizeof(P2PTrustedSocketManager_StartRtpDump_Params_Data) == 16,
              "Bad sizeof(P2PTrustedSocketManager_StartRtpDump_Params_Data)");
class  P2PTrustedSocketManager_StopRtpDump_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PTrustedSocketManager_StopRtpDump_Params_Data));
      new (data()) P2PTrustedSocketManager_StopRtpDump_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PTrustedSocketManager_StopRtpDump_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PTrustedSocketManager_StopRtpDump_Params_Data>(index_);
    }
    P2PTrustedSocketManager_StopRtpDump_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t incoming : 1;
  uint8_t outgoing : 1;
  uint8_t padfinal_[7];

 private:
  P2PTrustedSocketManager_StopRtpDump_Params_Data();
  ~P2PTrustedSocketManager_StopRtpDump_Params_Data() = delete;
};
static_assert(sizeof(P2PTrustedSocketManager_StopRtpDump_Params_Data) == 16,
              "Bad sizeof(P2PTrustedSocketManager_StopRtpDump_Params_Data)");

}  // namespace internal
class P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_ParamsDataView {
 public:
  P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_ParamsDataView() {}

  P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_ParamsDataView(
      internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data* data_ = nullptr;
};

class P2PTrustedSocketManagerClient_DumpPacket_ParamsDataView {
 public:
  P2PTrustedSocketManagerClient_DumpPacket_ParamsDataView() {}

  P2PTrustedSocketManagerClient_DumpPacket_ParamsDataView(
      internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPacketHeaderDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacketHeader(UserType* output) {
    auto* pointer = data_->packet_header.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint64_t packet_length() const {
    return data_->packet_length;
  }
  bool incoming() const {
    return data_->incoming;
  }
 private:
  internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PTrustedSocketManager_StartRtpDump_ParamsDataView {
 public:
  P2PTrustedSocketManager_StartRtpDump_ParamsDataView() {}

  P2PTrustedSocketManager_StartRtpDump_ParamsDataView(
      internal::P2PTrustedSocketManager_StartRtpDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool incoming() const {
    return data_->incoming;
  }
  bool outgoing() const {
    return data_->outgoing;
  }
 private:
  internal::P2PTrustedSocketManager_StartRtpDump_Params_Data* data_ = nullptr;
};

class P2PTrustedSocketManager_StopRtpDump_ParamsDataView {
 public:
  P2PTrustedSocketManager_StopRtpDump_ParamsDataView() {}

  P2PTrustedSocketManager_StopRtpDump_ParamsDataView(
      internal::P2PTrustedSocketManager_StopRtpDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool incoming() const {
    return data_->incoming;
  }
  bool outgoing() const {
    return data_->outgoing;
  }
 private:
  internal::P2PTrustedSocketManager_StopRtpDump_Params_Data* data_ = nullptr;
};




inline void P2PTrustedSocketManagerClient_DumpPacket_ParamsDataView::GetPacketHeaderDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->packet_header.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_PARAMS_DATA_H_