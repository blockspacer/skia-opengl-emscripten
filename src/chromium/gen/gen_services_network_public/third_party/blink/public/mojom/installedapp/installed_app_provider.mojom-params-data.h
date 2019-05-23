// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) InstalledAppProvider_FilterInstalledApps_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InstalledAppProvider_FilterInstalledApps_Params_Data));
      new (data()) InstalledAppProvider_FilterInstalledApps_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InstalledAppProvider_FilterInstalledApps_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InstalledAppProvider_FilterInstalledApps_Params_Data>(index_);
    }
    InstalledAppProvider_FilterInstalledApps_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::RelatedApplication_Data>>> related_apps;

 private:
  InstalledAppProvider_FilterInstalledApps_Params_Data();
  ~InstalledAppProvider_FilterInstalledApps_Params_Data() = delete;
};
static_assert(sizeof(InstalledAppProvider_FilterInstalledApps_Params_Data) == 16,
              "Bad sizeof(InstalledAppProvider_FilterInstalledApps_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) InstalledAppProvider_FilterInstalledApps_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InstalledAppProvider_FilterInstalledApps_ResponseParams_Data));
      new (data()) InstalledAppProvider_FilterInstalledApps_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InstalledAppProvider_FilterInstalledApps_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InstalledAppProvider_FilterInstalledApps_ResponseParams_Data>(index_);
    }
    InstalledAppProvider_FilterInstalledApps_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::RelatedApplication_Data>>> installedApps;

 private:
  InstalledAppProvider_FilterInstalledApps_ResponseParams_Data();
  ~InstalledAppProvider_FilterInstalledApps_ResponseParams_Data() = delete;
};
static_assert(sizeof(InstalledAppProvider_FilterInstalledApps_ResponseParams_Data) == 16,
              "Bad sizeof(InstalledAppProvider_FilterInstalledApps_ResponseParams_Data)");

}  // namespace internal
class InstalledAppProvider_FilterInstalledApps_ParamsDataView {
 public:
  InstalledAppProvider_FilterInstalledApps_ParamsDataView() {}

  InstalledAppProvider_FilterInstalledApps_ParamsDataView(
      internal::InstalledAppProvider_FilterInstalledApps_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRelatedAppsDataView(
      mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelatedApps(UserType* output) {
    auto* pointer = data_->related_apps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InstalledAppProvider_FilterInstalledApps_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView {
 public:
  InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView() {}

  InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView(
      internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstalledAppsDataView(
      mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalledApps(UserType* output) {
    auto* pointer = data_->installedApps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void InstalledAppProvider_FilterInstalledApps_ParamsDataView::GetRelatedAppsDataView(
    mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output) {
  auto pointer = data_->related_apps.Get();
  *output = mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>(pointer, context_);
}


inline void InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView::GetInstalledAppsDataView(
    mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output) {
  auto pointer = data_->installedApps.Get();
  *output = mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_PARAMS_DATA_H_