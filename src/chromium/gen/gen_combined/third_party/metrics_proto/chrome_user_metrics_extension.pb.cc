// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chrome_user_metrics_extension.proto

#include "chrome_user_metrics_extension.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_cast_5flogs_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_cast_5flogs_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_CastLogsProto;
}  // namespace protobuf_cast_5flogs_2eproto
namespace protobuf_histogram_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_histogram_5fevent_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_HistogramEventProto;
}  // namespace protobuf_histogram_5fevent_2eproto
namespace protobuf_memory_5fleak_5freport_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_memory_5fleak_5freport_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_MemoryLeakReportProto;
}  // namespace protobuf_memory_5fleak_5freport_2eproto
namespace protobuf_omnibox_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_omnibox_5fevent_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_OmniboxEventProto;
}  // namespace protobuf_omnibox_5fevent_2eproto
namespace protobuf_perf_5fdata_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_perf_5fdata_2eproto ::google::protobuf::internal::SCCInfo<6> scc_info_PerfDataProto;
}  // namespace protobuf_perf_5fdata_2eproto
namespace protobuf_printer_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_printer_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_PrinterEventProto;
}  // namespace protobuf_printer_5fevent_2eproto
namespace protobuf_reporting_5finfo_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_reporting_5finfo_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ReportingInfo;
}  // namespace protobuf_reporting_5finfo_2eproto
namespace protobuf_sampled_5fprofile_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_sampled_5fprofile_2eproto ::google::protobuf::internal::SCCInfo<5> scc_info_SampledProfile;
}  // namespace protobuf_sampled_5fprofile_2eproto
namespace protobuf_system_5fprofile_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_system_5fprofile_2eproto ::google::protobuf::internal::SCCInfo<13> scc_info_SystemProfileProto;
}  // namespace protobuf_system_5fprofile_2eproto
namespace protobuf_trace_5flog_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_trace_5flog_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TraceLog;
}  // namespace protobuf_trace_5flog_2eproto
namespace protobuf_translate_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_translate_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TranslateEventProto;
}  // namespace protobuf_translate_5fevent_2eproto
namespace protobuf_user_5faction_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_user_5faction_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_UserActionEventProto;
}  // namespace protobuf_user_5faction_5fevent_2eproto
namespace metrics {
class ChromeUserMetricsExtensionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ChromeUserMetricsExtension>
      _instance;
} _ChromeUserMetricsExtension_default_instance_;
}  // namespace metrics
namespace protobuf_chrome_5fuser_5fmetrics_5fextension_2eproto {
static void InitDefaultsChromeUserMetricsExtension() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metrics::_ChromeUserMetricsExtension_default_instance_;
    new (ptr) ::metrics::ChromeUserMetricsExtension();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metrics::ChromeUserMetricsExtension::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<12> scc_info_ChromeUserMetricsExtension =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 12, InitDefaultsChromeUserMetricsExtension}, {
      &protobuf_system_5fprofile_2eproto::scc_info_SystemProfileProto.base,
      &protobuf_user_5faction_5fevent_2eproto::scc_info_UserActionEventProto.base,
      &protobuf_omnibox_5fevent_2eproto::scc_info_OmniboxEventProto.base,
      &protobuf_histogram_5fevent_2eproto::scc_info_HistogramEventProto.base,
      &protobuf_translate_5fevent_2eproto::scc_info_TranslateEventProto.base,
      &protobuf_printer_5fevent_2eproto::scc_info_PrinterEventProto.base,
      &protobuf_perf_5fdata_2eproto::scc_info_PerfDataProto.base,
      &protobuf_sampled_5fprofile_2eproto::scc_info_SampledProfile.base,
      &protobuf_cast_5flogs_2eproto::scc_info_CastLogsProto.base,
      &protobuf_memory_5fleak_5freport_2eproto::scc_info_MemoryLeakReportProto.base,
      &protobuf_reporting_5finfo_2eproto::scc_info_ReportingInfo.base,
      &protobuf_trace_5flog_2eproto::scc_info_TraceLog.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ChromeUserMetricsExtension.base);
}

}  // namespace protobuf_chrome_5fuser_5fmetrics_5fextension_2eproto
namespace metrics {
bool ChromeUserMetricsExtension_Product_IsValid(int value) {
  switch (value) {
    case 0:
    case 20:
    case 35:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ChromeUserMetricsExtension_Product ChromeUserMetricsExtension::CHROME;
const ChromeUserMetricsExtension_Product ChromeUserMetricsExtension::ANDROID_WEBVIEW;
const ChromeUserMetricsExtension_Product ChromeUserMetricsExtension::CAST;
const ChromeUserMetricsExtension_Product ChromeUserMetricsExtension::Product_MIN;
const ChromeUserMetricsExtension_Product ChromeUserMetricsExtension::Product_MAX;
const int ChromeUserMetricsExtension::Product_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void ChromeUserMetricsExtension::InitAsDefaultInstance() {
  ::metrics::_ChromeUserMetricsExtension_default_instance_._instance.get_mutable()->system_profile_ = const_cast< ::metrics::SystemProfileProto*>(
      ::metrics::SystemProfileProto::internal_default_instance());
  ::metrics::_ChromeUserMetricsExtension_default_instance_._instance.get_mutable()->cast_logs_ = const_cast< ::metrics::CastLogsProto*>(
      ::metrics::CastLogsProto::internal_default_instance());
  ::metrics::_ChromeUserMetricsExtension_default_instance_._instance.get_mutable()->reporting_info_ = const_cast< ::metrics::ReportingInfo*>(
      ::metrics::ReportingInfo::internal_default_instance());
}
void ChromeUserMetricsExtension::clear_system_profile() {
  if (system_profile_ != NULL) system_profile_->Clear();
  clear_has_system_profile();
}
void ChromeUserMetricsExtension::clear_user_action_event() {
  user_action_event_.Clear();
}
void ChromeUserMetricsExtension::clear_omnibox_event() {
  omnibox_event_.Clear();
}
void ChromeUserMetricsExtension::clear_histogram_event() {
  histogram_event_.Clear();
}
void ChromeUserMetricsExtension::clear_translate_event() {
  translate_event_.Clear();
}
void ChromeUserMetricsExtension::clear_printer_event() {
  printer_event_.Clear();
}
void ChromeUserMetricsExtension::clear_perf_data() {
  perf_data_.Clear();
}
void ChromeUserMetricsExtension::clear_sampled_profile() {
  sampled_profile_.Clear();
}
void ChromeUserMetricsExtension::clear_cast_logs() {
  if (cast_logs_ != NULL) cast_logs_->Clear();
  clear_has_cast_logs();
}
void ChromeUserMetricsExtension::clear_memory_leak_report() {
  memory_leak_report_.Clear();
}
void ChromeUserMetricsExtension::clear_reporting_info() {
  if (reporting_info_ != NULL) reporting_info_->Clear();
  clear_has_reporting_info();
}
void ChromeUserMetricsExtension::clear_trace_log() {
  trace_log_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChromeUserMetricsExtension::kProductFieldNumber;
const int ChromeUserMetricsExtension::kClientIdFieldNumber;
const int ChromeUserMetricsExtension::kSessionIdFieldNumber;
const int ChromeUserMetricsExtension::kSystemProfileFieldNumber;
const int ChromeUserMetricsExtension::kUserActionEventFieldNumber;
const int ChromeUserMetricsExtension::kOmniboxEventFieldNumber;
const int ChromeUserMetricsExtension::kHistogramEventFieldNumber;
const int ChromeUserMetricsExtension::kTranslateEventFieldNumber;
const int ChromeUserMetricsExtension::kPrinterEventFieldNumber;
const int ChromeUserMetricsExtension::kPerfDataFieldNumber;
const int ChromeUserMetricsExtension::kSampledProfileFieldNumber;
const int ChromeUserMetricsExtension::kCastLogsFieldNumber;
const int ChromeUserMetricsExtension::kMemoryLeakReportFieldNumber;
const int ChromeUserMetricsExtension::kReportingInfoFieldNumber;
const int ChromeUserMetricsExtension::kTraceLogFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChromeUserMetricsExtension::ChromeUserMetricsExtension()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_chrome_5fuser_5fmetrics_5fextension_2eproto::scc_info_ChromeUserMetricsExtension.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.ChromeUserMetricsExtension)
}
ChromeUserMetricsExtension::ChromeUserMetricsExtension(const ChromeUserMetricsExtension& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      user_action_event_(from.user_action_event_),
      omnibox_event_(from.omnibox_event_),
      histogram_event_(from.histogram_event_),
      perf_data_(from.perf_data_),
      sampled_profile_(from.sampled_profile_),
      memory_leak_report_(from.memory_leak_report_),
      translate_event_(from.translate_event_),
      printer_event_(from.printer_event_),
      trace_log_(from.trace_log_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_system_profile()) {
    system_profile_ = new ::metrics::SystemProfileProto(*from.system_profile_);
  } else {
    system_profile_ = NULL;
  }
  if (from.has_cast_logs()) {
    cast_logs_ = new ::metrics::CastLogsProto(*from.cast_logs_);
  } else {
    cast_logs_ = NULL;
  }
  if (from.has_reporting_info()) {
    reporting_info_ = new ::metrics::ReportingInfo(*from.reporting_info_);
  } else {
    reporting_info_ = NULL;
  }
  ::memcpy(&client_id_, &from.client_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&product_) -
    reinterpret_cast<char*>(&client_id_)) + sizeof(product_));
  // @@protoc_insertion_point(copy_constructor:metrics.ChromeUserMetricsExtension)
}

