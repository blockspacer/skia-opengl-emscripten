
// Generated from gen_builders.py.  DO NOT EDIT!
// source: ukm.xml

#include "services/metrics/public/cpp//ukm_builders.h"

namespace ukm {
namespace builders {


const char AbusiveExperienceHeuristic::kEntryName[] = "AbusiveExperienceHeuristic";

AbusiveExperienceHeuristic::AbusiveExperienceHeuristic(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic::AbusiveExperienceHeuristic(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic::~AbusiveExperienceHeuristic() = default;


const char AbusiveExperienceHeuristic::kDidTabUnderName[] = "DidTabUnder";

AbusiveExperienceHeuristic& AbusiveExperienceHeuristic::SetDidTabUnder(int64_t value) {
  SetMetricInternal(kDidTabUnderNameHash, value);
  return *this;
}

const char AbusiveExperienceHeuristic::kDidWindowOpenFromAdScriptName[] = "DidWindowOpenFromAdScript";

AbusiveExperienceHeuristic& AbusiveExperienceHeuristic::SetDidWindowOpenFromAdScript(int64_t value) {
  SetMetricInternal(kDidWindowOpenFromAdScriptNameHash, value);
  return *this;
}

const char AbusiveExperienceHeuristic::kDidWindowOpenFromAdSubframeName[] = "DidWindowOpenFromAdSubframe";

AbusiveExperienceHeuristic& AbusiveExperienceHeuristic::SetDidWindowOpenFromAdSubframe(int64_t value) {
  SetMetricInternal(kDidWindowOpenFromAdSubframeNameHash, value);
  return *this;
}


const char AbusiveExperienceHeuristic_JavaScriptDialog::kEntryName[] = "AbusiveExperienceHeuristic.JavaScriptDialog";

AbusiveExperienceHeuristic_JavaScriptDialog::AbusiveExperienceHeuristic_JavaScriptDialog(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic_JavaScriptDialog::AbusiveExperienceHeuristic_JavaScriptDialog(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic_JavaScriptDialog::~AbusiveExperienceHeuristic_JavaScriptDialog() = default;


const char AbusiveExperienceHeuristic_JavaScriptDialog::kDismissalCauseName[] = "DismissalCause";

AbusiveExperienceHeuristic_JavaScriptDialog& AbusiveExperienceHeuristic_JavaScriptDialog::SetDismissalCause(int64_t value) {
  SetMetricInternal(kDismissalCauseNameHash, value);
  return *this;
}


const char AbusiveExperienceHeuristic_TabUnder::kEntryName[] = "AbusiveExperienceHeuristic.TabUnder";

AbusiveExperienceHeuristic_TabUnder::AbusiveExperienceHeuristic_TabUnder(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic_TabUnder::AbusiveExperienceHeuristic_TabUnder(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic_TabUnder::~AbusiveExperienceHeuristic_TabUnder() = default;


const char AbusiveExperienceHeuristic_TabUnder::kDidTabUnderName[] = "DidTabUnder";

AbusiveExperienceHeuristic_TabUnder& AbusiveExperienceHeuristic_TabUnder::SetDidTabUnder(int64_t value) {
  SetMetricInternal(kDidTabUnderNameHash, value);
  return *this;
}


const char AbusiveExperienceHeuristic_WindowOpen::kEntryName[] = "AbusiveExperienceHeuristic.WindowOpen";

AbusiveExperienceHeuristic_WindowOpen::AbusiveExperienceHeuristic_WindowOpen(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic_WindowOpen::AbusiveExperienceHeuristic_WindowOpen(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AbusiveExperienceHeuristic_WindowOpen::~AbusiveExperienceHeuristic_WindowOpen() = default;


const char AbusiveExperienceHeuristic_WindowOpen::kFromAdScriptName[] = "FromAdScript";

AbusiveExperienceHeuristic_WindowOpen& AbusiveExperienceHeuristic_WindowOpen::SetFromAdScript(int64_t value) {
  SetMetricInternal(kFromAdScriptNameHash, value);
  return *this;
}

const char AbusiveExperienceHeuristic_WindowOpen::kFromAdSubframeName[] = "FromAdSubframe";

AbusiveExperienceHeuristic_WindowOpen& AbusiveExperienceHeuristic_WindowOpen::SetFromAdSubframe(int64_t value) {
  SetMetricInternal(kFromAdSubframeNameHash, value);
  return *this;
}


const char AdPageLoad::kEntryName[] = "AdPageLoad";

AdPageLoad::AdPageLoad(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AdPageLoad::AdPageLoad(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AdPageLoad::~AdPageLoad() = default;


const char AdPageLoad::kAdBytesName[] = "AdBytes";

AdPageLoad& AdPageLoad::SetAdBytes(int64_t value) {
  SetMetricInternal(kAdBytesNameHash, value);
  return *this;
}

const char AdPageLoad::kAdBytesPerSecondName[] = "AdBytesPerSecond";

AdPageLoad& AdPageLoad::SetAdBytesPerSecond(int64_t value) {
  SetMetricInternal(kAdBytesPerSecondNameHash, value);
  return *this;
}

const char AdPageLoad::kAdBytesPerSecondAfterInteractiveName[] = "AdBytesPerSecondAfterInteractive";

AdPageLoad& AdPageLoad::SetAdBytesPerSecondAfterInteractive(int64_t value) {
  SetMetricInternal(kAdBytesPerSecondAfterInteractiveNameHash, value);
  return *this;
}

const char AdPageLoad::kAdCpuTimeName[] = "AdCpuTime";

AdPageLoad& AdPageLoad::SetAdCpuTime(int64_t value) {
  SetMetricInternal(kAdCpuTimeNameHash, value);
  return *this;
}

const char AdPageLoad::kAdJavascriptBytesName[] = "AdJavascriptBytes";

AdPageLoad& AdPageLoad::SetAdJavascriptBytes(int64_t value) {
  SetMetricInternal(kAdJavascriptBytesNameHash, value);
  return *this;
}

const char AdPageLoad::kAdVideoBytesName[] = "AdVideoBytes";

AdPageLoad& AdPageLoad::SetAdVideoBytes(int64_t value) {
  SetMetricInternal(kAdVideoBytesNameHash, value);
  return *this;
}

const char AdPageLoad::kTotalBytesName[] = "TotalBytes";

AdPageLoad& AdPageLoad::SetTotalBytes(int64_t value) {
  SetMetricInternal(kTotalBytesNameHash, value);
  return *this;
}


const char AmpPageLoad::kEntryName[] = "AmpPageLoad";

AmpPageLoad::AmpPageLoad(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AmpPageLoad::AmpPageLoad(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AmpPageLoad::~AmpPageLoad() = default;


const char AmpPageLoad::kMainFrameAmpPageLoadName[] = "MainFrameAmpPageLoad";

AmpPageLoad& AmpPageLoad::SetMainFrameAmpPageLoad(int64_t value) {
  SetMetricInternal(kMainFrameAmpPageLoadNameHash, value);
  return *this;
}

const char AmpPageLoad::kSubFrame_InteractiveTiming_FirstInputDelay3Name[] = "SubFrame.InteractiveTiming.FirstInputDelay3";

AmpPageLoad& AmpPageLoad::SetSubFrame_InteractiveTiming_FirstInputDelay3(int64_t value) {
  SetMetricInternal(kSubFrame_InteractiveTiming_FirstInputDelay3NameHash, value);
  return *this;
}

const char AmpPageLoad::kSubFrame_LayoutStability_JankScoreName[] = "SubFrame.LayoutStability.JankScore";

AmpPageLoad& AmpPageLoad::SetSubFrame_LayoutStability_JankScore(int64_t value) {
  SetMetricInternal(kSubFrame_LayoutStability_JankScoreNameHash, value);
  return *this;
}

const char AmpPageLoad::kSubFrame_MainFrameToSubFrameNavigationDeltaName[] = "SubFrame.MainFrameToSubFrameNavigationDelta";

AmpPageLoad& AmpPageLoad::SetSubFrame_MainFrameToSubFrameNavigationDelta(int64_t value) {
  SetMetricInternal(kSubFrame_MainFrameToSubFrameNavigationDeltaNameHash, value);
  return *this;
}

const char AmpPageLoad::kSubFrame_PaintTiming_NavigationToFirstContentfulPaintName[] = "SubFrame.PaintTiming.NavigationToFirstContentfulPaint";

AmpPageLoad& AmpPageLoad::SetSubFrame_PaintTiming_NavigationToFirstContentfulPaint(int64_t value) {
  SetMetricInternal(kSubFrame_PaintTiming_NavigationToFirstContentfulPaintNameHash, value);
  return *this;
}

const char AmpPageLoad::kSubFrame_PaintTiming_NavigationToLargestContentPaintName[] = "SubFrame.PaintTiming.NavigationToLargestContentPaint";

AmpPageLoad& AmpPageLoad::SetSubFrame_PaintTiming_NavigationToLargestContentPaint(int64_t value) {
  SetMetricInternal(kSubFrame_PaintTiming_NavigationToLargestContentPaintNameHash, value);
  return *this;
}

const char AmpPageLoad::kSubFrameAmpPageLoadName[] = "SubFrameAmpPageLoad";

AmpPageLoad& AmpPageLoad::SetSubFrameAmpPageLoad(int64_t value) {
  SetMetricInternal(kSubFrameAmpPageLoadNameHash, value);
  return *this;
}


const char AppListAppClickData::kEntryName[] = "AppListAppClickData";

AppListAppClickData::AppListAppClickData(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AppListAppClickData::AppListAppClickData(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AppListAppClickData::~AppListAppClickData() = default;


const char AppListAppClickData::kAppLaunchIdName[] = "AppLaunchId";

AppListAppClickData& AppListAppClickData::SetAppLaunchId(int64_t value) {
  SetMetricInternal(kAppLaunchIdNameHash, value);
  return *this;
}

const char AppListAppClickData::kAppTypeName[] = "AppType";

AppListAppClickData& AppListAppClickData::SetAppType(int64_t value) {
  SetMetricInternal(kAppTypeNameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour00Name[] = "ClicksEachHour00";

AppListAppClickData& AppListAppClickData::SetClicksEachHour00(int64_t value) {
  SetMetricInternal(kClicksEachHour00NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour01Name[] = "ClicksEachHour01";

AppListAppClickData& AppListAppClickData::SetClicksEachHour01(int64_t value) {
  SetMetricInternal(kClicksEachHour01NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour02Name[] = "ClicksEachHour02";

AppListAppClickData& AppListAppClickData::SetClicksEachHour02(int64_t value) {
  SetMetricInternal(kClicksEachHour02NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour03Name[] = "ClicksEachHour03";

AppListAppClickData& AppListAppClickData::SetClicksEachHour03(int64_t value) {
  SetMetricInternal(kClicksEachHour03NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour04Name[] = "ClicksEachHour04";

AppListAppClickData& AppListAppClickData::SetClicksEachHour04(int64_t value) {
  SetMetricInternal(kClicksEachHour04NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour05Name[] = "ClicksEachHour05";

AppListAppClickData& AppListAppClickData::SetClicksEachHour05(int64_t value) {
  SetMetricInternal(kClicksEachHour05NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour06Name[] = "ClicksEachHour06";

AppListAppClickData& AppListAppClickData::SetClicksEachHour06(int64_t value) {
  SetMetricInternal(kClicksEachHour06NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour07Name[] = "ClicksEachHour07";

AppListAppClickData& AppListAppClickData::SetClicksEachHour07(int64_t value) {
  SetMetricInternal(kClicksEachHour07NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour08Name[] = "ClicksEachHour08";

AppListAppClickData& AppListAppClickData::SetClicksEachHour08(int64_t value) {
  SetMetricInternal(kClicksEachHour08NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour09Name[] = "ClicksEachHour09";

AppListAppClickData& AppListAppClickData::SetClicksEachHour09(int64_t value) {
  SetMetricInternal(kClicksEachHour09NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour10Name[] = "ClicksEachHour10";

AppListAppClickData& AppListAppClickData::SetClicksEachHour10(int64_t value) {
  SetMetricInternal(kClicksEachHour10NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour11Name[] = "ClicksEachHour11";

AppListAppClickData& AppListAppClickData::SetClicksEachHour11(int64_t value) {
  SetMetricInternal(kClicksEachHour11NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour12Name[] = "ClicksEachHour12";

AppListAppClickData& AppListAppClickData::SetClicksEachHour12(int64_t value) {
  SetMetricInternal(kClicksEachHour12NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour13Name[] = "ClicksEachHour13";

AppListAppClickData& AppListAppClickData::SetClicksEachHour13(int64_t value) {
  SetMetricInternal(kClicksEachHour13NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour14Name[] = "ClicksEachHour14";

AppListAppClickData& AppListAppClickData::SetClicksEachHour14(int64_t value) {
  SetMetricInternal(kClicksEachHour14NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour15Name[] = "ClicksEachHour15";

AppListAppClickData& AppListAppClickData::SetClicksEachHour15(int64_t value) {
  SetMetricInternal(kClicksEachHour15NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour16Name[] = "ClicksEachHour16";

AppListAppClickData& AppListAppClickData::SetClicksEachHour16(int64_t value) {
  SetMetricInternal(kClicksEachHour16NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour17Name[] = "ClicksEachHour17";

AppListAppClickData& AppListAppClickData::SetClicksEachHour17(int64_t value) {
  SetMetricInternal(kClicksEachHour17NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour18Name[] = "ClicksEachHour18";

AppListAppClickData& AppListAppClickData::SetClicksEachHour18(int64_t value) {
  SetMetricInternal(kClicksEachHour18NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour19Name[] = "ClicksEachHour19";

AppListAppClickData& AppListAppClickData::SetClicksEachHour19(int64_t value) {
  SetMetricInternal(kClicksEachHour19NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour20Name[] = "ClicksEachHour20";

AppListAppClickData& AppListAppClickData::SetClicksEachHour20(int64_t value) {
  SetMetricInternal(kClicksEachHour20NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour21Name[] = "ClicksEachHour21";

AppListAppClickData& AppListAppClickData::SetClicksEachHour21(int64_t value) {
  SetMetricInternal(kClicksEachHour21NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour22Name[] = "ClicksEachHour22";

AppListAppClickData& AppListAppClickData::SetClicksEachHour22(int64_t value) {
  SetMetricInternal(kClicksEachHour22NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksEachHour23Name[] = "ClicksEachHour23";

AppListAppClickData& AppListAppClickData::SetClicksEachHour23(int64_t value) {
  SetMetricInternal(kClicksEachHour23NameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksLast24HoursName[] = "ClicksLast24Hours";

AppListAppClickData& AppListAppClickData::SetClicksLast24Hours(int64_t value) {
  SetMetricInternal(kClicksLast24HoursNameHash, value);
  return *this;
}

const char AppListAppClickData::kClicksLastHourName[] = "ClicksLastHour";

AppListAppClickData& AppListAppClickData::SetClicksLastHour(int64_t value) {
  SetMetricInternal(kClicksLastHourNameHash, value);
  return *this;
}

const char AppListAppClickData::kLastLaunchedFromName[] = "LastLaunchedFrom";

AppListAppClickData& AppListAppClickData::SetLastLaunchedFrom(int64_t value) {
  SetMetricInternal(kLastLaunchedFromNameHash, value);
  return *this;
}

const char AppListAppClickData::kMostRecentlyUsedIndexName[] = "MostRecentlyUsedIndex";

AppListAppClickData& AppListAppClickData::SetMostRecentlyUsedIndex(int64_t value) {
  SetMetricInternal(kMostRecentlyUsedIndexNameHash, value);
  return *this;
}

const char AppListAppClickData::kSequenceNumberName[] = "SequenceNumber";

AppListAppClickData& AppListAppClickData::SetSequenceNumber(int64_t value) {
  SetMetricInternal(kSequenceNumberNameHash, value);
  return *this;
}

const char AppListAppClickData::kTimeSinceLastClickName[] = "TimeSinceLastClick";

AppListAppClickData& AppListAppClickData::SetTimeSinceLastClick(int64_t value) {
  SetMetricInternal(kTimeSinceLastClickNameHash, value);
  return *this;
}

const char AppListAppClickData::kTotalClicksName[] = "TotalClicks";

AppListAppClickData& AppListAppClickData::SetTotalClicks(int64_t value) {
  SetMetricInternal(kTotalClicksNameHash, value);
  return *this;
}


const char AppListAppLaunch::kEntryName[] = "AppListAppLaunch";

AppListAppLaunch::AppListAppLaunch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AppListAppLaunch::AppListAppLaunch(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

AppListAppLaunch::~AppListAppLaunch() = default;


const char AppListAppLaunch::kAllClicksLast24HoursName[] = "AllClicksLast24Hours";

AppListAppLaunch& AppListAppLaunch::SetAllClicksLast24Hours(int64_t value) {
  SetMetricInternal(kAllClicksLast24HoursNameHash, value);
  return *this;
}

const char AppListAppLaunch::kAllClicksLastHourName[] = "AllClicksLastHour";

AppListAppLaunch& AppListAppLaunch::SetAllClicksLastHour(int64_t value) {
  SetMetricInternal(kAllClicksLastHourNameHash, value);
  return *this;
}

const char AppListAppLaunch::kAppTypeName[] = "AppType";

AppListAppLaunch& AppListAppLaunch::SetAppType(int64_t value) {
  SetMetricInternal(kAppTypeNameHash, value);
  return *this;
}

const char AppListAppLaunch::kClickMethodName[] = "ClickMethod";

AppListAppLaunch& AppListAppLaunch::SetClickMethod(int64_t value) {
  SetMetricInternal(kClickMethodNameHash, value);
  return *this;
}

const char AppListAppLaunch::kDayOfWeekName[] = "DayOfWeek";

AppListAppLaunch& AppListAppLaunch::SetDayOfWeek(int64_t value) {
  SetMetricInternal(kDayOfWeekNameHash, value);
  return *this;
}

const char AppListAppLaunch::kDeviceModeName[] = "DeviceMode";

AppListAppLaunch& AppListAppLaunch::SetDeviceMode(int64_t value) {
  SetMetricInternal(kDeviceModeNameHash, value);
  return *this;
}

const char AppListAppLaunch::kDeviceTypeName[] = "DeviceType";

AppListAppLaunch& AppListAppLaunch::SetDeviceType(int64_t value) {
  SetMetricInternal(kDeviceTypeNameHash, value);
  return *this;
}

const char AppListAppLaunch::kHourOfDayName[] = "HourOfDay";

AppListAppLaunch& AppListAppLaunch::SetHourOfDay(int64_t value) {
  SetMetricInternal(kHourOfDayNameHash, value);
  return *this;
}

const char AppListAppLaunch::kLaunchedFromName[] = "LaunchedFrom";

AppListAppLaunch& AppListAppLaunch::SetLaunchedFrom(int64_t value) {
  SetMetricInternal(kLaunchedFromNameHash, value);
  return *this;
}

const char AppListAppLaunch::kPositionIndexName[] = "PositionIndex";

AppListAppLaunch& AppListAppLaunch::SetPositionIndex(int64_t value) {
  SetMetricInternal(kPositionIndexNameHash, value);
  return *this;
}

const char AppListAppLaunch::kTotalHoursName[] = "TotalHours";

AppListAppLaunch& AppListAppLaunch::SetTotalHours(int64_t value) {
  SetMetricInternal(kTotalHoursNameHash, value);
  return *this;
}


const char Autofill_CardUploadDecision::kEntryName[] = "Autofill.CardUploadDecision";

Autofill_CardUploadDecision::Autofill_CardUploadDecision(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_CardUploadDecision::Autofill_CardUploadDecision(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_CardUploadDecision::~Autofill_CardUploadDecision() = default;


const char Autofill_CardUploadDecision::kUploadDecisionName[] = "UploadDecision";

Autofill_CardUploadDecision& Autofill_CardUploadDecision::SetUploadDecision(int64_t value) {
  SetMetricInternal(kUploadDecisionNameHash, value);
  return *this;
}


const char Autofill_DeveloperEngagement::kEntryName[] = "Autofill.DeveloperEngagement";

Autofill_DeveloperEngagement::Autofill_DeveloperEngagement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_DeveloperEngagement::Autofill_DeveloperEngagement(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_DeveloperEngagement::~Autofill_DeveloperEngagement() = default;


const char Autofill_DeveloperEngagement::kDeveloperEngagementName[] = "DeveloperEngagement";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetDeveloperEngagement(int64_t value) {
  SetMetricInternal(kDeveloperEngagementNameHash, value);
  return *this;
}

const char Autofill_DeveloperEngagement::kFormSignatureName[] = "FormSignature";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_DeveloperEngagement::kFormTypesName[] = "FormTypes";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetFormTypes(int64_t value) {
  SetMetricInternal(kFormTypesNameHash, value);
  return *this;
}

const char Autofill_DeveloperEngagement::kIsForCreditCardName[] = "IsForCreditCard";

Autofill_DeveloperEngagement& Autofill_DeveloperEngagement::SetIsForCreditCard(int64_t value) {
  SetMetricInternal(kIsForCreditCardNameHash, value);
  return *this;
}


const char Autofill_FieldFillStatus::kEntryName[] = "Autofill.FieldFillStatus";

Autofill_FieldFillStatus::Autofill_FieldFillStatus(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FieldFillStatus::Autofill_FieldFillStatus(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FieldFillStatus::~Autofill_FieldFillStatus() = default;


const char Autofill_FieldFillStatus::kFieldSignatureName[] = "FieldSignature";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kFormSignatureName[] = "FormSignature";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kIsAutofilledName[] = "IsAutofilled";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetIsAutofilled(int64_t value) {
  SetMetricInternal(kIsAutofilledNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kPredictionSourceName[] = "PredictionSource";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetPredictionSource(int64_t value) {
  SetMetricInternal(kPredictionSourceNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kValidationEventName[] = "ValidationEvent";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetValidationEvent(int64_t value) {
  SetMetricInternal(kValidationEventNameHash, value);
  return *this;
}

const char Autofill_FieldFillStatus::kWasPreviouslyAutofilledName[] = "WasPreviouslyAutofilled";

Autofill_FieldFillStatus& Autofill_FieldFillStatus::SetWasPreviouslyAutofilled(int64_t value) {
  SetMetricInternal(kWasPreviouslyAutofilledNameHash, value);
  return *this;
}


const char Autofill_FieldTypeValidation::kEntryName[] = "Autofill.FieldTypeValidation";

Autofill_FieldTypeValidation::Autofill_FieldTypeValidation(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FieldTypeValidation::Autofill_FieldTypeValidation(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FieldTypeValidation::~Autofill_FieldTypeValidation() = default;


const char Autofill_FieldTypeValidation::kActualTypeName[] = "ActualType";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetActualType(int64_t value) {
  SetMetricInternal(kActualTypeNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kFieldSignatureName[] = "FieldSignature";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kFormSignatureName[] = "FormSignature";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kPredictedTypeName[] = "PredictedType";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetPredictedType(int64_t value) {
  SetMetricInternal(kPredictedTypeNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kPredictionSourceName[] = "PredictionSource";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetPredictionSource(int64_t value) {
  SetMetricInternal(kPredictionSourceNameHash, value);
  return *this;
}

const char Autofill_FieldTypeValidation::kValidationEventName[] = "ValidationEvent";

Autofill_FieldTypeValidation& Autofill_FieldTypeValidation::SetValidationEvent(int64_t value) {
  SetMetricInternal(kValidationEventNameHash, value);
  return *this;
}


const char Autofill_FormEvent::kEntryName[] = "Autofill.FormEvent";

Autofill_FormEvent::Autofill_FormEvent(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FormEvent::Autofill_FormEvent(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FormEvent::~Autofill_FormEvent() = default;


const char Autofill_FormEvent::kAutofillFormEventName[] = "AutofillFormEvent";

Autofill_FormEvent& Autofill_FormEvent::SetAutofillFormEvent(int64_t value) {
  SetMetricInternal(kAutofillFormEventNameHash, value);
  return *this;
}

const char Autofill_FormEvent::kFormTypesName[] = "FormTypes";

Autofill_FormEvent& Autofill_FormEvent::SetFormTypes(int64_t value) {
  SetMetricInternal(kFormTypesNameHash, value);
  return *this;
}

const char Autofill_FormEvent::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_FormEvent& Autofill_FormEvent::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}


const char Autofill_FormSubmitted::kEntryName[] = "Autofill.FormSubmitted";

Autofill_FormSubmitted::Autofill_FormSubmitted(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FormSubmitted::Autofill_FormSubmitted(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_FormSubmitted::~Autofill_FormSubmitted() = default;


const char Autofill_FormSubmitted::kAutofillFormSubmittedStateName[] = "AutofillFormSubmittedState";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetAutofillFormSubmittedState(int64_t value) {
  SetMetricInternal(kAutofillFormSubmittedStateNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kFormSignatureName[] = "FormSignature";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kFormTypesName[] = "FormTypes";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetFormTypes(int64_t value) {
  SetMetricInternal(kFormTypesNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kHasUpiVpaFieldName[] = "HasUpiVpaField";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetHasUpiVpaField(int64_t value) {
  SetMetricInternal(kHasUpiVpaFieldNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kIsForCreditCardName[] = "IsForCreditCard";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetIsForCreditCard(int64_t value) {
  SetMetricInternal(kIsForCreditCardNameHash, value);
  return *this;
}

const char Autofill_FormSubmitted::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_FormSubmitted& Autofill_FormSubmitted::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}


const char Autofill_HiddenRepresentationalFieldSkipDecision::kEntryName[] = "Autofill.HiddenRepresentationalFieldSkipDecision";

Autofill_HiddenRepresentationalFieldSkipDecision::Autofill_HiddenRepresentationalFieldSkipDecision(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_HiddenRepresentationalFieldSkipDecision::Autofill_HiddenRepresentationalFieldSkipDecision(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_HiddenRepresentationalFieldSkipDecision::~Autofill_HiddenRepresentationalFieldSkipDecision() = default;


const char Autofill_HiddenRepresentationalFieldSkipDecision::kFieldOverallTypeName[] = "FieldOverallType";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetFieldOverallType(int64_t value) {
  SetMetricInternal(kFieldOverallTypeNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kFieldSignatureName[] = "FieldSignature";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kFieldTypeGroupName[] = "FieldTypeGroup";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetFieldTypeGroup(int64_t value) {
  SetMetricInternal(kFieldTypeGroupNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kFormSignatureName[] = "FormSignature";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kHeuristicTypeName[] = "HeuristicType";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetHeuristicType(int64_t value) {
  SetMetricInternal(kHeuristicTypeNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kHtmlFieldModeName[] = "HtmlFieldMode";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetHtmlFieldMode(int64_t value) {
  SetMetricInternal(kHtmlFieldModeNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kHtmlFieldTypeName[] = "HtmlFieldType";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetHtmlFieldType(int64_t value) {
  SetMetricInternal(kHtmlFieldTypeNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kIsSkippedName[] = "IsSkipped";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetIsSkipped(int64_t value) {
  SetMetricInternal(kIsSkippedNameHash, value);
  return *this;
}

const char Autofill_HiddenRepresentationalFieldSkipDecision::kServerTypeName[] = "ServerType";

Autofill_HiddenRepresentationalFieldSkipDecision& Autofill_HiddenRepresentationalFieldSkipDecision::SetServerType(int64_t value) {
  SetMetricInternal(kServerTypeNameHash, value);
  return *this;
}


const char Autofill_InteractedWithForm::kEntryName[] = "Autofill.InteractedWithForm";

Autofill_InteractedWithForm::Autofill_InteractedWithForm(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_InteractedWithForm::Autofill_InteractedWithForm(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_InteractedWithForm::~Autofill_InteractedWithForm() = default;


const char Autofill_InteractedWithForm::kFormSignatureName[] = "FormSignature";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kFormTypesName[] = "FormTypes";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetFormTypes(int64_t value) {
  SetMetricInternal(kFormTypesNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kIsForCreditCardName[] = "IsForCreditCard";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetIsForCreditCard(int64_t value) {
  SetMetricInternal(kIsForCreditCardNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kLocalRecordTypeCountName[] = "LocalRecordTypeCount";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetLocalRecordTypeCount(int64_t value) {
  SetMetricInternal(kLocalRecordTypeCountNameHash, value);
  return *this;
}

const char Autofill_InteractedWithForm::kServerRecordTypeCountName[] = "ServerRecordTypeCount";

Autofill_InteractedWithForm& Autofill_InteractedWithForm::SetServerRecordTypeCount(int64_t value) {
  SetMetricInternal(kServerRecordTypeCountNameHash, value);
  return *this;
}


const char Autofill_RepeatedServerTypePredictionRationalized::kEntryName[] = "Autofill.RepeatedServerTypePredictionRationalized";

Autofill_RepeatedServerTypePredictionRationalized::Autofill_RepeatedServerTypePredictionRationalized(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_RepeatedServerTypePredictionRationalized::Autofill_RepeatedServerTypePredictionRationalized(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_RepeatedServerTypePredictionRationalized::~Autofill_RepeatedServerTypePredictionRationalized() = default;


const char Autofill_RepeatedServerTypePredictionRationalized::kFieldNewOverallTypeName[] = "FieldNewOverallType";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetFieldNewOverallType(int64_t value) {
  SetMetricInternal(kFieldNewOverallTypeNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kFieldOldOverallTypeName[] = "FieldOldOverallType";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetFieldOldOverallType(int64_t value) {
  SetMetricInternal(kFieldOldOverallTypeNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kFieldSignatureName[] = "FieldSignature";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kFieldTypeGroupName[] = "FieldTypeGroup";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetFieldTypeGroup(int64_t value) {
  SetMetricInternal(kFieldTypeGroupNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kFormSignatureName[] = "FormSignature";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kHeuristicTypeName[] = "HeuristicType";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetHeuristicType(int64_t value) {
  SetMetricInternal(kHeuristicTypeNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kHtmlFieldModeName[] = "HtmlFieldMode";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetHtmlFieldMode(int64_t value) {
  SetMetricInternal(kHtmlFieldModeNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kHtmlFieldTypeName[] = "HtmlFieldType";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetHtmlFieldType(int64_t value) {
  SetMetricInternal(kHtmlFieldTypeNameHash, value);
  return *this;
}

const char Autofill_RepeatedServerTypePredictionRationalized::kServerTypeName[] = "ServerType";

Autofill_RepeatedServerTypePredictionRationalized& Autofill_RepeatedServerTypePredictionRationalized::SetServerType(int64_t value) {
  SetMetricInternal(kServerTypeNameHash, value);
  return *this;
}


const char Autofill_SelectedMaskedServerCard::kEntryName[] = "Autofill.SelectedMaskedServerCard";

Autofill_SelectedMaskedServerCard::Autofill_SelectedMaskedServerCard(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SelectedMaskedServerCard::Autofill_SelectedMaskedServerCard(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SelectedMaskedServerCard::~Autofill_SelectedMaskedServerCard() = default;


const char Autofill_SelectedMaskedServerCard::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_SelectedMaskedServerCard& Autofill_SelectedMaskedServerCard::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}


const char Autofill_SuggestionFilled::kEntryName[] = "Autofill.SuggestionFilled";

Autofill_SuggestionFilled::Autofill_SuggestionFilled(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SuggestionFilled::Autofill_SuggestionFilled(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SuggestionFilled::~Autofill_SuggestionFilled() = default;


const char Autofill_SuggestionFilled::kFieldSignatureName[] = "FieldSignature";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionFilled::kFormSignatureName[] = "FormSignature";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionFilled::kIsForCreditCardName[] = "IsForCreditCard";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetIsForCreditCard(int64_t value) {
  SetMetricInternal(kIsForCreditCardNameHash, value);
  return *this;
}

const char Autofill_SuggestionFilled::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_SuggestionFilled::kRecordTypeName[] = "RecordType";

Autofill_SuggestionFilled& Autofill_SuggestionFilled::SetRecordType(int64_t value) {
  SetMetricInternal(kRecordTypeNameHash, value);
  return *this;
}


const char Autofill_SuggestionsShown::kEntryName[] = "Autofill.SuggestionsShown";

Autofill_SuggestionsShown::Autofill_SuggestionsShown(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SuggestionsShown::Autofill_SuggestionsShown(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_SuggestionsShown::~Autofill_SuggestionsShown() = default;


const char Autofill_SuggestionsShown::kFieldSignatureName[] = "FieldSignature";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kFormSignatureName[] = "FormSignature";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kHeuristicTypeName[] = "HeuristicType";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetHeuristicType(int64_t value) {
  SetMetricInternal(kHeuristicTypeNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kHtmlFieldTypeName[] = "HtmlFieldType";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetHtmlFieldType(int64_t value) {
  SetMetricInternal(kHtmlFieldTypeNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_SuggestionsShown::kServerTypeName[] = "ServerType";

Autofill_SuggestionsShown& Autofill_SuggestionsShown::SetServerType(int64_t value) {
  SetMetricInternal(kServerTypeNameHash, value);
  return *this;
}


const char Autofill_TextFieldDidChange::kEntryName[] = "Autofill.TextFieldDidChange";

Autofill_TextFieldDidChange::Autofill_TextFieldDidChange(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_TextFieldDidChange::Autofill_TextFieldDidChange(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Autofill_TextFieldDidChange::~Autofill_TextFieldDidChange() = default;


const char Autofill_TextFieldDidChange::kFieldSignatureName[] = "FieldSignature";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetFieldSignature(int64_t value) {
  SetMetricInternal(kFieldSignatureNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kFieldTypeGroupName[] = "FieldTypeGroup";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetFieldTypeGroup(int64_t value) {
  SetMetricInternal(kFieldTypeGroupNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kFormSignatureName[] = "FormSignature";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetFormSignature(int64_t value) {
  SetMetricInternal(kFormSignatureNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kHeuristicTypeName[] = "HeuristicType";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetHeuristicType(int64_t value) {
  SetMetricInternal(kHeuristicTypeNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kHtmlFieldModeName[] = "HtmlFieldMode";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetHtmlFieldMode(int64_t value) {
  SetMetricInternal(kHtmlFieldModeNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kHtmlFieldTypeName[] = "HtmlFieldType";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetHtmlFieldType(int64_t value) {
  SetMetricInternal(kHtmlFieldTypeNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kIsAutofilledName[] = "IsAutofilled";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetIsAutofilled(int64_t value) {
  SetMetricInternal(kIsAutofilledNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kIsEmptyName[] = "IsEmpty";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetIsEmpty(int64_t value) {
  SetMetricInternal(kIsEmptyNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kMillisecondsSinceFormParsedName[] = "MillisecondsSinceFormParsed";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetMillisecondsSinceFormParsed(int64_t value) {
  SetMetricInternal(kMillisecondsSinceFormParsedNameHash, value);
  return *this;
}

const char Autofill_TextFieldDidChange::kServerTypeName[] = "ServerType";

Autofill_TextFieldDidChange& Autofill_TextFieldDidChange::SetServerType(int64_t value) {
  SetMetricInternal(kServerTypeNameHash, value);
  return *this;
}


const char BackgroundFetch::kEntryName[] = "BackgroundFetch";

BackgroundFetch::BackgroundFetch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundFetch::BackgroundFetch(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundFetch::~BackgroundFetch() = default;


const char BackgroundFetch::kDeniedDueToPermissionsName[] = "DeniedDueToPermissions";

BackgroundFetch& BackgroundFetch::SetDeniedDueToPermissions(int64_t value) {
  SetMetricInternal(kDeniedDueToPermissionsNameHash, value);
  return *this;
}

const char BackgroundFetch::kDownloadTotalName[] = "DownloadTotal";

BackgroundFetch& BackgroundFetch::SetDownloadTotal(int64_t value) {
  SetMetricInternal(kDownloadTotalNameHash, value);
  return *this;
}

const char BackgroundFetch::kHasTitleName[] = "HasTitle";

BackgroundFetch& BackgroundFetch::SetHasTitle(int64_t value) {
  SetMetricInternal(kHasTitleNameHash, value);
  return *this;
}

const char BackgroundFetch::kNumIconsName[] = "NumIcons";

BackgroundFetch& BackgroundFetch::SetNumIcons(int64_t value) {
  SetMetricInternal(kNumIconsNameHash, value);
  return *this;
}

const char BackgroundFetch::kNumRequestsInFetchName[] = "NumRequestsInFetch";

BackgroundFetch& BackgroundFetch::SetNumRequestsInFetch(int64_t value) {
  SetMetricInternal(kNumRequestsInFetchNameHash, value);
  return *this;
}

const char BackgroundFetch::kRatioOfIdealToChosenIconSizeName[] = "RatioOfIdealToChosenIconSize";

BackgroundFetch& BackgroundFetch::SetRatioOfIdealToChosenIconSize(int64_t value) {
  SetMetricInternal(kRatioOfIdealToChosenIconSizeNameHash, value);
  return *this;
}


const char BackgroundFetchDeletingRegistration::kEntryName[] = "BackgroundFetchDeletingRegistration";

BackgroundFetchDeletingRegistration::BackgroundFetchDeletingRegistration(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundFetchDeletingRegistration::BackgroundFetchDeletingRegistration(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundFetchDeletingRegistration::~BackgroundFetchDeletingRegistration() = default;


const char BackgroundFetchDeletingRegistration::kUserInitiatedAbortName[] = "UserInitiatedAbort";

BackgroundFetchDeletingRegistration& BackgroundFetchDeletingRegistration::SetUserInitiatedAbort(int64_t value) {
  SetMetricInternal(kUserInitiatedAbortNameHash, value);
  return *this;
}


const char BackgroundSyncCompleted::kEntryName[] = "BackgroundSyncCompleted";

BackgroundSyncCompleted::BackgroundSyncCompleted(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundSyncCompleted::BackgroundSyncCompleted(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundSyncCompleted::~BackgroundSyncCompleted() = default;


const char BackgroundSyncCompleted::kMaxAttemptsName[] = "MaxAttempts";

BackgroundSyncCompleted& BackgroundSyncCompleted::SetMaxAttempts(int64_t value) {
  SetMetricInternal(kMaxAttemptsNameHash, value);
  return *this;
}

const char BackgroundSyncCompleted::kNumAttemptsName[] = "NumAttempts";

BackgroundSyncCompleted& BackgroundSyncCompleted::SetNumAttempts(int64_t value) {
  SetMetricInternal(kNumAttemptsNameHash, value);
  return *this;
}

const char BackgroundSyncCompleted::kStatusName[] = "Status";

BackgroundSyncCompleted& BackgroundSyncCompleted::SetStatus(int64_t value) {
  SetMetricInternal(kStatusNameHash, value);
  return *this;
}


const char BackgroundSyncRegistered::kEntryName[] = "BackgroundSyncRegistered";

BackgroundSyncRegistered::BackgroundSyncRegistered(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundSyncRegistered::BackgroundSyncRegistered(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BackgroundSyncRegistered::~BackgroundSyncRegistered() = default;


const char BackgroundSyncRegistered::kCanFireName[] = "CanFire";

BackgroundSyncRegistered& BackgroundSyncRegistered::SetCanFire(int64_t value) {
  SetMetricInternal(kCanFireNameHash, value);
  return *this;
}

const char BackgroundSyncRegistered::kIsReregisteredName[] = "IsReregistered";

BackgroundSyncRegistered& BackgroundSyncRegistered::SetIsReregistered(int64_t value) {
  SetMetricInternal(kIsReregisteredNameHash, value);
  return *this;
}


const char Blink_UpdateTime::kEntryName[] = "Blink.UpdateTime";

Blink_UpdateTime::Blink_UpdateTime(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Blink_UpdateTime::Blink_UpdateTime(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Blink_UpdateTime::~Blink_UpdateTime() = default;


const char Blink_UpdateTime::kAnimateName[] = "Animate";

Blink_UpdateTime& Blink_UpdateTime::SetAnimate(int64_t value) {
  SetMetricInternal(kAnimateNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kAnimate_AverageName[] = "Animate.Average";

Blink_UpdateTime& Blink_UpdateTime::SetAnimate_Average(int64_t value) {
  SetMetricInternal(kAnimate_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kAnimate_AverageRatioName[] = "Animate.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetAnimate_AverageRatio(int64_t value) {
  SetMetricInternal(kAnimate_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kAnimate_WorstCaseName[] = "Animate.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetAnimate_WorstCase(int64_t value) {
  SetMetricInternal(kAnimate_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kAnimate_WorstCaseRatioName[] = "Animate.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetAnimate_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kAnimate_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kAnimatePercentageName[] = "AnimatePercentage";

Blink_UpdateTime& Blink_UpdateTime::SetAnimatePercentage(int64_t value) {
  SetMetricInternal(kAnimatePercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingName[] = "Compositing";

Blink_UpdateTime& Blink_UpdateTime::SetCompositing(int64_t value) {
  SetMetricInternal(kCompositingNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositing_AverageName[] = "Compositing.Average";

Blink_UpdateTime& Blink_UpdateTime::SetCompositing_Average(int64_t value) {
  SetMetricInternal(kCompositing_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositing_AverageRatioName[] = "Compositing.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetCompositing_AverageRatio(int64_t value) {
  SetMetricInternal(kCompositing_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositing_WorstCaseName[] = "Compositing.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetCompositing_WorstCase(int64_t value) {
  SetMetricInternal(kCompositing_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositing_WorstCaseRatioName[] = "Compositing.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetCompositing_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kCompositing_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingCommitName[] = "CompositingCommit";

Blink_UpdateTime& Blink_UpdateTime::SetCompositingCommit(int64_t value) {
  SetMetricInternal(kCompositingCommitNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingCommit_AverageName[] = "CompositingCommit.Average";

Blink_UpdateTime& Blink_UpdateTime::SetCompositingCommit_Average(int64_t value) {
  SetMetricInternal(kCompositingCommit_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingCommit_AverageRatioName[] = "CompositingCommit.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetCompositingCommit_AverageRatio(int64_t value) {
  SetMetricInternal(kCompositingCommit_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingCommit_WorstCaseName[] = "CompositingCommit.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetCompositingCommit_WorstCase(int64_t value) {
  SetMetricInternal(kCompositingCommit_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingCommit_WorstCaseRatioName[] = "CompositingCommit.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetCompositingCommit_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kCompositingCommit_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingCommitPercentageName[] = "CompositingCommitPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetCompositingCommitPercentage(int64_t value) {
  SetMetricInternal(kCompositingCommitPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kCompositingPercentageName[] = "CompositingPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetCompositingPercentage(int64_t value) {
  SetMetricInternal(kCompositingPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kForcedStyleAndLayoutName[] = "ForcedStyleAndLayout";

Blink_UpdateTime& Blink_UpdateTime::SetForcedStyleAndLayout(int64_t value) {
  SetMetricInternal(kForcedStyleAndLayoutNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kForcedStyleAndLayout_AverageName[] = "ForcedStyleAndLayout.Average";

Blink_UpdateTime& Blink_UpdateTime::SetForcedStyleAndLayout_Average(int64_t value) {
  SetMetricInternal(kForcedStyleAndLayout_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kForcedStyleAndLayout_AverageRatioName[] = "ForcedStyleAndLayout.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetForcedStyleAndLayout_AverageRatio(int64_t value) {
  SetMetricInternal(kForcedStyleAndLayout_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kForcedStyleAndLayout_WorstCaseName[] = "ForcedStyleAndLayout.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetForcedStyleAndLayout_WorstCase(int64_t value) {
  SetMetricInternal(kForcedStyleAndLayout_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kForcedStyleAndLayout_WorstCaseRatioName[] = "ForcedStyleAndLayout.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetForcedStyleAndLayout_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kForcedStyleAndLayout_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kForcedStyleAndLayoutPercentageName[] = "ForcedStyleAndLayoutPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetForcedStyleAndLayoutPercentage(int64_t value) {
  SetMetricInternal(kForcedStyleAndLayoutPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kHandleInputEventsName[] = "HandleInputEvents";

Blink_UpdateTime& Blink_UpdateTime::SetHandleInputEvents(int64_t value) {
  SetMetricInternal(kHandleInputEventsNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kHandleInputEvents_AverageName[] = "HandleInputEvents.Average";

Blink_UpdateTime& Blink_UpdateTime::SetHandleInputEvents_Average(int64_t value) {
  SetMetricInternal(kHandleInputEvents_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kHandleInputEvents_AverageRatioName[] = "HandleInputEvents.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetHandleInputEvents_AverageRatio(int64_t value) {
  SetMetricInternal(kHandleInputEvents_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kHandleInputEvents_WorstCaseName[] = "HandleInputEvents.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetHandleInputEvents_WorstCase(int64_t value) {
  SetMetricInternal(kHandleInputEvents_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kHandleInputEvents_WorstCaseRatioName[] = "HandleInputEvents.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetHandleInputEvents_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kHandleInputEvents_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kHandleInputEventsPercentageName[] = "HandleInputEventsPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetHandleInputEventsPercentage(int64_t value) {
  SetMetricInternal(kHandleInputEventsPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservationName[] = "IntersectionObservation";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservation(int64_t value) {
  SetMetricInternal(kIntersectionObservationNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservation_AverageName[] = "IntersectionObservation.Average";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservation_Average(int64_t value) {
  SetMetricInternal(kIntersectionObservation_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservation_AverageRatioName[] = "IntersectionObservation.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservation_AverageRatio(int64_t value) {
  SetMetricInternal(kIntersectionObservation_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservation_WorstCaseName[] = "IntersectionObservation.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservation_WorstCase(int64_t value) {
  SetMetricInternal(kIntersectionObservation_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservation_WorstCaseRatioName[] = "IntersectionObservation.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservation_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kIntersectionObservation_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kIntersectionObservationPercentageName[] = "IntersectionObservationPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetIntersectionObservationPercentage(int64_t value) {
  SetMetricInternal(kIntersectionObservationPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kMainFrameName[] = "MainFrame";

Blink_UpdateTime& Blink_UpdateTime::SetMainFrame(int64_t value) {
  SetMetricInternal(kMainFrameNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kMainFrame_AverageName[] = "MainFrame.Average";

Blink_UpdateTime& Blink_UpdateTime::SetMainFrame_Average(int64_t value) {
  SetMetricInternal(kMainFrame_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kMainFrame_WorstCaseName[] = "MainFrame.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetMainFrame_WorstCase(int64_t value) {
  SetMetricInternal(kMainFrame_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaintName[] = "Paint";

Blink_UpdateTime& Blink_UpdateTime::SetPaint(int64_t value) {
  SetMetricInternal(kPaintNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaint_AverageName[] = "Paint.Average";

Blink_UpdateTime& Blink_UpdateTime::SetPaint_Average(int64_t value) {
  SetMetricInternal(kPaint_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaint_AverageRatioName[] = "Paint.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetPaint_AverageRatio(int64_t value) {
  SetMetricInternal(kPaint_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaint_WorstCaseName[] = "Paint.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetPaint_WorstCase(int64_t value) {
  SetMetricInternal(kPaint_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaint_WorstCaseRatioName[] = "Paint.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetPaint_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kPaint_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPaintPercentageName[] = "PaintPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetPaintPercentage(int64_t value) {
  SetMetricInternal(kPaintPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaintName[] = "PrePaint";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaint(int64_t value) {
  SetMetricInternal(kPrePaintNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaint_AverageName[] = "PrePaint.Average";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaint_Average(int64_t value) {
  SetMetricInternal(kPrePaint_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaint_AverageRatioName[] = "PrePaint.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaint_AverageRatio(int64_t value) {
  SetMetricInternal(kPrePaint_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaint_WorstCaseName[] = "PrePaint.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaint_WorstCase(int64_t value) {
  SetMetricInternal(kPrePaint_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaint_WorstCaseRatioName[] = "PrePaint.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaint_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kPrePaint_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kPrePaintPercentageName[] = "PrePaintPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetPrePaintPercentage(int64_t value) {
  SetMetricInternal(kPrePaintPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kProxyCommitName[] = "ProxyCommit";

Blink_UpdateTime& Blink_UpdateTime::SetProxyCommit(int64_t value) {
  SetMetricInternal(kProxyCommitNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kProxyCommitPercentageName[] = "ProxyCommitPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetProxyCommitPercentage(int64_t value) {
  SetMetricInternal(kProxyCommitPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kScrollingCoordinatorName[] = "ScrollingCoordinator";

Blink_UpdateTime& Blink_UpdateTime::SetScrollingCoordinator(int64_t value) {
  SetMetricInternal(kScrollingCoordinatorNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kScrollingCoordinator_AverageName[] = "ScrollingCoordinator.Average";

Blink_UpdateTime& Blink_UpdateTime::SetScrollingCoordinator_Average(int64_t value) {
  SetMetricInternal(kScrollingCoordinator_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kScrollingCoordinator_AverageRatioName[] = "ScrollingCoordinator.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetScrollingCoordinator_AverageRatio(int64_t value) {
  SetMetricInternal(kScrollingCoordinator_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kScrollingCoordinator_WorstCaseName[] = "ScrollingCoordinator.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetScrollingCoordinator_WorstCase(int64_t value) {
  SetMetricInternal(kScrollingCoordinator_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kScrollingCoordinator_WorstCaseRatioName[] = "ScrollingCoordinator.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetScrollingCoordinator_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kScrollingCoordinator_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kScrollingCoordinatorPercentageName[] = "ScrollingCoordinatorPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetScrollingCoordinatorPercentage(int64_t value) {
  SetMetricInternal(kScrollingCoordinatorPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayoutName[] = "StyleAndLayout";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayout(int64_t value) {
  SetMetricInternal(kStyleAndLayoutNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayout_AverageName[] = "StyleAndLayout.Average";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayout_Average(int64_t value) {
  SetMetricInternal(kStyleAndLayout_AverageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayout_AverageRatioName[] = "StyleAndLayout.AverageRatio";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayout_AverageRatio(int64_t value) {
  SetMetricInternal(kStyleAndLayout_AverageRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayout_WorstCaseName[] = "StyleAndLayout.WorstCase";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayout_WorstCase(int64_t value) {
  SetMetricInternal(kStyleAndLayout_WorstCaseNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayout_WorstCaseRatioName[] = "StyleAndLayout.WorstCaseRatio";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayout_WorstCaseRatio(int64_t value) {
  SetMetricInternal(kStyleAndLayout_WorstCaseRatioNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kStyleAndLayoutPercentageName[] = "StyleAndLayoutPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetStyleAndLayoutPercentage(int64_t value) {
  SetMetricInternal(kStyleAndLayoutPercentageNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kUpdateLayersName[] = "UpdateLayers";

Blink_UpdateTime& Blink_UpdateTime::SetUpdateLayers(int64_t value) {
  SetMetricInternal(kUpdateLayersNameHash, value);
  return *this;
}

const char Blink_UpdateTime::kUpdateLayersPercentageName[] = "UpdateLayersPercentage";

Blink_UpdateTime& Blink_UpdateTime::SetUpdateLayersPercentage(int64_t value) {
  SetMetricInternal(kUpdateLayersPercentageNameHash, value);
  return *this;
}


const char Blink_UseCounter::kEntryName[] = "Blink.UseCounter";

Blink_UseCounter::Blink_UseCounter(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Blink_UseCounter::Blink_UseCounter(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Blink_UseCounter::~Blink_UseCounter() = default;


const char Blink_UseCounter::kFeatureName[] = "Feature";

Blink_UseCounter& Blink_UseCounter::SetFeature(int64_t value) {
  SetMetricInternal(kFeatureNameHash, value);
  return *this;
}

const char Blink_UseCounter::kIsMainFrameFeatureName[] = "IsMainFrameFeature";

Blink_UseCounter& Blink_UseCounter::SetIsMainFrameFeature(int64_t value) {
  SetMetricInternal(kIsMainFrameFeatureNameHash, value);
  return *this;
}


const char BloatedRenderer::kEntryName[] = "BloatedRenderer";

BloatedRenderer::BloatedRenderer(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BloatedRenderer::BloatedRenderer(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

BloatedRenderer::~BloatedRenderer() = default;


const char BloatedRenderer::kV8_HeapName[] = "V8.Heap";

BloatedRenderer& BloatedRenderer::SetV8_Heap(int64_t value) {
  SetMetricInternal(kV8_HeapNameHash, value);
  return *this;
}

const char BloatedRenderer::kV8_Heap_AllocatedObjectsName[] = "V8.Heap.AllocatedObjects";

BloatedRenderer& BloatedRenderer::SetV8_Heap_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Heap_AllocatedObjectsNameHash, value);
  return *this;
}

const char BloatedRenderer::kV8_Heap_LimitName[] = "V8.Heap.Limit";

BloatedRenderer& BloatedRenderer::SetV8_Heap_Limit(int64_t value) {
  SetMetricInternal(kV8_Heap_LimitNameHash, value);
  return *this;
}

const char BloatedRenderer::kV8_NearV8HeapLimitHandlingName[] = "V8.NearV8HeapLimitHandling";

BloatedRenderer& BloatedRenderer::SetV8_NearV8HeapLimitHandling(int64_t value) {
  SetMetricInternal(kV8_NearV8HeapLimitHandlingNameHash, value);
  return *this;
}


const char Compositor_Rendering::kEntryName[] = "Compositor.Rendering";

Compositor_Rendering::Compositor_Rendering(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Compositor_Rendering::Compositor_Rendering(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Compositor_Rendering::~Compositor_Rendering() = default;


const char Compositor_Rendering::kCheckerboardedImagesCountName[] = "CheckerboardedImagesCount";

Compositor_Rendering& Compositor_Rendering::SetCheckerboardedImagesCount(int64_t value) {
  SetMetricInternal(kCheckerboardedImagesCountNameHash, value);
  return *this;
}


const char Compositor_UserInteraction::kEntryName[] = "Compositor.UserInteraction";

Compositor_UserInteraction::Compositor_UserInteraction(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Compositor_UserInteraction::Compositor_UserInteraction(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Compositor_UserInteraction::~Compositor_UserInteraction() = default;


const char Compositor_UserInteraction::kCheckerboardedContentAreaName[] = "CheckerboardedContentArea";

Compositor_UserInteraction& Compositor_UserInteraction::SetCheckerboardedContentArea(int64_t value) {
  SetMetricInternal(kCheckerboardedContentAreaNameHash, value);
  return *this;
}

const char Compositor_UserInteraction::kCheckerboardedContentAreaRatioName[] = "CheckerboardedContentAreaRatio";

Compositor_UserInteraction& Compositor_UserInteraction::SetCheckerboardedContentAreaRatio(int64_t value) {
  SetMetricInternal(kCheckerboardedContentAreaRatioNameHash, value);
  return *this;
}

const char Compositor_UserInteraction::kCheckerboardedImagesCountName[] = "CheckerboardedImagesCount";

Compositor_UserInteraction& Compositor_UserInteraction::SetCheckerboardedImagesCount(int64_t value) {
  SetMetricInternal(kCheckerboardedImagesCountNameHash, value);
  return *this;
}

const char Compositor_UserInteraction::kNumMissingTilesName[] = "NumMissingTiles";

Compositor_UserInteraction& Compositor_UserInteraction::SetNumMissingTiles(int64_t value) {
  SetMetricInternal(kNumMissingTilesNameHash, value);
  return *this;
}


const char ContextualSearch::kEntryName[] = "ContextualSearch";

ContextualSearch::ContextualSearch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ContextualSearch::ContextualSearch(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ContextualSearch::~ContextualSearch() = default;


const char ContextualSearch::kDidOptInName[] = "DidOptIn";

ContextualSearch& ContextualSearch::SetDidOptIn(int64_t value) {
  SetMetricInternal(kDidOptInNameHash, value);
  return *this;
}

const char ContextualSearch::kDurationAfterScrollMsName[] = "DurationAfterScrollMs";

ContextualSearch& ContextualSearch::SetDurationAfterScrollMs(int64_t value) {
  SetMetricInternal(kDurationAfterScrollMsNameHash, value);
  return *this;
}

const char ContextualSearch::kEntityImpressionsCountName[] = "EntityImpressionsCount";

ContextualSearch& ContextualSearch::SetEntityImpressionsCount(int64_t value) {
  SetMetricInternal(kEntityImpressionsCountNameHash, value);
  return *this;
}

const char ContextualSearch::kEntityOpensCountName[] = "EntityOpensCount";

ContextualSearch& ContextualSearch::SetEntityOpensCount(int64_t value) {
  SetMetricInternal(kEntityOpensCountNameHash, value);
  return *this;
}

const char ContextualSearch::kFontSizeName[] = "FontSize";

ContextualSearch& ContextualSearch::SetFontSize(int64_t value) {
  SetMetricInternal(kFontSizeNameHash, value);
  return *this;
}

const char ContextualSearch::kIsEntityName[] = "IsEntity";

ContextualSearch& ContextualSearch::SetIsEntity(int64_t value) {
  SetMetricInternal(kIsEntityNameHash, value);
  return *this;
}

const char ContextualSearch::kIsEntityEligibleName[] = "IsEntityEligible";

ContextualSearch& ContextualSearch::SetIsEntityEligible(int64_t value) {
  SetMetricInternal(kIsEntityEligibleNameHash, value);
  return *this;
}

const char ContextualSearch::kIsHttpName[] = "IsHttp";

ContextualSearch& ContextualSearch::SetIsHttp(int64_t value) {
  SetMetricInternal(kIsHttpNameHash, value);
  return *this;
}

const char ContextualSearch::kIsLanguageMismatchName[] = "IsLanguageMismatch";

ContextualSearch& ContextualSearch::SetIsLanguageMismatch(int64_t value) {
  SetMetricInternal(kIsLanguageMismatchNameHash, value);
  return *this;
}

const char ContextualSearch::kIsLongWordName[] = "IsLongWord";

ContextualSearch& ContextualSearch::SetIsLongWord(int64_t value) {
  SetMetricInternal(kIsLongWordNameHash, value);
  return *this;
}

const char ContextualSearch::kIsSecondTapOverrideName[] = "IsSecondTapOverride";

ContextualSearch& ContextualSearch::SetIsSecondTapOverride(int64_t value) {
  SetMetricInternal(kIsSecondTapOverrideNameHash, value);
  return *this;
}

const char ContextualSearch::kIsShortWordName[] = "IsShortWord";

ContextualSearch& ContextualSearch::SetIsShortWord(int64_t value) {
  SetMetricInternal(kIsShortWordNameHash, value);
  return *this;
}

const char ContextualSearch::kIsWordEdgeName[] = "IsWordEdge";

ContextualSearch& ContextualSearch::SetIsWordEdge(int64_t value) {
  SetMetricInternal(kIsWordEdgeNameHash, value);
  return *this;
}

const char ContextualSearch::kOpenCountName[] = "OpenCount";

ContextualSearch& ContextualSearch::SetOpenCount(int64_t value) {
  SetMetricInternal(kOpenCountNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeRankerDidPredictName[] = "OutcomeRankerDidPredict";

ContextualSearch& ContextualSearch::SetOutcomeRankerDidPredict(int64_t value) {
  SetMetricInternal(kOutcomeRankerDidPredictNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeRankerPredictionName[] = "OutcomeRankerPrediction";

ContextualSearch& ContextualSearch::SetOutcomeRankerPrediction(int64_t value) {
  SetMetricInternal(kOutcomeRankerPredictionNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeRankerPredictionScoreName[] = "OutcomeRankerPredictionScore";

ContextualSearch& ContextualSearch::SetOutcomeRankerPredictionScore(int64_t value) {
  SetMetricInternal(kOutcomeRankerPredictionScoreNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasCardsDataShownName[] = "OutcomeWasCardsDataShown";

ContextualSearch& ContextualSearch::SetOutcomeWasCardsDataShown(int64_t value) {
  SetMetricInternal(kOutcomeWasCardsDataShownNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasPanelOpenedName[] = "OutcomeWasPanelOpened";

ContextualSearch& ContextualSearch::SetOutcomeWasPanelOpened(int64_t value) {
  SetMetricInternal(kOutcomeWasPanelOpenedNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasQuickActionClickedName[] = "OutcomeWasQuickActionClicked";

ContextualSearch& ContextualSearch::SetOutcomeWasQuickActionClicked(int64_t value) {
  SetMetricInternal(kOutcomeWasQuickActionClickedNameHash, value);
  return *this;
}

const char ContextualSearch::kOutcomeWasQuickAnswerSeenName[] = "OutcomeWasQuickAnswerSeen";

ContextualSearch& ContextualSearch::SetOutcomeWasQuickAnswerSeen(int64_t value) {
  SetMetricInternal(kOutcomeWasQuickAnswerSeenNameHash, value);
  return *this;
}

const char ContextualSearch::kPortionOfElementName[] = "PortionOfElement";

ContextualSearch& ContextualSearch::SetPortionOfElement(int64_t value) {
  SetMetricInternal(kPortionOfElementNameHash, value);
  return *this;
}

const char ContextualSearch::kPrevious28DayCtrPercentName[] = "Previous28DayCtrPercent";

ContextualSearch& ContextualSearch::SetPrevious28DayCtrPercent(int64_t value) {
  SetMetricInternal(kPrevious28DayCtrPercentNameHash, value);
  return *this;
}

const char ContextualSearch::kPrevious28DayImpressionsCountName[] = "Previous28DayImpressionsCount";

ContextualSearch& ContextualSearch::SetPrevious28DayImpressionsCount(int64_t value) {
  SetMetricInternal(kPrevious28DayImpressionsCountNameHash, value);
  return *this;
}

const char ContextualSearch::kPreviousWeekCtrPercentName[] = "PreviousWeekCtrPercent";

ContextualSearch& ContextualSearch::SetPreviousWeekCtrPercent(int64_t value) {
  SetMetricInternal(kPreviousWeekCtrPercentNameHash, value);
  return *this;
}

const char ContextualSearch::kPreviousWeekImpressionsCountName[] = "PreviousWeekImpressionsCount";

ContextualSearch& ContextualSearch::SetPreviousWeekImpressionsCount(int64_t value) {
  SetMetricInternal(kPreviousWeekImpressionsCountNameHash, value);
  return *this;
}

const char ContextualSearch::kQuickActionImpressionsCountName[] = "QuickActionImpressionsCount";

ContextualSearch& ContextualSearch::SetQuickActionImpressionsCount(int64_t value) {
  SetMetricInternal(kQuickActionImpressionsCountNameHash, value);
  return *this;
}

const char ContextualSearch::kQuickActionsIgnoredName[] = "QuickActionsIgnored";

ContextualSearch& ContextualSearch::SetQuickActionsIgnored(int64_t value) {
  SetMetricInternal(kQuickActionsIgnoredNameHash, value);
  return *this;
}

const char ContextualSearch::kQuickActionsTakenName[] = "QuickActionsTaken";

ContextualSearch& ContextualSearch::SetQuickActionsTaken(int64_t value) {
  SetMetricInternal(kQuickActionsTakenNameHash, value);
  return *this;
}

const char ContextualSearch::kQuickAnswerCountName[] = "QuickAnswerCount";

ContextualSearch& ContextualSearch::SetQuickAnswerCount(int64_t value) {
  SetMetricInternal(kQuickAnswerCountNameHash, value);
  return *this;
}

const char ContextualSearch::kScreenTopDpsName[] = "ScreenTopDps";

ContextualSearch& ContextualSearch::SetScreenTopDps(int64_t value) {
  SetMetricInternal(kScreenTopDpsNameHash, value);
  return *this;
}

const char ContextualSearch::kTapCountName[] = "TapCount";

ContextualSearch& ContextualSearch::SetTapCount(int64_t value) {
  SetMetricInternal(kTapCountNameHash, value);
  return *this;
}

const char ContextualSearch::kTapDurationMsName[] = "TapDurationMs";

ContextualSearch& ContextualSearch::SetTapDurationMs(int64_t value) {
  SetMetricInternal(kTapDurationMsNameHash, value);
  return *this;
}

const char ContextualSearch::kWasScreenBottomName[] = "WasScreenBottom";

ContextualSearch& ContextualSearch::SetWasScreenBottom(int64_t value) {
  SetMetricInternal(kWasScreenBottomNameHash, value);
  return *this;
}


const char ContextualSuggestions::kEntryName[] = "ContextualSuggestions";

ContextualSuggestions::ContextualSuggestions(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ContextualSuggestions::ContextualSuggestions(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ContextualSuggestions::~ContextualSuggestions() = default;


const char ContextualSuggestions::kAnyDownloadedName[] = "AnyDownloaded";

ContextualSuggestions& ContextualSuggestions::SetAnyDownloaded(int64_t value) {
  SetMetricInternal(kAnyDownloadedNameHash, value);
  return *this;
}

const char ContextualSuggestions::kAnySuggestionTakenName[] = "AnySuggestionTaken";

ContextualSuggestions& ContextualSuggestions::SetAnySuggestionTaken(int64_t value) {
  SetMetricInternal(kAnySuggestionTakenNameHash, value);
  return *this;
}

const char ContextualSuggestions::kClosedFromPeekName[] = "ClosedFromPeek";

ContextualSuggestions& ContextualSuggestions::SetClosedFromPeek(int64_t value) {
  SetMetricInternal(kClosedFromPeekNameHash, value);
  return *this;
}

const char ContextualSuggestions::kEverOpenedName[] = "EverOpened";

ContextualSuggestions& ContextualSuggestions::SetEverOpened(int64_t value) {
  SetMetricInternal(kEverOpenedNameHash, value);
  return *this;
}

const char ContextualSuggestions::kFetchStateName[] = "FetchState";

ContextualSuggestions& ContextualSuggestions::SetFetchState(int64_t value) {
  SetMetricInternal(kFetchStateNameHash, value);
  return *this;
}

const char ContextualSuggestions::kShowDurationBucketMinName[] = "ShowDurationBucketMin";

ContextualSuggestions& ContextualSuggestions::SetShowDurationBucketMin(int64_t value) {
  SetMetricInternal(kShowDurationBucketMinNameHash, value);
  return *this;
}

const char ContextualSuggestions::kTriggerEventName[] = "TriggerEvent";

ContextualSuggestions& ContextualSuggestions::SetTriggerEvent(int64_t value) {
  SetMetricInternal(kTriggerEventNameHash, value);
  return *this;
}


const char CPUUsageMeasurement::kEntryName[] = "CPUUsageMeasurement";

CPUUsageMeasurement::CPUUsageMeasurement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

CPUUsageMeasurement::CPUUsageMeasurement(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

CPUUsageMeasurement::~CPUUsageMeasurement() = default;


const char CPUUsageMeasurement::kCPUUsageName[] = "CPUUsage";

CPUUsageMeasurement& CPUUsageMeasurement::SetCPUUsage(int64_t value) {
  SetMetricInternal(kCPUUsageNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kEventTypeName[] = "EventType";

CPUUsageMeasurement& CPUUsageMeasurement::SetEventType(int64_t value) {
  SetMetricInternal(kEventTypeNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kIsVisibleName[] = "IsVisible";

CPUUsageMeasurement& CPUUsageMeasurement::SetIsVisible(int64_t value) {
  SetMetricInternal(kIsVisibleNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kNumberOfCoresidentTabsName[] = "NumberOfCoresidentTabs";

CPUUsageMeasurement& CPUUsageMeasurement::SetNumberOfCoresidentTabs(int64_t value) {
  SetMetricInternal(kNumberOfCoresidentTabsNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kObservationWindowSizeMsName[] = "ObservationWindowSizeMs";

CPUUsageMeasurement& CPUUsageMeasurement::SetObservationWindowSizeMs(int64_t value) {
  SetMetricInternal(kObservationWindowSizeMsNameHash, value);
  return *this;
}

const char CPUUsageMeasurement::kProcessUptimeMsName[] = "ProcessUptimeMs";

CPUUsageMeasurement& CPUUsageMeasurement::SetProcessUptimeMs(int64_t value) {
  SetMetricInternal(kProcessUptimeMsNameHash, value);
  return *this;
}


const char Document_OutliveTimeAfterShutdown::kEntryName[] = "Document.OutliveTimeAfterShutdown";

Document_OutliveTimeAfterShutdown::Document_OutliveTimeAfterShutdown(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Document_OutliveTimeAfterShutdown::Document_OutliveTimeAfterShutdown(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Document_OutliveTimeAfterShutdown::~Document_OutliveTimeAfterShutdown() = default;


const char Document_OutliveTimeAfterShutdown::kGCCountName[] = "GCCount";

Document_OutliveTimeAfterShutdown& Document_OutliveTimeAfterShutdown::SetGCCount(int64_t value) {
  SetMetricInternal(kGCCountNameHash, value);
  return *this;
}


const char DocumentCreated::kEntryName[] = "DocumentCreated";

DocumentCreated::DocumentCreated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

DocumentCreated::DocumentCreated(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

DocumentCreated::~DocumentCreated() = default;


const char DocumentCreated::kIsCrossOriginFrameName[] = "IsCrossOriginFrame";

DocumentCreated& DocumentCreated::SetIsCrossOriginFrame(int64_t value) {
  SetMetricInternal(kIsCrossOriginFrameNameHash, value);
  return *this;
}

const char DocumentCreated::kIsMainFrameName[] = "IsMainFrame";

DocumentCreated& DocumentCreated::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char DocumentCreated::kNavigationSourceIdName[] = "NavigationSourceId";

DocumentCreated& DocumentCreated::SetNavigationSourceId(int64_t value) {
  SetMetricInternal(kNavigationSourceIdNameHash, value);
  return *this;
}


const char Download_Completed::kEntryName[] = "Download.Completed";

Download_Completed::Download_Completed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Completed::Download_Completed(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Completed::~Download_Completed() = default;


const char Download_Completed::kBytesWastedName[] = "BytesWasted";

Download_Completed& Download_Completed::SetBytesWasted(int64_t value) {
  SetMetricInternal(kBytesWastedNameHash, value);
  return *this;
}

const char Download_Completed::kDownloadIdName[] = "DownloadId";

Download_Completed& Download_Completed::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Completed::kResultingFileSizeName[] = "ResultingFileSize";

Download_Completed& Download_Completed::SetResultingFileSize(int64_t value) {
  SetMetricInternal(kResultingFileSizeNameHash, value);
  return *this;
}

const char Download_Completed::kTimeSinceStartName[] = "TimeSinceStart";

Download_Completed& Download_Completed::SetTimeSinceStart(int64_t value) {
  SetMetricInternal(kTimeSinceStartNameHash, value);
  return *this;
}


const char Download_Interrupted::kEntryName[] = "Download.Interrupted";

Download_Interrupted::Download_Interrupted(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Interrupted::Download_Interrupted(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Interrupted::~Download_Interrupted() = default;


const char Download_Interrupted::kBytesWastedName[] = "BytesWasted";

Download_Interrupted& Download_Interrupted::SetBytesWasted(int64_t value) {
  SetMetricInternal(kBytesWastedNameHash, value);
  return *this;
}

const char Download_Interrupted::kChangeInFileSizeName[] = "ChangeInFileSize";

Download_Interrupted& Download_Interrupted::SetChangeInFileSize(int64_t value) {
  SetMetricInternal(kChangeInFileSizeNameHash, value);
  return *this;
}

const char Download_Interrupted::kDownloadIdName[] = "DownloadId";

Download_Interrupted& Download_Interrupted::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Interrupted::kReasonName[] = "Reason";

Download_Interrupted& Download_Interrupted::SetReason(int64_t value) {
  SetMetricInternal(kReasonNameHash, value);
  return *this;
}

const char Download_Interrupted::kResultingFileSizeName[] = "ResultingFileSize";

Download_Interrupted& Download_Interrupted::SetResultingFileSize(int64_t value) {
  SetMetricInternal(kResultingFileSizeNameHash, value);
  return *this;
}

const char Download_Interrupted::kTimeSinceStartName[] = "TimeSinceStart";

Download_Interrupted& Download_Interrupted::SetTimeSinceStart(int64_t value) {
  SetMetricInternal(kTimeSinceStartNameHash, value);
  return *this;
}


const char Download_Resumed::kEntryName[] = "Download.Resumed";

Download_Resumed::Download_Resumed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Resumed::Download_Resumed(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Resumed::~Download_Resumed() = default;


const char Download_Resumed::kDownloadIdName[] = "DownloadId";

Download_Resumed& Download_Resumed::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Resumed::kModeName[] = "Mode";

Download_Resumed& Download_Resumed::SetMode(int64_t value) {
  SetMetricInternal(kModeNameHash, value);
  return *this;
}

const char Download_Resumed::kTimeSinceStartName[] = "TimeSinceStart";

Download_Resumed& Download_Resumed::SetTimeSinceStart(int64_t value) {
  SetMetricInternal(kTimeSinceStartNameHash, value);
  return *this;
}


const char Download_Started::kEntryName[] = "Download.Started";

Download_Started::Download_Started(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Started::Download_Started(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Download_Started::~Download_Started() = default;


const char Download_Started::kDownloadConnectionSecurityName[] = "DownloadConnectionSecurity";

Download_Started& Download_Started::SetDownloadConnectionSecurity(int64_t value) {
  SetMetricInternal(kDownloadConnectionSecurityNameHash, value);
  return *this;
}

const char Download_Started::kDownloadIdName[] = "DownloadId";

Download_Started& Download_Started::SetDownloadId(int64_t value) {
  SetMetricInternal(kDownloadIdNameHash, value);
  return *this;
}

const char Download_Started::kDownloadSourceName[] = "DownloadSource";

Download_Started& Download_Started::SetDownloadSource(int64_t value) {
  SetMetricInternal(kDownloadSourceNameHash, value);
  return *this;
}

const char Download_Started::kFileTypeName[] = "FileType";

Download_Started& Download_Started::SetFileType(int64_t value) {
  SetMetricInternal(kFileTypeNameHash, value);
  return *this;
}

const char Download_Started::kIsSameHostDownloadName[] = "IsSameHostDownload";

Download_Started& Download_Started::SetIsSameHostDownload(int64_t value) {
  SetMetricInternal(kIsSameHostDownloadNameHash, value);
  return *this;
}


const char Event_ScrollBegin_Touch::kEntryName[] = "Event.ScrollBegin.Touch";

Event_ScrollBegin_Touch::Event_ScrollBegin_Touch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollBegin_Touch::Event_ScrollBegin_Touch(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollBegin_Touch::~Event_ScrollBegin_Touch() = default;


const char Event_ScrollBegin_Touch::kIsMainThreadName[] = "IsMainThread";

Event_ScrollBegin_Touch& Event_ScrollBegin_Touch::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Touch::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollBegin_Touch& Event_ScrollBegin_Touch::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Touch::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollBegin_Touch& Event_ScrollBegin_Touch::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char Event_ScrollBegin_Wheel::kEntryName[] = "Event.ScrollBegin.Wheel";

Event_ScrollBegin_Wheel::Event_ScrollBegin_Wheel(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollBegin_Wheel::Event_ScrollBegin_Wheel(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollBegin_Wheel::~Event_ScrollBegin_Wheel() = default;


const char Event_ScrollBegin_Wheel::kIsMainThreadName[] = "IsMainThread";

Event_ScrollBegin_Wheel& Event_ScrollBegin_Wheel::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Wheel::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollBegin_Wheel& Event_ScrollBegin_Wheel::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollBegin_Wheel::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollBegin_Wheel& Event_ScrollBegin_Wheel::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char Event_ScrollUpdate_Touch::kEntryName[] = "Event.ScrollUpdate.Touch";

Event_ScrollUpdate_Touch::Event_ScrollUpdate_Touch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollUpdate_Touch::Event_ScrollUpdate_Touch(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollUpdate_Touch::~Event_ScrollUpdate_Touch() = default;


const char Event_ScrollUpdate_Touch::kIsMainThreadName[] = "IsMainThread";

Event_ScrollUpdate_Touch& Event_ScrollUpdate_Touch::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Touch::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollUpdate_Touch& Event_ScrollUpdate_Touch::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Touch::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollUpdate_Touch& Event_ScrollUpdate_Touch::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char Event_ScrollUpdate_Wheel::kEntryName[] = "Event.ScrollUpdate.Wheel";

Event_ScrollUpdate_Wheel::Event_ScrollUpdate_Wheel(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollUpdate_Wheel::Event_ScrollUpdate_Wheel(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Event_ScrollUpdate_Wheel::~Event_ScrollUpdate_Wheel() = default;


const char Event_ScrollUpdate_Wheel::kIsMainThreadName[] = "IsMainThread";

Event_ScrollUpdate_Wheel& Event_ScrollUpdate_Wheel::SetIsMainThread(int64_t value) {
  SetMetricInternal(kIsMainThreadNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Wheel::kTimeToHandledName[] = "TimeToHandled";

Event_ScrollUpdate_Wheel& Event_ScrollUpdate_Wheel::SetTimeToHandled(int64_t value) {
  SetMetricInternal(kTimeToHandledNameHash, value);
  return *this;
}

const char Event_ScrollUpdate_Wheel::kTimeToScrollUpdateSwapBeginName[] = "TimeToScrollUpdateSwapBegin";

Event_ScrollUpdate_Wheel& Event_ScrollUpdate_Wheel::SetTimeToScrollUpdateSwapBegin(int64_t value) {
  SetMetricInternal(kTimeToScrollUpdateSwapBeginNameHash, value);
  return *this;
}


const char HistoryManipulationIntervention::kEntryName[] = "HistoryManipulationIntervention";

HistoryManipulationIntervention::HistoryManipulationIntervention(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

HistoryManipulationIntervention::HistoryManipulationIntervention(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

HistoryManipulationIntervention::~HistoryManipulationIntervention() = default;



const char HistoryNavigation::kEntryName[] = "HistoryNavigation";

HistoryNavigation::HistoryNavigation(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

HistoryNavigation::HistoryNavigation(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

HistoryNavigation::~HistoryNavigation() = default;


const char HistoryNavigation::kCrossOriginSubframesFeaturesName[] = "CrossOriginSubframesFeatures";

HistoryNavigation& HistoryNavigation::SetCrossOriginSubframesFeatures(int64_t value) {
  SetMetricInternal(kCrossOriginSubframesFeaturesNameHash, value);
  return *this;
}

const char HistoryNavigation::kLastCommittedSourceIdForTheSameDocumentName[] = "LastCommittedSourceIdForTheSameDocument";

HistoryNavigation& HistoryNavigation::SetLastCommittedSourceIdForTheSameDocument(int64_t value) {
  SetMetricInternal(kLastCommittedSourceIdForTheSameDocumentNameHash, value);
  return *this;
}

const char HistoryNavigation::kMainFrameFeaturesName[] = "MainFrameFeatures";

HistoryNavigation& HistoryNavigation::SetMainFrameFeatures(int64_t value) {
  SetMetricInternal(kMainFrameFeaturesNameHash, value);
  return *this;
}

const char HistoryNavigation::kNavigatedToTheMostRecentEntryForDocumentName[] = "NavigatedToTheMostRecentEntryForDocument";

HistoryNavigation& HistoryNavigation::SetNavigatedToTheMostRecentEntryForDocument(int64_t value) {
  SetMetricInternal(kNavigatedToTheMostRecentEntryForDocumentNameHash, value);
  return *this;
}

const char HistoryNavigation::kSameOriginSubframesFeaturesName[] = "SameOriginSubframesFeatures";

HistoryNavigation& HistoryNavigation::SetSameOriginSubframesFeatures(int64_t value) {
  SetMetricInternal(kSameOriginSubframesFeaturesNameHash, value);
  return *this;
}

const char HistoryNavigation::kTimeSinceNavigatedAwayFromDocumentName[] = "TimeSinceNavigatedAwayFromDocument";

HistoryNavigation& HistoryNavigation::SetTimeSinceNavigatedAwayFromDocument(int64_t value) {
  SetMetricInternal(kTimeSinceNavigatedAwayFromDocumentNameHash, value);
  return *this;
}


const char Intervention_DocumentWrite_ScriptBlock::kEntryName[] = "Intervention.DocumentWrite.ScriptBlock";

Intervention_DocumentWrite_ScriptBlock::Intervention_DocumentWrite_ScriptBlock(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Intervention_DocumentWrite_ScriptBlock::Intervention_DocumentWrite_ScriptBlock(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Intervention_DocumentWrite_ScriptBlock::~Intervention_DocumentWrite_ScriptBlock() = default;


const char Intervention_DocumentWrite_ScriptBlock::kDisabled_ReloadName[] = "Disabled.Reload";

Intervention_DocumentWrite_ScriptBlock& Intervention_DocumentWrite_ScriptBlock::SetDisabled_Reload(int64_t value) {
  SetMetricInternal(kDisabled_ReloadNameHash, value);
  return *this;
}

const char Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteName[] = "ParseTiming.ParseBlockedOnScriptExecutionFromDocumentWrite";

Intervention_DocumentWrite_ScriptBlock& Intervention_DocumentWrite_ScriptBlock::SetParseTiming_ParseBlockedOnScriptExecutionFromDocumentWrite(int64_t value) {
  SetMetricInternal(kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteNameHash, value);
  return *this;
}

const char Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteName[] = "ParseTiming.ParseBlockedOnScriptLoadFromDocumentWrite";

Intervention_DocumentWrite_ScriptBlock& Intervention_DocumentWrite_ScriptBlock::SetParseTiming_ParseBlockedOnScriptLoadFromDocumentWrite(int64_t value) {
  SetMetricInternal(kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteNameHash, value);
  return *this;
}


const char IOS_FindInPageSearchMatches::kEntryName[] = "IOS.FindInPageSearchMatches";

IOS_FindInPageSearchMatches::IOS_FindInPageSearchMatches(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

IOS_FindInPageSearchMatches::IOS_FindInPageSearchMatches(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

IOS_FindInPageSearchMatches::~IOS_FindInPageSearchMatches() = default;


const char IOS_FindInPageSearchMatches::kHasMatchesName[] = "HasMatches";

IOS_FindInPageSearchMatches& IOS_FindInPageSearchMatches::SetHasMatches(int64_t value) {
  SetMetricInternal(kHasMatchesNameHash, value);
  return *this;
}


const char IOS_URLMismatchInLegacyAndSlimNavigationManager::kEntryName[] = "IOS.URLMismatchInLegacyAndSlimNavigationManager";

IOS_URLMismatchInLegacyAndSlimNavigationManager::IOS_URLMismatchInLegacyAndSlimNavigationManager(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

IOS_URLMismatchInLegacyAndSlimNavigationManager::IOS_URLMismatchInLegacyAndSlimNavigationManager(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

IOS_URLMismatchInLegacyAndSlimNavigationManager::~IOS_URLMismatchInLegacyAndSlimNavigationManager() = default;


const char IOS_URLMismatchInLegacyAndSlimNavigationManager::kHasMismatchName[] = "HasMismatch";

IOS_URLMismatchInLegacyAndSlimNavigationManager& IOS_URLMismatchInLegacyAndSlimNavigationManager::SetHasMismatch(int64_t value) {
  SetMetricInternal(kHasMismatchNameHash, value);
  return *this;
}


const char Layout_DisplayCutout_StateChanged::kEntryName[] = "Layout.DisplayCutout.StateChanged";

Layout_DisplayCutout_StateChanged::Layout_DisplayCutout_StateChanged(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Layout_DisplayCutout_StateChanged::Layout_DisplayCutout_StateChanged(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Layout_DisplayCutout_StateChanged::~Layout_DisplayCutout_StateChanged() = default;


const char Layout_DisplayCutout_StateChanged::kIsMainFrameName[] = "IsMainFrame";

Layout_DisplayCutout_StateChanged& Layout_DisplayCutout_StateChanged::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char Layout_DisplayCutout_StateChanged::kSafeAreasPresentName[] = "SafeAreasPresent";

Layout_DisplayCutout_StateChanged& Layout_DisplayCutout_StateChanged::SetSafeAreasPresent(int64_t value) {
  SetMetricInternal(kSafeAreasPresentNameHash, value);
  return *this;
}

const char Layout_DisplayCutout_StateChanged::kViewportFit_AppliedName[] = "ViewportFit.Applied";

Layout_DisplayCutout_StateChanged& Layout_DisplayCutout_StateChanged::SetViewportFit_Applied(int64_t value) {
  SetMetricInternal(kViewportFit_AppliedNameHash, value);
  return *this;
}

const char Layout_DisplayCutout_StateChanged::kViewportFit_IgnoredReasonName[] = "ViewportFit.IgnoredReason";

Layout_DisplayCutout_StateChanged& Layout_DisplayCutout_StateChanged::SetViewportFit_IgnoredReason(int64_t value) {
  SetMetricInternal(kViewportFit_IgnoredReasonNameHash, value);
  return *this;
}

const char Layout_DisplayCutout_StateChanged::kViewportFit_SuppliedName[] = "ViewportFit.Supplied";

Layout_DisplayCutout_StateChanged& Layout_DisplayCutout_StateChanged::SetViewportFit_Supplied(int64_t value) {
  SetMetricInternal(kViewportFit_SuppliedNameHash, value);
  return *this;
}


const char LocalNetworkRequests::kEntryName[] = "LocalNetworkRequests";

LocalNetworkRequests::LocalNetworkRequests(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

LocalNetworkRequests::LocalNetworkRequests(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

LocalNetworkRequests::~LocalNetworkRequests() = default;


const char LocalNetworkRequests::kCount_FailedName[] = "Count.Failed";

LocalNetworkRequests& LocalNetworkRequests::SetCount_Failed(int64_t value) {
  SetMetricInternal(kCount_FailedNameHash, value);
  return *this;
}

const char LocalNetworkRequests::kCount_SuccessfulName[] = "Count.Successful";

LocalNetworkRequests& LocalNetworkRequests::SetCount_Successful(int64_t value) {
  SetMetricInternal(kCount_SuccessfulNameHash, value);
  return *this;
}

const char LocalNetworkRequests::kPortTypeName[] = "PortType";

LocalNetworkRequests& LocalNetworkRequests::SetPortType(int64_t value) {
  SetMetricInternal(kPortTypeNameHash, value);
  return *this;
}

const char LocalNetworkRequests::kResourceTypeName[] = "ResourceType";

LocalNetworkRequests& LocalNetworkRequests::SetResourceType(int64_t value) {
  SetMetricInternal(kResourceTypeNameHash, value);
  return *this;
}


const char LookalikeUrl_NavigationSuggestion::kEntryName[] = "LookalikeUrl.NavigationSuggestion";

LookalikeUrl_NavigationSuggestion::LookalikeUrl_NavigationSuggestion(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

LookalikeUrl_NavigationSuggestion::LookalikeUrl_NavigationSuggestion(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

LookalikeUrl_NavigationSuggestion::~LookalikeUrl_NavigationSuggestion() = default;


const char LookalikeUrl_NavigationSuggestion::kMatchTypeName[] = "MatchType";

LookalikeUrl_NavigationSuggestion& LookalikeUrl_NavigationSuggestion::SetMatchType(int64_t value) {
  SetMetricInternal(kMatchTypeNameHash, value);
  return *this;
}

const char LookalikeUrl_NavigationSuggestion::kUserActionName[] = "UserAction";

LookalikeUrl_NavigationSuggestion& LookalikeUrl_NavigationSuggestion::SetUserAction(int64_t value) {
  SetMetricInternal(kUserActionNameHash, value);
  return *this;
}


const char MainFrameDownload::kEntryName[] = "MainFrameDownload";

MainFrameDownload::MainFrameDownload(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

MainFrameDownload::MainFrameDownload(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

MainFrameDownload::~MainFrameDownload() = default;


const char MainFrameDownload::kHasGestureName[] = "HasGesture";

MainFrameDownload& MainFrameDownload::SetHasGesture(int64_t value) {
  SetMetricInternal(kHasGestureNameHash, value);
  return *this;
}

const char MainFrameDownload::kHasSandboxName[] = "HasSandbox";

MainFrameDownload& MainFrameDownload::SetHasSandbox(int64_t value) {
  SetMetricInternal(kHasSandboxNameHash, value);
  return *this;
}


const char Media_Autoplay_Attempt::kEntryName[] = "Media.Autoplay.Attempt";

Media_Autoplay_Attempt::Media_Autoplay_Attempt(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_Attempt::Media_Autoplay_Attempt(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_Attempt::~Media_Autoplay_Attempt() = default;


const char Media_Autoplay_Attempt::kAudioTrackName[] = "AudioTrack";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetAudioTrack(int64_t value) {
  SetMetricInternal(kAudioTrackNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kHighMediaEngagementName[] = "HighMediaEngagement";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetHighMediaEngagement(int64_t value) {
  SetMetricInternal(kHighMediaEngagementNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kMutedName[] = "Muted";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetMuted(int64_t value) {
  SetMetricInternal(kMutedNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kSourceName[] = "Source";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetSource(int64_t value) {
  SetMetricInternal(kSourceNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kUserGestureRequiredName[] = "UserGestureRequired";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetUserGestureRequired(int64_t value) {
  SetMetricInternal(kUserGestureRequiredNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kUserGestureStatusName[] = "UserGestureStatus";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetUserGestureStatus(int64_t value) {
  SetMetricInternal(kUserGestureStatusNameHash, value);
  return *this;
}

const char Media_Autoplay_Attempt::kVideoTrackName[] = "VideoTrack";

Media_Autoplay_Attempt& Media_Autoplay_Attempt::SetVideoTrack(int64_t value) {
  SetMetricInternal(kVideoTrackNameHash, value);
  return *this;
}


const char Media_Autoplay_AudioContext::kEntryName[] = "Media.Autoplay.AudioContext";

Media_Autoplay_AudioContext::Media_Autoplay_AudioContext(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_AudioContext::Media_Autoplay_AudioContext(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_AudioContext::~Media_Autoplay_AudioContext() = default;


const char Media_Autoplay_AudioContext::kSourceNodeStartedName[] = "SourceNodeStarted";

Media_Autoplay_AudioContext& Media_Autoplay_AudioContext::SetSourceNodeStarted(int64_t value) {
  SetMetricInternal(kSourceNodeStartedNameHash, value);
  return *this;
}

const char Media_Autoplay_AudioContext::kStatusName[] = "Status";

Media_Autoplay_AudioContext& Media_Autoplay_AudioContext::SetStatus(int64_t value) {
  SetMetricInternal(kStatusNameHash, value);
  return *this;
}

const char Media_Autoplay_AudioContext::kUnlockTypeName[] = "UnlockType";

Media_Autoplay_AudioContext& Media_Autoplay_AudioContext::SetUnlockType(int64_t value) {
  SetMetricInternal(kUnlockTypeNameHash, value);
  return *this;
}


const char Media_Autoplay_Muted_UnmuteAction::kEntryName[] = "Media.Autoplay.Muted.UnmuteAction";

Media_Autoplay_Muted_UnmuteAction::Media_Autoplay_Muted_UnmuteAction(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_Muted_UnmuteAction::Media_Autoplay_Muted_UnmuteAction(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Autoplay_Muted_UnmuteAction::~Media_Autoplay_Muted_UnmuteAction() = default;


const char Media_Autoplay_Muted_UnmuteAction::kResultName[] = "Result";

Media_Autoplay_Muted_UnmuteAction& Media_Autoplay_Muted_UnmuteAction::SetResult(int64_t value) {
  SetMetricInternal(kResultNameHash, value);
  return *this;
}

const char Media_Autoplay_Muted_UnmuteAction::kSourceName[] = "Source";

Media_Autoplay_Muted_UnmuteAction& Media_Autoplay_Muted_UnmuteAction::SetSource(int64_t value) {
  SetMetricInternal(kSourceNameHash, value);
  return *this;
}


const char Media_BasicPlayback::kEntryName[] = "Media.BasicPlayback";

Media_BasicPlayback::Media_BasicPlayback(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_BasicPlayback::Media_BasicPlayback(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_BasicPlayback::~Media_BasicPlayback() = default;


const char Media_BasicPlayback::kAudioCodecName[] = "AudioCodec";

Media_BasicPlayback& Media_BasicPlayback::SetAudioCodec(int64_t value) {
  SetMetricInternal(kAudioCodecNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kAudioDecoderNameName[] = "AudioDecoderName";

Media_BasicPlayback& Media_BasicPlayback::SetAudioDecoderName(int64_t value) {
  SetMetricInternal(kAudioDecoderNameNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kAudioEncryptionSchemeName[] = "AudioEncryptionScheme";

Media_BasicPlayback& Media_BasicPlayback::SetAudioEncryptionScheme(int64_t value) {
  SetMetricInternal(kAudioEncryptionSchemeNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kAutoplayInitiatedName[] = "AutoplayInitiated";

Media_BasicPlayback& Media_BasicPlayback::SetAutoplayInitiated(int64_t value) {
  SetMetricInternal(kAutoplayInitiatedNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kDurationName[] = "Duration";

Media_BasicPlayback& Media_BasicPlayback::SetDuration(int64_t value) {
  SetMetricInternal(kDurationNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kHasAudioName[] = "HasAudio";

Media_BasicPlayback& Media_BasicPlayback::SetHasAudio(int64_t value) {
  SetMetricInternal(kHasAudioNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kHasVideoName[] = "HasVideo";

Media_BasicPlayback& Media_BasicPlayback::SetHasVideo(int64_t value) {
  SetMetricInternal(kHasVideoNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsBackgroundName[] = "IsBackground";

Media_BasicPlayback& Media_BasicPlayback::SetIsBackground(int64_t value) {
  SetMetricInternal(kIsBackgroundNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsEMEName[] = "IsEME";

Media_BasicPlayback& Media_BasicPlayback::SetIsEME(int64_t value) {
  SetMetricInternal(kIsEMENameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsMSEName[] = "IsMSE";

Media_BasicPlayback& Media_BasicPlayback::SetIsMSE(int64_t value) {
  SetMetricInternal(kIsMSENameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsMutedName[] = "IsMuted";

Media_BasicPlayback& Media_BasicPlayback::SetIsMuted(int64_t value) {
  SetMetricInternal(kIsMutedNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kIsTopFrameName[] = "IsTopFrame";

Media_BasicPlayback& Media_BasicPlayback::SetIsTopFrame(int64_t value) {
  SetMetricInternal(kIsTopFrameNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kLastPipelineStatusName[] = "LastPipelineStatus";

Media_BasicPlayback& Media_BasicPlayback::SetLastPipelineStatus(int64_t value) {
  SetMetricInternal(kLastPipelineStatusNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kMeanTimeBetweenRebuffersName[] = "MeanTimeBetweenRebuffers";

Media_BasicPlayback& Media_BasicPlayback::SetMeanTimeBetweenRebuffers(int64_t value) {
  SetMetricInternal(kMeanTimeBetweenRebuffersNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kPlayerIDName[] = "PlayerID";

Media_BasicPlayback& Media_BasicPlayback::SetPlayerID(int64_t value) {
  SetMetricInternal(kPlayerIDNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kRebuffersCountName[] = "RebuffersCount";

Media_BasicPlayback& Media_BasicPlayback::SetRebuffersCount(int64_t value) {
  SetMetricInternal(kRebuffersCountNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoCodecName[] = "VideoCodec";

Media_BasicPlayback& Media_BasicPlayback::SetVideoCodec(int64_t value) {
  SetMetricInternal(kVideoCodecNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoDecoderNameName[] = "VideoDecoderName";

Media_BasicPlayback& Media_BasicPlayback::SetVideoDecoderName(int64_t value) {
  SetMetricInternal(kVideoDecoderNameNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoEncryptionSchemeName[] = "VideoEncryptionScheme";

Media_BasicPlayback& Media_BasicPlayback::SetVideoEncryptionScheme(int64_t value) {
  SetMetricInternal(kVideoEncryptionSchemeNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoNaturalHeightName[] = "VideoNaturalHeight";

Media_BasicPlayback& Media_BasicPlayback::SetVideoNaturalHeight(int64_t value) {
  SetMetricInternal(kVideoNaturalHeightNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kVideoNaturalWidthName[] = "VideoNaturalWidth";

Media_BasicPlayback& Media_BasicPlayback::SetVideoNaturalWidth(int64_t value) {
  SetMetricInternal(kVideoNaturalWidthNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTimeName[] = "WatchTime";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime(int64_t value) {
  SetMetricInternal(kWatchTimeNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_ACName[] = "WatchTime.AC";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_AC(int64_t value) {
  SetMetricInternal(kWatchTime_ACNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_BatteryName[] = "WatchTime.Battery";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_Battery(int64_t value) {
  SetMetricInternal(kWatchTime_BatteryNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_DisplayFullscreenName[] = "WatchTime.DisplayFullscreen";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_DisplayFullscreen(int64_t value) {
  SetMetricInternal(kWatchTime_DisplayFullscreenNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_DisplayInlineName[] = "WatchTime.DisplayInline";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_DisplayInline(int64_t value) {
  SetMetricInternal(kWatchTime_DisplayInlineNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_DisplayPictureInPictureName[] = "WatchTime.DisplayPictureInPicture";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_DisplayPictureInPicture(int64_t value) {
  SetMetricInternal(kWatchTime_DisplayPictureInPictureNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_NativeControlsOffName[] = "WatchTime.NativeControlsOff";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_NativeControlsOff(int64_t value) {
  SetMetricInternal(kWatchTime_NativeControlsOffNameHash, value);
  return *this;
}

const char Media_BasicPlayback::kWatchTime_NativeControlsOnName[] = "WatchTime.NativeControlsOn";

Media_BasicPlayback& Media_BasicPlayback::SetWatchTime_NativeControlsOn(int64_t value) {
  SetMetricInternal(kWatchTime_NativeControlsOnNameHash, value);
  return *this;
}


const char Media_EME_RequestMediaKeySystemAccess::kEntryName[] = "Media.EME.RequestMediaKeySystemAccess";

Media_EME_RequestMediaKeySystemAccess::Media_EME_RequestMediaKeySystemAccess(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_EME_RequestMediaKeySystemAccess::Media_EME_RequestMediaKeySystemAccess(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_EME_RequestMediaKeySystemAccess::~Media_EME_RequestMediaKeySystemAccess() = default;


const char Media_EME_RequestMediaKeySystemAccess::kKeySystemName[] = "KeySystem";

Media_EME_RequestMediaKeySystemAccess& Media_EME_RequestMediaKeySystemAccess::SetKeySystem(int64_t value) {
  SetMetricInternal(kKeySystemNameHash, value);
  return *this;
}

const char Media_EME_RequestMediaKeySystemAccess::kVideoCapabilitiesName[] = "VideoCapabilities";

Media_EME_RequestMediaKeySystemAccess& Media_EME_RequestMediaKeySystemAccess::SetVideoCapabilities(int64_t value) {
  SetMetricInternal(kVideoCapabilitiesNameHash, value);
  return *this;
}

const char Media_EME_RequestMediaKeySystemAccess::kVideoCapabilities_HasEmptyRobustnessName[] = "VideoCapabilities.HasEmptyRobustness";

Media_EME_RequestMediaKeySystemAccess& Media_EME_RequestMediaKeySystemAccess::SetVideoCapabilities_HasEmptyRobustness(int64_t value) {
  SetMetricInternal(kVideoCapabilities_HasEmptyRobustnessNameHash, value);
  return *this;
}

const char Media_EME_RequestMediaKeySystemAccess::kVideoCapabilities_HasHwSecureAllRobustnessName[] = "VideoCapabilities.HasHwSecureAllRobustness";

Media_EME_RequestMediaKeySystemAccess& Media_EME_RequestMediaKeySystemAccess::SetVideoCapabilities_HasHwSecureAllRobustness(int64_t value) {
  SetMetricInternal(kVideoCapabilities_HasHwSecureAllRobustnessNameHash, value);
  return *this;
}


const char Media_Engagement_SessionFinished::kEntryName[] = "Media.Engagement.SessionFinished";

Media_Engagement_SessionFinished::Media_Engagement_SessionFinished(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Engagement_SessionFinished::Media_Engagement_SessionFinished(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Engagement_SessionFinished::~Media_Engagement_SessionFinished() = default;


const char Media_Engagement_SessionFinished::kEngagement_IsHighName[] = "Engagement.IsHigh";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsHigh(int64_t value) {
  SetMetricInternal(kEngagement_IsHighNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangedName[] = "Engagement.IsHigh.Changed";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsHigh_Changed(int64_t value) {
  SetMetricInternal(kEngagement_IsHigh_ChangedNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangesName[] = "Engagement.IsHigh.Changes";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsHigh_Changes(int64_t value) {
  SetMetricInternal(kEngagement_IsHigh_ChangesNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_IsPreloadedName[] = "Engagement.IsPreloaded";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_IsPreloaded(int64_t value) {
  SetMetricInternal(kEngagement_IsPreloadedNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kEngagement_ScoreName[] = "Engagement.Score";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetEngagement_Score(int64_t value) {
  SetMetricInternal(kEngagement_ScoreNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_AudioContextTotalName[] = "Playbacks.AudioContextTotal";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_AudioContextTotal(int64_t value) {
  SetMetricInternal(kPlaybacks_AudioContextTotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_DeltaName[] = "Playbacks.Delta";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_Delta(int64_t value) {
  SetMetricInternal(kPlaybacks_DeltaNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_MediaElementTotalName[] = "Playbacks.MediaElementTotal";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_MediaElementTotal(int64_t value) {
  SetMetricInternal(kPlaybacks_MediaElementTotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_SecondsSinceLastName[] = "Playbacks.SecondsSinceLast";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_SecondsSinceLast(int64_t value) {
  SetMetricInternal(kPlaybacks_SecondsSinceLastNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlaybacks_TotalName[] = "Playbacks.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlaybacks_Total(int64_t value) {
  SetMetricInternal(kPlaybacks_TotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Audible_DeltaName[] = "Player.Audible.Delta";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Audible_Delta(int64_t value) {
  SetMetricInternal(kPlayer_Audible_DeltaNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Audible_TotalName[] = "Player.Audible.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Audible_Total(int64_t value) {
  SetMetricInternal(kPlayer_Audible_TotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Significant_DeltaName[] = "Player.Significant.Delta";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Significant_Delta(int64_t value) {
  SetMetricInternal(kPlayer_Significant_DeltaNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kPlayer_Significant_TotalName[] = "Player.Significant.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetPlayer_Significant_Total(int64_t value) {
  SetMetricInternal(kPlayer_Significant_TotalNameHash, value);
  return *this;
}

const char Media_Engagement_SessionFinished::kVisits_TotalName[] = "Visits.Total";

Media_Engagement_SessionFinished& Media_Engagement_SessionFinished::SetVisits_Total(int64_t value) {
  SetMetricInternal(kVisits_TotalNameHash, value);
  return *this;
}


const char Media_Engagement_ShortPlaybackIgnored::kEntryName[] = "Media.Engagement.ShortPlaybackIgnored";

Media_Engagement_ShortPlaybackIgnored::Media_Engagement_ShortPlaybackIgnored(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Engagement_ShortPlaybackIgnored::Media_Engagement_ShortPlaybackIgnored(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_Engagement_ShortPlaybackIgnored::~Media_Engagement_ShortPlaybackIgnored() = default;


const char Media_Engagement_ShortPlaybackIgnored::kLengthName[] = "Length";

Media_Engagement_ShortPlaybackIgnored& Media_Engagement_ShortPlaybackIgnored::SetLength(int64_t value) {
  SetMetricInternal(kLengthNameHash, value);
  return *this;
}


const char Media_SiteMuted::kEntryName[] = "Media.SiteMuted";

Media_SiteMuted::Media_SiteMuted(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_SiteMuted::Media_SiteMuted(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_SiteMuted::~Media_SiteMuted() = default;


const char Media_SiteMuted::kMuteReasonName[] = "MuteReason";

Media_SiteMuted& Media_SiteMuted::SetMuteReason(int64_t value) {
  SetMetricInternal(kMuteReasonNameHash, value);
  return *this;
}


const char Media_VideoDecodePerfRecord::kEntryName[] = "Media.VideoDecodePerfRecord";

Media_VideoDecodePerfRecord::Media_VideoDecodePerfRecord(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_VideoDecodePerfRecord::Media_VideoDecodePerfRecord(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_VideoDecodePerfRecord::~Media_VideoDecodePerfRecord() = default;


const char Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsPowerEfficientName[] = "Perf.ApiWouldClaimIsPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_ApiWouldClaimIsPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_ApiWouldClaimIsPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsSmoothName[] = "Perf.ApiWouldClaimIsSmooth";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_ApiWouldClaimIsSmooth(int64_t value) {
  SetMetricInternal(kPerf_ApiWouldClaimIsSmoothNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDecodedName[] = "Perf.PastVideoFramesDecoded";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_PastVideoFramesDecoded(int64_t value) {
  SetMetricInternal(kPerf_PastVideoFramesDecodedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDroppedName[] = "Perf.PastVideoFramesDropped";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_PastVideoFramesDropped(int64_t value) {
  SetMetricInternal(kPerf_PastVideoFramesDroppedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_PastVideoFramesPowerEfficientName[] = "Perf.PastVideoFramesPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_PastVideoFramesPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_PastVideoFramesPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_RecordIsPowerEfficientName[] = "Perf.RecordIsPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_RecordIsPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_RecordIsPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_RecordIsSmoothName[] = "Perf.RecordIsSmooth";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_RecordIsSmooth(int64_t value) {
  SetMetricInternal(kPerf_RecordIsSmoothNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_VideoFramesDecodedName[] = "Perf.VideoFramesDecoded";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_VideoFramesDecoded(int64_t value) {
  SetMetricInternal(kPerf_VideoFramesDecodedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_VideoFramesDroppedName[] = "Perf.VideoFramesDropped";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_VideoFramesDropped(int64_t value) {
  SetMetricInternal(kPerf_VideoFramesDroppedNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kPerf_VideoFramesPowerEfficientName[] = "Perf.VideoFramesPowerEfficient";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetPerf_VideoFramesPowerEfficient(int64_t value) {
  SetMetricInternal(kPerf_VideoFramesPowerEfficientNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_CodecProfileName[] = "Video.CodecProfile";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_CodecProfile(int64_t value) {
  SetMetricInternal(kVideo_CodecProfileNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_EME_KeySystemName[] = "Video.EME.KeySystem";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_EME_KeySystem(int64_t value) {
  SetMetricInternal(kVideo_EME_KeySystemNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_EME_UseHwSecureCodecsName[] = "Video.EME.UseHwSecureCodecs";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_EME_UseHwSecureCodecs(int64_t value) {
  SetMetricInternal(kVideo_EME_UseHwSecureCodecsNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_FramesPerSecondName[] = "Video.FramesPerSecond";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_FramesPerSecond(int64_t value) {
  SetMetricInternal(kVideo_FramesPerSecondNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_InTopFrameName[] = "Video.InTopFrame";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_InTopFrame(int64_t value) {
  SetMetricInternal(kVideo_InTopFrameNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_NaturalHeightName[] = "Video.NaturalHeight";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_NaturalHeight(int64_t value) {
  SetMetricInternal(kVideo_NaturalHeightNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_NaturalWidthName[] = "Video.NaturalWidth";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_NaturalWidth(int64_t value) {
  SetMetricInternal(kVideo_NaturalWidthNameHash, value);
  return *this;
}

const char Media_VideoDecodePerfRecord::kVideo_PlayerIDName[] = "Video.PlayerID";

Media_VideoDecodePerfRecord& Media_VideoDecodePerfRecord::SetVideo_PlayerID(int64_t value) {
  SetMetricInternal(kVideo_PlayerIDNameHash, value);
  return *this;
}


const char Media_WatchTime::kEntryName[] = "Media.WatchTime";

Media_WatchTime::Media_WatchTime(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WatchTime::Media_WatchTime(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WatchTime::~Media_WatchTime() = default;


const char Media_WatchTime::kAudio_ACName[] = "Audio.AC";

Media_WatchTime& Media_WatchTime::SetAudio_AC(int64_t value) {
  SetMetricInternal(kAudio_ACNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_AllName[] = "Audio.All";

Media_WatchTime& Media_WatchTime::SetAudio_All(int64_t value) {
  SetMetricInternal(kAudio_AllNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_BatteryName[] = "Audio.Battery";

Media_WatchTime& Media_WatchTime::SetAudio_Battery(int64_t value) {
  SetMetricInternal(kAudio_BatteryNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_EMEName[] = "Audio.EME";

Media_WatchTime& Media_WatchTime::SetAudio_EME(int64_t value) {
  SetMetricInternal(kAudio_EMENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_MSEName[] = "Audio.MSE";

Media_WatchTime& Media_WatchTime::SetAudio_MSE(int64_t value) {
  SetMetricInternal(kAudio_MSENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_NativeControlsOffName[] = "Audio.NativeControlsOff";

Media_WatchTime& Media_WatchTime::SetAudio_NativeControlsOff(int64_t value) {
  SetMetricInternal(kAudio_NativeControlsOffNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_NativeControlsOnName[] = "Audio.NativeControlsOn";

Media_WatchTime& Media_WatchTime::SetAudio_NativeControlsOn(int64_t value) {
  SetMetricInternal(kAudio_NativeControlsOnNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudio_SRCName[] = "Audio.SRC";

Media_WatchTime& Media_WatchTime::SetAudio_SRC(int64_t value) {
  SetMetricInternal(kAudio_SRCNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_ACName[] = "AudioVideo.AC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_AC(int64_t value) {
  SetMetricInternal(kAudioVideo_ACNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_AllName[] = "AudioVideo.All";

Media_WatchTime& Media_WatchTime::SetAudioVideo_All(int64_t value) {
  SetMetricInternal(kAudioVideo_AllNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_ACName[] = "AudioVideo.Background.AC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_AC(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_ACNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_AllName[] = "AudioVideo.Background.All";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_All(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_AllNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_BatteryName[] = "AudioVideo.Background.Battery";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_Battery(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_BatteryNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_EMEName[] = "AudioVideo.Background.EME";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_EME(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_EMENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_MSEName[] = "AudioVideo.Background.MSE";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_MSE(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_MSENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_Background_SRCName[] = "AudioVideo.Background.SRC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Background_SRC(int64_t value) {
  SetMetricInternal(kAudioVideo_Background_SRCNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_BatteryName[] = "AudioVideo.Battery";

Media_WatchTime& Media_WatchTime::SetAudioVideo_Battery(int64_t value) {
  SetMetricInternal(kAudioVideo_BatteryNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_DisplayFullscreenName[] = "AudioVideo.DisplayFullscreen";

Media_WatchTime& Media_WatchTime::SetAudioVideo_DisplayFullscreen(int64_t value) {
  SetMetricInternal(kAudioVideo_DisplayFullscreenNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_DisplayInlineName[] = "AudioVideo.DisplayInline";

Media_WatchTime& Media_WatchTime::SetAudioVideo_DisplayInline(int64_t value) {
  SetMetricInternal(kAudioVideo_DisplayInlineNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_DisplayPictureInPictureName[] = "AudioVideo.DisplayPictureInPicture";

Media_WatchTime& Media_WatchTime::SetAudioVideo_DisplayPictureInPicture(int64_t value) {
  SetMetricInternal(kAudioVideo_DisplayPictureInPictureNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_EMEName[] = "AudioVideo.EME";

Media_WatchTime& Media_WatchTime::SetAudioVideo_EME(int64_t value) {
  SetMetricInternal(kAudioVideo_EMENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_MSEName[] = "AudioVideo.MSE";

Media_WatchTime& Media_WatchTime::SetAudioVideo_MSE(int64_t value) {
  SetMetricInternal(kAudioVideo_MSENameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_NativeControlsOffName[] = "AudioVideo.NativeControlsOff";

Media_WatchTime& Media_WatchTime::SetAudioVideo_NativeControlsOff(int64_t value) {
  SetMetricInternal(kAudioVideo_NativeControlsOffNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_NativeControlsOnName[] = "AudioVideo.NativeControlsOn";

Media_WatchTime& Media_WatchTime::SetAudioVideo_NativeControlsOn(int64_t value) {
  SetMetricInternal(kAudioVideo_NativeControlsOnNameHash, value);
  return *this;
}

const char Media_WatchTime::kAudioVideo_SRCName[] = "AudioVideo.SRC";

Media_WatchTime& Media_WatchTime::SetAudioVideo_SRC(int64_t value) {
  SetMetricInternal(kAudioVideo_SRCNameHash, value);
  return *this;
}


const char Media_WebAudio_AudioContext_AudibleTime::kEntryName[] = "Media.WebAudio.AudioContext.AudibleTime";

Media_WebAudio_AudioContext_AudibleTime::Media_WebAudio_AudioContext_AudibleTime(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WebAudio_AudioContext_AudibleTime::Media_WebAudio_AudioContext_AudibleTime(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WebAudio_AudioContext_AudibleTime::~Media_WebAudio_AudioContext_AudibleTime() = default;


const char Media_WebAudio_AudioContext_AudibleTime::kAudibleTimeName[] = "AudibleTime";

Media_WebAudio_AudioContext_AudibleTime& Media_WebAudio_AudioContext_AudibleTime::SetAudibleTime(int64_t value) {
  SetMetricInternal(kAudibleTimeNameHash, value);
  return *this;
}

const char Media_WebAudio_AudioContext_AudibleTime::kIsMainFrameName[] = "IsMainFrame";

Media_WebAudio_AudioContext_AudibleTime& Media_WebAudio_AudioContext_AudibleTime::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}


const char Media_WebMediaPlayerState::kEntryName[] = "Media.WebMediaPlayerState";

Media_WebMediaPlayerState::Media_WebMediaPlayerState(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WebMediaPlayerState::Media_WebMediaPlayerState(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Media_WebMediaPlayerState::~Media_WebMediaPlayerState() = default;


const char Media_WebMediaPlayerState::kContainerNameName[] = "ContainerName";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetContainerName(int64_t value) {
  SetMetricInternal(kContainerNameNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kFinalPipelineStatusName[] = "FinalPipelineStatus";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetFinalPipelineStatus(int64_t value) {
  SetMetricInternal(kFinalPipelineStatusNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kIsEMEName[] = "IsEME";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetIsEME(int64_t value) {
  SetMetricInternal(kIsEMENameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kIsMSEName[] = "IsMSE";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetIsMSE(int64_t value) {
  SetMetricInternal(kIsMSENameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kIsTopFrameName[] = "IsTopFrame";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetIsTopFrame(int64_t value) {
  SetMetricInternal(kIsTopFrameNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kPlayerIDName[] = "PlayerID";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetPlayerID(int64_t value) {
  SetMetricInternal(kPlayerIDNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kTimeToFirstFrameName[] = "TimeToFirstFrame";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetTimeToFirstFrame(int64_t value) {
  SetMetricInternal(kTimeToFirstFrameNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kTimeToMetadataName[] = "TimeToMetadata";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetTimeToMetadata(int64_t value) {
  SetMetricInternal(kTimeToMetadataNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kTimeToPlayReadyName[] = "TimeToPlayReady";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetTimeToPlayReady(int64_t value) {
  SetMetricInternal(kTimeToPlayReadyNameHash, value);
  return *this;
}

const char Media_WebMediaPlayerState::kURLSchemeName[] = "URLScheme";

Media_WebMediaPlayerState& Media_WebMediaPlayerState::SetURLScheme(int64_t value) {
  SetMetricInternal(kURLSchemeNameHash, value);
  return *this;
}


const char Memory_Experimental::kEntryName[] = "Memory.Experimental";

Memory_Experimental::Memory_Experimental(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Memory_Experimental::Memory_Experimental(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Memory_Experimental::~Memory_Experimental() = default;


const char Memory_Experimental::kArrayBufferName[] = "ArrayBuffer";

Memory_Experimental& Memory_Experimental::SetArrayBuffer(int64_t value) {
  SetMetricInternal(kArrayBufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kBlinkGCName[] = "BlinkGC";

Memory_Experimental& Memory_Experimental::SetBlinkGC(int64_t value) {
  SetMetricInternal(kBlinkGCNameHash, value);
  return *this;
}

const char Memory_Experimental::kBlinkGC_AllocatedObjectsName[] = "BlinkGC.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetBlinkGC_AllocatedObjects(int64_t value) {
  SetMetricInternal(kBlinkGC_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kCommandBufferName[] = "CommandBuffer";

Memory_Experimental& Memory_Experimental::SetCommandBuffer(int64_t value) {
  SetMetricInternal(kCommandBufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kDiscardableName[] = "Discardable";

Memory_Experimental& Memory_Experimental::SetDiscardable(int64_t value) {
  SetMetricInternal(kDiscardableNameHash, value);
  return *this;
}

const char Memory_Experimental::kDownloadServiceName[] = "DownloadService";

Memory_Experimental& Memory_Experimental::SetDownloadService(int64_t value) {
  SetMetricInternal(kDownloadServiceNameHash, value);
  return *this;
}

const char Memory_Experimental::kExtensions_ValueStoreName[] = "Extensions.ValueStore";

Memory_Experimental& Memory_Experimental::SetExtensions_ValueStore(int64_t value) {
  SetMetricInternal(kExtensions_ValueStoreNameHash, value);
  return *this;
}

const char Memory_Experimental::kFontCachesName[] = "FontCaches";

Memory_Experimental& Memory_Experimental::SetFontCaches(int64_t value) {
  SetMetricInternal(kFontCachesNameHash, value);
  return *this;
}

const char Memory_Experimental::kHistoryName[] = "History";

Memory_Experimental& Memory_Experimental::SetHistory(int64_t value) {
  SetMetricInternal(kHistoryNameHash, value);
  return *this;
}

const char Memory_Experimental::kIsVisibleName[] = "IsVisible";

Memory_Experimental& Memory_Experimental::SetIsVisible(int64_t value) {
  SetMetricInternal(kIsVisibleNameHash, value);
  return *this;
}

const char Memory_Experimental::kJavaHeapName[] = "JavaHeap";

Memory_Experimental& Memory_Experimental::SetJavaHeap(int64_t value) {
  SetMetricInternal(kJavaHeapNameHash, value);
  return *this;
}

const char Memory_Experimental::kLevelDatabaseName[] = "LevelDatabase";

Memory_Experimental& Memory_Experimental::SetLevelDatabase(int64_t value) {
  SetMetricInternal(kLevelDatabaseNameHash, value);
  return *this;
}

const char Memory_Experimental::kMallocName[] = "Malloc";

Memory_Experimental& Memory_Experimental::SetMalloc(int64_t value) {
  SetMetricInternal(kMallocNameHash, value);
  return *this;
}

const char Memory_Experimental::kMalloc_AllocatedObjectsName[] = "Malloc.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetMalloc_AllocatedObjects(int64_t value) {
  SetMetricInternal(kMalloc_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kNetName[] = "Net";

Memory_Experimental& Memory_Experimental::SetNet(int64_t value) {
  SetMetricInternal(kNetNameHash, value);
  return *this;
}

const char Memory_Experimental::kNet_UrlRequestContextName[] = "Net.UrlRequestContext";

Memory_Experimental& Memory_Experimental::SetNet_UrlRequestContext(int64_t value) {
  SetMetricInternal(kNet_UrlRequestContextNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfAdSubframesName[] = "NumberOfAdSubframes";

Memory_Experimental& Memory_Experimental::SetNumberOfAdSubframes(int64_t value) {
  SetMetricInternal(kNumberOfAdSubframesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfDetachedScriptStatesName[] = "NumberOfDetachedScriptStates";

Memory_Experimental& Memory_Experimental::SetNumberOfDetachedScriptStates(int64_t value) {
  SetMetricInternal(kNumberOfDetachedScriptStatesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfDocumentsName[] = "NumberOfDocuments";

Memory_Experimental& Memory_Experimental::SetNumberOfDocuments(int64_t value) {
  SetMetricInternal(kNumberOfDocumentsNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfExtensionsName[] = "NumberOfExtensions";

Memory_Experimental& Memory_Experimental::SetNumberOfExtensions(int64_t value) {
  SetMetricInternal(kNumberOfExtensionsNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfFramesName[] = "NumberOfFrames";

Memory_Experimental& Memory_Experimental::SetNumberOfFrames(int64_t value) {
  SetMetricInternal(kNumberOfFramesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfLayoutObjectsName[] = "NumberOfLayoutObjects";

Memory_Experimental& Memory_Experimental::SetNumberOfLayoutObjects(int64_t value) {
  SetMetricInternal(kNumberOfLayoutObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfMojoHandlesName[] = "NumberOfMojoHandles";

Memory_Experimental& Memory_Experimental::SetNumberOfMojoHandles(int64_t value) {
  SetMetricInternal(kNumberOfMojoHandlesNameHash, value);
  return *this;
}

const char Memory_Experimental::kNumberOfNodesName[] = "NumberOfNodes";

Memory_Experimental& Memory_Experimental::SetNumberOfNodes(int64_t value) {
  SetMetricInternal(kNumberOfNodesNameHash, value);
  return *this;
}

const char Memory_Experimental::kOmniboxSuggestionsName[] = "OmniboxSuggestions";

Memory_Experimental& Memory_Experimental::SetOmniboxSuggestions(int64_t value) {
  SetMetricInternal(kOmniboxSuggestionsNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAllocName[] = "PartitionAlloc";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc(int64_t value) {
  SetMetricInternal(kPartitionAllocNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_AllocatedObjectsName[] = "PartitionAlloc.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_AllocatedObjects(int64_t value) {
  SetMetricInternal(kPartitionAlloc_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_ArrayBufferName[] = "PartitionAlloc.Partitions.ArrayBuffer";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_ArrayBuffer(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_ArrayBufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_BufferName[] = "PartitionAlloc.Partitions.Buffer";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_Buffer(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_BufferNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_FastMallocName[] = "PartitionAlloc.Partitions.FastMalloc";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_FastMalloc(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_FastMallocNameHash, value);
  return *this;
}

const char Memory_Experimental::kPartitionAlloc_Partitions_LayoutName[] = "PartitionAlloc.Partitions.Layout";

Memory_Experimental& Memory_Experimental::SetPartitionAlloc_Partitions_Layout(int64_t value) {
  SetMetricInternal(kPartitionAlloc_Partitions_LayoutNameHash, value);
  return *this;
}

const char Memory_Experimental::kPrivateMemoryFootprintName[] = "PrivateMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetPrivateMemoryFootprint(int64_t value) {
  SetMetricInternal(kPrivateMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kPrivateSwapFootprintName[] = "PrivateSwapFootprint";

Memory_Experimental& Memory_Experimental::SetPrivateSwapFootprint(int64_t value) {
  SetMetricInternal(kPrivateSwapFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kProcessTypeName[] = "ProcessType";

Memory_Experimental& Memory_Experimental::SetProcessType(int64_t value) {
  SetMetricInternal(kProcessTypeNameHash, value);
  return *this;
}

const char Memory_Experimental::kResidentName[] = "Resident";

Memory_Experimental& Memory_Experimental::SetResident(int64_t value) {
  SetMetricInternal(kResidentNameHash, value);
  return *this;
}

const char Memory_Experimental::kSharedMemoryFootprintName[] = "SharedMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetSharedMemoryFootprint(int64_t value) {
  SetMetricInternal(kSharedMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorageName[] = "SiteStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage(int64_t value) {
  SetMetricInternal(kSiteStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_BlobStorageName[] = "SiteStorage.BlobStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage_BlobStorage(int64_t value) {
  SetMetricInternal(kSiteStorage_BlobStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_IndexDBName[] = "SiteStorage.IndexDB";

Memory_Experimental& Memory_Experimental::SetSiteStorage_IndexDB(int64_t value) {
  SetMetricInternal(kSiteStorage_IndexDBNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_LocalStorageName[] = "SiteStorage.LocalStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage_LocalStorage(int64_t value) {
  SetMetricInternal(kSiteStorage_LocalStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSiteStorage_SessionStorageName[] = "SiteStorage.SessionStorage";

Memory_Experimental& Memory_Experimental::SetSiteStorage_SessionStorage(int64_t value) {
  SetMetricInternal(kSiteStorage_SessionStorageNameHash, value);
  return *this;
}

const char Memory_Experimental::kSkiaName[] = "Skia";

Memory_Experimental& Memory_Experimental::SetSkia(int64_t value) {
  SetMetricInternal(kSkiaNameHash, value);
  return *this;
}

const char Memory_Experimental::kSkia_SkGlyphCacheName[] = "Skia.SkGlyphCache";

Memory_Experimental& Memory_Experimental::SetSkia_SkGlyphCache(int64_t value) {
  SetMetricInternal(kSkia_SkGlyphCacheNameHash, value);
  return *this;
}

const char Memory_Experimental::kSkia_SkResourceCacheName[] = "Skia.SkResourceCache";

Memory_Experimental& Memory_Experimental::SetSkia_SkResourceCache(int64_t value) {
  SetMetricInternal(kSkia_SkResourceCacheNameHash, value);
  return *this;
}

const char Memory_Experimental::kSqliteName[] = "Sqlite";

Memory_Experimental& Memory_Experimental::SetSqlite(int64_t value) {
  SetMetricInternal(kSqliteNameHash, value);
  return *this;
}

const char Memory_Experimental::kSyncName[] = "Sync";

Memory_Experimental& Memory_Experimental::SetSync(int64_t value) {
  SetMetricInternal(kSyncNameHash, value);
  return *this;
}

const char Memory_Experimental::kTabRestoreName[] = "TabRestore";

Memory_Experimental& Memory_Experimental::SetTabRestore(int64_t value) {
  SetMetricInternal(kTabRestoreNameHash, value);
  return *this;
}

const char Memory_Experimental::kTimeSinceLastNavigationName[] = "TimeSinceLastNavigation";

Memory_Experimental& Memory_Experimental::SetTimeSinceLastNavigation(int64_t value) {
  SetMetricInternal(kTimeSinceLastNavigationNameHash, value);
  return *this;
}

const char Memory_Experimental::kTimeSinceLastVisibilityChangeName[] = "TimeSinceLastVisibilityChange";

Memory_Experimental& Memory_Experimental::SetTimeSinceLastVisibilityChange(int64_t value) {
  SetMetricInternal(kTimeSinceLastVisibilityChangeNameHash, value);
  return *this;
}

const char Memory_Experimental::kTotal2_PrivateMemoryFootprintName[] = "Total2.PrivateMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetTotal2_PrivateMemoryFootprint(int64_t value) {
  SetMetricInternal(kTotal2_PrivateMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kTotal2_SharedMemoryFootprintName[] = "Total2.SharedMemoryFootprint";

Memory_Experimental& Memory_Experimental::SetTotal2_SharedMemoryFootprint(int64_t value) {
  SetMetricInternal(kTotal2_SharedMemoryFootprintNameHash, value);
  return *this;
}

const char Memory_Experimental::kUIName[] = "UI";

Memory_Experimental& Memory_Experimental::SetUI(int64_t value) {
  SetMetricInternal(kUINameHash, value);
  return *this;
}

const char Memory_Experimental::kUptimeName[] = "Uptime";

Memory_Experimental& Memory_Experimental::SetUptime(int64_t value) {
  SetMetricInternal(kUptimeNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8Name[] = "V8";

Memory_Experimental& Memory_Experimental::SetV8(int64_t value) {
  SetMetricInternal(kV8NameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_AllocatedObjectsName[] = "V8.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_MainName[] = "V8.Main";

Memory_Experimental& Memory_Experimental::SetV8_Main(int64_t value) {
  SetMetricInternal(kV8_MainNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_AllocatedObjectsName[] = "V8.Main.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_HeapName[] = "V8.Main.Heap";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap(int64_t value) {
  SetMetricInternal(kV8_Main_HeapNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_AllocatedObjectsName[] = "V8.Main.Heap.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_CodeLargeObjectSpaceName[] = "V8.Main.Heap.CodeLargeObjectSpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_CodeLargeObjectSpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_CodeLargeObjectSpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_CodeLargeObjectSpace_AllocatedObjectsName[] = "V8.Main.Heap.CodeLargeObjectSpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_CodeLargeObjectSpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_CodeLargeObjectSpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_CodeSpaceName[] = "V8.Main.Heap.CodeSpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_CodeSpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_CodeSpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_CodeSpace_AllocatedObjectsName[] = "V8.Main.Heap.CodeSpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_CodeSpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_CodeSpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_LargeObjectSpaceName[] = "V8.Main.Heap.LargeObjectSpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_LargeObjectSpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_LargeObjectSpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_LargeObjectSpace_AllocatedObjectsName[] = "V8.Main.Heap.LargeObjectSpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_LargeObjectSpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_LargeObjectSpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_MapSpaceName[] = "V8.Main.Heap.MapSpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_MapSpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_MapSpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_MapSpace_AllocatedObjectsName[] = "V8.Main.Heap.MapSpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_MapSpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_MapSpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_NewLargeObjectSpaceName[] = "V8.Main.Heap.NewLargeObjectSpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_NewLargeObjectSpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_NewLargeObjectSpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_NewLargeObjectSpace_AllocatedObjectsName[] = "V8.Main.Heap.NewLargeObjectSpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_NewLargeObjectSpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_NewLargeObjectSpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_NewSpaceName[] = "V8.Main.Heap.NewSpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_NewSpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_NewSpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_NewSpace_AllocatedObjectsName[] = "V8.Main.Heap.NewSpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_NewSpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_NewSpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_OldSpaceName[] = "V8.Main.Heap.OldSpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_OldSpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_OldSpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_OldSpace_AllocatedObjectsName[] = "V8.Main.Heap.OldSpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_OldSpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_OldSpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_ReadOnlySpaceName[] = "V8.Main.Heap.ReadOnlySpace";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_ReadOnlySpace(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_ReadOnlySpaceNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_Heap_ReadOnlySpace_AllocatedObjectsName[] = "V8.Main.Heap.ReadOnlySpace.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Main_Heap_ReadOnlySpace_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Main_Heap_ReadOnlySpace_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Main_MallocName[] = "V8.Main.Malloc";

Memory_Experimental& Memory_Experimental::SetV8_Main_Malloc(int64_t value) {
  SetMetricInternal(kV8_Main_MallocNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_WorkersName[] = "V8.Workers";

Memory_Experimental& Memory_Experimental::SetV8_Workers(int64_t value) {
  SetMetricInternal(kV8_WorkersNameHash, value);
  return *this;
}

const char Memory_Experimental::kV8_Workers_AllocatedObjectsName[] = "V8.Workers.AllocatedObjects";

Memory_Experimental& Memory_Experimental::SetV8_Workers_AllocatedObjects(int64_t value) {
  SetMetricInternal(kV8_Workers_AllocatedObjectsNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCacheName[] = "WebCache";

Memory_Experimental& Memory_Experimental::SetWebCache(int64_t value) {
  SetMetricInternal(kWebCacheNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_CSSStylesheetResourcesName[] = "WebCache.CSSStylesheetResources";

Memory_Experimental& Memory_Experimental::SetWebCache_CSSStylesheetResources(int64_t value) {
  SetMetricInternal(kWebCache_CSSStylesheetResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_EncodedSizeDuplicatedInDataUrlsName[] = "WebCache.EncodedSizeDuplicatedInDataUrls";

Memory_Experimental& Memory_Experimental::SetWebCache_EncodedSizeDuplicatedInDataUrls(int64_t value) {
  SetMetricInternal(kWebCache_EncodedSizeDuplicatedInDataUrlsNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_FontResourcesName[] = "WebCache.FontResources";

Memory_Experimental& Memory_Experimental::SetWebCache_FontResources(int64_t value) {
  SetMetricInternal(kWebCache_FontResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_ImageResourcesName[] = "WebCache.ImageResources";

Memory_Experimental& Memory_Experimental::SetWebCache_ImageResources(int64_t value) {
  SetMetricInternal(kWebCache_ImageResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_OtherResourcesName[] = "WebCache.OtherResources";

Memory_Experimental& Memory_Experimental::SetWebCache_OtherResources(int64_t value) {
  SetMetricInternal(kWebCache_OtherResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_ScriptResourcesName[] = "WebCache.ScriptResources";

Memory_Experimental& Memory_Experimental::SetWebCache_ScriptResources(int64_t value) {
  SetMetricInternal(kWebCache_ScriptResourcesNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_V8CodeCacheName[] = "WebCache.V8CodeCache";

Memory_Experimental& Memory_Experimental::SetWebCache_V8CodeCache(int64_t value) {
  SetMetricInternal(kWebCache_V8CodeCacheNameHash, value);
  return *this;
}

const char Memory_Experimental::kWebCache_XSLStylesheetResourcesName[] = "WebCache.XSLStylesheetResources";

Memory_Experimental& Memory_Experimental::SetWebCache_XSLStylesheetResources(int64_t value) {
  SetMetricInternal(kWebCache_XSLStylesheetResourcesNameHash, value);
  return *this;
}


const char Memory_TabFootprint::kEntryName[] = "Memory.TabFootprint";

Memory_TabFootprint::Memory_TabFootprint(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Memory_TabFootprint::Memory_TabFootprint(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Memory_TabFootprint::~Memory_TabFootprint() = default;


const char Memory_TabFootprint::kMainFrameProcessPMFName[] = "MainFrameProcessPMF";

Memory_TabFootprint& Memory_TabFootprint::SetMainFrameProcessPMF(int64_t value) {
  SetMetricInternal(kMainFrameProcessPMFNameHash, value);
  return *this;
}

const char Memory_TabFootprint::kSubFrameProcessPMF_ExcludedName[] = "SubFrameProcessPMF.Excluded";

Memory_TabFootprint& Memory_TabFootprint::SetSubFrameProcessPMF_Excluded(int64_t value) {
  SetMetricInternal(kSubFrameProcessPMF_ExcludedNameHash, value);
  return *this;
}

const char Memory_TabFootprint::kSubFrameProcessPMF_IncludedName[] = "SubFrameProcessPMF.Included";

Memory_TabFootprint& Memory_TabFootprint::SetSubFrameProcessPMF_Included(int64_t value) {
  SetMetricInternal(kSubFrameProcessPMF_IncludedNameHash, value);
  return *this;
}

const char Memory_TabFootprint::kSubFrameProcessPMF_TotalName[] = "SubFrameProcessPMF.Total";

Memory_TabFootprint& Memory_TabFootprint::SetSubFrameProcessPMF_Total(int64_t value) {
  SetMetricInternal(kSubFrameProcessPMF_TotalNameHash, value);
  return *this;
}

const char Memory_TabFootprint::kTabPMFName[] = "TabPMF";

Memory_TabFootprint& Memory_TabFootprint::SetTabPMF(int64_t value) {
  SetMetricInternal(kTabPMFNameHash, value);
  return *this;
}


const char MixedContentAutoupgrade_ResourceRequest::kEntryName[] = "MixedContentAutoupgrade.ResourceRequest";

MixedContentAutoupgrade_ResourceRequest::MixedContentAutoupgrade_ResourceRequest(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

MixedContentAutoupgrade_ResourceRequest::MixedContentAutoupgrade_ResourceRequest(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

MixedContentAutoupgrade_ResourceRequest::~MixedContentAutoupgrade_ResourceRequest() = default;


const char MixedContentAutoupgrade_ResourceRequest::kCodeName[] = "Code";

MixedContentAutoupgrade_ResourceRequest& MixedContentAutoupgrade_ResourceRequest::SetCode(int64_t value) {
  SetMetricInternal(kCodeNameHash, value);
  return *this;
}

const char MixedContentAutoupgrade_ResourceRequest::kStatusName[] = "Status";

MixedContentAutoupgrade_ResourceRequest& MixedContentAutoupgrade_ResourceRequest::SetStatus(int64_t value) {
  SetMetricInternal(kStatusNameHash, value);
  return *this;
}


const char Net_LegacyTLSVersion::kEntryName[] = "Net.LegacyTLSVersion";

Net_LegacyTLSVersion::Net_LegacyTLSVersion(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Net_LegacyTLSVersion::Net_LegacyTLSVersion(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Net_LegacyTLSVersion::~Net_LegacyTLSVersion() = default;



const char NoStatePrefetch::kEntryName[] = "NoStatePrefetch";

NoStatePrefetch::NoStatePrefetch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

NoStatePrefetch::NoStatePrefetch(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

NoStatePrefetch::~NoStatePrefetch() = default;


const char NoStatePrefetch::kPrefetchedRecently_FinalStatusName[] = "PrefetchedRecently.FinalStatus";

NoStatePrefetch& NoStatePrefetch::SetPrefetchedRecently_FinalStatus(int64_t value) {
  SetMetricInternal(kPrefetchedRecently_FinalStatusNameHash, value);
  return *this;
}

const char NoStatePrefetch::kPrefetchedRecently_OriginName[] = "PrefetchedRecently.Origin";

NoStatePrefetch& NoStatePrefetch::SetPrefetchedRecently_Origin(int64_t value) {
  SetMetricInternal(kPrefetchedRecently_OriginNameHash, value);
  return *this;
}

const char NoStatePrefetch::kPrefetchedRecently_PrefetchAgeName[] = "PrefetchedRecently.PrefetchAge";

NoStatePrefetch& NoStatePrefetch::SetPrefetchedRecently_PrefetchAge(int64_t value) {
  SetMetricInternal(kPrefetchedRecently_PrefetchAgeNameHash, value);
  return *this;
}


const char Notification::kEntryName[] = "Notification";

Notification::Notification(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Notification::Notification(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Notification::~Notification() = default;


const char Notification::kClosedReasonName[] = "ClosedReason";

Notification& Notification::SetClosedReason(int64_t value) {
  SetMetricInternal(kClosedReasonNameHash, value);
  return *this;
}

const char Notification::kDidReplaceAnotherNotificationName[] = "DidReplaceAnotherNotification";

Notification& Notification::SetDidReplaceAnotherNotification(int64_t value) {
  SetMetricInternal(kDidReplaceAnotherNotificationNameHash, value);
  return *this;
}

const char Notification::kDidUserOpenSettingsName[] = "DidUserOpenSettings";

Notification& Notification::SetDidUserOpenSettings(int64_t value) {
  SetMetricInternal(kDidUserOpenSettingsNameHash, value);
  return *this;
}

const char Notification::kHasBadgeName[] = "HasBadge";

Notification& Notification::SetHasBadge(int64_t value) {
  SetMetricInternal(kHasBadgeNameHash, value);
  return *this;
}

const char Notification::kHasIconName[] = "HasIcon";

Notification& Notification::SetHasIcon(int64_t value) {
  SetMetricInternal(kHasIconNameHash, value);
  return *this;
}

const char Notification::kHasImageName[] = "HasImage";

Notification& Notification::SetHasImage(int64_t value) {
  SetMetricInternal(kHasImageNameHash, value);
  return *this;
}

const char Notification::kHasRenotifyName[] = "HasRenotify";

Notification& Notification::SetHasRenotify(int64_t value) {
  SetMetricInternal(kHasRenotifyNameHash, value);
  return *this;
}

const char Notification::kHasTagName[] = "HasTag";

Notification& Notification::SetHasTag(int64_t value) {
  SetMetricInternal(kHasTagNameHash, value);
  return *this;
}

const char Notification::kIsSilentName[] = "IsSilent";

Notification& Notification::SetIsSilent(int64_t value) {
  SetMetricInternal(kIsSilentNameHash, value);
  return *this;
}

const char Notification::kNumActionButtonClicksName[] = "NumActionButtonClicks";

Notification& Notification::SetNumActionButtonClicks(int64_t value) {
  SetMetricInternal(kNumActionButtonClicksNameHash, value);
  return *this;
}

const char Notification::kNumActionsName[] = "NumActions";

Notification& Notification::SetNumActions(int64_t value) {
  SetMetricInternal(kNumActionsNameHash, value);
  return *this;
}

const char Notification::kNumClicksName[] = "NumClicks";

Notification& Notification::SetNumClicks(int64_t value) {
  SetMetricInternal(kNumClicksNameHash, value);
  return *this;
}

const char Notification::kRequireInteractionName[] = "RequireInteraction";

Notification& Notification::SetRequireInteraction(int64_t value) {
  SetMetricInternal(kRequireInteractionNameHash, value);
  return *this;
}

const char Notification::kTimeUntilCloseName[] = "TimeUntilClose";

Notification& Notification::SetTimeUntilClose(int64_t value) {
  SetMetricInternal(kTimeUntilCloseNameHash, value);
  return *this;
}

const char Notification::kTimeUntilFirstClickName[] = "TimeUntilFirstClick";

Notification& Notification::SetTimeUntilFirstClick(int64_t value) {
  SetMetricInternal(kTimeUntilFirstClickNameHash, value);
  return *this;
}

const char Notification::kTimeUntilLastClickName[] = "TimeUntilLastClick";

Notification& Notification::SetTimeUntilLastClick(int64_t value) {
  SetMetricInternal(kTimeUntilLastClickNameHash, value);
  return *this;
}


const char OfflinePages_SavePageRequested::kEntryName[] = "OfflinePages.SavePageRequested";

OfflinePages_SavePageRequested::OfflinePages_SavePageRequested(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

OfflinePages_SavePageRequested::OfflinePages_SavePageRequested(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

OfflinePages_SavePageRequested::~OfflinePages_SavePageRequested() = default;


const char OfflinePages_SavePageRequested::kRequestedFromForegroundName[] = "RequestedFromForeground";

OfflinePages_SavePageRequested& OfflinePages_SavePageRequested::SetRequestedFromForeground(int64_t value) {
  SetMetricInternal(kRequestedFromForegroundNameHash, value);
  return *this;
}


const char PageDomainInfo::kEntryName[] = "PageDomainInfo";

PageDomainInfo::PageDomainInfo(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageDomainInfo::PageDomainInfo(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageDomainInfo::~PageDomainInfo() = default;


const char PageDomainInfo::kDomainTypeName[] = "DomainType";

PageDomainInfo& PageDomainInfo::SetDomainType(int64_t value) {
  SetMetricInternal(kDomainTypeNameHash, value);
  return *this;
}


const char PageForegroundSession::kEntryName[] = "PageForegroundSession";

PageForegroundSession::PageForegroundSession(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageForegroundSession::PageForegroundSession(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageForegroundSession::~PageForegroundSession() = default;


const char PageForegroundSession::kForegroundDurationName[] = "ForegroundDuration";

PageForegroundSession& PageForegroundSession::SetForegroundDuration(int64_t value) {
  SetMetricInternal(kForegroundDurationNameHash, value);
  return *this;
}


const char PageLoad::kEntryName[] = "PageLoad";

PageLoad::PageLoad(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad::PageLoad(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad::~PageLoad() = default;


const char PageLoad::kCpuTimeName[] = "CpuTime";

PageLoad& PageLoad::SetCpuTime(int64_t value) {
  SetMetricInternal(kCpuTimeNameHash, value);
  return *this;
}

const char PageLoad::kDocumentTiming_NavigationToDOMContentLoadedEventFiredName[] = "DocumentTiming.NavigationToDOMContentLoadedEventFired";

PageLoad& PageLoad::SetDocumentTiming_NavigationToDOMContentLoadedEventFired(int64_t value) {
  SetMetricInternal(kDocumentTiming_NavigationToDOMContentLoadedEventFiredNameHash, value);
  return *this;
}

const char PageLoad::kDocumentTiming_NavigationToLoadEventFiredName[] = "DocumentTiming.NavigationToLoadEventFired";

PageLoad& PageLoad::SetDocumentTiming_NavigationToLoadEventFired(int64_t value) {
  SetMetricInternal(kDocumentTiming_NavigationToLoadEventFiredNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_InputToNavigationStartName[] = "Experimental.InputToNavigationStart";

PageLoad& PageLoad::SetExperimental_InputToNavigationStart(int64_t value) {
  SetMetricInternal(kExperimental_InputToNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_Navigation_UserInitiatedName[] = "Experimental.Navigation.UserInitiated";

PageLoad& PageLoad::SetExperimental_Navigation_UserInitiated(int64_t value) {
  SetMetricInternal(kExperimental_Navigation_UserInitiatedNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_NavigationToInteractiveName[] = "Experimental.NavigationToInteractive";

PageLoad& PageLoad::SetExperimental_NavigationToInteractive(int64_t value) {
  SetMetricInternal(kExperimental_NavigationToInteractiveNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintName[] = "Experimental.PaintTiming.NavigationToFirstMeaningfulPaint";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToFirstMeaningfulPaint(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLargestContentPaintName[] = "Experimental.PaintTiming.NavigationToLargestContentPaint";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLargestContentPaint(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLargestContentPaintNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLargestContentPaintAllFramesName[] = "Experimental.PaintTiming.NavigationToLargestContentPaintAllFrames";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLargestContentPaintAllFrames(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLargestContentPaintAllFramesNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLargestImagePaintName[] = "Experimental.PaintTiming.NavigationToLargestImagePaint";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLargestImagePaint(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLargestImagePaintNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLargestImagePaint_BeforeUserInputName[] = "Experimental.PaintTiming.NavigationToLargestImagePaint.BeforeUserInput";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLargestImagePaint_BeforeUserInput(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLargestImagePaint_BeforeUserInputNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLargestTextPaintName[] = "Experimental.PaintTiming.NavigationToLargestTextPaint";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLargestTextPaint(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLargestTextPaintNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLargestTextPaint_BeforeUserInputName[] = "Experimental.PaintTiming.NavigationToLargestTextPaint.BeforeUserInput";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLargestTextPaint_BeforeUserInput(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLargestTextPaint_BeforeUserInputNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLastImagePaintName[] = "Experimental.PaintTiming.NavigationToLastImagePaint";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLastImagePaint(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLastImagePaintNameHash, value);
  return *this;
}

const char PageLoad::kExperimental_PaintTiming_NavigationToLastTextPaintName[] = "Experimental.PaintTiming.NavigationToLastTextPaint";

PageLoad& PageLoad::SetExperimental_PaintTiming_NavigationToLastTextPaint(int64_t value) {
  SetMetricInternal(kExperimental_PaintTiming_NavigationToLastTextPaintNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputDelayName[] = "InteractiveTiming.FirstInputDelay";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputDelay(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputDelayNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputDelay_SkipFilteringComparisonName[] = "InteractiveTiming.FirstInputDelay.SkipFilteringComparison";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputDelay_SkipFilteringComparison(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputDelay_SkipFilteringComparisonNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputDelay2Name[] = "InteractiveTiming.FirstInputDelay2";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputDelay2(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputDelay2NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputDelay3Name[] = "InteractiveTiming.FirstInputDelay3";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputDelay3(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputDelay3NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputDelay4Name[] = "InteractiveTiming.FirstInputDelay4";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputDelay4(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputDelay4NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputTimestampName[] = "InteractiveTiming.FirstInputTimestamp";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputTimestamp(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputTimestampNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputTimestamp_SkipFilteringComparisonName[] = "InteractiveTiming.FirstInputTimestamp.SkipFilteringComparison";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputTimestamp_SkipFilteringComparison(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputTimestamp_SkipFilteringComparisonNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputTimestamp2Name[] = "InteractiveTiming.FirstInputTimestamp2";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputTimestamp2(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputTimestamp2NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputTimestamp3Name[] = "InteractiveTiming.FirstInputTimestamp3";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputTimestamp3(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputTimestamp3NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_FirstInputTimestamp4Name[] = "InteractiveTiming.FirstInputTimestamp4";

PageLoad& PageLoad::SetInteractiveTiming_FirstInputTimestamp4(int64_t value) {
  SetMetricInternal(kInteractiveTiming_FirstInputTimestamp4NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_LongestInputDelayName[] = "InteractiveTiming.LongestInputDelay";

PageLoad& PageLoad::SetInteractiveTiming_LongestInputDelay(int64_t value) {
  SetMetricInternal(kInteractiveTiming_LongestInputDelayNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_LongestInputDelay2Name[] = "InteractiveTiming.LongestInputDelay2";

PageLoad& PageLoad::SetInteractiveTiming_LongestInputDelay2(int64_t value) {
  SetMetricInternal(kInteractiveTiming_LongestInputDelay2NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_LongestInputDelay3Name[] = "InteractiveTiming.LongestInputDelay3";

PageLoad& PageLoad::SetInteractiveTiming_LongestInputDelay3(int64_t value) {
  SetMetricInternal(kInteractiveTiming_LongestInputDelay3NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_LongestInputTimestampName[] = "InteractiveTiming.LongestInputTimestamp";

PageLoad& PageLoad::SetInteractiveTiming_LongestInputTimestamp(int64_t value) {
  SetMetricInternal(kInteractiveTiming_LongestInputTimestampNameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_LongestInputTimestamp2Name[] = "InteractiveTiming.LongestInputTimestamp2";

PageLoad& PageLoad::SetInteractiveTiming_LongestInputTimestamp2(int64_t value) {
  SetMetricInternal(kInteractiveTiming_LongestInputTimestamp2NameHash, value);
  return *this;
}

const char PageLoad::kInteractiveTiming_LongestInputTimestamp3Name[] = "InteractiveTiming.LongestInputTimestamp3";

PageLoad& PageLoad::SetInteractiveTiming_LongestInputTimestamp3(int64_t value) {
  SetMetricInternal(kInteractiveTiming_LongestInputTimestamp3NameHash, value);
  return *this;
}

const char PageLoad::kIsCrossProcessNavigationName[] = "IsCrossProcessNavigation";

PageLoad& PageLoad::SetIsCrossProcessNavigation(int64_t value) {
  SetMetricInternal(kIsCrossProcessNavigationNameHash, value);
  return *this;
}

const char PageLoad::kIsSignedExchangeInnerResponseName[] = "IsSignedExchangeInnerResponse";

PageLoad& PageLoad::SetIsSignedExchangeInnerResponse(int64_t value) {
  SetMetricInternal(kIsSignedExchangeInnerResponseNameHash, value);
  return *this;
}

const char PageLoad::kLayoutStability_JankScoreName[] = "LayoutStability.JankScore";

PageLoad& PageLoad::SetLayoutStability_JankScore(int64_t value) {
  SetMetricInternal(kLayoutStability_JankScoreNameHash, value);
  return *this;
}

const char PageLoad::kLayoutStability_JankScore_MainFrameName[] = "LayoutStability.JankScore.MainFrame";

PageLoad& PageLoad::SetLayoutStability_JankScore_MainFrame(int64_t value) {
  SetMetricInternal(kLayoutStability_JankScore_MainFrameNameHash, value);
  return *this;
}

const char PageLoad::kMainDocumentSequenceNumberName[] = "MainDocumentSequenceNumber";

PageLoad& PageLoad::SetMainDocumentSequenceNumber(int64_t value) {
  SetMetricInternal(kMainDocumentSequenceNumberNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_ConnectDelayName[] = "MainFrameResource.ConnectDelay";

PageLoad& PageLoad::SetMainFrameResource_ConnectDelay(int64_t value) {
  SetMetricInternal(kMainFrameResource_ConnectDelayNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_DNSDelayName[] = "MainFrameResource.DNSDelay";

PageLoad& PageLoad::SetMainFrameResource_DNSDelay(int64_t value) {
  SetMetricInternal(kMainFrameResource_DNSDelayNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_HttpProtocolSchemeName[] = "MainFrameResource.HttpProtocolScheme";

PageLoad& PageLoad::SetMainFrameResource_HttpProtocolScheme(int64_t value) {
  SetMetricInternal(kMainFrameResource_HttpProtocolSchemeNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_NavigationStartToRequestStartName[] = "MainFrameResource.NavigationStartToRequestStart";

PageLoad& PageLoad::SetMainFrameResource_NavigationStartToRequestStart(int64_t value) {
  SetMetricInternal(kMainFrameResource_NavigationStartToRequestStartNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_RedirectCountName[] = "MainFrameResource.RedirectCount";

PageLoad& PageLoad::SetMainFrameResource_RedirectCount(int64_t value) {
  SetMetricInternal(kMainFrameResource_RedirectCountNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_RequestStartToReceiveHeadersEndName[] = "MainFrameResource.RequestStartToReceiveHeadersEnd";

PageLoad& PageLoad::SetMainFrameResource_RequestStartToReceiveHeadersEnd(int64_t value) {
  SetMetricInternal(kMainFrameResource_RequestStartToReceiveHeadersEndNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_RequestStartToSendStartName[] = "MainFrameResource.RequestStartToSendStart";

PageLoad& PageLoad::SetMainFrameResource_RequestStartToSendStart(int64_t value) {
  SetMetricInternal(kMainFrameResource_RequestStartToSendStartNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_SendStartToReceiveHeadersEndName[] = "MainFrameResource.SendStartToReceiveHeadersEnd";

PageLoad& PageLoad::SetMainFrameResource_SendStartToReceiveHeadersEnd(int64_t value) {
  SetMetricInternal(kMainFrameResource_SendStartToReceiveHeadersEndNameHash, value);
  return *this;
}

const char PageLoad::kMainFrameResource_SocketReusedName[] = "MainFrameResource.SocketReused";

PageLoad& PageLoad::SetMainFrameResource_SocketReused(int64_t value) {
  SetMetricInternal(kMainFrameResource_SocketReusedNameHash, value);
  return *this;
}

const char PageLoad::kNavigation_PageEndReasonName[] = "Navigation.PageEndReason";

PageLoad& PageLoad::SetNavigation_PageEndReason(int64_t value) {
  SetMetricInternal(kNavigation_PageEndReasonNameHash, value);
  return *this;
}

const char PageLoad::kNavigation_PageTransitionName[] = "Navigation.PageTransition";

PageLoad& PageLoad::SetNavigation_PageTransition(int64_t value) {
  SetMetricInternal(kNavigation_PageTransitionNameHash, value);
  return *this;
}

const char PageLoad::kNavigationEntryOffsetName[] = "NavigationEntryOffset";

PageLoad& PageLoad::SetNavigationEntryOffset(int64_t value) {
  SetMetricInternal(kNavigationEntryOffsetNameHash, value);
  return *this;
}

const char PageLoad::kNet_CacheBytesName[] = "Net.CacheBytes";

PageLoad& PageLoad::SetNet_CacheBytes(int64_t value) {
  SetMetricInternal(kNet_CacheBytesNameHash, value);
  return *this;
}

const char PageLoad::kNet_DownstreamKbpsEstimate_OnNavigationStartName[] = "Net.DownstreamKbpsEstimate.OnNavigationStart";

PageLoad& PageLoad::SetNet_DownstreamKbpsEstimate_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_DownstreamKbpsEstimate_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_EffectiveConnectionType_OnNavigationStartName[] = "Net.EffectiveConnectionType.OnNavigationStart";

PageLoad& PageLoad::SetNet_EffectiveConnectionType_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_EffectiveConnectionType_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_EffectiveConnectionType2_OnNavigationStartName[] = "Net.EffectiveConnectionType2.OnNavigationStart";

PageLoad& PageLoad::SetNet_EffectiveConnectionType2_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_EffectiveConnectionType2_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_ErrorCode_OnFailedProvisionalLoadName[] = "Net.ErrorCode.OnFailedProvisionalLoad";

PageLoad& PageLoad::SetNet_ErrorCode_OnFailedProvisionalLoad(int64_t value) {
  SetMetricInternal(kNet_ErrorCode_OnFailedProvisionalLoadNameHash, value);
  return *this;
}

const char PageLoad::kNet_HttpResponseCodeName[] = "Net.HttpResponseCode";

PageLoad& PageLoad::SetNet_HttpResponseCode(int64_t value) {
  SetMetricInternal(kNet_HttpResponseCodeNameHash, value);
  return *this;
}

const char PageLoad::kNet_HttpRttEstimate_OnNavigationStartName[] = "Net.HttpRttEstimate.OnNavigationStart";

PageLoad& PageLoad::SetNet_HttpRttEstimate_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_HttpRttEstimate_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kNet_NetworkBytesName[] = "Net.NetworkBytes";

PageLoad& PageLoad::SetNet_NetworkBytes(int64_t value) {
  SetMetricInternal(kNet_NetworkBytesNameHash, value);
  return *this;
}

const char PageLoad::kNet_NetworkBytes2Name[] = "Net.NetworkBytes2";

PageLoad& PageLoad::SetNet_NetworkBytes2(int64_t value) {
  SetMetricInternal(kNet_NetworkBytes2NameHash, value);
  return *this;
}

const char PageLoad::kNet_TransportRttEstimate_OnNavigationStartName[] = "Net.TransportRttEstimate.OnNavigationStart";

PageLoad& PageLoad::SetNet_TransportRttEstimate_OnNavigationStart(int64_t value) {
  SetMetricInternal(kNet_TransportRttEstimate_OnNavigationStartNameHash, value);
  return *this;
}

const char PageLoad::kPageTiming_ForegroundDurationName[] = "PageTiming.ForegroundDuration";

PageLoad& PageLoad::SetPageTiming_ForegroundDuration(int64_t value) {
  SetMetricInternal(kPageTiming_ForegroundDurationNameHash, value);
  return *this;
}

const char PageLoad::kPageTiming_NavigationToFailedProvisionalLoadName[] = "PageTiming.NavigationToFailedProvisionalLoad";

PageLoad& PageLoad::SetPageTiming_NavigationToFailedProvisionalLoad(int64_t value) {
  SetMetricInternal(kPageTiming_NavigationToFailedProvisionalLoadNameHash, value);
  return *this;
}

const char PageLoad::kPaintTiming_NavigationToFirstContentfulPaintName[] = "PaintTiming.NavigationToFirstContentfulPaint";

PageLoad& PageLoad::SetPaintTiming_NavigationToFirstContentfulPaint(int64_t value) {
  SetMetricInternal(kPaintTiming_NavigationToFirstContentfulPaintNameHash, value);
  return *this;
}

const char PageLoad::kPaintTiming_NavigationToFirstPaintName[] = "PaintTiming.NavigationToFirstPaint";

PageLoad& PageLoad::SetPaintTiming_NavigationToFirstPaint(int64_t value) {
  SetMetricInternal(kPaintTiming_NavigationToFirstPaintNameHash, value);
  return *this;
}

const char PageLoad::kParseTiming_NavigationToParseStartName[] = "ParseTiming.NavigationToParseStart";

PageLoad& PageLoad::SetParseTiming_NavigationToParseStart(int64_t value) {
  SetMetricInternal(kParseTiming_NavigationToParseStartNameHash, value);
  return *this;
}

const char PageLoad::kSiteEngagementScoreName[] = "SiteEngagementScore";

PageLoad& PageLoad::SetSiteEngagementScore(int64_t value) {
  SetMetricInternal(kSiteEngagementScoreNameHash, value);
  return *this;
}

const char PageLoad::kWasCachedName[] = "WasCached";

PageLoad& PageLoad::SetWasCached(int64_t value) {
  SetMetricInternal(kWasCachedNameHash, value);
  return *this;
}


const char PageLoad_FromGoogleSearch::kEntryName[] = "PageLoad.FromGoogleSearch";

PageLoad_FromGoogleSearch::PageLoad_FromGoogleSearch(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad_FromGoogleSearch::PageLoad_FromGoogleSearch(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad_FromGoogleSearch::~PageLoad_FromGoogleSearch() = default;



const char PageLoad_ServiceWorkerControlled::kEntryName[] = "PageLoad.ServiceWorkerControlled";

PageLoad_ServiceWorkerControlled::PageLoad_ServiceWorkerControlled(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad_ServiceWorkerControlled::PageLoad_ServiceWorkerControlled(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoad_ServiceWorkerControlled::~PageLoad_ServiceWorkerControlled() = default;



const char PageLoadCapping::kEntryName[] = "PageLoadCapping";

PageLoadCapping::PageLoadCapping(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoadCapping::PageLoadCapping(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageLoadCapping::~PageLoadCapping() = default;


const char PageLoadCapping::kFinalStateName[] = "FinalState";

PageLoadCapping& PageLoadCapping::SetFinalState(int64_t value) {
  SetMetricInternal(kFinalStateNameHash, value);
  return *this;
}


const char PageWithPassword::kEntryName[] = "PageWithPassword";

PageWithPassword::PageWithPassword(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageWithPassword::PageWithPassword(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PageWithPassword::~PageWithPassword() = default;


const char PageWithPassword::kFormManagerAvailableName[] = "FormManagerAvailable";

PageWithPassword& PageWithPassword::SetFormManagerAvailable(int64_t value) {
  SetMetricInternal(kFormManagerAvailableNameHash, value);
  return *this;
}

const char PageWithPassword::kPageLevelUserActionName[] = "PageLevelUserAction";

PageWithPassword& PageWithPassword::SetPageLevelUserAction(int64_t value) {
  SetMetricInternal(kPageLevelUserActionNameHash, value);
  return *this;
}

const char PageWithPassword::kProvisionalSaveFailureName[] = "ProvisionalSaveFailure";

PageWithPassword& PageWithPassword::SetProvisionalSaveFailure(int64_t value) {
  SetMetricInternal(kProvisionalSaveFailureNameHash, value);
  return *this;
}

const char PageWithPassword::kUserModifiedPasswordFieldName[] = "UserModifiedPasswordField";

PageWithPassword& PageWithPassword::SetUserModifiedPasswordField(int64_t value) {
  SetMetricInternal(kUserModifiedPasswordFieldNameHash, value);
  return *this;
}


const char PasswordForm::kEntryName[] = "PasswordForm";

PasswordForm::PasswordForm(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PasswordForm::PasswordForm(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PasswordForm::~PasswordForm() = default;


const char PasswordForm::kContext_FormSignatureName[] = "Context.FormSignature";

PasswordForm& PasswordForm::SetContext_FormSignature(int64_t value) {
  SetMetricInternal(kContext_FormSignatureNameHash, value);
  return *this;
}

const char PasswordForm::kDynamicFormChangesName[] = "DynamicFormChanges";

PasswordForm& PasswordForm::SetDynamicFormChanges(int64_t value) {
  SetMetricInternal(kDynamicFormChangesNameHash, value);
  return *this;
}

const char PasswordForm::kFill_FirstFillingResultInRendererName[] = "Fill.FirstFillingResultInRenderer";

PasswordForm& PasswordForm::SetFill_FirstFillingResultInRenderer(int64_t value) {
  SetMetricInternal(kFill_FirstFillingResultInRendererNameHash, value);
  return *this;
}

const char PasswordForm::kFill_FirstWaitForUsernameReasonName[] = "Fill.FirstWaitForUsernameReason";

PasswordForm& PasswordForm::SetFill_FirstWaitForUsernameReason(int64_t value) {
  SetMetricInternal(kFill_FirstWaitForUsernameReasonNameHash, value);
  return *this;
}

const char PasswordForm::kFillOnLoadName[] = "FillOnLoad";

PasswordForm& PasswordForm::SetFillOnLoad(int64_t value) {
  SetMetricInternal(kFillOnLoadNameHash, value);
  return *this;
}

const char PasswordForm::kGeneration_GeneratedPasswordName[] = "Generation.GeneratedPassword";

PasswordForm& PasswordForm::SetGeneration_GeneratedPassword(int64_t value) {
  SetMetricInternal(kGeneration_GeneratedPasswordNameHash, value);
  return *this;
}

const char PasswordForm::kGeneration_GeneratedPasswordModifiedName[] = "Generation.GeneratedPasswordModified";

PasswordForm& PasswordForm::SetGeneration_GeneratedPasswordModified(int64_t value) {
  SetMetricInternal(kGeneration_GeneratedPasswordModifiedNameHash, value);
  return *this;
}

const char PasswordForm::kGeneration_PopupShownName[] = "Generation.PopupShown";

PasswordForm& PasswordForm::SetGeneration_PopupShown(int64_t value) {
  SetMetricInternal(kGeneration_PopupShownNameHash, value);
  return *this;
}

const char PasswordForm::kGeneration_SpecPriorityName[] = "Generation.SpecPriority";

PasswordForm& PasswordForm::SetGeneration_SpecPriority(int64_t value) {
  SetMetricInternal(kGeneration_SpecPriorityNameHash, value);
  return *this;
}

const char PasswordForm::kManagerFill_ActionName[] = "ManagerFill.Action";

PasswordForm& PasswordForm::SetManagerFill_Action(int64_t value) {
  SetMetricInternal(kManagerFill_ActionNameHash, value);
  return *this;
}

const char PasswordForm::kManagerFill_AssistanceName[] = "ManagerFill.Assistance";

PasswordForm& PasswordForm::SetManagerFill_Assistance(int64_t value) {
  SetMetricInternal(kManagerFill_AssistanceNameHash, value);
  return *this;
}

const char PasswordForm::kParsingComparisonName[] = "ParsingComparison";

PasswordForm& PasswordForm::SetParsingComparison(int64_t value) {
  SetMetricInternal(kParsingComparisonNameHash, value);
  return *this;
}

const char PasswordForm::kParsingOnSavingDifferenceName[] = "ParsingOnSavingDifference";

PasswordForm& PasswordForm::SetParsingOnSavingDifference(int64_t value) {
  SetMetricInternal(kParsingOnSavingDifferenceNameHash, value);
  return *this;
}

const char PasswordForm::kReadonlyWhenFillingName[] = "ReadonlyWhenFilling";

PasswordForm& PasswordForm::SetReadonlyWhenFilling(int64_t value) {
  SetMetricInternal(kReadonlyWhenFillingNameHash, value);
  return *this;
}

const char PasswordForm::kReadonlyWhenSavingName[] = "ReadonlyWhenSaving";

PasswordForm& PasswordForm::SetReadonlyWhenSaving(int64_t value) {
  SetMetricInternal(kReadonlyWhenSavingNameHash, value);
  return *this;
}

const char PasswordForm::kSaving_Prompt_InteractionName[] = "Saving.Prompt.Interaction";

PasswordForm& PasswordForm::SetSaving_Prompt_Interaction(int64_t value) {
  SetMetricInternal(kSaving_Prompt_InteractionNameHash, value);
  return *this;
}

const char PasswordForm::kSaving_Prompt_ShownName[] = "Saving.Prompt.Shown";

PasswordForm& PasswordForm::SetSaving_Prompt_Shown(int64_t value) {
  SetMetricInternal(kSaving_Prompt_ShownNameHash, value);
  return *this;
}

const char PasswordForm::kSaving_Prompt_TriggerName[] = "Saving.Prompt.Trigger";

PasswordForm& PasswordForm::SetSaving_Prompt_Trigger(int64_t value) {
  SetMetricInternal(kSaving_Prompt_TriggerNameHash, value);
  return *this;
}

const char PasswordForm::kSaving_ShowedManualFallbackForSavingName[] = "Saving.ShowedManualFallbackForSaving";

PasswordForm& PasswordForm::SetSaving_ShowedManualFallbackForSaving(int64_t value) {
  SetMetricInternal(kSaving_ShowedManualFallbackForSavingNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_IndicatorName[] = "Submission.Indicator";

PasswordForm& PasswordForm::SetSubmission_Indicator(int64_t value) {
  SetMetricInternal(kSubmission_IndicatorNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_ObservedName[] = "Submission.Observed";

PasswordForm& PasswordForm::SetSubmission_Observed(int64_t value) {
  SetMetricInternal(kSubmission_ObservedNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_SubmissionResultName[] = "Submission.SubmissionResult";

PasswordForm& PasswordForm::SetSubmission_SubmissionResult(int64_t value) {
  SetMetricInternal(kSubmission_SubmissionResultNameHash, value);
  return *this;
}

const char PasswordForm::kSubmission_SubmittedFormTypeName[] = "Submission.SubmittedFormType";

PasswordForm& PasswordForm::SetSubmission_SubmittedFormType(int64_t value) {
  SetMetricInternal(kSubmission_SubmittedFormTypeNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Generated_HTTPSNotHTTPName[] = "SuppressedAccount.Generated.HTTPSNotHTTP";

PasswordForm& PasswordForm::SetSuppressedAccount_Generated_HTTPSNotHTTP(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Generated_HTTPSNotHTTPNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Generated_PSLMatchingName[] = "SuppressedAccount.Generated.PSLMatching";

PasswordForm& PasswordForm::SetSuppressedAccount_Generated_PSLMatching(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Generated_PSLMatchingNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Generated_SameOrganizationNameName[] = "SuppressedAccount.Generated.SameOrganizationName";

PasswordForm& PasswordForm::SetSuppressedAccount_Generated_SameOrganizationName(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Generated_SameOrganizationNameNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Manual_HTTPSNotHTTPName[] = "SuppressedAccount.Manual.HTTPSNotHTTP";

PasswordForm& PasswordForm::SetSuppressedAccount_Manual_HTTPSNotHTTP(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Manual_HTTPSNotHTTPNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Manual_PSLMatchingName[] = "SuppressedAccount.Manual.PSLMatching";

PasswordForm& PasswordForm::SetSuppressedAccount_Manual_PSLMatching(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Manual_PSLMatchingNameHash, value);
  return *this;
}

const char PasswordForm::kSuppressedAccount_Manual_SameOrganizationNameName[] = "SuppressedAccount.Manual.SameOrganizationName";

PasswordForm& PasswordForm::SetSuppressedAccount_Manual_SameOrganizationName(int64_t value) {
  SetMetricInternal(kSuppressedAccount_Manual_SameOrganizationNameNameHash, value);
  return *this;
}

const char PasswordForm::kUpdating_Prompt_InteractionName[] = "Updating.Prompt.Interaction";

PasswordForm& PasswordForm::SetUpdating_Prompt_Interaction(int64_t value) {
  SetMetricInternal(kUpdating_Prompt_InteractionNameHash, value);
  return *this;
}

const char PasswordForm::kUpdating_Prompt_ShownName[] = "Updating.Prompt.Shown";

PasswordForm& PasswordForm::SetUpdating_Prompt_Shown(int64_t value) {
  SetMetricInternal(kUpdating_Prompt_ShownNameHash, value);
  return *this;
}

const char PasswordForm::kUpdating_Prompt_TriggerName[] = "Updating.Prompt.Trigger";

PasswordForm& PasswordForm::SetUpdating_Prompt_Trigger(int64_t value) {
  SetMetricInternal(kUpdating_Prompt_TriggerNameHash, value);
  return *this;
}

const char PasswordForm::kUser_ActionName[] = "User.Action";

PasswordForm& PasswordForm::SetUser_Action(int64_t value) {
  SetMetricInternal(kUser_ActionNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_CorrectedUsernameInFormName[] = "User.Action.CorrectedUsernameInForm";

PasswordForm& PasswordForm::SetUser_Action_CorrectedUsernameInForm(int64_t value) {
  SetMetricInternal(kUser_Action_CorrectedUsernameInFormNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_EditedUsernameInBubbleName[] = "User.Action.EditedUsernameInBubble";

PasswordForm& PasswordForm::SetUser_Action_EditedUsernameInBubble(int64_t value) {
  SetMetricInternal(kUser_Action_EditedUsernameInBubbleNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_SelectedDifferentPasswordInBubbleName[] = "User.Action.SelectedDifferentPasswordInBubble";

PasswordForm& PasswordForm::SetUser_Action_SelectedDifferentPasswordInBubble(int64_t value) {
  SetMetricInternal(kUser_Action_SelectedDifferentPasswordInBubbleNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_TriggeredManualFallbackForSavingName[] = "User.Action.TriggeredManualFallbackForSaving";

PasswordForm& PasswordForm::SetUser_Action_TriggeredManualFallbackForSaving(int64_t value) {
  SetMetricInternal(kUser_Action_TriggeredManualFallbackForSavingNameHash, value);
  return *this;
}

const char PasswordForm::kUser_Action_TriggeredManualFallbackForUpdatingName[] = "User.Action.TriggeredManualFallbackForUpdating";

PasswordForm& PasswordForm::SetUser_Action_TriggeredManualFallbackForUpdating(int64_t value) {
  SetMetricInternal(kUser_Action_TriggeredManualFallbackForUpdatingNameHash, value);
  return *this;
}

const char PasswordForm::kUser_ActionSimplifiedName[] = "User.ActionSimplified";

PasswordForm& PasswordForm::SetUser_ActionSimplified(int64_t value) {
  SetMetricInternal(kUser_ActionSimplifiedNameHash, value);
  return *this;
}


const char PaymentRequest_CheckoutEvents::kEntryName[] = "PaymentRequest.CheckoutEvents";

PaymentRequest_CheckoutEvents::PaymentRequest_CheckoutEvents(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PaymentRequest_CheckoutEvents::PaymentRequest_CheckoutEvents(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PaymentRequest_CheckoutEvents::~PaymentRequest_CheckoutEvents() = default;


const char PaymentRequest_CheckoutEvents::kCompletionStatusName[] = "CompletionStatus";

PaymentRequest_CheckoutEvents& PaymentRequest_CheckoutEvents::SetCompletionStatus(int64_t value) {
  SetMetricInternal(kCompletionStatusNameHash, value);
  return *this;
}

const char PaymentRequest_CheckoutEvents::kEventsName[] = "Events";

PaymentRequest_CheckoutEvents& PaymentRequest_CheckoutEvents::SetEvents(int64_t value) {
  SetMetricInternal(kEventsNameHash, value);
  return *this;
}


const char Pepper_Broker::kEntryName[] = "Pepper.Broker";

Pepper_Broker::Pepper_Broker(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Pepper_Broker::Pepper_Broker(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Pepper_Broker::~Pepper_Broker() = default;



const char Permission::kEntryName[] = "Permission";

Permission::Permission(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Permission::Permission(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Permission::~Permission() = default;


const char Permission::kActionName[] = "Action";

Permission& Permission::SetAction(int64_t value) {
  SetMetricInternal(kActionNameHash, value);
  return *this;
}

const char Permission::kGestureName[] = "Gesture";

Permission& Permission::SetGesture(int64_t value) {
  SetMetricInternal(kGestureNameHash, value);
  return *this;
}

const char Permission::kPermissionTypeName[] = "PermissionType";

Permission& Permission::SetPermissionType(int64_t value) {
  SetMetricInternal(kPermissionTypeNameHash, value);
  return *this;
}

const char Permission::kPriorDismissalsName[] = "PriorDismissals";

Permission& Permission::SetPriorDismissals(int64_t value) {
  SetMetricInternal(kPriorDismissalsNameHash, value);
  return *this;
}

const char Permission::kPriorIgnoresName[] = "PriorIgnores";

Permission& Permission::SetPriorIgnores(int64_t value) {
  SetMetricInternal(kPriorIgnoresNameHash, value);
  return *this;
}

const char Permission::kSourceName[] = "Source";

Permission& Permission::SetSource(int64_t value) {
  SetMetricInternal(kSourceNameHash, value);
  return *this;
}


const char Plugins_FlashInstance::kEntryName[] = "Plugins.FlashInstance";

Plugins_FlashInstance::Plugins_FlashInstance(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Plugins_FlashInstance::Plugins_FlashInstance(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Plugins_FlashInstance::~Plugins_FlashInstance() = default;



const char Popup_Closed::kEntryName[] = "Popup.Closed";

Popup_Closed::Popup_Closed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Popup_Closed::Popup_Closed(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Popup_Closed::~Popup_Closed() = default;


const char Popup_Closed::kEngagementTimeName[] = "EngagementTime";

Popup_Closed& Popup_Closed::SetEngagementTime(int64_t value) {
  SetMetricInternal(kEngagementTimeNameHash, value);
  return *this;
}

const char Popup_Closed::kNumInteractionsName[] = "NumInteractions";

Popup_Closed& Popup_Closed::SetNumInteractions(int64_t value) {
  SetMetricInternal(kNumInteractionsNameHash, value);
  return *this;
}

const char Popup_Closed::kTrustedName[] = "Trusted";

Popup_Closed& Popup_Closed::SetTrusted(int64_t value) {
  SetMetricInternal(kTrustedNameHash, value);
  return *this;
}

const char Popup_Closed::kUserInitiatedCloseName[] = "UserInitiatedClose";

Popup_Closed& Popup_Closed::SetUserInitiatedClose(int64_t value) {
  SetMetricInternal(kUserInitiatedCloseNameHash, value);
  return *this;
}


const char Previews::kEntryName[] = "Previews";

Previews::Previews(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Previews::Previews(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Previews::~Previews() = default;


const char Previews::kclient_lofiName[] = "client_lofi";

Previews& Previews::Setclient_lofi(int64_t value) {
  SetMetricInternal(kclient_lofiNameHash, value);
  return *this;
}

const char Previews::kcoin_flip_resultName[] = "coin_flip_result";

Previews& Previews::Setcoin_flip_result(int64_t value) {
  SetMetricInternal(kcoin_flip_resultNameHash, value);
  return *this;
}

const char Previews::klite_pageName[] = "lite_page";

Previews& Previews::Setlite_page(int64_t value) {
  SetMetricInternal(klite_pageNameHash, value);
  return *this;
}

const char Previews::klite_page_redirectName[] = "lite_page_redirect";

Previews& Previews::Setlite_page_redirect(int64_t value) {
  SetMetricInternal(klite_page_redirectNameHash, value);
  return *this;
}

const char Previews::klite_page_redirect_eligibility_reasonName[] = "lite_page_redirect_eligibility_reason";

Previews& Previews::Setlite_page_redirect_eligibility_reason(int64_t value) {
  SetMetricInternal(klite_page_redirect_eligibility_reasonNameHash, value);
  return *this;
}

const char Previews::knavigation_restart_penaltyName[] = "navigation_restart_penalty";

Previews& Previews::Setnavigation_restart_penalty(int64_t value) {
  SetMetricInternal(knavigation_restart_penaltyNameHash, value);
  return *this;
}

const char Previews::knoscriptName[] = "noscript";

Previews& Previews::Setnoscript(int64_t value) {
  SetMetricInternal(knoscriptNameHash, value);
  return *this;
}

const char Previews::knoscript_eligibility_reasonName[] = "noscript_eligibility_reason";

Previews& Previews::Setnoscript_eligibility_reason(int64_t value) {
  SetMetricInternal(knoscript_eligibility_reasonNameHash, value);
  return *this;
}

const char Previews::koffline_eligibility_reasonName[] = "offline_eligibility_reason";

Previews& Previews::Setoffline_eligibility_reason(int64_t value) {
  SetMetricInternal(koffline_eligibility_reasonNameHash, value);
  return *this;
}

const char Previews::koffline_previewName[] = "offline_preview";

Previews& Previews::Setoffline_preview(int64_t value) {
  SetMetricInternal(koffline_previewNameHash, value);
  return *this;
}

const char Previews::kopt_outName[] = "opt_out";

Previews& Previews::Setopt_out(int64_t value) {
  SetMetricInternal(kopt_outNameHash, value);
  return *this;
}

const char Previews::korigin_opt_outName[] = "origin_opt_out";

Previews& Previews::Setorigin_opt_out(int64_t value) {
  SetMetricInternal(korigin_opt_outNameHash, value);
  return *this;
}

const char Previews::kpreviews_likelyName[] = "previews_likely";

Previews& Previews::Setpreviews_likely(int64_t value) {
  SetMetricInternal(kpreviews_likelyNameHash, value);
  return *this;
}

const char Previews::kproxy_lite_page_eligibility_reasonName[] = "proxy_lite_page_eligibility_reason";

Previews& Previews::Setproxy_lite_page_eligibility_reason(int64_t value) {
  SetMetricInternal(kproxy_lite_page_eligibility_reasonNameHash, value);
  return *this;
}

const char Previews::kresource_loading_hintsName[] = "resource_loading_hints";

Previews& Previews::Setresource_loading_hints(int64_t value) {
  SetMetricInternal(kresource_loading_hintsNameHash, value);
  return *this;
}

const char Previews::kresource_loading_hints_eligibility_reasonName[] = "resource_loading_hints_eligibility_reason";

Previews& Previews::Setresource_loading_hints_eligibility_reason(int64_t value) {
  SetMetricInternal(kresource_loading_hints_eligibility_reasonNameHash, value);
  return *this;
}

const char Previews::ksave_data_enabledName[] = "save_data_enabled";

Previews& Previews::Setsave_data_enabled(int64_t value) {
  SetMetricInternal(ksave_data_enabledNameHash, value);
  return *this;
}

const char Previews::kserver_lofiName[] = "server_lofi";

Previews& Previews::Setserver_lofi(int64_t value) {
  SetMetricInternal(kserver_lofiNameHash, value);
  return *this;
}


const char PreviewsResourceLoadingHints::kEntryName[] = "PreviewsResourceLoadingHints";

PreviewsResourceLoadingHints::PreviewsResourceLoadingHints(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PreviewsResourceLoadingHints::PreviewsResourceLoadingHints(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

PreviewsResourceLoadingHints::~PreviewsResourceLoadingHints() = default;


const char PreviewsResourceLoadingHints::kblocked_high_priorityName[] = "blocked_high_priority";

PreviewsResourceLoadingHints& PreviewsResourceLoadingHints::Setblocked_high_priority(int64_t value) {
  SetMetricInternal(kblocked_high_priorityNameHash, value);
  return *this;
}

const char PreviewsResourceLoadingHints::kblocked_low_priorityName[] = "blocked_low_priority";

PreviewsResourceLoadingHints& PreviewsResourceLoadingHints::Setblocked_low_priority(int64_t value) {
  SetMetricInternal(kblocked_low_priorityNameHash, value);
  return *this;
}

const char PreviewsResourceLoadingHints::kblocked_medium_priorityName[] = "blocked_medium_priority";

PreviewsResourceLoadingHints& PreviewsResourceLoadingHints::Setblocked_medium_priority(int64_t value) {
  SetMetricInternal(kblocked_medium_priorityNameHash, value);
  return *this;
}

const char PreviewsResourceLoadingHints::kblocked_very_high_priorityName[] = "blocked_very_high_priority";

PreviewsResourceLoadingHints& PreviewsResourceLoadingHints::Setblocked_very_high_priority(int64_t value) {
  SetMetricInternal(kblocked_very_high_priorityNameHash, value);
  return *this;
}

const char PreviewsResourceLoadingHints::kblocked_very_low_priorityName[] = "blocked_very_low_priority";

PreviewsResourceLoadingHints& PreviewsResourceLoadingHints::Setblocked_very_low_priority(int64_t value) {
  SetMetricInternal(kblocked_very_low_priorityNameHash, value);
  return *this;
}

const char PreviewsResourceLoadingHints::kpatterns_to_block_totalName[] = "patterns_to_block_total";

PreviewsResourceLoadingHints& PreviewsResourceLoadingHints::Setpatterns_to_block_total(int64_t value) {
  SetMetricInternal(kpatterns_to_block_totalNameHash, value);
  return *this;
}

const char PreviewsResourceLoadingHints::kpatterns_to_block_usedName[] = "patterns_to_block_used";

PreviewsResourceLoadingHints& PreviewsResourceLoadingHints::Setpatterns_to_block_used(int64_t value) {
  SetMetricInternal(kpatterns_to_block_usedNameHash, value);
  return *this;
}


const char RendererSchedulerTask::kEntryName[] = "RendererSchedulerTask";

RendererSchedulerTask::RendererSchedulerTask(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

RendererSchedulerTask::RendererSchedulerTask(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

RendererSchedulerTask::~RendererSchedulerTask() = default;


const char RendererSchedulerTask::kFrameStatusName[] = "FrameStatus";

RendererSchedulerTask& RendererSchedulerTask::SetFrameStatus(int64_t value) {
  SetMetricInternal(kFrameStatusNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kIsOOPIFName[] = "IsOOPIF";

RendererSchedulerTask& RendererSchedulerTask::SetIsOOPIF(int64_t value) {
  SetMetricInternal(kIsOOPIFNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kPageSchedulersName[] = "PageSchedulers";

RendererSchedulerTask& RendererSchedulerTask::SetPageSchedulers(int64_t value) {
  SetMetricInternal(kPageSchedulersNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kQueueTypeName[] = "QueueType";

RendererSchedulerTask& RendererSchedulerTask::SetQueueType(int64_t value) {
  SetMetricInternal(kQueueTypeNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kRendererAudibleName[] = "RendererAudible";

RendererSchedulerTask& RendererSchedulerTask::SetRendererAudible(int64_t value) {
  SetMetricInternal(kRendererAudibleNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kRendererBackgroundedName[] = "RendererBackgrounded";

RendererSchedulerTask& RendererSchedulerTask::SetRendererBackgrounded(int64_t value) {
  SetMetricInternal(kRendererBackgroundedNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kRendererHiddenName[] = "RendererHidden";

RendererSchedulerTask& RendererSchedulerTask::SetRendererHidden(int64_t value) {
  SetMetricInternal(kRendererHiddenNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kSecondsSinceBackgroundedName[] = "SecondsSinceBackgrounded";

RendererSchedulerTask& RendererSchedulerTask::SetSecondsSinceBackgrounded(int64_t value) {
  SetMetricInternal(kSecondsSinceBackgroundedNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kTaskCPUDurationName[] = "TaskCPUDuration";

RendererSchedulerTask& RendererSchedulerTask::SetTaskCPUDuration(int64_t value) {
  SetMetricInternal(kTaskCPUDurationNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kTaskDurationName[] = "TaskDuration";

RendererSchedulerTask& RendererSchedulerTask::SetTaskDuration(int64_t value) {
  SetMetricInternal(kTaskDurationNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kTaskTypeName[] = "TaskType";

RendererSchedulerTask& RendererSchedulerTask::SetTaskType(int64_t value) {
  SetMetricInternal(kTaskTypeNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kThreadTypeName[] = "ThreadType";

RendererSchedulerTask& RendererSchedulerTask::SetThreadType(int64_t value) {
  SetMetricInternal(kThreadTypeNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kUseCaseName[] = "UseCase";

RendererSchedulerTask& RendererSchedulerTask::SetUseCase(int64_t value) {
  SetMetricInternal(kUseCaseNameHash, value);
  return *this;
}

const char RendererSchedulerTask::kVersionName[] = "Version";

RendererSchedulerTask& RendererSchedulerTask::SetVersion(int64_t value) {
  SetMetricInternal(kVersionNameHash, value);
  return *this;
}


const char ResponsivenessMeasurement::kEntryName[] = "ResponsivenessMeasurement";

ResponsivenessMeasurement::ResponsivenessMeasurement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ResponsivenessMeasurement::ResponsivenessMeasurement(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ResponsivenessMeasurement::~ResponsivenessMeasurement() = default;


const char ResponsivenessMeasurement::kExpectedTaskQueueingDurationName[] = "ExpectedTaskQueueingDuration";

ResponsivenessMeasurement& ResponsivenessMeasurement::SetExpectedTaskQueueingDuration(int64_t value) {
  SetMetricInternal(kExpectedTaskQueueingDurationNameHash, value);
  return *this;
}


const char ScreenBrightness::kEntryName[] = "ScreenBrightness";

ScreenBrightness::ScreenBrightness(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ScreenBrightness::ScreenBrightness(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

ScreenBrightness::~ScreenBrightness() = default;


const char ScreenBrightness::kBatteryPercentName[] = "BatteryPercent";

ScreenBrightness& ScreenBrightness::SetBatteryPercent(int64_t value) {
  SetMetricInternal(kBatteryPercentNameHash, value);
  return *this;
}

const char ScreenBrightness::kBrightnessName[] = "Brightness";

ScreenBrightness& ScreenBrightness::SetBrightness(int64_t value) {
  SetMetricInternal(kBrightnessNameHash, value);
  return *this;
}

const char ScreenBrightness::kDayOfWeekName[] = "DayOfWeek";

ScreenBrightness& ScreenBrightness::SetDayOfWeek(int64_t value) {
  SetMetricInternal(kDayOfWeekNameHash, value);
  return *this;
}

const char ScreenBrightness::kDeviceModeName[] = "DeviceMode";

ScreenBrightness& ScreenBrightness::SetDeviceMode(int64_t value) {
  SetMetricInternal(kDeviceModeNameHash, value);
  return *this;
}

const char ScreenBrightness::kHourOfDayName[] = "HourOfDay";

ScreenBrightness& ScreenBrightness::SetHourOfDay(int64_t value) {
  SetMetricInternal(kHourOfDayNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsAutoclickEnabledName[] = "IsAutoclickEnabled";

ScreenBrightness& ScreenBrightness::SetIsAutoclickEnabled(int64_t value) {
  SetMetricInternal(kIsAutoclickEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsBrailleDisplayConnectedName[] = "IsBrailleDisplayConnected";

ScreenBrightness& ScreenBrightness::SetIsBrailleDisplayConnected(int64_t value) {
  SetMetricInternal(kIsBrailleDisplayConnectedNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsCaretHighlightEnabledName[] = "IsCaretHighlightEnabled";

ScreenBrightness& ScreenBrightness::SetIsCaretHighlightEnabled(int64_t value) {
  SetMetricInternal(kIsCaretHighlightEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsCursorHighlightEnabledName[] = "IsCursorHighlightEnabled";

ScreenBrightness& ScreenBrightness::SetIsCursorHighlightEnabled(int64_t value) {
  SetMetricInternal(kIsCursorHighlightEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsFocusHighlightEnabledName[] = "IsFocusHighlightEnabled";

ScreenBrightness& ScreenBrightness::SetIsFocusHighlightEnabled(int64_t value) {
  SetMetricInternal(kIsFocusHighlightEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsHighContrastEnabledName[] = "IsHighContrastEnabled";

ScreenBrightness& ScreenBrightness::SetIsHighContrastEnabled(int64_t value) {
  SetMetricInternal(kIsHighContrastEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsLargeCursorEnabledName[] = "IsLargeCursorEnabled";

ScreenBrightness& ScreenBrightness::SetIsLargeCursorEnabled(int64_t value) {
  SetMetricInternal(kIsLargeCursorEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsMagnifierEnabledName[] = "IsMagnifierEnabled";

ScreenBrightness& ScreenBrightness::SetIsMagnifierEnabled(int64_t value) {
  SetMetricInternal(kIsMagnifierEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsMonoAudioEnabledName[] = "IsMonoAudioEnabled";

ScreenBrightness& ScreenBrightness::SetIsMonoAudioEnabled(int64_t value) {
  SetMetricInternal(kIsMonoAudioEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsSelectToSpeakEnabledName[] = "IsSelectToSpeakEnabled";

ScreenBrightness& ScreenBrightness::SetIsSelectToSpeakEnabled(int64_t value) {
  SetMetricInternal(kIsSelectToSpeakEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsSpokenFeedbackEnabledName[] = "IsSpokenFeedbackEnabled";

ScreenBrightness& ScreenBrightness::SetIsSpokenFeedbackEnabled(int64_t value) {
  SetMetricInternal(kIsSpokenFeedbackEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsSwitchAccessEnabledName[] = "IsSwitchAccessEnabled";

ScreenBrightness& ScreenBrightness::SetIsSwitchAccessEnabled(int64_t value) {
  SetMetricInternal(kIsSwitchAccessEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsVideoPlayingName[] = "IsVideoPlaying";

ScreenBrightness& ScreenBrightness::SetIsVideoPlaying(int64_t value) {
  SetMetricInternal(kIsVideoPlayingNameHash, value);
  return *this;
}

const char ScreenBrightness::kIsVirtualKeyboardEnabledName[] = "IsVirtualKeyboardEnabled";

ScreenBrightness& ScreenBrightness::SetIsVirtualKeyboardEnabled(int64_t value) {
  SetMetricInternal(kIsVirtualKeyboardEnabledNameHash, value);
  return *this;
}

const char ScreenBrightness::kLastActivityTimeSecName[] = "LastActivityTimeSec";

ScreenBrightness& ScreenBrightness::SetLastActivityTimeSec(int64_t value) {
  SetMetricInternal(kLastActivityTimeSecNameHash, value);
  return *this;
}

const char ScreenBrightness::kNightLightTemperaturePercentName[] = "NightLightTemperaturePercent";

ScreenBrightness& ScreenBrightness::SetNightLightTemperaturePercent(int64_t value) {
  SetMetricInternal(kNightLightTemperaturePercentNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentKeyEventsName[] = "NumRecentKeyEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentKeyEvents(int64_t value) {
  SetMetricInternal(kNumRecentKeyEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentMouseEventsName[] = "NumRecentMouseEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentMouseEvents(int64_t value) {
  SetMetricInternal(kNumRecentMouseEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentStylusEventsName[] = "NumRecentStylusEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentStylusEvents(int64_t value) {
  SetMetricInternal(kNumRecentStylusEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kNumRecentTouchEventsName[] = "NumRecentTouchEvents";

ScreenBrightness& ScreenBrightness::SetNumRecentTouchEvents(int64_t value) {
  SetMetricInternal(kNumRecentTouchEventsNameHash, value);
  return *this;
}

const char ScreenBrightness::kOnBatteryName[] = "OnBattery";

ScreenBrightness& ScreenBrightness::SetOnBattery(int64_t value) {
  SetMetricInternal(kOnBatteryNameHash, value);
  return *this;
}

const char ScreenBrightness::kPreviousBrightnessName[] = "PreviousBrightness";

ScreenBrightness& ScreenBrightness::SetPreviousBrightness(int64_t value) {
  SetMetricInternal(kPreviousBrightnessNameHash, value);
  return *this;
}

const char ScreenBrightness::kReasonName[] = "Reason";

ScreenBrightness& ScreenBrightness::SetReason(int64_t value) {
  SetMetricInternal(kReasonNameHash, value);
  return *this;
}

const char ScreenBrightness::kRecentTimeActiveSecName[] = "RecentTimeActiveSec";

ScreenBrightness& ScreenBrightness::SetRecentTimeActiveSec(int64_t value) {
  SetMetricInternal(kRecentTimeActiveSecNameHash, value);
  return *this;
}

const char ScreenBrightness::kSequenceIdName[] = "SequenceId";

ScreenBrightness& ScreenBrightness::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char ScreenBrightness::kTimeSinceLastEventSecName[] = "TimeSinceLastEventSec";

ScreenBrightness& ScreenBrightness::SetTimeSinceLastEventSec(int64_t value) {
  SetMetricInternal(kTimeSinceLastEventSecNameHash, value);
  return *this;
}


const char Security_SiteEngagement::kEntryName[] = "Security.SiteEngagement";

Security_SiteEngagement::Security_SiteEngagement(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Security_SiteEngagement::Security_SiteEngagement(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Security_SiteEngagement::~Security_SiteEngagement() = default;


const char Security_SiteEngagement::kFinalSecurityLevelName[] = "FinalSecurityLevel";

Security_SiteEngagement& Security_SiteEngagement::SetFinalSecurityLevel(int64_t value) {
  SetMetricInternal(kFinalSecurityLevelNameHash, value);
  return *this;
}

const char Security_SiteEngagement::kInitialSecurityLevelName[] = "InitialSecurityLevel";

Security_SiteEngagement& Security_SiteEngagement::SetInitialSecurityLevel(int64_t value) {
  SetMetricInternal(kInitialSecurityLevelNameHash, value);
  return *this;
}

const char Security_SiteEngagement::kScoreDeltaName[] = "ScoreDelta";

Security_SiteEngagement& Security_SiteEngagement::SetScoreDelta(int64_t value) {
  SetMetricInternal(kScoreDeltaNameHash, value);
  return *this;
}

const char Security_SiteEngagement::kScoreFinalName[] = "ScoreFinal";

Security_SiteEngagement& Security_SiteEngagement::SetScoreFinal(int64_t value) {
  SetMetricInternal(kScoreFinalNameHash, value);
  return *this;
}


const char SiteIsolation_XSD_Browser_Blocked::kEntryName[] = "SiteIsolation.XSD.Browser.Blocked";

SiteIsolation_XSD_Browser_Blocked::SiteIsolation_XSD_Browser_Blocked(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SiteIsolation_XSD_Browser_Blocked::SiteIsolation_XSD_Browser_Blocked(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SiteIsolation_XSD_Browser_Blocked::~SiteIsolation_XSD_Browser_Blocked() = default;


const char SiteIsolation_XSD_Browser_Blocked::kCanonicalMimeTypeName[] = "CanonicalMimeType";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetCanonicalMimeType(int64_t value) {
  SetMetricInternal(kCanonicalMimeTypeNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kContentLengthWasZeroName[] = "ContentLengthWasZero";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetContentLengthWasZero(int64_t value) {
  SetMetricInternal(kContentLengthWasZeroNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kContentResourceTypeName[] = "ContentResourceType";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetContentResourceType(int64_t value) {
  SetMetricInternal(kContentResourceTypeNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kHttpResponseCodeName[] = "HttpResponseCode";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetHttpResponseCode(int64_t value) {
  SetMetricInternal(kHttpResponseCodeNameHash, value);
  return *this;
}

const char SiteIsolation_XSD_Browser_Blocked::kNeededSniffingName[] = "NeededSniffing";

SiteIsolation_XSD_Browser_Blocked& SiteIsolation_XSD_Browser_Blocked::SetNeededSniffing(int64_t value) {
  SetMetricInternal(kNeededSniffingNameHash, value);
  return *this;
}


const char SSL_MixedContentShown::kEntryName[] = "SSL.MixedContentShown";

SSL_MixedContentShown::SSL_MixedContentShown(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SSL_MixedContentShown::SSL_MixedContentShown(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SSL_MixedContentShown::~SSL_MixedContentShown() = default;


const char SSL_MixedContentShown::kTypeName[] = "Type";

SSL_MixedContentShown& SSL_MixedContentShown::SetType(int64_t value) {
  SetMetricInternal(kTypeNameHash, value);
  return *this;
}


const char SubframeDownload::kEntryName[] = "SubframeDownload";

SubframeDownload::SubframeDownload(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SubframeDownload::SubframeDownload(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SubframeDownload::~SubframeDownload() = default;


const char SubframeDownload::kHasGestureName[] = "HasGesture";

SubframeDownload& SubframeDownload::SetHasGesture(int64_t value) {
  SetMetricInternal(kHasGestureNameHash, value);
  return *this;
}

const char SubframeDownload::kHasSandboxName[] = "HasSandbox";

SubframeDownload& SubframeDownload::SetHasSandbox(int64_t value) {
  SetMetricInternal(kHasSandboxNameHash, value);
  return *this;
}

const char SubframeDownload::kIsAdFrameName[] = "IsAdFrame";

SubframeDownload& SubframeDownload::SetIsAdFrame(int64_t value) {
  SetMetricInternal(kIsAdFrameNameHash, value);
  return *this;
}

const char SubframeDownload::kIsCrossOriginName[] = "IsCrossOrigin";

SubframeDownload& SubframeDownload::SetIsCrossOrigin(int64_t value) {
  SetMetricInternal(kIsCrossOriginNameHash, value);
  return *this;
}


const char SubresourceFilter::kEntryName[] = "SubresourceFilter";

SubresourceFilter::SubresourceFilter(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SubresourceFilter::SubresourceFilter(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

SubresourceFilter::~SubresourceFilter() = default;


const char SubresourceFilter::kActivationDecisionName[] = "ActivationDecision";

SubresourceFilter& SubresourceFilter::SetActivationDecision(int64_t value) {
  SetMetricInternal(kActivationDecisionNameHash, value);
  return *this;
}

const char SubresourceFilter::kDryRunName[] = "DryRun";

SubresourceFilter& SubresourceFilter::SetDryRun(int64_t value) {
  SetMetricInternal(kDryRunNameHash, value);
  return *this;
}

const char SubresourceFilter::kEnforcementRedirectPositionName[] = "EnforcementRedirectPosition";

SubresourceFilter& SubresourceFilter::SetEnforcementRedirectPosition(int64_t value) {
  SetMetricInternal(kEnforcementRedirectPositionNameHash, value);
  return *this;
}


const char Tab_RendererOOM::kEntryName[] = "Tab.RendererOOM";

Tab_RendererOOM::Tab_RendererOOM(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Tab_RendererOOM::Tab_RendererOOM(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Tab_RendererOOM::~Tab_RendererOOM() = default;


const char Tab_RendererOOM::kTimeSinceLastNavigationName[] = "TimeSinceLastNavigation";

Tab_RendererOOM& Tab_RendererOOM::SetTimeSinceLastNavigation(int64_t value) {
  SetMetricInternal(kTimeSinceLastNavigationNameHash, value);
  return *this;
}


const char TabManager_Background_FirstAlertFired::kEntryName[] = "TabManager.Background.FirstAlertFired";

TabManager_Background_FirstAlertFired::TabManager_Background_FirstAlertFired(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstAlertFired::TabManager_Background_FirstAlertFired(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstAlertFired::~TabManager_Background_FirstAlertFired() = default;


const char TabManager_Background_FirstAlertFired::kIsMainFrameName[] = "IsMainFrame";

TabManager_Background_FirstAlertFired& TabManager_Background_FirstAlertFired::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char TabManager_Background_FirstAlertFired::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstAlertFired& TabManager_Background_FirstAlertFired::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstAudioStarts::kEntryName[] = "TabManager.Background.FirstAudioStarts";

TabManager_Background_FirstAudioStarts::TabManager_Background_FirstAudioStarts(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstAudioStarts::TabManager_Background_FirstAudioStarts(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstAudioStarts::~TabManager_Background_FirstAudioStarts() = default;


const char TabManager_Background_FirstAudioStarts::kIsMainFrameName[] = "IsMainFrame";

TabManager_Background_FirstAudioStarts& TabManager_Background_FirstAudioStarts::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char TabManager_Background_FirstAudioStarts::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstAudioStarts& TabManager_Background_FirstAudioStarts::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstFaviconUpdated::kEntryName[] = "TabManager.Background.FirstFaviconUpdated";

TabManager_Background_FirstFaviconUpdated::TabManager_Background_FirstFaviconUpdated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstFaviconUpdated::TabManager_Background_FirstFaviconUpdated(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstFaviconUpdated::~TabManager_Background_FirstFaviconUpdated() = default;


const char TabManager_Background_FirstFaviconUpdated::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstFaviconUpdated& TabManager_Background_FirstFaviconUpdated::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstNonPersistentNotificationCreated::kEntryName[] = "TabManager.Background.FirstNonPersistentNotificationCreated";

TabManager_Background_FirstNonPersistentNotificationCreated::TabManager_Background_FirstNonPersistentNotificationCreated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstNonPersistentNotificationCreated::TabManager_Background_FirstNonPersistentNotificationCreated(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstNonPersistentNotificationCreated::~TabManager_Background_FirstNonPersistentNotificationCreated() = default;


const char TabManager_Background_FirstNonPersistentNotificationCreated::kIsMainFrameName[] = "IsMainFrame";

TabManager_Background_FirstNonPersistentNotificationCreated& TabManager_Background_FirstNonPersistentNotificationCreated::SetIsMainFrame(int64_t value) {
  SetMetricInternal(kIsMainFrameNameHash, value);
  return *this;
}

const char TabManager_Background_FirstNonPersistentNotificationCreated::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstNonPersistentNotificationCreated& TabManager_Background_FirstNonPersistentNotificationCreated::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_FirstTitleUpdated::kEntryName[] = "TabManager.Background.FirstTitleUpdated";

TabManager_Background_FirstTitleUpdated::TabManager_Background_FirstTitleUpdated(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstTitleUpdated::TabManager_Background_FirstTitleUpdated(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_FirstTitleUpdated::~TabManager_Background_FirstTitleUpdated() = default;


const char TabManager_Background_FirstTitleUpdated::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_FirstTitleUpdated& TabManager_Background_FirstTitleUpdated::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}


const char TabManager_Background_ForegroundedOrClosed::kEntryName[] = "TabManager.Background.ForegroundedOrClosed";

TabManager_Background_ForegroundedOrClosed::TabManager_Background_ForegroundedOrClosed(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_ForegroundedOrClosed::TabManager_Background_ForegroundedOrClosed(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Background_ForegroundedOrClosed::~TabManager_Background_ForegroundedOrClosed() = default;


const char TabManager_Background_ForegroundedOrClosed::kIsDiscardedName[] = "IsDiscarded";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetIsDiscarded(int64_t value) {
  SetMetricInternal(kIsDiscardedNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kIsForegroundedName[] = "IsForegrounded";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetIsForegrounded(int64_t value) {
  SetMetricInternal(kIsForegroundedNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kLabelIdName[] = "LabelId";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetLabelId(int64_t value) {
  SetMetricInternal(kLabelIdNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kMRUIndexName[] = "MRUIndex";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetMRUIndex(int64_t value) {
  SetMetricInternal(kMRUIndexNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kSequenceIdName[] = "SequenceId";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}

const char TabManager_Background_ForegroundedOrClosed::kTotalTabCountName[] = "TotalTabCount";

TabManager_Background_ForegroundedOrClosed& TabManager_Background_ForegroundedOrClosed::SetTotalTabCount(int64_t value) {
  SetMetricInternal(kTotalTabCountNameHash, value);
  return *this;
}


const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kEntryName[] = "TabManager.BackgroundTabOpening.ForegroundTab.ExpectedTaskQueueingDurationInfo";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::~TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo() = default;


const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabLoadingCountName[] = "BackgroundTabLoadingCount";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetBackgroundTabLoadingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabLoadingCountNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabOpeningSessionIdName[] = "BackgroundTabOpeningSessionId";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetBackgroundTabOpeningSessionId(int64_t value) {
  SetMetricInternal(kBackgroundTabOpeningSessionIdNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabPendingCountName[] = "BackgroundTabPendingCount";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetBackgroundTabPendingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabPendingCountNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationName[] = "ExpectedTaskQueueingDuration";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetExpectedTaskQueueingDuration(int64_t value) {
  SetMetricInternal(kExpectedTaskQueueingDurationNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdName[] = "SequenceId";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountName[] = "SystemTabCount";

TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}


const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kEntryName[] = "TabManager.Experimental.BackgroundTabOpening.TabSwitchLoadStopped";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::~TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped() = default;


const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabLoadingCountName[] = "BackgroundTabLoadingCount";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetBackgroundTabLoadingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabLoadingCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabOpeningSessionIdName[] = "BackgroundTabOpeningSessionId";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetBackgroundTabOpeningSessionId(int64_t value) {
  SetMetricInternal(kBackgroundTabOpeningSessionIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabPendingCountName[] = "BackgroundTabPendingCount";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetBackgroundTabPendingCount(int64_t value) {
  SetMetricInternal(kBackgroundTabPendingCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSequenceIdName[] = "SequenceId";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSystemTabCountName[] = "SystemTabCount";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kTabSwitchLoadTimeName[] = "TabSwitchLoadTime";

TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped& TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::SetTabSwitchLoadTime(int64_t value) {
  SetMetricInternal(kTabSwitchLoadTimeNameHash, value);
  return *this;
}


const char TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kEntryName[] = "TabManager.Experimental.SessionRestore.ForegroundTab.PageLoad";

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::~TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad() = default;


const char TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSessionRestoreTabCountName[] = "SessionRestoreTabCount";

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad& TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::SetSessionRestoreTabCount(int64_t value) {
  SetMetricInternal(kSessionRestoreTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSystemTabCountName[] = "SystemTabCount";

TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad& TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}


const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kEntryName[] = "TabManager.Experimental.SessionRestore.TabSwitchLoadStopped";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::TabManager_Experimental_SessionRestore_TabSwitchLoadStopped(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::TabManager_Experimental_SessionRestore_TabSwitchLoadStopped(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::~TabManager_Experimental_SessionRestore_TabSwitchLoadStopped() = default;


const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSequenceIdName[] = "SequenceId";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreSessionIdName[] = "SessionRestoreSessionId";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSessionRestoreSessionId(int64_t value) {
  SetMetricInternal(kSessionRestoreSessionIdNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreTabCountName[] = "SessionRestoreTabCount";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSessionRestoreTabCount(int64_t value) {
  SetMetricInternal(kSessionRestoreTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSystemTabCountName[] = "SystemTabCount";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}

const char TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kTabSwitchLoadTimeName[] = "TabSwitchLoadTime";

TabManager_Experimental_SessionRestore_TabSwitchLoadStopped& TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::SetTabSwitchLoadTime(int64_t value) {
  SetMetricInternal(kTabSwitchLoadTimeNameHash, value);
  return *this;
}


const char TabManager_LifecycleStateChange::kEntryName[] = "TabManager.LifecycleStateChange";

TabManager_LifecycleStateChange::TabManager_LifecycleStateChange(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_LifecycleStateChange::TabManager_LifecycleStateChange(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_LifecycleStateChange::~TabManager_LifecycleStateChange() = default;


const char TabManager_LifecycleStateChange::kFailureGlobalBlacklistName[] = "FailureGlobalBlacklist";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureGlobalBlacklist(int64_t value) {
  SetMetricInternal(kFailureGlobalBlacklistNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicAudioName[] = "FailureHeuristicAudio";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicAudio(int64_t value) {
  SetMetricInternal(kFailureHeuristicAudioNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicFaviconName[] = "FailureHeuristicFavicon";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicFavicon(int64_t value) {
  SetMetricInternal(kFailureHeuristicFaviconNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicInsufficientObservationName[] = "FailureHeuristicInsufficientObservation";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicInsufficientObservation(int64_t value) {
  SetMetricInternal(kFailureHeuristicInsufficientObservationNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicNotificationsName[] = "FailureHeuristicNotifications";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicNotifications(int64_t value) {
  SetMetricInternal(kFailureHeuristicNotificationsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureHeuristicTitleName[] = "FailureHeuristicTitle";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureHeuristicTitle(int64_t value) {
  SetMetricInternal(kFailureHeuristicTitleNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLifecyclesEnterprisePolicyOptOutName[] = "FailureLifecyclesEnterprisePolicyOptOut";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLifecyclesEnterprisePolicyOptOut(int64_t value) {
  SetMetricInternal(kFailureLifecyclesEnterprisePolicyOptOutNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLifecyclesFeaturePolicyOptOutName[] = "FailureLifecyclesFeaturePolicyOptOut";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLifecyclesFeaturePolicyOptOut(int64_t value) {
  SetMetricInternal(kFailureLifecyclesFeaturePolicyOptOutNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateCapturingName[] = "FailureLiveStateCapturing";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateCapturing(int64_t value) {
  SetMetricInternal(kFailureLiveStateCapturingNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateDesktopCaptureName[] = "FailureLiveStateDesktopCapture";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateDesktopCapture(int64_t value) {
  SetMetricInternal(kFailureLiveStateDesktopCaptureNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateDevToolsOpenName[] = "FailureLiveStateDevToolsOpen";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateDevToolsOpen(int64_t value) {
  SetMetricInternal(kFailureLiveStateDevToolsOpenNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateExtensionDisallowedName[] = "FailureLiveStateExtensionDisallowed";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateExtensionDisallowed(int64_t value) {
  SetMetricInternal(kFailureLiveStateExtensionDisallowedNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateFormEntryName[] = "FailureLiveStateFormEntry";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateFormEntry(int64_t value) {
  SetMetricInternal(kFailureLiveStateFormEntryNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateIsPDFName[] = "FailureLiveStateIsPDF";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateIsPDF(int64_t value) {
  SetMetricInternal(kFailureLiveStateIsPDFNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateMirroringName[] = "FailureLiveStateMirroring";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateMirroring(int64_t value) {
  SetMetricInternal(kFailureLiveStateMirroringNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStatePlayingAudioName[] = "FailureLiveStatePlayingAudio";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStatePlayingAudio(int64_t value) {
  SetMetricInternal(kFailureLiveStatePlayingAudioNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateSharingBrowsingInstanceName[] = "FailureLiveStateSharingBrowsingInstance";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateSharingBrowsingInstance(int64_t value) {
  SetMetricInternal(kFailureLiveStateSharingBrowsingInstanceNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateUsingWebSocketsName[] = "FailureLiveStateUsingWebSockets";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateUsingWebSockets(int64_t value) {
  SetMetricInternal(kFailureLiveStateUsingWebSocketsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateUsingWebUSBName[] = "FailureLiveStateUsingWebUSB";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateUsingWebUSB(int64_t value) {
  SetMetricInternal(kFailureLiveStateUsingWebUSBNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kFailureLiveStateVisibleName[] = "FailureLiveStateVisible";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetFailureLiveStateVisible(int64_t value) {
  SetMetricInternal(kFailureLiveStateVisibleNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kLifecycleStateChangeReasonName[] = "LifecycleStateChangeReason";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetLifecycleStateChangeReason(int64_t value) {
  SetMetricInternal(kLifecycleStateChangeReasonNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kNewLifecycleStateName[] = "NewLifecycleState";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetNewLifecycleState(int64_t value) {
  SetMetricInternal(kNewLifecycleStateNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kOldLifecycleStateName[] = "OldLifecycleState";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetOldLifecycleState(int64_t value) {
  SetMetricInternal(kOldLifecycleStateNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kOutcomeName[] = "Outcome";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetOutcome(int64_t value) {
  SetMetricInternal(kOutcomeNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kSuccessGlobalWhitelistName[] = "SuccessGlobalWhitelist";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetSuccessGlobalWhitelist(int64_t value) {
  SetMetricInternal(kSuccessGlobalWhitelistNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kSuccessHeuristicName[] = "SuccessHeuristic";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetSuccessHeuristic(int64_t value) {
  SetMetricInternal(kSuccessHeuristicNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kSuccessLifecyclesFeaturePolicyOptInName[] = "SuccessLifecyclesFeaturePolicyOptIn";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetSuccessLifecyclesFeaturePolicyOptIn(int64_t value) {
  SetMetricInternal(kSuccessLifecyclesFeaturePolicyOptInNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kTimeSinceNavigationMsName[] = "TimeSinceNavigationMs";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetTimeSinceNavigationMs(int64_t value) {
  SetMetricInternal(kTimeSinceNavigationMsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kTimeSinceVisibilityStateChangeMsName[] = "TimeSinceVisibilityStateChangeMs";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetTimeSinceVisibilityStateChangeMs(int64_t value) {
  SetMetricInternal(kTimeSinceVisibilityStateChangeMsNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kTransitionForcedName[] = "TransitionForced";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetTransitionForced(int64_t value) {
  SetMetricInternal(kTransitionForcedNameHash, value);
  return *this;
}

const char TabManager_LifecycleStateChange::kVisibilityStateName[] = "VisibilityState";

TabManager_LifecycleStateChange& TabManager_LifecycleStateChange::SetVisibilityState(int64_t value) {
  SetMetricInternal(kVisibilityStateNameHash, value);
  return *this;
}


const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kEntryName[] = "TabManager.SessionRestore.ForegroundTab.ExpectedTaskQueueingDurationInfo";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::~TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo() = default;


const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationName[] = "ExpectedTaskQueueingDuration";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetExpectedTaskQueueingDuration(int64_t value) {
  SetMetricInternal(kExpectedTaskQueueingDurationNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdName[] = "SequenceId";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreSessionIdName[] = "SessionRestoreSessionId";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSessionRestoreSessionId(int64_t value) {
  SetMetricInternal(kSessionRestoreSessionIdNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreTabCountName[] = "SessionRestoreTabCount";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSessionRestoreTabCount(int64_t value) {
  SetMetricInternal(kSessionRestoreTabCountNameHash, value);
  return *this;
}

const char TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountName[] = "SystemTabCount";

TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo& TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::SetSystemTabCount(int64_t value) {
  SetMetricInternal(kSystemTabCountNameHash, value);
  return *this;
}


const char TabManager_TabLifetime::kEntryName[] = "TabManager.TabLifetime";

TabManager_TabLifetime::TabManager_TabLifetime(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_TabLifetime::TabManager_TabLifetime(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_TabLifetime::~TabManager_TabLifetime() = default;


const char TabManager_TabLifetime::kTimeSinceNavigationName[] = "TimeSinceNavigation";

TabManager_TabLifetime& TabManager_TabLifetime::SetTimeSinceNavigation(int64_t value) {
  SetMetricInternal(kTimeSinceNavigationNameHash, value);
  return *this;
}


const char TabManager_TabMetrics::kEntryName[] = "TabManager.TabMetrics";

TabManager_TabMetrics::TabManager_TabMetrics(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_TabMetrics::TabManager_TabMetrics(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_TabMetrics::~TabManager_TabMetrics() = default;


const char TabManager_TabMetrics::kContentTypeName[] = "ContentType";

TabManager_TabMetrics& TabManager_TabMetrics::SetContentType(int64_t value) {
  SetMetricInternal(kContentTypeNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kDefaultProtocolHandlerName[] = "DefaultProtocolHandler";

TabManager_TabMetrics& TabManager_TabMetrics::SetDefaultProtocolHandler(int64_t value) {
  SetMetricInternal(kDefaultProtocolHandlerNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kHasBeforeUnloadHandlerName[] = "HasBeforeUnloadHandler";

TabManager_TabMetrics& TabManager_TabMetrics::SetHasBeforeUnloadHandler(int64_t value) {
  SetMetricInternal(kHasBeforeUnloadHandlerNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kHasFormEntryName[] = "HasFormEntry";

TabManager_TabMetrics& TabManager_TabMetrics::SetHasFormEntry(int64_t value) {
  SetMetricInternal(kHasFormEntryNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kIsExtensionProtectedName[] = "IsExtensionProtected";

TabManager_TabMetrics& TabManager_TabMetrics::SetIsExtensionProtected(int64_t value) {
  SetMetricInternal(kIsExtensionProtectedNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kIsPinnedName[] = "IsPinned";

TabManager_TabMetrics& TabManager_TabMetrics::SetIsPinned(int64_t value) {
  SetMetricInternal(kIsPinnedNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kKeyEventCountName[] = "KeyEventCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetKeyEventCount(int64_t value) {
  SetMetricInternal(kKeyEventCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kLabelIdName[] = "LabelId";

TabManager_TabMetrics& TabManager_TabMetrics::SetLabelId(int64_t value) {
  SetMetricInternal(kLabelIdNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kMouseEventCountName[] = "MouseEventCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetMouseEventCount(int64_t value) {
  SetMetricInternal(kMouseEventCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kMRUIndexName[] = "MRUIndex";

TabManager_TabMetrics& TabManager_TabMetrics::SetMRUIndex(int64_t value) {
  SetMetricInternal(kMRUIndexNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kNavigationEntryCountName[] = "NavigationEntryCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetNavigationEntryCount(int64_t value) {
  SetMetricInternal(kNavigationEntryCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kNumReactivationBeforeName[] = "NumReactivationBefore";

TabManager_TabMetrics& TabManager_TabMetrics::SetNumReactivationBefore(int64_t value) {
  SetMetricInternal(kNumReactivationBeforeNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kPageTransitionCoreTypeName[] = "PageTransitionCoreType";

TabManager_TabMetrics& TabManager_TabMetrics::SetPageTransitionCoreType(int64_t value) {
  SetMetricInternal(kPageTransitionCoreTypeNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kPageTransitionFromAddressBarName[] = "PageTransitionFromAddressBar";

TabManager_TabMetrics& TabManager_TabMetrics::SetPageTransitionFromAddressBar(int64_t value) {
  SetMetricInternal(kPageTransitionFromAddressBarNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kPageTransitionIsRedirectName[] = "PageTransitionIsRedirect";

TabManager_TabMetrics& TabManager_TabMetrics::SetPageTransitionIsRedirect(int64_t value) {
  SetMetricInternal(kPageTransitionIsRedirectNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kQueryIdName[] = "QueryId";

TabManager_TabMetrics& TabManager_TabMetrics::SetQueryId(int64_t value) {
  SetMetricInternal(kQueryIdNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kSequenceIdName[] = "SequenceId";

TabManager_TabMetrics& TabManager_TabMetrics::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kSiteEngagementScoreName[] = "SiteEngagementScore";

TabManager_TabMetrics& TabManager_TabMetrics::SetSiteEngagementScore(int64_t value) {
  SetMetricInternal(kSiteEngagementScoreNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kTimeFromBackgroundedName[] = "TimeFromBackgrounded";

TabManager_TabMetrics& TabManager_TabMetrics::SetTimeFromBackgrounded(int64_t value) {
  SetMetricInternal(kTimeFromBackgroundedNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kTotalTabCountName[] = "TotalTabCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetTotalTabCount(int64_t value) {
  SetMetricInternal(kTotalTabCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kTouchEventCountName[] = "TouchEventCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetTouchEventCount(int64_t value) {
  SetMetricInternal(kTouchEventCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWasRecentlyAudibleName[] = "WasRecentlyAudible";

TabManager_TabMetrics& TabManager_TabMetrics::SetWasRecentlyAudible(int64_t value) {
  SetMetricInternal(kWasRecentlyAudibleNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWindowIdName[] = "WindowId";

TabManager_TabMetrics& TabManager_TabMetrics::SetWindowId(int64_t value) {
  SetMetricInternal(kWindowIdNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWindowIsActiveName[] = "WindowIsActive";

TabManager_TabMetrics& TabManager_TabMetrics::SetWindowIsActive(int64_t value) {
  SetMetricInternal(kWindowIsActiveNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWindowShowStateName[] = "WindowShowState";

TabManager_TabMetrics& TabManager_TabMetrics::SetWindowShowState(int64_t value) {
  SetMetricInternal(kWindowShowStateNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWindowTabCountName[] = "WindowTabCount";

TabManager_TabMetrics& TabManager_TabMetrics::SetWindowTabCount(int64_t value) {
  SetMetricInternal(kWindowTabCountNameHash, value);
  return *this;
}

const char TabManager_TabMetrics::kWindowTypeName[] = "WindowType";

TabManager_TabMetrics& TabManager_TabMetrics::SetWindowType(int64_t value) {
  SetMetricInternal(kWindowTypeNameHash, value);
  return *this;
}


const char TabManager_WindowMetrics::kEntryName[] = "TabManager.WindowMetrics";

TabManager_WindowMetrics::TabManager_WindowMetrics(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_WindowMetrics::TabManager_WindowMetrics(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TabManager_WindowMetrics::~TabManager_WindowMetrics() = default;


const char TabManager_WindowMetrics::kIsActiveName[] = "IsActive";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetIsActive(int64_t value) {
  SetMetricInternal(kIsActiveNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kShowStateName[] = "ShowState";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetShowState(int64_t value) {
  SetMetricInternal(kShowStateNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kTabCountName[] = "TabCount";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetTabCount(int64_t value) {
  SetMetricInternal(kTabCountNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kTypeName[] = "Type";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetType(int64_t value) {
  SetMetricInternal(kTypeNameHash, value);
  return *this;
}

const char TabManager_WindowMetrics::kWindowIdName[] = "WindowId";

TabManager_WindowMetrics& TabManager_WindowMetrics::SetWindowId(int64_t value) {
  SetMetricInternal(kWindowIdNameHash, value);
  return *this;
}


const char Translate::kEntryName[] = "Translate";

Translate::Translate(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Translate::Translate(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

Translate::~Translate() = default;


const char Translate::kAcceptCountName[] = "AcceptCount";

Translate& Translate::SetAcceptCount(int64_t value) {
  SetMetricInternal(kAcceptCountNameHash, value);
  return *this;
}

const char Translate::kCountryName[] = "Country";

Translate& Translate::SetCountry(int64_t value) {
  SetMetricInternal(kCountryNameHash, value);
  return *this;
}

const char Translate::kDeclineCountName[] = "DeclineCount";

Translate& Translate::SetDeclineCount(int64_t value) {
  SetMetricInternal(kDeclineCountNameHash, value);
  return *this;
}

const char Translate::kEventTypeName[] = "EventType";

Translate& Translate::SetEventType(int64_t value) {
  SetMetricInternal(kEventTypeNameHash, value);
  return *this;
}

const char Translate::kIgnoreCountName[] = "IgnoreCount";

Translate& Translate::SetIgnoreCount(int64_t value) {
  SetMetricInternal(kIgnoreCountNameHash, value);
  return *this;
}

const char Translate::kRankerResponseName[] = "RankerResponse";

Translate& Translate::SetRankerResponse(int64_t value) {
  SetMetricInternal(kRankerResponseNameHash, value);
  return *this;
}

const char Translate::kRankerVersionName[] = "RankerVersion";

Translate& Translate::SetRankerVersion(int64_t value) {
  SetMetricInternal(kRankerVersionNameHash, value);
  return *this;
}

const char Translate::kSourceLanguageName[] = "SourceLanguage";

Translate& Translate::SetSourceLanguage(int64_t value) {
  SetMetricInternal(kSourceLanguageNameHash, value);
  return *this;
}

const char Translate::kTargetLanguageName[] = "TargetLanguage";

Translate& Translate::SetTargetLanguage(int64_t value) {
  SetMetricInternal(kTargetLanguageNameHash, value);
  return *this;
}


const char TrustedWebActivity_Open::kEntryName[] = "TrustedWebActivity.Open";

TrustedWebActivity_Open::TrustedWebActivity_Open(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TrustedWebActivity_Open::TrustedWebActivity_Open(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

TrustedWebActivity_Open::~TrustedWebActivity_Open() = default;



const char UserActivity::kEntryName[] = "UserActivity";

UserActivity::UserActivity(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

UserActivity::UserActivity(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

UserActivity::~UserActivity() = default;


const char UserActivity::kBatteryPercentName[] = "BatteryPercent";

UserActivity& UserActivity::SetBatteryPercent(int64_t value) {
  SetMetricInternal(kBatteryPercentNameHash, value);
  return *this;
}

const char UserActivity::kDeviceManagementName[] = "DeviceManagement";

UserActivity& UserActivity::SetDeviceManagement(int64_t value) {
  SetMetricInternal(kDeviceManagementNameHash, value);
  return *this;
}

const char UserActivity::kDeviceModeName[] = "DeviceMode";

UserActivity& UserActivity::SetDeviceMode(int64_t value) {
  SetMetricInternal(kDeviceModeNameHash, value);
  return *this;
}

const char UserActivity::kDeviceTypeName[] = "DeviceType";

UserActivity& UserActivity::SetDeviceType(int64_t value) {
  SetMetricInternal(kDeviceTypeNameHash, value);
  return *this;
}

const char UserActivity::kEventLogDurationName[] = "EventLogDuration";

UserActivity& UserActivity::SetEventLogDuration(int64_t value) {
  SetMetricInternal(kEventLogDurationNameHash, value);
  return *this;
}

const char UserActivity::kEventReasonName[] = "EventReason";

UserActivity& UserActivity::SetEventReason(int64_t value) {
  SetMetricInternal(kEventReasonNameHash, value);
  return *this;
}

const char UserActivity::kEventTypeName[] = "EventType";

UserActivity& UserActivity::SetEventType(int64_t value) {
  SetMetricInternal(kEventTypeNameHash, value);
  return *this;
}

const char UserActivity::kKeyEventsInLastHourName[] = "KeyEventsInLastHour";

UserActivity& UserActivity::SetKeyEventsInLastHour(int64_t value) {
  SetMetricInternal(kKeyEventsInLastHourNameHash, value);
  return *this;
}

const char UserActivity::kLastActivityDayName[] = "LastActivityDay";

UserActivity& UserActivity::SetLastActivityDay(int64_t value) {
  SetMetricInternal(kLastActivityDayNameHash, value);
  return *this;
}

const char UserActivity::kLastActivityTimeName[] = "LastActivityTime";

UserActivity& UserActivity::SetLastActivityTime(int64_t value) {
  SetMetricInternal(kLastActivityTimeNameHash, value);
  return *this;
}

const char UserActivity::kLastUserActivityTimeName[] = "LastUserActivityTime";

UserActivity& UserActivity::SetLastUserActivityTime(int64_t value) {
  SetMetricInternal(kLastUserActivityTimeNameHash, value);
  return *this;
}

const char UserActivity::kModelAppliedName[] = "ModelApplied";

UserActivity& UserActivity::SetModelApplied(int64_t value) {
  SetMetricInternal(kModelAppliedNameHash, value);
  return *this;
}

const char UserActivity::kModelDecisionThresholdName[] = "ModelDecisionThreshold";

UserActivity& UserActivity::SetModelDecisionThreshold(int64_t value) {
  SetMetricInternal(kModelDecisionThresholdNameHash, value);
  return *this;
}

const char UserActivity::kModelInactivityScoreName[] = "ModelInactivityScore";

UserActivity& UserActivity::SetModelInactivityScore(int64_t value) {
  SetMetricInternal(kModelInactivityScoreNameHash, value);
  return *this;
}

const char UserActivity::kModelResponseName[] = "ModelResponse";

UserActivity& UserActivity::SetModelResponse(int64_t value) {
  SetMetricInternal(kModelResponseNameHash, value);
  return *this;
}

const char UserActivity::kMouseEventsInLastHourName[] = "MouseEventsInLastHour";

UserActivity& UserActivity::SetMouseEventsInLastHour(int64_t value) {
  SetMetricInternal(kMouseEventsInLastHourNameHash, value);
  return *this;
}

const char UserActivity::kOnBatteryName[] = "OnBattery";

UserActivity& UserActivity::SetOnBattery(int64_t value) {
  SetMetricInternal(kOnBatteryNameHash, value);
  return *this;
}

const char UserActivity::kPreviousNegativeActionsCountName[] = "PreviousNegativeActionsCount";

UserActivity& UserActivity::SetPreviousNegativeActionsCount(int64_t value) {
  SetMetricInternal(kPreviousNegativeActionsCountNameHash, value);
  return *this;
}

const char UserActivity::kPreviousPositiveActionsCountName[] = "PreviousPositiveActionsCount";

UserActivity& UserActivity::SetPreviousPositiveActionsCount(int64_t value) {
  SetMetricInternal(kPreviousPositiveActionsCountNameHash, value);
  return *this;
}

const char UserActivity::kRecentTimeActiveName[] = "RecentTimeActive";

UserActivity& UserActivity::SetRecentTimeActive(int64_t value) {
  SetMetricInternal(kRecentTimeActiveNameHash, value);
  return *this;
}

const char UserActivity::kRecentVideoPlayingTimeName[] = "RecentVideoPlayingTime";

UserActivity& UserActivity::SetRecentVideoPlayingTime(int64_t value) {
  SetMetricInternal(kRecentVideoPlayingTimeNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimDelayName[] = "ScreenDimDelay";

UserActivity& UserActivity::SetScreenDimDelay(int64_t value) {
  SetMetricInternal(kScreenDimDelayNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimmedInitiallyName[] = "ScreenDimmedInitially";

UserActivity& UserActivity::SetScreenDimmedInitially(int64_t value) {
  SetMetricInternal(kScreenDimmedInitiallyNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimOccurredName[] = "ScreenDimOccurred";

UserActivity& UserActivity::SetScreenDimOccurred(int64_t value) {
  SetMetricInternal(kScreenDimOccurredNameHash, value);
  return *this;
}

const char UserActivity::kScreenDimToOffDelayName[] = "ScreenDimToOffDelay";

UserActivity& UserActivity::SetScreenDimToOffDelay(int64_t value) {
  SetMetricInternal(kScreenDimToOffDelayNameHash, value);
  return *this;
}

const char UserActivity::kScreenLockedInitiallyName[] = "ScreenLockedInitially";

UserActivity& UserActivity::SetScreenLockedInitially(int64_t value) {
  SetMetricInternal(kScreenLockedInitiallyNameHash, value);
  return *this;
}

const char UserActivity::kScreenLockOccurredName[] = "ScreenLockOccurred";

UserActivity& UserActivity::SetScreenLockOccurred(int64_t value) {
  SetMetricInternal(kScreenLockOccurredNameHash, value);
  return *this;
}

const char UserActivity::kScreenOffInitiallyName[] = "ScreenOffInitially";

UserActivity& UserActivity::SetScreenOffInitially(int64_t value) {
  SetMetricInternal(kScreenOffInitiallyNameHash, value);
  return *this;
}

const char UserActivity::kScreenOffOccurredName[] = "ScreenOffOccurred";

UserActivity& UserActivity::SetScreenOffOccurred(int64_t value) {
  SetMetricInternal(kScreenOffOccurredNameHash, value);
  return *this;
}

const char UserActivity::kSequenceIdName[] = "SequenceId";

UserActivity& UserActivity::SetSequenceId(int64_t value) {
  SetMetricInternal(kSequenceIdNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastKeyName[] = "TimeSinceLastKey";

UserActivity& UserActivity::SetTimeSinceLastKey(int64_t value) {
  SetMetricInternal(kTimeSinceLastKeyNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastMouseName[] = "TimeSinceLastMouse";

UserActivity& UserActivity::SetTimeSinceLastMouse(int64_t value) {
  SetMetricInternal(kTimeSinceLastMouseNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastTouchName[] = "TimeSinceLastTouch";

UserActivity& UserActivity::SetTimeSinceLastTouch(int64_t value) {
  SetMetricInternal(kTimeSinceLastTouchNameHash, value);
  return *this;
}

const char UserActivity::kTimeSinceLastVideoEndedName[] = "TimeSinceLastVideoEnded";

UserActivity& UserActivity::SetTimeSinceLastVideoEnded(int64_t value) {
  SetMetricInternal(kTimeSinceLastVideoEndedNameHash, value);
  return *this;
}

const char UserActivity::kTouchEventsInLastHourName[] = "TouchEventsInLastHour";

UserActivity& UserActivity::SetTouchEventsInLastHour(int64_t value) {
  SetMetricInternal(kTouchEventsInLastHourNameHash, value);
  return *this;
}


const char UserActivityId::kEntryName[] = "UserActivityId";

UserActivityId::UserActivityId(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

UserActivityId::UserActivityId(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

UserActivityId::~UserActivityId() = default;


const char UserActivityId::kActivityIdName[] = "ActivityId";

UserActivityId& UserActivityId::SetActivityId(int64_t value) {
  SetMetricInternal(kActivityIdNameHash, value);
  return *this;
}

const char UserActivityId::kContentTypeName[] = "ContentType";

UserActivityId& UserActivityId::SetContentType(int64_t value) {
  SetMetricInternal(kContentTypeNameHash, value);
  return *this;
}

const char UserActivityId::kHasFormEntryName[] = "HasFormEntry";

UserActivityId& UserActivityId::SetHasFormEntry(int64_t value) {
  SetMetricInternal(kHasFormEntryNameHash, value);
  return *this;
}

const char UserActivityId::kIsActiveName[] = "IsActive";

UserActivityId& UserActivityId::SetIsActive(int64_t value) {
  SetMetricInternal(kIsActiveNameHash, value);
  return *this;
}

const char UserActivityId::kIsBrowserFocusedName[] = "IsBrowserFocused";

UserActivityId& UserActivityId::SetIsBrowserFocused(int64_t value) {
  SetMetricInternal(kIsBrowserFocusedNameHash, value);
  return *this;
}

const char UserActivityId::kIsBrowserVisibleName[] = "IsBrowserVisible";

UserActivityId& UserActivityId::SetIsBrowserVisible(int64_t value) {
  SetMetricInternal(kIsBrowserVisibleNameHash, value);
  return *this;
}

const char UserActivityId::kIsTopmostBrowserName[] = "IsTopmostBrowser";

UserActivityId& UserActivityId::SetIsTopmostBrowser(int64_t value) {
  SetMetricInternal(kIsTopmostBrowserNameHash, value);
  return *this;
}

const char UserActivityId::kSiteEngagementScoreName[] = "SiteEngagementScore";

UserActivityId& UserActivityId::SetSiteEngagementScore(int64_t value) {
  SetMetricInternal(kSiteEngagementScoreNameHash, value);
  return *this;
}


const char VirtualKeyboard_Open::kEntryName[] = "VirtualKeyboard.Open";

VirtualKeyboard_Open::VirtualKeyboard_Open(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

VirtualKeyboard_Open::VirtualKeyboard_Open(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

VirtualKeyboard_Open::~VirtualKeyboard_Open() = default;


const char VirtualKeyboard_Open::kTextInputTypeName[] = "TextInputType";

VirtualKeyboard_Open& VirtualKeyboard_Open::SetTextInputType(int64_t value) {
  SetMetricInternal(kTextInputTypeNameHash, value);
  return *this;
}


const char WebRTC_AddressHarvesting::kEntryName[] = "WebRTC.AddressHarvesting";

WebRTC_AddressHarvesting::WebRTC_AddressHarvesting(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

WebRTC_AddressHarvesting::WebRTC_AddressHarvesting(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

WebRTC_AddressHarvesting::~WebRTC_AddressHarvesting() = default;


const char WebRTC_AddressHarvesting::kUsagePatternName[] = "UsagePattern";

WebRTC_AddressHarvesting& WebRTC_AddressHarvesting::SetUsagePattern(int64_t value) {
  SetMetricInternal(kUsagePatternNameHash, value);
  return *this;
}


const char WebRTC_ComplexSdp::kEntryName[] = "WebRTC.ComplexSdp";

WebRTC_ComplexSdp::WebRTC_ComplexSdp(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

WebRTC_ComplexSdp::WebRTC_ComplexSdp(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

WebRTC_ComplexSdp::~WebRTC_ComplexSdp() = default;


const char WebRTC_ComplexSdp::kCategoryName[] = "Category";

WebRTC_ComplexSdp& WebRTC_ComplexSdp::SetCategory(int64_t value) {
  SetMetricInternal(kCategoryNameHash, value);
  return *this;
}


const char XR_PageSession::kEntryName[] = "XR.PageSession";

XR_PageSession::XR_PageSession(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_PageSession::XR_PageSession(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_PageSession::~XR_PageSession() = default;


const char XR_PageSession::kDurationName[] = "Duration";

XR_PageSession& XR_PageSession::SetDuration(int64_t value) {
  SetMetricInternal(kDurationNameHash, value);
  return *this;
}

const char XR_PageSession::kEnteredFullscreenName[] = "EnteredFullscreen";

XR_PageSession& XR_PageSession::SetEnteredFullscreen(int64_t value) {
  SetMetricInternal(kEnteredFullscreenNameHash, value);
  return *this;
}

const char XR_PageSession::kEnteredVROnPageReasonName[] = "EnteredVROnPageReason";

XR_PageSession& XR_PageSession::SetEnteredVROnPageReason(int64_t value) {
  SetMetricInternal(kEnteredVROnPageReasonNameHash, value);
  return *this;
}

const char XR_PageSession::kTimeOnPageName[] = "TimeOnPage";

XR_PageSession& XR_PageSession::SetTimeOnPage(int64_t value) {
  SetMetricInternal(kTimeOnPageNameHash, value);
  return *this;
}

const char XR_PageSession::kWasOmniboxNavigationName[] = "WasOmniboxNavigation";

XR_PageSession& XR_PageSession::SetWasOmniboxNavigation(int64_t value) {
  SetMetricInternal(kWasOmniboxNavigationNameHash, value);
  return *this;
}

const char XR_PageSession::kWasVoiceSearchNavigationName[] = "WasVoiceSearchNavigation";

XR_PageSession& XR_PageSession::SetWasVoiceSearchNavigation(int64_t value) {
  SetMetricInternal(kWasVoiceSearchNavigationNameHash, value);
  return *this;
}


const char XR_WebXR::kEntryName[] = "XR.WebXR";

XR_WebXR::XR_WebXR(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_WebXR::XR_WebXR(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_WebXR::~XR_WebXR() = default;


const char XR_WebXR::kDidGetGamepadsName[] = "DidGetGamepads";

XR_WebXR& XR_WebXR::SetDidGetGamepads(int64_t value) {
  SetMetricInternal(kDidGetGamepadsNameHash, value);
  return *this;
}

const char XR_WebXR::kDidGetXRInputSourcesName[] = "DidGetXRInputSources";

XR_WebXR& XR_WebXR::SetDidGetXRInputSources(int64_t value) {
  SetMetricInternal(kDidGetXRInputSourcesNameHash, value);
  return *this;
}

const char XR_WebXR::kDidRequestAvailableDevicesName[] = "DidRequestAvailableDevices";

XR_WebXR& XR_WebXR::SetDidRequestAvailableDevices(int64_t value) {
  SetMetricInternal(kDidRequestAvailableDevicesNameHash, value);
  return *this;
}

const char XR_WebXR::kDidRequestPoseName[] = "DidRequestPose";

XR_WebXR& XR_WebXR::SetDidRequestPose(int64_t value) {
  SetMetricInternal(kDidRequestPoseNameHash, value);
  return *this;
}

const char XR_WebXR::kDidRequestPresentationName[] = "DidRequestPresentation";

XR_WebXR& XR_WebXR::SetDidRequestPresentation(int64_t value) {
  SetMetricInternal(kDidRequestPresentationNameHash, value);
  return *this;
}

const char XR_WebXR::kDidUseNavigatorXRName[] = "DidUseNavigatorXR";

XR_WebXR& XR_WebXR::SetDidUseNavigatorXR(int64_t value) {
  SetMetricInternal(kDidUseNavigatorXRNameHash, value);
  return *this;
}

const char XR_WebXR::kReturnedDeviceName[] = "ReturnedDevice";

XR_WebXR& XR_WebXR::SetReturnedDevice(int64_t value) {
  SetMetricInternal(kReturnedDeviceNameHash, value);
  return *this;
}

const char XR_WebXR::kReturnedPresentationCapableDeviceName[] = "ReturnedPresentationCapableDevice";

XR_WebXR& XR_WebXR::SetReturnedPresentationCapableDevice(int64_t value) {
  SetMetricInternal(kReturnedPresentationCapableDeviceNameHash, value);
  return *this;
}


const char XR_WebXR_PresentationSession::kEntryName[] = "XR.WebXR.PresentationSession";

XR_WebXR_PresentationSession::XR_WebXR_PresentationSession(ukm::SourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_WebXR_PresentationSession::XR_WebXR_PresentationSession(base::UkmSourceId source_id) :
  ::ukm::internal::UkmEntryBuilderBase(source_id, kEntryNameHash) {
}

XR_WebXR_PresentationSession::~XR_WebXR_PresentationSession() = default;


const char XR_WebXR_PresentationSession::kDurationName[] = "Duration";

XR_WebXR_PresentationSession& XR_WebXR_PresentationSession::SetDuration(int64_t value) {
  SetMetricInternal(kDurationNameHash, value);
  return *this;
}

const char XR_WebXR_PresentationSession::kStartActionName[] = "StartAction";

XR_WebXR_PresentationSession& XR_WebXR_PresentationSession::SetStartAction(int64_t value) {
  SetMetricInternal(kStartActionNameHash, value);
  return *this;
}



}  // namespace builders
}  // namespace ukm
