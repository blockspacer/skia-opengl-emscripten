// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ReportingServiceProxy_QueueInterventionReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReportingServiceProxy_QueueInterventionReport_Params_Data));
      new (data()) ReportingServiceProxy_QueueInterventionReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReportingServiceProxy_QueueInterventionReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReportingServiceProxy_QueueInterventionReport_Params_Data>(index_);
    }
    ReportingServiceProxy_QueueInterventionReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> source_file;
  int32_t line_number;
  int32_t column_number;

 private:
  ReportingServiceProxy_QueueInterventionReport_Params_Data();
  ~ReportingServiceProxy_QueueInterventionReport_Params_Data() = delete;
};
static_assert(sizeof(ReportingServiceProxy_QueueInterventionReport_Params_Data) == 48,
              "Bad sizeof(ReportingServiceProxy_QueueInterventionReport_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ReportingServiceProxy_QueueDeprecationReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReportingServiceProxy_QueueDeprecationReport_Params_Data));
      new (data()) ReportingServiceProxy_QueueDeprecationReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReportingServiceProxy_QueueDeprecationReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReportingServiceProxy_QueueDeprecationReport_Params_Data>(index_);
    }
    ReportingServiceProxy_QueueDeprecationReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> anticipatedRemoval;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> source_file;
  int32_t line_number;
  int32_t column_number;

 private:
  ReportingServiceProxy_QueueDeprecationReport_Params_Data();
  ~ReportingServiceProxy_QueueDeprecationReport_Params_Data() = delete;
};
static_assert(sizeof(ReportingServiceProxy_QueueDeprecationReport_Params_Data) == 56,
              "Bad sizeof(ReportingServiceProxy_QueueDeprecationReport_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ReportingServiceProxy_QueueCspViolationReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReportingServiceProxy_QueueCspViolationReport_Params_Data));
      new (data()) ReportingServiceProxy_QueueCspViolationReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReportingServiceProxy_QueueCspViolationReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReportingServiceProxy_QueueCspViolationReport_Params_Data>(index_);
    }
    ReportingServiceProxy_QueueCspViolationReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> group;
  mojo::internal::Pointer<mojo::internal::String_Data> document_url;
  mojo::internal::Pointer<mojo::internal::String_Data> referrer;
  mojo::internal::Pointer<mojo::internal::String_Data> blocked_url;
  mojo::internal::Pointer<mojo::internal::String_Data> effective_directive;
  mojo::internal::Pointer<mojo::internal::String_Data> original_policy;
  mojo::internal::Pointer<mojo::internal::String_Data> source_file;
  mojo::internal::Pointer<mojo::internal::String_Data> script_sample;
  mojo::internal::Pointer<mojo::internal::String_Data> disposition;
  uint16_t status_code;
  uint8_t pad10_[2];
  int32_t line_number;
  int32_t column_number;
  uint8_t padfinal_[4];

 private:
  ReportingServiceProxy_QueueCspViolationReport_Params_Data();
  ~ReportingServiceProxy_QueueCspViolationReport_Params_Data() = delete;
};
static_assert(sizeof(ReportingServiceProxy_QueueCspViolationReport_Params_Data) == 104,
              "Bad sizeof(ReportingServiceProxy_QueueCspViolationReport_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data));
      new (data()) ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data>(index_);
    }
    ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> policy_id;
  mojo::internal::Pointer<mojo::internal::String_Data> disposition;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> source_file;
  int32_t line_number;
  int32_t column_number;

 private:
  ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data();
  ~ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data() = delete;
};
static_assert(sizeof(ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data) == 56,
              "Bad sizeof(ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data)");

}  // namespace internal
class ReportingServiceProxy_QueueInterventionReport_ParamsDataView {
 public:
  ReportingServiceProxy_QueueInterventionReport_ParamsDataView() {}

  ReportingServiceProxy_QueueInterventionReport_ParamsDataView(
      internal::ReportingServiceProxy_QueueInterventionReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceFile(UserType* output) {
    auto* pointer = data_->source_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
 private:
  internal::ReportingServiceProxy_QueueInterventionReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReportingServiceProxy_QueueDeprecationReport_ParamsDataView {
 public:
  ReportingServiceProxy_QueueDeprecationReport_ParamsDataView() {}

  ReportingServiceProxy_QueueDeprecationReport_ParamsDataView(
      internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAnticipatedRemovalDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAnticipatedRemoval(UserType* output) {
    auto* pointer = data_->anticipatedRemoval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceFile(UserType* output) {
    auto* pointer = data_->source_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
 private:
  internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReportingServiceProxy_QueueCspViolationReport_ParamsDataView {
 public:
  ReportingServiceProxy_QueueCspViolationReport_ParamsDataView() {}

  ReportingServiceProxy_QueueCspViolationReport_ParamsDataView(
      internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetGroupDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroup(UserType* output) {
    auto* pointer = data_->group.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDocumentUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentUrl(UserType* output) {
    auto* pointer = data_->document_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetBlockedUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlockedUrl(UserType* output) {
    auto* pointer = data_->blocked_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetEffectiveDirectiveDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEffectiveDirective(UserType* output) {
    auto* pointer = data_->effective_directive.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginalPolicyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalPolicy(UserType* output) {
    auto* pointer = data_->original_policy.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceFile(UserType* output) {
    auto* pointer = data_->source_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetScriptSampleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptSample(UserType* output) {
    auto* pointer = data_->script_sample.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDispositionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisposition(UserType* output) {
    auto* pointer = data_->disposition.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t status_code() const {
    return data_->status_code;
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
 private:
  internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView {
 public:
  ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView() {}

  ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView(
      internal::ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPolicyIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPolicyId(UserType* output) {
    auto* pointer = data_->policy_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDispositionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisposition(UserType* output) {
    auto* pointer = data_->disposition.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceFile(UserType* output) {
    auto* pointer = data_->source_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
 private:
  internal::ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ReportingServiceProxy_QueueInterventionReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueInterventionReport_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueInterventionReport_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueInterventionReport_ParamsDataView::GetSourceFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetAnticipatedRemovalDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->anticipatedRemoval.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetSourceFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetGroupDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetDocumentUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->document_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetReferrerDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetBlockedUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->blocked_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetEffectiveDirectiveDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->effective_directive.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetOriginalPolicyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->original_policy.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetSourceFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetScriptSampleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->script_sample.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetDispositionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->disposition.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView::GetPolicyIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->policy_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView::GetDispositionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->disposition.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView::GetSourceFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_PARAMS_DATA_H_