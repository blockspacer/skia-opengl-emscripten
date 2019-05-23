// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_PARAMS_DATA_H_

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
class  MdnsResponder_CreateNameForAddress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsResponder_CreateNameForAddress_Params_Data));
      new (data()) MdnsResponder_CreateNameForAddress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsResponder_CreateNameForAddress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsResponder_CreateNameForAddress_Params_Data>(index_);
    }
    MdnsResponder_CreateNameForAddress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> address;

 private:
  MdnsResponder_CreateNameForAddress_Params_Data();
  ~MdnsResponder_CreateNameForAddress_Params_Data() = delete;
};
static_assert(sizeof(MdnsResponder_CreateNameForAddress_Params_Data) == 16,
              "Bad sizeof(MdnsResponder_CreateNameForAddress_Params_Data)");
class  MdnsResponder_CreateNameForAddress_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsResponder_CreateNameForAddress_ResponseParams_Data));
      new (data()) MdnsResponder_CreateNameForAddress_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsResponder_CreateNameForAddress_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsResponder_CreateNameForAddress_ResponseParams_Data>(index_);
    }
    MdnsResponder_CreateNameForAddress_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint8_t announcement_scheduled : 1;
  uint8_t padfinal_[7];

 private:
  MdnsResponder_CreateNameForAddress_ResponseParams_Data();
  ~MdnsResponder_CreateNameForAddress_ResponseParams_Data() = delete;
};
static_assert(sizeof(MdnsResponder_CreateNameForAddress_ResponseParams_Data) == 24,
              "Bad sizeof(MdnsResponder_CreateNameForAddress_ResponseParams_Data)");
class  MdnsResponder_RemoveNameForAddress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsResponder_RemoveNameForAddress_Params_Data));
      new (data()) MdnsResponder_RemoveNameForAddress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsResponder_RemoveNameForAddress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsResponder_RemoveNameForAddress_Params_Data>(index_);
    }
    MdnsResponder_RemoveNameForAddress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> address;

 private:
  MdnsResponder_RemoveNameForAddress_Params_Data();
  ~MdnsResponder_RemoveNameForAddress_Params_Data() = delete;
};
static_assert(sizeof(MdnsResponder_RemoveNameForAddress_Params_Data) == 16,
              "Bad sizeof(MdnsResponder_RemoveNameForAddress_Params_Data)");
class  MdnsResponder_RemoveNameForAddress_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsResponder_RemoveNameForAddress_ResponseParams_Data));
      new (data()) MdnsResponder_RemoveNameForAddress_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsResponder_RemoveNameForAddress_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsResponder_RemoveNameForAddress_ResponseParams_Data>(index_);
    }
    MdnsResponder_RemoveNameForAddress_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t removed : 1;
  uint8_t goodbye_scheduled : 1;
  uint8_t padfinal_[7];

 private:
  MdnsResponder_RemoveNameForAddress_ResponseParams_Data();
  ~MdnsResponder_RemoveNameForAddress_ResponseParams_Data() = delete;
};
static_assert(sizeof(MdnsResponder_RemoveNameForAddress_ResponseParams_Data) == 16,
              "Bad sizeof(MdnsResponder_RemoveNameForAddress_ResponseParams_Data)");

}  // namespace internal
class MdnsResponder_CreateNameForAddress_ParamsDataView {
 public:
  MdnsResponder_CreateNameForAddress_ParamsDataView() {}

  MdnsResponder_CreateNameForAddress_ParamsDataView(
      internal::MdnsResponder_CreateNameForAddress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::MdnsResponder_CreateNameForAddress_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MdnsResponder_CreateNameForAddress_ResponseParamsDataView {
 public:
  MdnsResponder_CreateNameForAddress_ResponseParamsDataView() {}

  MdnsResponder_CreateNameForAddress_ResponseParamsDataView(
      internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool announcement_scheduled() const {
    return data_->announcement_scheduled;
  }
 private:
  internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MdnsResponder_RemoveNameForAddress_ParamsDataView {
 public:
  MdnsResponder_RemoveNameForAddress_ParamsDataView() {}

  MdnsResponder_RemoveNameForAddress_ParamsDataView(
      internal::MdnsResponder_RemoveNameForAddress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::MdnsResponder_RemoveNameForAddress_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MdnsResponder_RemoveNameForAddress_ResponseParamsDataView {
 public:
  MdnsResponder_RemoveNameForAddress_ResponseParamsDataView() {}

  MdnsResponder_RemoveNameForAddress_ResponseParamsDataView(
      internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool removed() const {
    return data_->removed;
  }
  bool goodbye_scheduled() const {
    return data_->goodbye_scheduled;
  }
 private:
  internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data* data_ = nullptr;
};


inline void MdnsResponder_CreateNameForAddress_ParamsDataView::GetAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}


inline void MdnsResponder_CreateNameForAddress_ResponseParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MdnsResponder_RemoveNameForAddress_ParamsDataView::GetAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_PARAMS_DATA_H_