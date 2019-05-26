// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_PARAMS_DATA_H_

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
class  TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data));
      new (data()) TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data>(index_);
    }
    TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allowed : 1;
  uint8_t padfinal_[7];

 private:
  TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data();
  ~TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data() = delete;
};
static_assert(sizeof(TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data) == 16,
              "Bad sizeof(TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data)");
class  TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data));
      new (data()) TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data>(index_);
    }
    TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> hostname;
  mojo::internal::Pointer<::network::mojom::internal::X509Certificate_Data> cert;
  uint8_t enable_rev_checking : 1;
  uint8_t require_rev_checking_local_anchors : 1;
  uint8_t enable_sha1_local_anchors : 1;
  uint8_t disable_symantec_enforcement : 1;
  uint8_t pad5_[7];
  mojo::internal::Pointer<::network::mojom::internal::CertVerifyResult_Data> primary_result;
  mojo::internal::Pointer<::network::mojom::internal::CertVerifyResult_Data> trial_result;

 private:
  TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data();
  ~TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data() = delete;
};
static_assert(sizeof(TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data) == 48,
              "Bad sizeof(TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data)");

}  // namespace internal
class TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_ParamsDataView {
 public:
  TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_ParamsDataView() {}

  TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_ParamsDataView(
      internal::TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allowed() const {
    return data_->allowed;
  }
 private:
  internal::TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data* data_ = nullptr;
};

class TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView {
 public:
  TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView() {}

  TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView(
      internal::TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostnameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostname(UserType* output) {
    auto* pointer = data_->hostname.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCertDataView(
      ::network::mojom::X509CertificateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCert(UserType* output) {
    auto* pointer = data_->cert.Get();
    return mojo::internal::Deserialize<::network::mojom::X509CertificateDataView>(
        pointer, output, context_);
  }
  bool enable_rev_checking() const {
    return data_->enable_rev_checking;
  }
  bool require_rev_checking_local_anchors() const {
    return data_->require_rev_checking_local_anchors;
  }
  bool enable_sha1_local_anchors() const {
    return data_->enable_sha1_local_anchors;
  }
  bool disable_symantec_enforcement() const {
    return data_->disable_symantec_enforcement;
  }
  inline void GetPrimaryResultDataView(
      ::network::mojom::CertVerifyResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryResult(UserType* output) {
    auto* pointer = data_->primary_result.Get();
    return mojo::internal::Deserialize<::network::mojom::CertVerifyResultDataView>(
        pointer, output, context_);
  }
  inline void GetTrialResultDataView(
      ::network::mojom::CertVerifyResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrialResult(UserType* output) {
    auto* pointer = data_->trial_result.Get();
    return mojo::internal::Deserialize<::network::mojom::CertVerifyResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView::GetHostnameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->hostname.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView::GetCertDataView(
    ::network::mojom::X509CertificateDataView* output) {
  auto pointer = data_->cert.Get();
  *output = ::network::mojom::X509CertificateDataView(pointer, context_);
}
inline void TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView::GetPrimaryResultDataView(
    ::network::mojom::CertVerifyResultDataView* output) {
  auto pointer = data_->primary_result.Get();
  *output = ::network::mojom::CertVerifyResultDataView(pointer, context_);
}
inline void TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView::GetTrialResultDataView(
    ::network::mojom::CertVerifyResultDataView* output) {
  auto pointer = data_->trial_result.Get();
  *output = ::network::mojom::CertVerifyResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_PARAMS_DATA_H_