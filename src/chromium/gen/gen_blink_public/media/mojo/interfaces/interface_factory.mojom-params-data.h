// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_PARAMS_DATA_H_

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
class  InterfaceFactory_CreateAudioDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateAudioDecoder_Params_Data));
      new (data()) InterfaceFactory_CreateAudioDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateAudioDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateAudioDecoder_Params_Data>(index_);
    }
    InterfaceFactory_CreateAudioDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data audio_decoder;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateAudioDecoder_Params_Data();
  ~InterfaceFactory_CreateAudioDecoder_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateAudioDecoder_Params_Data) == 16,
              "Bad sizeof(InterfaceFactory_CreateAudioDecoder_Params_Data)");
class  InterfaceFactory_CreateVideoDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateVideoDecoder_Params_Data));
      new (data()) InterfaceFactory_CreateVideoDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateVideoDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateVideoDecoder_Params_Data>(index_);
    }
    InterfaceFactory_CreateVideoDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data video_decoder;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateVideoDecoder_Params_Data();
  ~InterfaceFactory_CreateVideoDecoder_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateVideoDecoder_Params_Data) == 16,
              "Bad sizeof(InterfaceFactory_CreateVideoDecoder_Params_Data)");
class  InterfaceFactory_CreateDefaultRenderer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateDefaultRenderer_Params_Data));
      new (data()) InterfaceFactory_CreateDefaultRenderer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateDefaultRenderer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateDefaultRenderer_Params_Data>(index_);
    }
    InterfaceFactory_CreateDefaultRenderer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> audio_device_id;
  mojo::internal::Handle_Data renderer;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateDefaultRenderer_Params_Data();
  ~InterfaceFactory_CreateDefaultRenderer_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateDefaultRenderer_Params_Data) == 24,
              "Bad sizeof(InterfaceFactory_CreateDefaultRenderer_Params_Data)");
class  InterfaceFactory_CreateCdm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateCdm_Params_Data));
      new (data()) InterfaceFactory_CreateCdm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateCdm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateCdm_Params_Data>(index_);
    }
    InterfaceFactory_CreateCdm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;
  mojo::internal::Handle_Data cdm;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateCdm_Params_Data();
  ~InterfaceFactory_CreateCdm_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateCdm_Params_Data) == 24,
              "Bad sizeof(InterfaceFactory_CreateCdm_Params_Data)");
class  InterfaceFactory_CreateDecryptor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateDecryptor_Params_Data));
      new (data()) InterfaceFactory_CreateDecryptor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateDecryptor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateDecryptor_Params_Data>(index_);
    }
    InterfaceFactory_CreateDecryptor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cdm_id;
  mojo::internal::Handle_Data decryptor;

 private:
  InterfaceFactory_CreateDecryptor_Params_Data();
  ~InterfaceFactory_CreateDecryptor_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateDecryptor_Params_Data) == 16,
              "Bad sizeof(InterfaceFactory_CreateDecryptor_Params_Data)");
class  InterfaceFactory_CreateCdmProxy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateCdmProxy_Params_Data));
      new (data()) InterfaceFactory_CreateCdmProxy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateCdmProxy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateCdmProxy_Params_Data>(index_);
    }
    InterfaceFactory_CreateCdmProxy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Token_Data> cdm_guid;
  mojo::internal::Handle_Data cdm_proxy;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateCdmProxy_Params_Data();
  ~InterfaceFactory_CreateCdmProxy_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateCdmProxy_Params_Data) == 24,
              "Bad sizeof(InterfaceFactory_CreateCdmProxy_Params_Data)");

}  // namespace internal
class InterfaceFactory_CreateAudioDecoder_ParamsDataView {
 public:
  InterfaceFactory_CreateAudioDecoder_ParamsDataView() {}

  InterfaceFactory_CreateAudioDecoder_ParamsDataView(
      internal::InterfaceFactory_CreateAudioDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAudioDecoder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioDecoderRequestDataView>(
            &data_->audio_decoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateAudioDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateVideoDecoder_ParamsDataView {
 public:
  InterfaceFactory_CreateVideoDecoder_ParamsDataView() {}

  InterfaceFactory_CreateVideoDecoder_ParamsDataView(
      internal::InterfaceFactory_CreateVideoDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVideoDecoder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecoderRequestDataView>(
            &data_->video_decoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateVideoDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateDefaultRenderer_ParamsDataView {
 public:
  InterfaceFactory_CreateDefaultRenderer_ParamsDataView() {}

  InterfaceFactory_CreateDefaultRenderer_ParamsDataView(
      internal::InterfaceFactory_CreateDefaultRenderer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAudioDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioDeviceId(UserType* output) {
    auto* pointer = data_->audio_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRenderer() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RendererRequestDataView>(
            &data_->renderer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateDefaultRenderer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateCdm_ParamsDataView {
 public:
  InterfaceFactory_CreateCdm_ParamsDataView() {}

  InterfaceFactory_CreateCdm_ParamsDataView(
      internal::InterfaceFactory_CreateCdm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCdm() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleRequestDataView>(
            &data_->cdm, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateCdm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateDecryptor_ParamsDataView {
 public:
  InterfaceFactory_CreateDecryptor_ParamsDataView() {}

  InterfaceFactory_CreateDecryptor_ParamsDataView(
      internal::InterfaceFactory_CreateDecryptor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
  template <typename UserType>
  UserType TakeDecryptor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::DecryptorRequestDataView>(
            &data_->decryptor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateDecryptor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateCdmProxy_ParamsDataView {
 public:
  InterfaceFactory_CreateCdmProxy_ParamsDataView() {}

  InterfaceFactory_CreateCdmProxy_ParamsDataView(
      internal::InterfaceFactory_CreateCdmProxy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCdmGuidDataView(
      ::mojo_base::mojom::TokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCdmGuid(UserType* output) {
    auto* pointer = data_->cdm_guid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TokenDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCdmProxy() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::CdmProxyRequestDataView>(
            &data_->cdm_proxy, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateCdmProxy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void InterfaceFactory_CreateDefaultRenderer_ParamsDataView::GetAudioDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->audio_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void InterfaceFactory_CreateCdm_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void InterfaceFactory_CreateCdmProxy_ParamsDataView::GetCdmGuidDataView(
    ::mojo_base::mojom::TokenDataView* output) {
  auto pointer = data_->cdm_guid.Get();
  *output = ::mojo_base::mojom::TokenDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_PARAMS_DATA_H_