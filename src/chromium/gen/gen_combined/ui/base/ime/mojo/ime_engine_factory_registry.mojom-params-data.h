// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_PARAMS_DATA_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_PARAMS_DATA_H_

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
namespace ime {
namespace mojom {
namespace internal {
class  ImeEngineFactoryRegistry_ActivateFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeEngineFactoryRegistry_ActivateFactory_Params_Data));
      new (data()) ImeEngineFactoryRegistry_ActivateFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeEngineFactoryRegistry_ActivateFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeEngineFactoryRegistry_ActivateFactory_Params_Data>(index_);
    }
    ImeEngineFactoryRegistry_ActivateFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data factory;

 private:
  ImeEngineFactoryRegistry_ActivateFactory_Params_Data();
  ~ImeEngineFactoryRegistry_ActivateFactory_Params_Data() = delete;
};
static_assert(sizeof(ImeEngineFactoryRegistry_ActivateFactory_Params_Data) == 16,
              "Bad sizeof(ImeEngineFactoryRegistry_ActivateFactory_Params_Data)");

}  // namespace internal
class ImeEngineFactoryRegistry_ActivateFactory_ParamsDataView {
 public:
  ImeEngineFactoryRegistry_ActivateFactory_ParamsDataView() {}

  ImeEngineFactoryRegistry_ActivateFactory_ParamsDataView(
      internal::ImeEngineFactoryRegistry_ActivateFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ime::mojom::ImeEngineFactoryPtrDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ImeEngineFactoryRegistry_ActivateFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ime

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_PARAMS_DATA_H_