void ChromeUserMetricsExtension::SharedCtor() {
  ::memset(&system_profile_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&product_) -
      reinterpret_cast<char*>(&system_profile_)) + sizeof(product_));
}

ChromeUserMetricsExtension::~ChromeUserMetricsExtension() {
  // @@protoc_insertion_point(destructor:metrics.ChromeUserMetricsExtension)
  SharedDtor();
}

void ChromeUserMetricsExtension::SharedDtor() {
  if (this != internal_default_instance()) delete system_profile_;
  if (this != internal_default_instance()) delete cast_logs_;
  if (this != internal_default_instance()) delete reporting_info_;
}

void ChromeUserMetricsExtension::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ChromeUserMetricsExtension& ChromeUserMetricsExtension::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_chrome_5fuser_5fmetrics_5fextension_2eproto::scc_info_ChromeUserMetricsExtension.base);
  return *internal_default_instance();
}


void ChromeUserMetricsExtension::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.ChromeUserMetricsExtension)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_action_event_.Clear();
  omnibox_event_.Clear();
  histogram_event_.Clear();
  perf_data_.Clear();
  sampled_profile_.Clear();
  memory_leak_report_.Clear();
  translate_event_.Clear();
  printer_event_.Clear();
  trace_log_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(system_profile_ != NULL);
      system_profile_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(cast_logs_ != NULL);
      cast_logs_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(reporting_info_ != NULL);
      reporting_info_->Clear();
    }
  }
  if (cached_has_bits & 56u) {
    ::memset(&client_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&product_) -
        reinterpret_cast<char*>(&client_id_)) + sizeof(product_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChromeUserMetricsExtension::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:metrics.ChromeUserMetricsExtension)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed64 client_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_client_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &client_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 session_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_session_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &session_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .metrics.SystemProfileProto system_profile = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_system_profile()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.UserActionEventProto user_action_event = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_user_action_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.OmniboxEventProto omnibox_event = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_omnibox_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.HistogramEventProto histogram_event = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_histogram_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.PerfDataProto perf_data = 8 [deprecated = true];
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_perf_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 product = 10 [default = 0];
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {
          set_has_product();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &product_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.SampledProfile sampled_profile = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_sampled_profile()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .metrics.CastLogsProto cast_logs = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_cast_logs()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.MemoryLeakReportProto memory_leak_report = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_memory_leak_report()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.TranslateEventProto translate_event = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_translate_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.PrinterEventProto printer_event = 16;
      case 16: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(130u /* 130 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_printer_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .metrics.ReportingInfo reporting_info = 17;
      case 17: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(138u /* 138 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_reporting_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metrics.TraceLog trace_log = 19;
      case 19: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(154u /* 154 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_trace_log()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:metrics.ChromeUserMetricsExtension)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.ChromeUserMetricsExtension)
  return false;
#undef DO_
}

void ChromeUserMetricsExtension::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.ChromeUserMetricsExtension)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 client_id = 1;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->client_id(), output);
  }

  // optional int32 session_id = 2;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->session_id(), output);
  }

  // optional .metrics.SystemProfileProto system_profile = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->_internal_system_profile(), output);
  }

  // repeated .metrics.UserActionEventProto user_action_event = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->user_action_event_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4,
      this->user_action_event(static_cast<int>(i)),
      output);
  }

  // repeated .metrics.OmniboxEventProto omnibox_event = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->omnibox_event_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5,
      this->omnibox_event(static_cast<int>(i)),
      output);
  }

  // repeated .metrics.HistogramEventProto histogram_event = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->histogram_event_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6,
      this->histogram_event(static_cast<int>(i)),
      output);
  }

  // repeated .metrics.PerfDataProto perf_data = 8 [deprecated = true];
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->perf_data_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      8,
      this->perf_data(static_cast<int>(i)),
      output);
  }

  // optional int32 product = 10 [default = 0];
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->product(), output);
  }

  // repeated .metrics.SampledProfile sampled_profile = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->sampled_profile_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      11,
      this->sampled_profile(static_cast<int>(i)),
      output);
  }

  // optional .metrics.CastLogsProto cast_logs = 12;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      12, this->_internal_cast_logs(), output);
  }

  // repeated .metrics.MemoryLeakReportProto memory_leak_report = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->memory_leak_report_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      13,
      this->memory_leak_report(static_cast<int>(i)),
      output);
  }

  // repeated .metrics.TranslateEventProto translate_event = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->translate_event_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      15,
      this->translate_event(static_cast<int>(i)),
      output);
  }

  // repeated .metrics.PrinterEventProto printer_event = 16;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->printer_event_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      16,
      this->printer_event(static_cast<int>(i)),
      output);
  }

  // optional .metrics.ReportingInfo reporting_info = 17;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      17, this->_internal_reporting_info(), output);
  }

  // repeated .metrics.TraceLog trace_log = 19;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->trace_log_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      19,
      this->trace_log(static_cast<int>(i)),
      output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.ChromeUserMetricsExtension)
}

size_t ChromeUserMetricsExtension::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.ChromeUserMetricsExtension)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .metrics.UserActionEventProto user_action_event = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->user_action_event_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->user_action_event(static_cast<int>(i)));
    }
  }

  // repeated .metrics.OmniboxEventProto omnibox_event = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->omnibox_event_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->omnibox_event(static_cast<int>(i)));
    }
  }

  // repeated .metrics.HistogramEventProto histogram_event = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->histogram_event_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->histogram_event(static_cast<int>(i)));
    }
  }

  // repeated .metrics.PerfDataProto perf_data = 8 [deprecated = true];
  {
    unsigned int count = static_cast<unsigned int>(this->perf_data_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->perf_data(static_cast<int>(i)));
    }
  }

  // repeated .metrics.SampledProfile sampled_profile = 11;
  {
    unsigned int count = static_cast<unsigned int>(this->sampled_profile_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->sampled_profile(static_cast<int>(i)));
    }
  }

  // repeated .metrics.MemoryLeakReportProto memory_leak_report = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->memory_leak_report_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->memory_leak_report(static_cast<int>(i)));
    }
  }

  // repeated .metrics.TranslateEventProto translate_event = 15;
  {
    unsigned int count = static_cast<unsigned int>(this->translate_event_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->translate_event(static_cast<int>(i)));
    }
  }

  // repeated .metrics.PrinterEventProto printer_event = 16;
  {
    unsigned int count = static_cast<unsigned int>(this->printer_event_size());
    total_size += 2UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->printer_event(static_cast<int>(i)));
    }
  }

  // repeated .metrics.TraceLog trace_log = 19;
  {
    unsigned int count = static_cast<unsigned int>(this->trace_log_size());
    total_size += 2UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->trace_log(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 63u) {
    // optional .metrics.SystemProfileProto system_profile = 3;
    if (has_system_profile()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *system_profile_);
    }

    // optional .metrics.CastLogsProto cast_logs = 12;
    if (has_cast_logs()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *cast_logs_);
    }

    // optional .metrics.ReportingInfo reporting_info = 17;
    if (has_reporting_info()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *reporting_info_);
    }

    // optional fixed64 client_id = 1;
    if (has_client_id()) {
      total_size += 1 + 8;
    }

    // optional int32 session_id = 2;
    if (has_session_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->session_id());
    }

    // optional int32 product = 10 [default = 0];
    if (has_product()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->product());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChromeUserMetricsExtension::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChromeUserMetricsExtension*>(&from));
}

void ChromeUserMetricsExtension::MergeFrom(const ChromeUserMetricsExtension& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.ChromeUserMetricsExtension)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  user_action_event_.MergeFrom(from.user_action_event_);
  omnibox_event_.MergeFrom(from.omnibox_event_);
  histogram_event_.MergeFrom(from.histogram_event_);
  perf_data_.MergeFrom(from.perf_data_);
  sampled_profile_.MergeFrom(from.sampled_profile_);
  memory_leak_report_.MergeFrom(from.memory_leak_report_);
  translate_event_.MergeFrom(from.translate_event_);
  printer_event_.MergeFrom(from.printer_event_);
  trace_log_.MergeFrom(from.trace_log_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_system_profile()->::metrics::SystemProfileProto::MergeFrom(from.system_profile());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_cast_logs()->::metrics::CastLogsProto::MergeFrom(from.cast_logs());
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_reporting_info()->::metrics::ReportingInfo::MergeFrom(from.reporting_info());
    }
    if (cached_has_bits & 0x00000008u) {
      client_id_ = from.client_id_;
    }
    if (cached_has_bits & 0x00000010u) {
      session_id_ = from.session_id_;
    }
    if (cached_has_bits & 0x00000020u) {
      product_ = from.product_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChromeUserMetricsExtension::CopyFrom(const ChromeUserMetricsExtension& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.ChromeUserMetricsExtension)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeUserMetricsExtension::IsInitialized() const {
  return true;
}

void ChromeUserMetricsExtension::Swap(ChromeUserMetricsExtension* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChromeUserMetricsExtension::InternalSwap(ChromeUserMetricsExtension* other) {
  using std::swap;
  CastToBase(&user_action_event_)->InternalSwap(CastToBase(&other->user_action_event_));
  CastToBase(&omnibox_event_)->InternalSwap(CastToBase(&other->omnibox_event_));
  CastToBase(&histogram_event_)->InternalSwap(CastToBase(&other->histogram_event_));
  CastToBase(&perf_data_)->InternalSwap(CastToBase(&other->perf_data_));
  CastToBase(&sampled_profile_)->InternalSwap(CastToBase(&other->sampled_profile_));
  CastToBase(&memory_leak_report_)->InternalSwap(CastToBase(&other->memory_leak_report_));
  CastToBase(&translate_event_)->InternalSwap(CastToBase(&other->translate_event_));
  CastToBase(&printer_event_)->InternalSwap(CastToBase(&other->printer_event_));
  CastToBase(&trace_log_)->InternalSwap(CastToBase(&other->trace_log_));
  swap(system_profile_, other->system_profile_);
  swap(cast_logs_, other->cast_logs_);
  swap(reporting_info_, other->reporting_info_);
  swap(client_id_, other->client_id_);
  swap(session_id_, other->session_id_);
  swap(product_, other->product_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string ChromeUserMetricsExtension::GetTypeName() const {
  return "metrics.ChromeUserMetricsExtension";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace metrics
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metrics::ChromeUserMetricsExtension* Arena::CreateMaybeMessage< ::metrics::ChromeUserMetricsExtension >(Arena* arena) {
  return Arena::CreateInternal< ::metrics::ChromeUserMetricsExtension >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
