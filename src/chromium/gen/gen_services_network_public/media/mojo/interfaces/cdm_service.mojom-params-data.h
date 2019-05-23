// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_PARAMS_DATA_H_

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
class  CdmService_LoadCdm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmService_LoadCdm_Params_Data));
      new (data()) CdmService_LoadCdm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmService_LoadCdm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmService_LoadCdm_Params_Data>(index_);
    }
    CdmService_LoadCdm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> cdm_path;

 private:
  CdmService_LoadCdm_Params_Data();
  ~CdmService_LoadCdm_Params_Data() = delete;
};
static_assert(sizeof(CdmService_LoadCdm_Params_Data) == 16,
              "Bad sizeof(CdmService_LoadCdm_Params_Data)");
class  CdmService_CreateCdmFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmService_CreateCdmFactory_Params_Data));
      new (data()) CdmService_CreateCdmFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmService_CreateCdmFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmService_CreateCdmFactory_Params_Data>(index_);
    }
    CdmService_CreateCdmFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data factory;
  mojo::internal::Interface_Data host_interfaces;
  uint8_t padfinal_[4];

 private:
  CdmService_CreateCdmFactory_Params_Data();
  ~CdmService_CreateCdmFactory_Params_Data() = delete;
};
static_assert(sizeof(CdmService_CreateCdmFactory_Params_Data) == 24,
              "Bad sizeof(CdmService_CreateCdmFactory_Params_Data)");

}  // namespace internal
class CdmService_LoadCdm_ParamsDataView {
 public:
  CdmService_LoadCdm_ParamsDataView() {}

  CdmService_LoadCdm_ParamsDataView(
      internal::CdmService_LoadCdm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCdmPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCdmPath(UserType* output) {
    auto* pointer = data_->cdm_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::CdmService_LoadCdm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmService_CreateCdmFactory_ParamsDataView {
 public:
  CdmService_CreateCdmFactory_ParamsDataView() {}

  CdmService_CreateCdmFactory_ParamsDataView(
      internal::CdmService_CreateCdmFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::CdmFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHostInterfaces() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->host_interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmService_CreateCdmFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CdmService_LoadCdm_ParamsDataView::GetCdmPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->cdm_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_PARAMS_DATA_H_