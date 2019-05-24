
// Generated from gen_builders.py.  DO NOT EDIT!
// source: ukm.xml

#include "services/metrics/public/cpp//ukm_decode.h"
#include "services/metrics/public/cpp//ukm_builders.h"

namespace ukm {
namespace builders {

std::map<uint64_t, EntryDecoder> CreateDecodeMap() {
  return {
    
    {
      UINT64_C(4325886147604803651),
      {
        AbusiveExperienceHeuristic::kEntryName,
        {
          
    {AbusiveExperienceHeuristic::kDidTabUnderNameHash, AbusiveExperienceHeuristic::kDidTabUnderName},

    {AbusiveExperienceHeuristic::kDidWindowOpenFromAdScriptNameHash, AbusiveExperienceHeuristic::kDidWindowOpenFromAdScriptName},

    {AbusiveExperienceHeuristic::kDidWindowOpenFromAdSubframeNameHash, AbusiveExperienceHeuristic::kDidWindowOpenFromAdSubframeName},

        }
      }
    },

    {
      UINT64_C(2140536877907621174),
      {
        AbusiveExperienceHeuristic_JavaScriptDialog::kEntryName,
        {
          
    {AbusiveExperienceHeuristic_JavaScriptDialog::kDismissalCauseNameHash, AbusiveExperienceHeuristic_JavaScriptDialog::kDismissalCauseName},

        }
      }
    },

    {
      UINT64_C(14027824048938333848),
      {
        AbusiveExperienceHeuristic_TabUnder::kEntryName,
        {
          
    {AbusiveExperienceHeuristic_TabUnder::kDidTabUnderNameHash, AbusiveExperienceHeuristic_TabUnder::kDidTabUnderName},

        }
      }
    },

    {
      UINT64_C(9914911288513336680),
      {
        AbusiveExperienceHeuristic_WindowOpen::kEntryName,
        {
          
    {AbusiveExperienceHeuristic_WindowOpen::kFromAdScriptNameHash, AbusiveExperienceHeuristic_WindowOpen::kFromAdScriptName},

    {AbusiveExperienceHeuristic_WindowOpen::kFromAdSubframeNameHash, AbusiveExperienceHeuristic_WindowOpen::kFromAdSubframeName},

        }
      }
    },

    {
      UINT64_C(897698866892786861),
      {
        AdPageLoad::kEntryName,
        {
          
    {AdPageLoad::kAdBytesNameHash, AdPageLoad::kAdBytesName},

    {AdPageLoad::kAdBytesPerSecondNameHash, AdPageLoad::kAdBytesPerSecondName},

    {AdPageLoad::kAdBytesPerSecondAfterInteractiveNameHash, AdPageLoad::kAdBytesPerSecondAfterInteractiveName},

    {AdPageLoad::kAdCpuTimeNameHash, AdPageLoad::kAdCpuTimeName},

    {AdPageLoad::kAdJavascriptBytesNameHash, AdPageLoad::kAdJavascriptBytesName},

    {AdPageLoad::kAdVideoBytesNameHash, AdPageLoad::kAdVideoBytesName},

    {AdPageLoad::kTotalBytesNameHash, AdPageLoad::kTotalBytesName},

        }
      }
    },

    {
      UINT64_C(15288827799554694614),
      {
        AmpPageLoad::kEntryName,
        {
          
    {AmpPageLoad::kMainFrameAmpPageLoadNameHash, AmpPageLoad::kMainFrameAmpPageLoadName},

    {AmpPageLoad::kSubFrame_InteractiveTiming_FirstInputDelay3NameHash, AmpPageLoad::kSubFrame_InteractiveTiming_FirstInputDelay3Name},

    {AmpPageLoad::kSubFrame_LayoutStability_JankScoreNameHash, AmpPageLoad::kSubFrame_LayoutStability_JankScoreName},

    {AmpPageLoad::kSubFrame_MainFrameToSubFrameNavigationDeltaNameHash, AmpPageLoad::kSubFrame_MainFrameToSubFrameNavigationDeltaName},

    {AmpPageLoad::kSubFrame_PaintTiming_NavigationToFirstContentfulPaintNameHash, AmpPageLoad::kSubFrame_PaintTiming_NavigationToFirstContentfulPaintName},

    {AmpPageLoad::kSubFrame_PaintTiming_NavigationToLargestContentPaintNameHash, AmpPageLoad::kSubFrame_PaintTiming_NavigationToLargestContentPaintName},

    {AmpPageLoad::kSubFrameAmpPageLoadNameHash, AmpPageLoad::kSubFrameAmpPageLoadName},

        }
      }
    },

    {
      UINT64_C(4589718692267131532),
      {
        AppListAppClickData::kEntryName,
        {
          
    {AppListAppClickData::kAppLaunchIdNameHash, AppListAppClickData::kAppLaunchIdName},

    {AppListAppClickData::kAppTypeNameHash, AppListAppClickData::kAppTypeName},

    {AppListAppClickData::kClicksEachHour00NameHash, AppListAppClickData::kClicksEachHour00Name},

    {AppListAppClickData::kClicksEachHour01NameHash, AppListAppClickData::kClicksEachHour01Name},

    {AppListAppClickData::kClicksEachHour02NameHash, AppListAppClickData::kClicksEachHour02Name},

    {AppListAppClickData::kClicksEachHour03NameHash, AppListAppClickData::kClicksEachHour03Name},

    {AppListAppClickData::kClicksEachHour04NameHash, AppListAppClickData::kClicksEachHour04Name},

    {AppListAppClickData::kClicksEachHour05NameHash, AppListAppClickData::kClicksEachHour05Name},

    {AppListAppClickData::kClicksEachHour06NameHash, AppListAppClickData::kClicksEachHour06Name},

    {AppListAppClickData::kClicksEachHour07NameHash, AppListAppClickData::kClicksEachHour07Name},

    {AppListAppClickData::kClicksEachHour08NameHash, AppListAppClickData::kClicksEachHour08Name},

    {AppListAppClickData::kClicksEachHour09NameHash, AppListAppClickData::kClicksEachHour09Name},

    {AppListAppClickData::kClicksEachHour10NameHash, AppListAppClickData::kClicksEachHour10Name},

    {AppListAppClickData::kClicksEachHour11NameHash, AppListAppClickData::kClicksEachHour11Name},

    {AppListAppClickData::kClicksEachHour12NameHash, AppListAppClickData::kClicksEachHour12Name},

    {AppListAppClickData::kClicksEachHour13NameHash, AppListAppClickData::kClicksEachHour13Name},

    {AppListAppClickData::kClicksEachHour14NameHash, AppListAppClickData::kClicksEachHour14Name},

    {AppListAppClickData::kClicksEachHour15NameHash, AppListAppClickData::kClicksEachHour15Name},

    {AppListAppClickData::kClicksEachHour16NameHash, AppListAppClickData::kClicksEachHour16Name},

    {AppListAppClickData::kClicksEachHour17NameHash, AppListAppClickData::kClicksEachHour17Name},

    {AppListAppClickData::kClicksEachHour18NameHash, AppListAppClickData::kClicksEachHour18Name},

    {AppListAppClickData::kClicksEachHour19NameHash, AppListAppClickData::kClicksEachHour19Name},

    {AppListAppClickData::kClicksEachHour20NameHash, AppListAppClickData::kClicksEachHour20Name},

    {AppListAppClickData::kClicksEachHour21NameHash, AppListAppClickData::kClicksEachHour21Name},

    {AppListAppClickData::kClicksEachHour22NameHash, AppListAppClickData::kClicksEachHour22Name},

    {AppListAppClickData::kClicksEachHour23NameHash, AppListAppClickData::kClicksEachHour23Name},

    {AppListAppClickData::kClicksLast24HoursNameHash, AppListAppClickData::kClicksLast24HoursName},

    {AppListAppClickData::kClicksLastHourNameHash, AppListAppClickData::kClicksLastHourName},

    {AppListAppClickData::kLastLaunchedFromNameHash, AppListAppClickData::kLastLaunchedFromName},

    {AppListAppClickData::kMostRecentlyUsedIndexNameHash, AppListAppClickData::kMostRecentlyUsedIndexName},

    {AppListAppClickData::kSequenceNumberNameHash, AppListAppClickData::kSequenceNumberName},

    {AppListAppClickData::kTimeSinceLastClickNameHash, AppListAppClickData::kTimeSinceLastClickName},

    {AppListAppClickData::kTotalClicksNameHash, AppListAppClickData::kTotalClicksName},

        }
      }
    },

    {
      UINT64_C(16635456347627451827),
      {
        AppListAppLaunch::kEntryName,
        {
          
    {AppListAppLaunch::kAllClicksLast24HoursNameHash, AppListAppLaunch::kAllClicksLast24HoursName},

    {AppListAppLaunch::kAllClicksLastHourNameHash, AppListAppLaunch::kAllClicksLastHourName},

    {AppListAppLaunch::kAppTypeNameHash, AppListAppLaunch::kAppTypeName},

    {AppListAppLaunch::kClickMethodNameHash, AppListAppLaunch::kClickMethodName},

    {AppListAppLaunch::kDayOfWeekNameHash, AppListAppLaunch::kDayOfWeekName},

    {AppListAppLaunch::kDeviceModeNameHash, AppListAppLaunch::kDeviceModeName},

    {AppListAppLaunch::kDeviceTypeNameHash, AppListAppLaunch::kDeviceTypeName},

    {AppListAppLaunch::kHourOfDayNameHash, AppListAppLaunch::kHourOfDayName},

    {AppListAppLaunch::kLaunchedFromNameHash, AppListAppLaunch::kLaunchedFromName},

    {AppListAppLaunch::kPositionIndexNameHash, AppListAppLaunch::kPositionIndexName},

    {AppListAppLaunch::kTotalHoursNameHash, AppListAppLaunch::kTotalHoursName},

        }
      }
    },

    {
      UINT64_C(3597047501124112026),
      {
        Autofill_CardUploadDecision::kEntryName,
        {
          
    {Autofill_CardUploadDecision::kUploadDecisionNameHash, Autofill_CardUploadDecision::kUploadDecisionName},

        }
      }
    },

    {
      UINT64_C(14550063303370974566),
      {
        Autofill_DeveloperEngagement::kEntryName,
        {
          
    {Autofill_DeveloperEngagement::kDeveloperEngagementNameHash, Autofill_DeveloperEngagement::kDeveloperEngagementName},

    {Autofill_DeveloperEngagement::kFormSignatureNameHash, Autofill_DeveloperEngagement::kFormSignatureName},

    {Autofill_DeveloperEngagement::kFormTypesNameHash, Autofill_DeveloperEngagement::kFormTypesName},

    {Autofill_DeveloperEngagement::kIsForCreditCardNameHash, Autofill_DeveloperEngagement::kIsForCreditCardName},

        }
      }
    },

    {
      UINT64_C(11456448948041474991),
      {
        Autofill_FieldFillStatus::kEntryName,
        {
          
    {Autofill_FieldFillStatus::kFieldSignatureNameHash, Autofill_FieldFillStatus::kFieldSignatureName},

    {Autofill_FieldFillStatus::kFormSignatureNameHash, Autofill_FieldFillStatus::kFormSignatureName},

    {Autofill_FieldFillStatus::kIsAutofilledNameHash, Autofill_FieldFillStatus::kIsAutofilledName},

    {Autofill_FieldFillStatus::kMillisecondsSinceFormParsedNameHash, Autofill_FieldFillStatus::kMillisecondsSinceFormParsedName},

    {Autofill_FieldFillStatus::kPredictionSourceNameHash, Autofill_FieldFillStatus::kPredictionSourceName},

    {Autofill_FieldFillStatus::kValidationEventNameHash, Autofill_FieldFillStatus::kValidationEventName},

    {Autofill_FieldFillStatus::kWasPreviouslyAutofilledNameHash, Autofill_FieldFillStatus::kWasPreviouslyAutofilledName},

        }
      }
    },

    {
      UINT64_C(1290380890049589579),
      {
        Autofill_FieldTypeValidation::kEntryName,
        {
          
    {Autofill_FieldTypeValidation::kActualTypeNameHash, Autofill_FieldTypeValidation::kActualTypeName},

    {Autofill_FieldTypeValidation::kFieldSignatureNameHash, Autofill_FieldTypeValidation::kFieldSignatureName},

    {Autofill_FieldTypeValidation::kFormSignatureNameHash, Autofill_FieldTypeValidation::kFormSignatureName},

    {Autofill_FieldTypeValidation::kMillisecondsSinceFormParsedNameHash, Autofill_FieldTypeValidation::kMillisecondsSinceFormParsedName},

    {Autofill_FieldTypeValidation::kPredictedTypeNameHash, Autofill_FieldTypeValidation::kPredictedTypeName},

    {Autofill_FieldTypeValidation::kPredictionSourceNameHash, Autofill_FieldTypeValidation::kPredictionSourceName},

    {Autofill_FieldTypeValidation::kValidationEventNameHash, Autofill_FieldTypeValidation::kValidationEventName},

        }
      }
    },

    {
      UINT64_C(16631655786524489525),
      {
        Autofill_FormEvent::kEntryName,
        {
          
    {Autofill_FormEvent::kAutofillFormEventNameHash, Autofill_FormEvent::kAutofillFormEventName},

    {Autofill_FormEvent::kFormTypesNameHash, Autofill_FormEvent::kFormTypesName},

    {Autofill_FormEvent::kMillisecondsSinceFormParsedNameHash, Autofill_FormEvent::kMillisecondsSinceFormParsedName},

        }
      }
    },

    {
      UINT64_C(12791011001011085363),
      {
        Autofill_FormSubmitted::kEntryName,
        {
          
    {Autofill_FormSubmitted::kAutofillFormSubmittedStateNameHash, Autofill_FormSubmitted::kAutofillFormSubmittedStateName},

    {Autofill_FormSubmitted::kFormSignatureNameHash, Autofill_FormSubmitted::kFormSignatureName},

    {Autofill_FormSubmitted::kFormTypesNameHash, Autofill_FormSubmitted::kFormTypesName},

    {Autofill_FormSubmitted::kHasUpiVpaFieldNameHash, Autofill_FormSubmitted::kHasUpiVpaFieldName},

    {Autofill_FormSubmitted::kIsForCreditCardNameHash, Autofill_FormSubmitted::kIsForCreditCardName},

    {Autofill_FormSubmitted::kMillisecondsSinceFormParsedNameHash, Autofill_FormSubmitted::kMillisecondsSinceFormParsedName},

        }
      }
    },

    {
      UINT64_C(14481214823422924028),
      {
        Autofill_HiddenRepresentationalFieldSkipDecision::kEntryName,
        {
          
    {Autofill_HiddenRepresentationalFieldSkipDecision::kFieldOverallTypeNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kFieldOverallTypeName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kFieldSignatureNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kFieldSignatureName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kFieldTypeGroupNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kFieldTypeGroupName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kFormSignatureNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kFormSignatureName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kHeuristicTypeNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kHeuristicTypeName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kHtmlFieldModeNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kHtmlFieldModeName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kHtmlFieldTypeNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kHtmlFieldTypeName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kIsSkippedNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kIsSkippedName},

    {Autofill_HiddenRepresentationalFieldSkipDecision::kServerTypeNameHash, Autofill_HiddenRepresentationalFieldSkipDecision::kServerTypeName},

        }
      }
    },

    {
      UINT64_C(12943113565528625214),
      {
        Autofill_InteractedWithForm::kEntryName,
        {
          
    {Autofill_InteractedWithForm::kFormSignatureNameHash, Autofill_InteractedWithForm::kFormSignatureName},

    {Autofill_InteractedWithForm::kFormTypesNameHash, Autofill_InteractedWithForm::kFormTypesName},

    {Autofill_InteractedWithForm::kIsForCreditCardNameHash, Autofill_InteractedWithForm::kIsForCreditCardName},

    {Autofill_InteractedWithForm::kLocalRecordTypeCountNameHash, Autofill_InteractedWithForm::kLocalRecordTypeCountName},

    {Autofill_InteractedWithForm::kServerRecordTypeCountNameHash, Autofill_InteractedWithForm::kServerRecordTypeCountName},

        }
      }
    },

    {
      UINT64_C(10421158139944624501),
      {
        Autofill_RepeatedServerTypePredictionRationalized::kEntryName,
        {
          
    {Autofill_RepeatedServerTypePredictionRationalized::kFieldNewOverallTypeNameHash, Autofill_RepeatedServerTypePredictionRationalized::kFieldNewOverallTypeName},

    {Autofill_RepeatedServerTypePredictionRationalized::kFieldOldOverallTypeNameHash, Autofill_RepeatedServerTypePredictionRationalized::kFieldOldOverallTypeName},

    {Autofill_RepeatedServerTypePredictionRationalized::kFieldSignatureNameHash, Autofill_RepeatedServerTypePredictionRationalized::kFieldSignatureName},

    {Autofill_RepeatedServerTypePredictionRationalized::kFieldTypeGroupNameHash, Autofill_RepeatedServerTypePredictionRationalized::kFieldTypeGroupName},

    {Autofill_RepeatedServerTypePredictionRationalized::kFormSignatureNameHash, Autofill_RepeatedServerTypePredictionRationalized::kFormSignatureName},

    {Autofill_RepeatedServerTypePredictionRationalized::kHeuristicTypeNameHash, Autofill_RepeatedServerTypePredictionRationalized::kHeuristicTypeName},

    {Autofill_RepeatedServerTypePredictionRationalized::kHtmlFieldModeNameHash, Autofill_RepeatedServerTypePredictionRationalized::kHtmlFieldModeName},

    {Autofill_RepeatedServerTypePredictionRationalized::kHtmlFieldTypeNameHash, Autofill_RepeatedServerTypePredictionRationalized::kHtmlFieldTypeName},

    {Autofill_RepeatedServerTypePredictionRationalized::kServerTypeNameHash, Autofill_RepeatedServerTypePredictionRationalized::kServerTypeName},

        }
      }
    },

    {
      UINT64_C(625473411318246968),
      {
        Autofill_SelectedMaskedServerCard::kEntryName,
        {
          
    {Autofill_SelectedMaskedServerCard::kMillisecondsSinceFormParsedNameHash, Autofill_SelectedMaskedServerCard::kMillisecondsSinceFormParsedName},

        }
      }
    },

    {
      UINT64_C(17703268464688884622),
      {
        Autofill_SuggestionFilled::kEntryName,
        {
          
    {Autofill_SuggestionFilled::kFieldSignatureNameHash, Autofill_SuggestionFilled::kFieldSignatureName},

    {Autofill_SuggestionFilled::kFormSignatureNameHash, Autofill_SuggestionFilled::kFormSignatureName},

    {Autofill_SuggestionFilled::kIsForCreditCardNameHash, Autofill_SuggestionFilled::kIsForCreditCardName},

    {Autofill_SuggestionFilled::kMillisecondsSinceFormParsedNameHash, Autofill_SuggestionFilled::kMillisecondsSinceFormParsedName},

    {Autofill_SuggestionFilled::kRecordTypeNameHash, Autofill_SuggestionFilled::kRecordTypeName},

        }
      }
    },

    {
      UINT64_C(7579660929739851736),
      {
        Autofill_SuggestionsShown::kEntryName,
        {
          
    {Autofill_SuggestionsShown::kFieldSignatureNameHash, Autofill_SuggestionsShown::kFieldSignatureName},

    {Autofill_SuggestionsShown::kFormSignatureNameHash, Autofill_SuggestionsShown::kFormSignatureName},

    {Autofill_SuggestionsShown::kHeuristicTypeNameHash, Autofill_SuggestionsShown::kHeuristicTypeName},

    {Autofill_SuggestionsShown::kHtmlFieldTypeNameHash, Autofill_SuggestionsShown::kHtmlFieldTypeName},

    {Autofill_SuggestionsShown::kMillisecondsSinceFormParsedNameHash, Autofill_SuggestionsShown::kMillisecondsSinceFormParsedName},

    {Autofill_SuggestionsShown::kServerTypeNameHash, Autofill_SuggestionsShown::kServerTypeName},

        }
      }
    },

    {
      UINT64_C(8376184896509210883),
      {
        Autofill_TextFieldDidChange::kEntryName,
        {
          
    {Autofill_TextFieldDidChange::kFieldSignatureNameHash, Autofill_TextFieldDidChange::kFieldSignatureName},

    {Autofill_TextFieldDidChange::kFieldTypeGroupNameHash, Autofill_TextFieldDidChange::kFieldTypeGroupName},

    {Autofill_TextFieldDidChange::kFormSignatureNameHash, Autofill_TextFieldDidChange::kFormSignatureName},

    {Autofill_TextFieldDidChange::kHeuristicTypeNameHash, Autofill_TextFieldDidChange::kHeuristicTypeName},

    {Autofill_TextFieldDidChange::kHtmlFieldModeNameHash, Autofill_TextFieldDidChange::kHtmlFieldModeName},

    {Autofill_TextFieldDidChange::kHtmlFieldTypeNameHash, Autofill_TextFieldDidChange::kHtmlFieldTypeName},

    {Autofill_TextFieldDidChange::kIsAutofilledNameHash, Autofill_TextFieldDidChange::kIsAutofilledName},

    {Autofill_TextFieldDidChange::kIsEmptyNameHash, Autofill_TextFieldDidChange::kIsEmptyName},

    {Autofill_TextFieldDidChange::kMillisecondsSinceFormParsedNameHash, Autofill_TextFieldDidChange::kMillisecondsSinceFormParsedName},

    {Autofill_TextFieldDidChange::kServerTypeNameHash, Autofill_TextFieldDidChange::kServerTypeName},

        }
      }
    },

    {
      UINT64_C(15260645490069405494),
      {
        BackgroundFetch::kEntryName,
        {
          
    {BackgroundFetch::kDeniedDueToPermissionsNameHash, BackgroundFetch::kDeniedDueToPermissionsName},

    {BackgroundFetch::kDownloadTotalNameHash, BackgroundFetch::kDownloadTotalName},

    {BackgroundFetch::kHasTitleNameHash, BackgroundFetch::kHasTitleName},

    {BackgroundFetch::kNumIconsNameHash, BackgroundFetch::kNumIconsName},

    {BackgroundFetch::kNumRequestsInFetchNameHash, BackgroundFetch::kNumRequestsInFetchName},

    {BackgroundFetch::kRatioOfIdealToChosenIconSizeNameHash, BackgroundFetch::kRatioOfIdealToChosenIconSizeName},

        }
      }
    },

    {
      UINT64_C(2765600174500981245),
      {
        BackgroundFetchDeletingRegistration::kEntryName,
        {
          
    {BackgroundFetchDeletingRegistration::kUserInitiatedAbortNameHash, BackgroundFetchDeletingRegistration::kUserInitiatedAbortName},

        }
      }
    },

    {
      UINT64_C(7109245137155486527),
      {
        BackgroundSyncCompleted::kEntryName,
        {
          
    {BackgroundSyncCompleted::kMaxAttemptsNameHash, BackgroundSyncCompleted::kMaxAttemptsName},

    {BackgroundSyncCompleted::kNumAttemptsNameHash, BackgroundSyncCompleted::kNumAttemptsName},

    {BackgroundSyncCompleted::kStatusNameHash, BackgroundSyncCompleted::kStatusName},

        }
      }
    },

    {
      UINT64_C(3511425855963568724),
      {
        BackgroundSyncRegistered::kEntryName,
        {
          
    {BackgroundSyncRegistered::kCanFireNameHash, BackgroundSyncRegistered::kCanFireName},

    {BackgroundSyncRegistered::kIsReregisteredNameHash, BackgroundSyncRegistered::kIsReregisteredName},

        }
      }
    },

    {
      UINT64_C(397568092790313676),
      {
        Blink_UpdateTime::kEntryName,
        {
          
    {Blink_UpdateTime::kAnimateNameHash, Blink_UpdateTime::kAnimateName},

    {Blink_UpdateTime::kAnimate_AverageNameHash, Blink_UpdateTime::kAnimate_AverageName},

    {Blink_UpdateTime::kAnimate_AverageRatioNameHash, Blink_UpdateTime::kAnimate_AverageRatioName},

    {Blink_UpdateTime::kAnimate_WorstCaseNameHash, Blink_UpdateTime::kAnimate_WorstCaseName},

    {Blink_UpdateTime::kAnimate_WorstCaseRatioNameHash, Blink_UpdateTime::kAnimate_WorstCaseRatioName},

    {Blink_UpdateTime::kAnimatePercentageNameHash, Blink_UpdateTime::kAnimatePercentageName},

    {Blink_UpdateTime::kCompositingNameHash, Blink_UpdateTime::kCompositingName},

    {Blink_UpdateTime::kCompositing_AverageNameHash, Blink_UpdateTime::kCompositing_AverageName},

    {Blink_UpdateTime::kCompositing_AverageRatioNameHash, Blink_UpdateTime::kCompositing_AverageRatioName},

    {Blink_UpdateTime::kCompositing_WorstCaseNameHash, Blink_UpdateTime::kCompositing_WorstCaseName},

    {Blink_UpdateTime::kCompositing_WorstCaseRatioNameHash, Blink_UpdateTime::kCompositing_WorstCaseRatioName},

    {Blink_UpdateTime::kCompositingCommitNameHash, Blink_UpdateTime::kCompositingCommitName},

    {Blink_UpdateTime::kCompositingCommit_AverageNameHash, Blink_UpdateTime::kCompositingCommit_AverageName},

    {Blink_UpdateTime::kCompositingCommit_AverageRatioNameHash, Blink_UpdateTime::kCompositingCommit_AverageRatioName},

    {Blink_UpdateTime::kCompositingCommit_WorstCaseNameHash, Blink_UpdateTime::kCompositingCommit_WorstCaseName},

    {Blink_UpdateTime::kCompositingCommit_WorstCaseRatioNameHash, Blink_UpdateTime::kCompositingCommit_WorstCaseRatioName},

    {Blink_UpdateTime::kCompositingCommitPercentageNameHash, Blink_UpdateTime::kCompositingCommitPercentageName},

    {Blink_UpdateTime::kCompositingPercentageNameHash, Blink_UpdateTime::kCompositingPercentageName},

    {Blink_UpdateTime::kForcedStyleAndLayoutNameHash, Blink_UpdateTime::kForcedStyleAndLayoutName},

    {Blink_UpdateTime::kForcedStyleAndLayout_AverageNameHash, Blink_UpdateTime::kForcedStyleAndLayout_AverageName},

    {Blink_UpdateTime::kForcedStyleAndLayout_AverageRatioNameHash, Blink_UpdateTime::kForcedStyleAndLayout_AverageRatioName},

    {Blink_UpdateTime::kForcedStyleAndLayout_WorstCaseNameHash, Blink_UpdateTime::kForcedStyleAndLayout_WorstCaseName},

    {Blink_UpdateTime::kForcedStyleAndLayout_WorstCaseRatioNameHash, Blink_UpdateTime::kForcedStyleAndLayout_WorstCaseRatioName},

    {Blink_UpdateTime::kForcedStyleAndLayoutPercentageNameHash, Blink_UpdateTime::kForcedStyleAndLayoutPercentageName},

    {Blink_UpdateTime::kHandleInputEventsNameHash, Blink_UpdateTime::kHandleInputEventsName},

    {Blink_UpdateTime::kHandleInputEvents_AverageNameHash, Blink_UpdateTime::kHandleInputEvents_AverageName},

    {Blink_UpdateTime::kHandleInputEvents_AverageRatioNameHash, Blink_UpdateTime::kHandleInputEvents_AverageRatioName},

    {Blink_UpdateTime::kHandleInputEvents_WorstCaseNameHash, Blink_UpdateTime::kHandleInputEvents_WorstCaseName},

    {Blink_UpdateTime::kHandleInputEvents_WorstCaseRatioNameHash, Blink_UpdateTime::kHandleInputEvents_WorstCaseRatioName},

    {Blink_UpdateTime::kHandleInputEventsPercentageNameHash, Blink_UpdateTime::kHandleInputEventsPercentageName},

    {Blink_UpdateTime::kIntersectionObservationNameHash, Blink_UpdateTime::kIntersectionObservationName},

    {Blink_UpdateTime::kIntersectionObservation_AverageNameHash, Blink_UpdateTime::kIntersectionObservation_AverageName},

    {Blink_UpdateTime::kIntersectionObservation_AverageRatioNameHash, Blink_UpdateTime::kIntersectionObservation_AverageRatioName},

    {Blink_UpdateTime::kIntersectionObservation_WorstCaseNameHash, Blink_UpdateTime::kIntersectionObservation_WorstCaseName},

    {Blink_UpdateTime::kIntersectionObservation_WorstCaseRatioNameHash, Blink_UpdateTime::kIntersectionObservation_WorstCaseRatioName},

    {Blink_UpdateTime::kIntersectionObservationPercentageNameHash, Blink_UpdateTime::kIntersectionObservationPercentageName},

    {Blink_UpdateTime::kMainFrameNameHash, Blink_UpdateTime::kMainFrameName},

    {Blink_UpdateTime::kMainFrame_AverageNameHash, Blink_UpdateTime::kMainFrame_AverageName},

    {Blink_UpdateTime::kMainFrame_WorstCaseNameHash, Blink_UpdateTime::kMainFrame_WorstCaseName},

    {Blink_UpdateTime::kPaintNameHash, Blink_UpdateTime::kPaintName},

    {Blink_UpdateTime::kPaint_AverageNameHash, Blink_UpdateTime::kPaint_AverageName},

    {Blink_UpdateTime::kPaint_AverageRatioNameHash, Blink_UpdateTime::kPaint_AverageRatioName},

    {Blink_UpdateTime::kPaint_WorstCaseNameHash, Blink_UpdateTime::kPaint_WorstCaseName},

    {Blink_UpdateTime::kPaint_WorstCaseRatioNameHash, Blink_UpdateTime::kPaint_WorstCaseRatioName},

    {Blink_UpdateTime::kPaintPercentageNameHash, Blink_UpdateTime::kPaintPercentageName},

    {Blink_UpdateTime::kPrePaintNameHash, Blink_UpdateTime::kPrePaintName},

    {Blink_UpdateTime::kPrePaint_AverageNameHash, Blink_UpdateTime::kPrePaint_AverageName},

    {Blink_UpdateTime::kPrePaint_AverageRatioNameHash, Blink_UpdateTime::kPrePaint_AverageRatioName},

    {Blink_UpdateTime::kPrePaint_WorstCaseNameHash, Blink_UpdateTime::kPrePaint_WorstCaseName},

    {Blink_UpdateTime::kPrePaint_WorstCaseRatioNameHash, Blink_UpdateTime::kPrePaint_WorstCaseRatioName},

    {Blink_UpdateTime::kPrePaintPercentageNameHash, Blink_UpdateTime::kPrePaintPercentageName},

    {Blink_UpdateTime::kProxyCommitNameHash, Blink_UpdateTime::kProxyCommitName},

    {Blink_UpdateTime::kProxyCommitPercentageNameHash, Blink_UpdateTime::kProxyCommitPercentageName},

    {Blink_UpdateTime::kScrollingCoordinatorNameHash, Blink_UpdateTime::kScrollingCoordinatorName},

    {Blink_UpdateTime::kScrollingCoordinator_AverageNameHash, Blink_UpdateTime::kScrollingCoordinator_AverageName},

    {Blink_UpdateTime::kScrollingCoordinator_AverageRatioNameHash, Blink_UpdateTime::kScrollingCoordinator_AverageRatioName},

    {Blink_UpdateTime::kScrollingCoordinator_WorstCaseNameHash, Blink_UpdateTime::kScrollingCoordinator_WorstCaseName},

    {Blink_UpdateTime::kScrollingCoordinator_WorstCaseRatioNameHash, Blink_UpdateTime::kScrollingCoordinator_WorstCaseRatioName},

    {Blink_UpdateTime::kScrollingCoordinatorPercentageNameHash, Blink_UpdateTime::kScrollingCoordinatorPercentageName},

    {Blink_UpdateTime::kStyleAndLayoutNameHash, Blink_UpdateTime::kStyleAndLayoutName},

    {Blink_UpdateTime::kStyleAndLayout_AverageNameHash, Blink_UpdateTime::kStyleAndLayout_AverageName},

    {Blink_UpdateTime::kStyleAndLayout_AverageRatioNameHash, Blink_UpdateTime::kStyleAndLayout_AverageRatioName},

    {Blink_UpdateTime::kStyleAndLayout_WorstCaseNameHash, Blink_UpdateTime::kStyleAndLayout_WorstCaseName},

    {Blink_UpdateTime::kStyleAndLayout_WorstCaseRatioNameHash, Blink_UpdateTime::kStyleAndLayout_WorstCaseRatioName},

    {Blink_UpdateTime::kStyleAndLayoutPercentageNameHash, Blink_UpdateTime::kStyleAndLayoutPercentageName},

    {Blink_UpdateTime::kUpdateLayersNameHash, Blink_UpdateTime::kUpdateLayersName},

    {Blink_UpdateTime::kUpdateLayersPercentageNameHash, Blink_UpdateTime::kUpdateLayersPercentageName},

        }
      }
    },

    {
      UINT64_C(16486120572686381376),
      {
        Blink_UseCounter::kEntryName,
        {
          
    {Blink_UseCounter::kFeatureNameHash, Blink_UseCounter::kFeatureName},

    {Blink_UseCounter::kIsMainFrameFeatureNameHash, Blink_UseCounter::kIsMainFrameFeatureName},

        }
      }
    },

    {
      UINT64_C(5955161703676864089),
      {
        BloatedRenderer::kEntryName,
        {
          
    {BloatedRenderer::kV8_HeapNameHash, BloatedRenderer::kV8_HeapName},

    {BloatedRenderer::kV8_Heap_AllocatedObjectsNameHash, BloatedRenderer::kV8_Heap_AllocatedObjectsName},

    {BloatedRenderer::kV8_Heap_LimitNameHash, BloatedRenderer::kV8_Heap_LimitName},

    {BloatedRenderer::kV8_NearV8HeapLimitHandlingNameHash, BloatedRenderer::kV8_NearV8HeapLimitHandlingName},

        }
      }
    },

    {
      UINT64_C(18003859069234917647),
      {
        Compositor_Rendering::kEntryName,
        {
          
    {Compositor_Rendering::kCheckerboardedImagesCountNameHash, Compositor_Rendering::kCheckerboardedImagesCountName},

        }
      }
    },

    {
      UINT64_C(3378172330402895005),
      {
        Compositor_UserInteraction::kEntryName,
        {
          
    {Compositor_UserInteraction::kCheckerboardedContentAreaNameHash, Compositor_UserInteraction::kCheckerboardedContentAreaName},

    {Compositor_UserInteraction::kCheckerboardedContentAreaRatioNameHash, Compositor_UserInteraction::kCheckerboardedContentAreaRatioName},

    {Compositor_UserInteraction::kCheckerboardedImagesCountNameHash, Compositor_UserInteraction::kCheckerboardedImagesCountName},

    {Compositor_UserInteraction::kNumMissingTilesNameHash, Compositor_UserInteraction::kNumMissingTilesName},

        }
      }
    },

    {
      UINT64_C(14879419826968794335),
      {
        ContextualSearch::kEntryName,
        {
          
    {ContextualSearch::kDidOptInNameHash, ContextualSearch::kDidOptInName},

    {ContextualSearch::kDurationAfterScrollMsNameHash, ContextualSearch::kDurationAfterScrollMsName},

    {ContextualSearch::kEntityImpressionsCountNameHash, ContextualSearch::kEntityImpressionsCountName},

    {ContextualSearch::kEntityOpensCountNameHash, ContextualSearch::kEntityOpensCountName},

    {ContextualSearch::kFontSizeNameHash, ContextualSearch::kFontSizeName},

    {ContextualSearch::kIsEntityNameHash, ContextualSearch::kIsEntityName},

    {ContextualSearch::kIsEntityEligibleNameHash, ContextualSearch::kIsEntityEligibleName},

    {ContextualSearch::kIsHttpNameHash, ContextualSearch::kIsHttpName},

    {ContextualSearch::kIsLanguageMismatchNameHash, ContextualSearch::kIsLanguageMismatchName},

    {ContextualSearch::kIsLongWordNameHash, ContextualSearch::kIsLongWordName},

    {ContextualSearch::kIsSecondTapOverrideNameHash, ContextualSearch::kIsSecondTapOverrideName},

    {ContextualSearch::kIsShortWordNameHash, ContextualSearch::kIsShortWordName},

    {ContextualSearch::kIsWordEdgeNameHash, ContextualSearch::kIsWordEdgeName},

    {ContextualSearch::kOpenCountNameHash, ContextualSearch::kOpenCountName},

    {ContextualSearch::kOutcomeRankerDidPredictNameHash, ContextualSearch::kOutcomeRankerDidPredictName},

    {ContextualSearch::kOutcomeRankerPredictionNameHash, ContextualSearch::kOutcomeRankerPredictionName},

    {ContextualSearch::kOutcomeRankerPredictionScoreNameHash, ContextualSearch::kOutcomeRankerPredictionScoreName},

    {ContextualSearch::kOutcomeWasCardsDataShownNameHash, ContextualSearch::kOutcomeWasCardsDataShownName},

    {ContextualSearch::kOutcomeWasPanelOpenedNameHash, ContextualSearch::kOutcomeWasPanelOpenedName},

    {ContextualSearch::kOutcomeWasQuickActionClickedNameHash, ContextualSearch::kOutcomeWasQuickActionClickedName},

    {ContextualSearch::kOutcomeWasQuickAnswerSeenNameHash, ContextualSearch::kOutcomeWasQuickAnswerSeenName},

    {ContextualSearch::kPortionOfElementNameHash, ContextualSearch::kPortionOfElementName},

    {ContextualSearch::kPrevious28DayCtrPercentNameHash, ContextualSearch::kPrevious28DayCtrPercentName},

    {ContextualSearch::kPrevious28DayImpressionsCountNameHash, ContextualSearch::kPrevious28DayImpressionsCountName},

    {ContextualSearch::kPreviousWeekCtrPercentNameHash, ContextualSearch::kPreviousWeekCtrPercentName},

    {ContextualSearch::kPreviousWeekImpressionsCountNameHash, ContextualSearch::kPreviousWeekImpressionsCountName},

    {ContextualSearch::kQuickActionImpressionsCountNameHash, ContextualSearch::kQuickActionImpressionsCountName},

    {ContextualSearch::kQuickActionsIgnoredNameHash, ContextualSearch::kQuickActionsIgnoredName},

    {ContextualSearch::kQuickActionsTakenNameHash, ContextualSearch::kQuickActionsTakenName},

    {ContextualSearch::kQuickAnswerCountNameHash, ContextualSearch::kQuickAnswerCountName},

    {ContextualSearch::kScreenTopDpsNameHash, ContextualSearch::kScreenTopDpsName},

    {ContextualSearch::kTapCountNameHash, ContextualSearch::kTapCountName},

    {ContextualSearch::kTapDurationMsNameHash, ContextualSearch::kTapDurationMsName},

    {ContextualSearch::kWasScreenBottomNameHash, ContextualSearch::kWasScreenBottomName},

        }
      }
    },

    {
      UINT64_C(93819929085085325),
      {
        ContextualSuggestions::kEntryName,
        {
          
    {ContextualSuggestions::kAnyDownloadedNameHash, ContextualSuggestions::kAnyDownloadedName},

    {ContextualSuggestions::kAnySuggestionTakenNameHash, ContextualSuggestions::kAnySuggestionTakenName},

    {ContextualSuggestions::kClosedFromPeekNameHash, ContextualSuggestions::kClosedFromPeekName},

    {ContextualSuggestions::kEverOpenedNameHash, ContextualSuggestions::kEverOpenedName},

    {ContextualSuggestions::kFetchStateNameHash, ContextualSuggestions::kFetchStateName},

    {ContextualSuggestions::kShowDurationBucketMinNameHash, ContextualSuggestions::kShowDurationBucketMinName},

    {ContextualSuggestions::kTriggerEventNameHash, ContextualSuggestions::kTriggerEventName},

        }
      }
    },

    {
      UINT64_C(988984496812825435),
      {
        CPUUsageMeasurement::kEntryName,
        {
          
    {CPUUsageMeasurement::kCPUUsageNameHash, CPUUsageMeasurement::kCPUUsageName},

    {CPUUsageMeasurement::kEventTypeNameHash, CPUUsageMeasurement::kEventTypeName},

    {CPUUsageMeasurement::kIsVisibleNameHash, CPUUsageMeasurement::kIsVisibleName},

    {CPUUsageMeasurement::kNumberOfCoresidentTabsNameHash, CPUUsageMeasurement::kNumberOfCoresidentTabsName},

    {CPUUsageMeasurement::kObservationWindowSizeMsNameHash, CPUUsageMeasurement::kObservationWindowSizeMsName},

    {CPUUsageMeasurement::kProcessUptimeMsNameHash, CPUUsageMeasurement::kProcessUptimeMsName},

        }
      }
    },

    {
      UINT64_C(17687503538123373506),
      {
        Document_OutliveTimeAfterShutdown::kEntryName,
        {
          
    {Document_OutliveTimeAfterShutdown::kGCCountNameHash, Document_OutliveTimeAfterShutdown::kGCCountName},

        }
      }
    },

    {
      UINT64_C(2704655726834470033),
      {
        DocumentCreated::kEntryName,
        {
          
    {DocumentCreated::kIsCrossOriginFrameNameHash, DocumentCreated::kIsCrossOriginFrameName},

    {DocumentCreated::kIsMainFrameNameHash, DocumentCreated::kIsMainFrameName},

    {DocumentCreated::kNavigationSourceIdNameHash, DocumentCreated::kNavigationSourceIdName},

        }
      }
    },

    {
      UINT64_C(9818692869640581957),
      {
        Download_Completed::kEntryName,
        {
          
    {Download_Completed::kBytesWastedNameHash, Download_Completed::kBytesWastedName},

    {Download_Completed::kDownloadIdNameHash, Download_Completed::kDownloadIdName},

    {Download_Completed::kResultingFileSizeNameHash, Download_Completed::kResultingFileSizeName},

    {Download_Completed::kTimeSinceStartNameHash, Download_Completed::kTimeSinceStartName},

        }
      }
    },

    {
      UINT64_C(9706055097174303),
      {
        Download_Interrupted::kEntryName,
        {
          
    {Download_Interrupted::kBytesWastedNameHash, Download_Interrupted::kBytesWastedName},

    {Download_Interrupted::kChangeInFileSizeNameHash, Download_Interrupted::kChangeInFileSizeName},

    {Download_Interrupted::kDownloadIdNameHash, Download_Interrupted::kDownloadIdName},

    {Download_Interrupted::kReasonNameHash, Download_Interrupted::kReasonName},

    {Download_Interrupted::kResultingFileSizeNameHash, Download_Interrupted::kResultingFileSizeName},

    {Download_Interrupted::kTimeSinceStartNameHash, Download_Interrupted::kTimeSinceStartName},

        }
      }
    },

    {
      UINT64_C(9188207819461355990),
      {
        Download_Resumed::kEntryName,
        {
          
    {Download_Resumed::kDownloadIdNameHash, Download_Resumed::kDownloadIdName},

    {Download_Resumed::kModeNameHash, Download_Resumed::kModeName},

    {Download_Resumed::kTimeSinceStartNameHash, Download_Resumed::kTimeSinceStartName},

        }
      }
    },

    {
      UINT64_C(2153997617158303225),
      {
        Download_Started::kEntryName,
        {
          
    {Download_Started::kDownloadConnectionSecurityNameHash, Download_Started::kDownloadConnectionSecurityName},

    {Download_Started::kDownloadIdNameHash, Download_Started::kDownloadIdName},

    {Download_Started::kDownloadSourceNameHash, Download_Started::kDownloadSourceName},

    {Download_Started::kFileTypeNameHash, Download_Started::kFileTypeName},

    {Download_Started::kIsSameHostDownloadNameHash, Download_Started::kIsSameHostDownloadName},

        }
      }
    },

    {
      UINT64_C(12255255036748617486),
      {
        Event_ScrollBegin_Touch::kEntryName,
        {
          
    {Event_ScrollBegin_Touch::kIsMainThreadNameHash, Event_ScrollBegin_Touch::kIsMainThreadName},

    {Event_ScrollBegin_Touch::kTimeToHandledNameHash, Event_ScrollBegin_Touch::kTimeToHandledName},

    {Event_ScrollBegin_Touch::kTimeToScrollUpdateSwapBeginNameHash, Event_ScrollBegin_Touch::kTimeToScrollUpdateSwapBeginName},

        }
      }
    },

    {
      UINT64_C(15188233126885586509),
      {
        Event_ScrollBegin_Wheel::kEntryName,
        {
          
    {Event_ScrollBegin_Wheel::kIsMainThreadNameHash, Event_ScrollBegin_Wheel::kIsMainThreadName},

    {Event_ScrollBegin_Wheel::kTimeToHandledNameHash, Event_ScrollBegin_Wheel::kTimeToHandledName},

    {Event_ScrollBegin_Wheel::kTimeToScrollUpdateSwapBeginNameHash, Event_ScrollBegin_Wheel::kTimeToScrollUpdateSwapBeginName},

        }
      }
    },

    {
      UINT64_C(7257623327097011244),
      {
        Event_ScrollUpdate_Touch::kEntryName,
        {
          
    {Event_ScrollUpdate_Touch::kIsMainThreadNameHash, Event_ScrollUpdate_Touch::kIsMainThreadName},

    {Event_ScrollUpdate_Touch::kTimeToHandledNameHash, Event_ScrollUpdate_Touch::kTimeToHandledName},

    {Event_ScrollUpdate_Touch::kTimeToScrollUpdateSwapBeginNameHash, Event_ScrollUpdate_Touch::kTimeToScrollUpdateSwapBeginName},

        }
      }
    },

    {
      UINT64_C(12963707033129547010),
      {
        Event_ScrollUpdate_Wheel::kEntryName,
        {
          
    {Event_ScrollUpdate_Wheel::kIsMainThreadNameHash, Event_ScrollUpdate_Wheel::kIsMainThreadName},

    {Event_ScrollUpdate_Wheel::kTimeToHandledNameHash, Event_ScrollUpdate_Wheel::kTimeToHandledName},

    {Event_ScrollUpdate_Wheel::kTimeToScrollUpdateSwapBeginNameHash, Event_ScrollUpdate_Wheel::kTimeToScrollUpdateSwapBeginName},

        }
      }
    },

    {
      UINT64_C(17985071802125984440),
      {
        HistoryManipulationIntervention::kEntryName,
        {
          
        }
      }
    },

    {
      UINT64_C(6390056345493314213),
      {
        HistoryNavigation::kEntryName,
        {
          
    {HistoryNavigation::kCrossOriginSubframesFeaturesNameHash, HistoryNavigation::kCrossOriginSubframesFeaturesName},

    {HistoryNavigation::kLastCommittedSourceIdForTheSameDocumentNameHash, HistoryNavigation::kLastCommittedSourceIdForTheSameDocumentName},

    {HistoryNavigation::kMainFrameFeaturesNameHash, HistoryNavigation::kMainFrameFeaturesName},

    {HistoryNavigation::kNavigatedToTheMostRecentEntryForDocumentNameHash, HistoryNavigation::kNavigatedToTheMostRecentEntryForDocumentName},

    {HistoryNavigation::kSameOriginSubframesFeaturesNameHash, HistoryNavigation::kSameOriginSubframesFeaturesName},

    {HistoryNavigation::kTimeSinceNavigatedAwayFromDocumentNameHash, HistoryNavigation::kTimeSinceNavigatedAwayFromDocumentName},

        }
      }
    },

    {
      UINT64_C(10386387717857957103),
      {
        Intervention_DocumentWrite_ScriptBlock::kEntryName,
        {
          
    {Intervention_DocumentWrite_ScriptBlock::kDisabled_ReloadNameHash, Intervention_DocumentWrite_ScriptBlock::kDisabled_ReloadName},

    {Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteNameHash, Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptExecutionFromDocumentWriteName},

    {Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteNameHash, Intervention_DocumentWrite_ScriptBlock::kParseTiming_ParseBlockedOnScriptLoadFromDocumentWriteName},

        }
      }
    },

    {
      UINT64_C(3999691266874322037),
      {
        IOS_FindInPageSearchMatches::kEntryName,
        {
          
    {IOS_FindInPageSearchMatches::kHasMatchesNameHash, IOS_FindInPageSearchMatches::kHasMatchesName},

        }
      }
    },

    {
      UINT64_C(18173210514398479989),
      {
        IOS_URLMismatchInLegacyAndSlimNavigationManager::kEntryName,
        {
          
    {IOS_URLMismatchInLegacyAndSlimNavigationManager::kHasMismatchNameHash, IOS_URLMismatchInLegacyAndSlimNavigationManager::kHasMismatchName},

        }
      }
    },

    {
      UINT64_C(1389206047285929549),
      {
        Layout_DisplayCutout_StateChanged::kEntryName,
        {
          
    {Layout_DisplayCutout_StateChanged::kIsMainFrameNameHash, Layout_DisplayCutout_StateChanged::kIsMainFrameName},

    {Layout_DisplayCutout_StateChanged::kSafeAreasPresentNameHash, Layout_DisplayCutout_StateChanged::kSafeAreasPresentName},

    {Layout_DisplayCutout_StateChanged::kViewportFit_AppliedNameHash, Layout_DisplayCutout_StateChanged::kViewportFit_AppliedName},

    {Layout_DisplayCutout_StateChanged::kViewportFit_IgnoredReasonNameHash, Layout_DisplayCutout_StateChanged::kViewportFit_IgnoredReasonName},

    {Layout_DisplayCutout_StateChanged::kViewportFit_SuppliedNameHash, Layout_DisplayCutout_StateChanged::kViewportFit_SuppliedName},

        }
      }
    },

    {
      UINT64_C(5563841616204153427),
      {
        LocalNetworkRequests::kEntryName,
        {
          
    {LocalNetworkRequests::kCount_FailedNameHash, LocalNetworkRequests::kCount_FailedName},

    {LocalNetworkRequests::kCount_SuccessfulNameHash, LocalNetworkRequests::kCount_SuccessfulName},

    {LocalNetworkRequests::kPortTypeNameHash, LocalNetworkRequests::kPortTypeName},

    {LocalNetworkRequests::kResourceTypeNameHash, LocalNetworkRequests::kResourceTypeName},

        }
      }
    },

    {
      UINT64_C(6455694443766360259),
      {
        LookalikeUrl_NavigationSuggestion::kEntryName,
        {
          
    {LookalikeUrl_NavigationSuggestion::kMatchTypeNameHash, LookalikeUrl_NavigationSuggestion::kMatchTypeName},

    {LookalikeUrl_NavigationSuggestion::kUserActionNameHash, LookalikeUrl_NavigationSuggestion::kUserActionName},

        }
      }
    },

    {
      UINT64_C(9151661124003981795),
      {
        MainFrameDownload::kEntryName,
        {
          
    {MainFrameDownload::kHasGestureNameHash, MainFrameDownload::kHasGestureName},

    {MainFrameDownload::kHasSandboxNameHash, MainFrameDownload::kHasSandboxName},

        }
      }
    },

    {
      UINT64_C(15357501003006382777),
      {
        Media_Autoplay_Attempt::kEntryName,
        {
          
    {Media_Autoplay_Attempt::kAudioTrackNameHash, Media_Autoplay_Attempt::kAudioTrackName},

    {Media_Autoplay_Attempt::kHighMediaEngagementNameHash, Media_Autoplay_Attempt::kHighMediaEngagementName},

    {Media_Autoplay_Attempt::kMutedNameHash, Media_Autoplay_Attempt::kMutedName},

    {Media_Autoplay_Attempt::kSourceNameHash, Media_Autoplay_Attempt::kSourceName},

    {Media_Autoplay_Attempt::kUserGestureRequiredNameHash, Media_Autoplay_Attempt::kUserGestureRequiredName},

    {Media_Autoplay_Attempt::kUserGestureStatusNameHash, Media_Autoplay_Attempt::kUserGestureStatusName},

    {Media_Autoplay_Attempt::kVideoTrackNameHash, Media_Autoplay_Attempt::kVideoTrackName},

        }
      }
    },

    {
      UINT64_C(2039378813737092278),
      {
        Media_Autoplay_AudioContext::kEntryName,
        {
          
    {Media_Autoplay_AudioContext::kSourceNodeStartedNameHash, Media_Autoplay_AudioContext::kSourceNodeStartedName},

    {Media_Autoplay_AudioContext::kStatusNameHash, Media_Autoplay_AudioContext::kStatusName},

    {Media_Autoplay_AudioContext::kUnlockTypeNameHash, Media_Autoplay_AudioContext::kUnlockTypeName},

        }
      }
    },

    {
      UINT64_C(3015822386723746523),
      {
        Media_Autoplay_Muted_UnmuteAction::kEntryName,
        {
          
    {Media_Autoplay_Muted_UnmuteAction::kResultNameHash, Media_Autoplay_Muted_UnmuteAction::kResultName},

    {Media_Autoplay_Muted_UnmuteAction::kSourceNameHash, Media_Autoplay_Muted_UnmuteAction::kSourceName},

        }
      }
    },

    {
      UINT64_C(8416658001170131658),
      {
        Media_BasicPlayback::kEntryName,
        {
          
    {Media_BasicPlayback::kAudioCodecNameHash, Media_BasicPlayback::kAudioCodecName},

    {Media_BasicPlayback::kAudioDecoderNameNameHash, Media_BasicPlayback::kAudioDecoderNameName},

    {Media_BasicPlayback::kAudioEncryptionSchemeNameHash, Media_BasicPlayback::kAudioEncryptionSchemeName},

    {Media_BasicPlayback::kAutoplayInitiatedNameHash, Media_BasicPlayback::kAutoplayInitiatedName},

    {Media_BasicPlayback::kDurationNameHash, Media_BasicPlayback::kDurationName},

    {Media_BasicPlayback::kHasAudioNameHash, Media_BasicPlayback::kHasAudioName},

    {Media_BasicPlayback::kHasVideoNameHash, Media_BasicPlayback::kHasVideoName},

    {Media_BasicPlayback::kIsBackgroundNameHash, Media_BasicPlayback::kIsBackgroundName},

    {Media_BasicPlayback::kIsEMENameHash, Media_BasicPlayback::kIsEMEName},

    {Media_BasicPlayback::kIsMSENameHash, Media_BasicPlayback::kIsMSEName},

    {Media_BasicPlayback::kIsMutedNameHash, Media_BasicPlayback::kIsMutedName},

    {Media_BasicPlayback::kIsTopFrameNameHash, Media_BasicPlayback::kIsTopFrameName},

    {Media_BasicPlayback::kLastPipelineStatusNameHash, Media_BasicPlayback::kLastPipelineStatusName},

    {Media_BasicPlayback::kMeanTimeBetweenRebuffersNameHash, Media_BasicPlayback::kMeanTimeBetweenRebuffersName},

    {Media_BasicPlayback::kPlayerIDNameHash, Media_BasicPlayback::kPlayerIDName},

    {Media_BasicPlayback::kRebuffersCountNameHash, Media_BasicPlayback::kRebuffersCountName},

    {Media_BasicPlayback::kVideoCodecNameHash, Media_BasicPlayback::kVideoCodecName},

    {Media_BasicPlayback::kVideoDecoderNameNameHash, Media_BasicPlayback::kVideoDecoderNameName},

    {Media_BasicPlayback::kVideoEncryptionSchemeNameHash, Media_BasicPlayback::kVideoEncryptionSchemeName},

    {Media_BasicPlayback::kVideoNaturalHeightNameHash, Media_BasicPlayback::kVideoNaturalHeightName},

    {Media_BasicPlayback::kVideoNaturalWidthNameHash, Media_BasicPlayback::kVideoNaturalWidthName},

    {Media_BasicPlayback::kWatchTimeNameHash, Media_BasicPlayback::kWatchTimeName},

    {Media_BasicPlayback::kWatchTime_ACNameHash, Media_BasicPlayback::kWatchTime_ACName},

    {Media_BasicPlayback::kWatchTime_BatteryNameHash, Media_BasicPlayback::kWatchTime_BatteryName},

    {Media_BasicPlayback::kWatchTime_DisplayFullscreenNameHash, Media_BasicPlayback::kWatchTime_DisplayFullscreenName},

    {Media_BasicPlayback::kWatchTime_DisplayInlineNameHash, Media_BasicPlayback::kWatchTime_DisplayInlineName},

    {Media_BasicPlayback::kWatchTime_DisplayPictureInPictureNameHash, Media_BasicPlayback::kWatchTime_DisplayPictureInPictureName},

    {Media_BasicPlayback::kWatchTime_NativeControlsOffNameHash, Media_BasicPlayback::kWatchTime_NativeControlsOffName},

    {Media_BasicPlayback::kWatchTime_NativeControlsOnNameHash, Media_BasicPlayback::kWatchTime_NativeControlsOnName},

        }
      }
    },

    {
      UINT64_C(14018069268047764723),
      {
        Media_EME_RequestMediaKeySystemAccess::kEntryName,
        {
          
    {Media_EME_RequestMediaKeySystemAccess::kKeySystemNameHash, Media_EME_RequestMediaKeySystemAccess::kKeySystemName},

    {Media_EME_RequestMediaKeySystemAccess::kVideoCapabilitiesNameHash, Media_EME_RequestMediaKeySystemAccess::kVideoCapabilitiesName},

    {Media_EME_RequestMediaKeySystemAccess::kVideoCapabilities_HasEmptyRobustnessNameHash, Media_EME_RequestMediaKeySystemAccess::kVideoCapabilities_HasEmptyRobustnessName},

    {Media_EME_RequestMediaKeySystemAccess::kVideoCapabilities_HasHwSecureAllRobustnessNameHash, Media_EME_RequestMediaKeySystemAccess::kVideoCapabilities_HasHwSecureAllRobustnessName},

        }
      }
    },

    {
      UINT64_C(886585293387977076),
      {
        Media_Engagement_SessionFinished::kEntryName,
        {
          
    {Media_Engagement_SessionFinished::kEngagement_IsHighNameHash, Media_Engagement_SessionFinished::kEngagement_IsHighName},

    {Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangedNameHash, Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangedName},

    {Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangesNameHash, Media_Engagement_SessionFinished::kEngagement_IsHigh_ChangesName},

    {Media_Engagement_SessionFinished::kEngagement_IsPreloadedNameHash, Media_Engagement_SessionFinished::kEngagement_IsPreloadedName},

    {Media_Engagement_SessionFinished::kEngagement_ScoreNameHash, Media_Engagement_SessionFinished::kEngagement_ScoreName},

    {Media_Engagement_SessionFinished::kPlaybacks_AudioContextTotalNameHash, Media_Engagement_SessionFinished::kPlaybacks_AudioContextTotalName},

    {Media_Engagement_SessionFinished::kPlaybacks_DeltaNameHash, Media_Engagement_SessionFinished::kPlaybacks_DeltaName},

    {Media_Engagement_SessionFinished::kPlaybacks_MediaElementTotalNameHash, Media_Engagement_SessionFinished::kPlaybacks_MediaElementTotalName},

    {Media_Engagement_SessionFinished::kPlaybacks_SecondsSinceLastNameHash, Media_Engagement_SessionFinished::kPlaybacks_SecondsSinceLastName},

    {Media_Engagement_SessionFinished::kPlaybacks_TotalNameHash, Media_Engagement_SessionFinished::kPlaybacks_TotalName},

    {Media_Engagement_SessionFinished::kPlayer_Audible_DeltaNameHash, Media_Engagement_SessionFinished::kPlayer_Audible_DeltaName},

    {Media_Engagement_SessionFinished::kPlayer_Audible_TotalNameHash, Media_Engagement_SessionFinished::kPlayer_Audible_TotalName},

    {Media_Engagement_SessionFinished::kPlayer_Significant_DeltaNameHash, Media_Engagement_SessionFinished::kPlayer_Significant_DeltaName},

    {Media_Engagement_SessionFinished::kPlayer_Significant_TotalNameHash, Media_Engagement_SessionFinished::kPlayer_Significant_TotalName},

    {Media_Engagement_SessionFinished::kVisits_TotalNameHash, Media_Engagement_SessionFinished::kVisits_TotalName},

        }
      }
    },

    {
      UINT64_C(13016590436839167921),
      {
        Media_Engagement_ShortPlaybackIgnored::kEntryName,
        {
          
    {Media_Engagement_ShortPlaybackIgnored::kLengthNameHash, Media_Engagement_ShortPlaybackIgnored::kLengthName},

        }
      }
    },

    {
      UINT64_C(9485702385711484844),
      {
        Media_SiteMuted::kEntryName,
        {
          
    {Media_SiteMuted::kMuteReasonNameHash, Media_SiteMuted::kMuteReasonName},

        }
      }
    },

    {
      UINT64_C(4207699002180294249),
      {
        Media_VideoDecodePerfRecord::kEntryName,
        {
          
    {Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsPowerEfficientNameHash, Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsPowerEfficientName},

    {Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsSmoothNameHash, Media_VideoDecodePerfRecord::kPerf_ApiWouldClaimIsSmoothName},

    {Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDecodedNameHash, Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDecodedName},

    {Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDroppedNameHash, Media_VideoDecodePerfRecord::kPerf_PastVideoFramesDroppedName},

    {Media_VideoDecodePerfRecord::kPerf_PastVideoFramesPowerEfficientNameHash, Media_VideoDecodePerfRecord::kPerf_PastVideoFramesPowerEfficientName},

    {Media_VideoDecodePerfRecord::kPerf_RecordIsPowerEfficientNameHash, Media_VideoDecodePerfRecord::kPerf_RecordIsPowerEfficientName},

    {Media_VideoDecodePerfRecord::kPerf_RecordIsSmoothNameHash, Media_VideoDecodePerfRecord::kPerf_RecordIsSmoothName},

    {Media_VideoDecodePerfRecord::kPerf_VideoFramesDecodedNameHash, Media_VideoDecodePerfRecord::kPerf_VideoFramesDecodedName},

    {Media_VideoDecodePerfRecord::kPerf_VideoFramesDroppedNameHash, Media_VideoDecodePerfRecord::kPerf_VideoFramesDroppedName},

    {Media_VideoDecodePerfRecord::kPerf_VideoFramesPowerEfficientNameHash, Media_VideoDecodePerfRecord::kPerf_VideoFramesPowerEfficientName},

    {Media_VideoDecodePerfRecord::kVideo_CodecProfileNameHash, Media_VideoDecodePerfRecord::kVideo_CodecProfileName},

    {Media_VideoDecodePerfRecord::kVideo_EME_KeySystemNameHash, Media_VideoDecodePerfRecord::kVideo_EME_KeySystemName},

    {Media_VideoDecodePerfRecord::kVideo_EME_UseHwSecureCodecsNameHash, Media_VideoDecodePerfRecord::kVideo_EME_UseHwSecureCodecsName},

    {Media_VideoDecodePerfRecord::kVideo_FramesPerSecondNameHash, Media_VideoDecodePerfRecord::kVideo_FramesPerSecondName},

    {Media_VideoDecodePerfRecord::kVideo_InTopFrameNameHash, Media_VideoDecodePerfRecord::kVideo_InTopFrameName},

    {Media_VideoDecodePerfRecord::kVideo_NaturalHeightNameHash, Media_VideoDecodePerfRecord::kVideo_NaturalHeightName},

    {Media_VideoDecodePerfRecord::kVideo_NaturalWidthNameHash, Media_VideoDecodePerfRecord::kVideo_NaturalWidthName},

    {Media_VideoDecodePerfRecord::kVideo_PlayerIDNameHash, Media_VideoDecodePerfRecord::kVideo_PlayerIDName},

        }
      }
    },

    {
      UINT64_C(9541229379229095829),
      {
        Media_WatchTime::kEntryName,
        {
          
    {Media_WatchTime::kAudio_ACNameHash, Media_WatchTime::kAudio_ACName},

    {Media_WatchTime::kAudio_AllNameHash, Media_WatchTime::kAudio_AllName},

    {Media_WatchTime::kAudio_BatteryNameHash, Media_WatchTime::kAudio_BatteryName},

    {Media_WatchTime::kAudio_EMENameHash, Media_WatchTime::kAudio_EMEName},

    {Media_WatchTime::kAudio_MSENameHash, Media_WatchTime::kAudio_MSEName},

    {Media_WatchTime::kAudio_NativeControlsOffNameHash, Media_WatchTime::kAudio_NativeControlsOffName},

    {Media_WatchTime::kAudio_NativeControlsOnNameHash, Media_WatchTime::kAudio_NativeControlsOnName},

    {Media_WatchTime::kAudio_SRCNameHash, Media_WatchTime::kAudio_SRCName},

    {Media_WatchTime::kAudioVideo_ACNameHash, Media_WatchTime::kAudioVideo_ACName},

    {Media_WatchTime::kAudioVideo_AllNameHash, Media_WatchTime::kAudioVideo_AllName},

    {Media_WatchTime::kAudioVideo_Background_ACNameHash, Media_WatchTime::kAudioVideo_Background_ACName},

    {Media_WatchTime::kAudioVideo_Background_AllNameHash, Media_WatchTime::kAudioVideo_Background_AllName},

    {Media_WatchTime::kAudioVideo_Background_BatteryNameHash, Media_WatchTime::kAudioVideo_Background_BatteryName},

    {Media_WatchTime::kAudioVideo_Background_EMENameHash, Media_WatchTime::kAudioVideo_Background_EMEName},

    {Media_WatchTime::kAudioVideo_Background_MSENameHash, Media_WatchTime::kAudioVideo_Background_MSEName},

    {Media_WatchTime::kAudioVideo_Background_SRCNameHash, Media_WatchTime::kAudioVideo_Background_SRCName},

    {Media_WatchTime::kAudioVideo_BatteryNameHash, Media_WatchTime::kAudioVideo_BatteryName},

    {Media_WatchTime::kAudioVideo_DisplayFullscreenNameHash, Media_WatchTime::kAudioVideo_DisplayFullscreenName},

    {Media_WatchTime::kAudioVideo_DisplayInlineNameHash, Media_WatchTime::kAudioVideo_DisplayInlineName},

    {Media_WatchTime::kAudioVideo_DisplayPictureInPictureNameHash, Media_WatchTime::kAudioVideo_DisplayPictureInPictureName},

    {Media_WatchTime::kAudioVideo_EMENameHash, Media_WatchTime::kAudioVideo_EMEName},

    {Media_WatchTime::kAudioVideo_MSENameHash, Media_WatchTime::kAudioVideo_MSEName},

    {Media_WatchTime::kAudioVideo_NativeControlsOffNameHash, Media_WatchTime::kAudioVideo_NativeControlsOffName},

    {Media_WatchTime::kAudioVideo_NativeControlsOnNameHash, Media_WatchTime::kAudioVideo_NativeControlsOnName},

    {Media_WatchTime::kAudioVideo_SRCNameHash, Media_WatchTime::kAudioVideo_SRCName},

        }
      }
    },

    {
      UINT64_C(17314038096102597390),
      {
        Media_WebAudio_AudioContext_AudibleTime::kEntryName,
        {
          
    {Media_WebAudio_AudioContext_AudibleTime::kAudibleTimeNameHash, Media_WebAudio_AudioContext_AudibleTime::kAudibleTimeName},

    {Media_WebAudio_AudioContext_AudibleTime::kIsMainFrameNameHash, Media_WebAudio_AudioContext_AudibleTime::kIsMainFrameName},

        }
      }
    },

    {
      UINT64_C(14428460888229388079),
      {
        Media_WebMediaPlayerState::kEntryName,
        {
          
    {Media_WebMediaPlayerState::kContainerNameNameHash, Media_WebMediaPlayerState::kContainerNameName},

    {Media_WebMediaPlayerState::kFinalPipelineStatusNameHash, Media_WebMediaPlayerState::kFinalPipelineStatusName},

    {Media_WebMediaPlayerState::kIsEMENameHash, Media_WebMediaPlayerState::kIsEMEName},

    {Media_WebMediaPlayerState::kIsMSENameHash, Media_WebMediaPlayerState::kIsMSEName},

    {Media_WebMediaPlayerState::kIsTopFrameNameHash, Media_WebMediaPlayerState::kIsTopFrameName},

    {Media_WebMediaPlayerState::kPlayerIDNameHash, Media_WebMediaPlayerState::kPlayerIDName},

    {Media_WebMediaPlayerState::kTimeToFirstFrameNameHash, Media_WebMediaPlayerState::kTimeToFirstFrameName},

    {Media_WebMediaPlayerState::kTimeToMetadataNameHash, Media_WebMediaPlayerState::kTimeToMetadataName},

    {Media_WebMediaPlayerState::kTimeToPlayReadyNameHash, Media_WebMediaPlayerState::kTimeToPlayReadyName},

    {Media_WebMediaPlayerState::kURLSchemeNameHash, Media_WebMediaPlayerState::kURLSchemeName},

        }
      }
    },

    {
      UINT64_C(2958711939369432145),
      {
        Memory_Experimental::kEntryName,
        {
          
    {Memory_Experimental::kArrayBufferNameHash, Memory_Experimental::kArrayBufferName},

    {Memory_Experimental::kBlinkGCNameHash, Memory_Experimental::kBlinkGCName},

    {Memory_Experimental::kBlinkGC_AllocatedObjectsNameHash, Memory_Experimental::kBlinkGC_AllocatedObjectsName},

    {Memory_Experimental::kCommandBufferNameHash, Memory_Experimental::kCommandBufferName},

    {Memory_Experimental::kDiscardableNameHash, Memory_Experimental::kDiscardableName},

    {Memory_Experimental::kDownloadServiceNameHash, Memory_Experimental::kDownloadServiceName},

    {Memory_Experimental::kExtensions_ValueStoreNameHash, Memory_Experimental::kExtensions_ValueStoreName},

    {Memory_Experimental::kFontCachesNameHash, Memory_Experimental::kFontCachesName},

    {Memory_Experimental::kHistoryNameHash, Memory_Experimental::kHistoryName},

    {Memory_Experimental::kIsVisibleNameHash, Memory_Experimental::kIsVisibleName},

    {Memory_Experimental::kJavaHeapNameHash, Memory_Experimental::kJavaHeapName},

    {Memory_Experimental::kLevelDatabaseNameHash, Memory_Experimental::kLevelDatabaseName},

    {Memory_Experimental::kMallocNameHash, Memory_Experimental::kMallocName},

    {Memory_Experimental::kMalloc_AllocatedObjectsNameHash, Memory_Experimental::kMalloc_AllocatedObjectsName},

    {Memory_Experimental::kNetNameHash, Memory_Experimental::kNetName},

    {Memory_Experimental::kNet_UrlRequestContextNameHash, Memory_Experimental::kNet_UrlRequestContextName},

    {Memory_Experimental::kNumberOfAdSubframesNameHash, Memory_Experimental::kNumberOfAdSubframesName},

    {Memory_Experimental::kNumberOfDetachedScriptStatesNameHash, Memory_Experimental::kNumberOfDetachedScriptStatesName},

    {Memory_Experimental::kNumberOfDocumentsNameHash, Memory_Experimental::kNumberOfDocumentsName},

    {Memory_Experimental::kNumberOfExtensionsNameHash, Memory_Experimental::kNumberOfExtensionsName},

    {Memory_Experimental::kNumberOfFramesNameHash, Memory_Experimental::kNumberOfFramesName},

    {Memory_Experimental::kNumberOfLayoutObjectsNameHash, Memory_Experimental::kNumberOfLayoutObjectsName},

    {Memory_Experimental::kNumberOfMojoHandlesNameHash, Memory_Experimental::kNumberOfMojoHandlesName},

    {Memory_Experimental::kNumberOfNodesNameHash, Memory_Experimental::kNumberOfNodesName},

    {Memory_Experimental::kOmniboxSuggestionsNameHash, Memory_Experimental::kOmniboxSuggestionsName},

    {Memory_Experimental::kPartitionAllocNameHash, Memory_Experimental::kPartitionAllocName},

    {Memory_Experimental::kPartitionAlloc_AllocatedObjectsNameHash, Memory_Experimental::kPartitionAlloc_AllocatedObjectsName},

    {Memory_Experimental::kPartitionAlloc_Partitions_ArrayBufferNameHash, Memory_Experimental::kPartitionAlloc_Partitions_ArrayBufferName},

    {Memory_Experimental::kPartitionAlloc_Partitions_BufferNameHash, Memory_Experimental::kPartitionAlloc_Partitions_BufferName},

    {Memory_Experimental::kPartitionAlloc_Partitions_FastMallocNameHash, Memory_Experimental::kPartitionAlloc_Partitions_FastMallocName},

    {Memory_Experimental::kPartitionAlloc_Partitions_LayoutNameHash, Memory_Experimental::kPartitionAlloc_Partitions_LayoutName},

    {Memory_Experimental::kPrivateMemoryFootprintNameHash, Memory_Experimental::kPrivateMemoryFootprintName},

    {Memory_Experimental::kPrivateSwapFootprintNameHash, Memory_Experimental::kPrivateSwapFootprintName},

    {Memory_Experimental::kProcessTypeNameHash, Memory_Experimental::kProcessTypeName},

    {Memory_Experimental::kResidentNameHash, Memory_Experimental::kResidentName},

    {Memory_Experimental::kSharedMemoryFootprintNameHash, Memory_Experimental::kSharedMemoryFootprintName},

    {Memory_Experimental::kSiteStorageNameHash, Memory_Experimental::kSiteStorageName},

    {Memory_Experimental::kSiteStorage_BlobStorageNameHash, Memory_Experimental::kSiteStorage_BlobStorageName},

    {Memory_Experimental::kSiteStorage_IndexDBNameHash, Memory_Experimental::kSiteStorage_IndexDBName},

    {Memory_Experimental::kSiteStorage_LocalStorageNameHash, Memory_Experimental::kSiteStorage_LocalStorageName},

    {Memory_Experimental::kSiteStorage_SessionStorageNameHash, Memory_Experimental::kSiteStorage_SessionStorageName},

    {Memory_Experimental::kSkiaNameHash, Memory_Experimental::kSkiaName},

    {Memory_Experimental::kSkia_SkGlyphCacheNameHash, Memory_Experimental::kSkia_SkGlyphCacheName},

    {Memory_Experimental::kSkia_SkResourceCacheNameHash, Memory_Experimental::kSkia_SkResourceCacheName},

    {Memory_Experimental::kSqliteNameHash, Memory_Experimental::kSqliteName},

    {Memory_Experimental::kSyncNameHash, Memory_Experimental::kSyncName},

    {Memory_Experimental::kTabRestoreNameHash, Memory_Experimental::kTabRestoreName},

    {Memory_Experimental::kTimeSinceLastNavigationNameHash, Memory_Experimental::kTimeSinceLastNavigationName},

    {Memory_Experimental::kTimeSinceLastVisibilityChangeNameHash, Memory_Experimental::kTimeSinceLastVisibilityChangeName},

    {Memory_Experimental::kTotal2_PrivateMemoryFootprintNameHash, Memory_Experimental::kTotal2_PrivateMemoryFootprintName},

    {Memory_Experimental::kTotal2_SharedMemoryFootprintNameHash, Memory_Experimental::kTotal2_SharedMemoryFootprintName},

    {Memory_Experimental::kUINameHash, Memory_Experimental::kUIName},

    {Memory_Experimental::kUptimeNameHash, Memory_Experimental::kUptimeName},

    {Memory_Experimental::kV8NameHash, Memory_Experimental::kV8Name},

    {Memory_Experimental::kV8_AllocatedObjectsNameHash, Memory_Experimental::kV8_AllocatedObjectsName},

    {Memory_Experimental::kV8_MainNameHash, Memory_Experimental::kV8_MainName},

    {Memory_Experimental::kV8_Main_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_HeapNameHash, Memory_Experimental::kV8_Main_HeapName},

    {Memory_Experimental::kV8_Main_Heap_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_CodeLargeObjectSpaceNameHash, Memory_Experimental::kV8_Main_Heap_CodeLargeObjectSpaceName},

    {Memory_Experimental::kV8_Main_Heap_CodeLargeObjectSpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_CodeLargeObjectSpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_CodeSpaceNameHash, Memory_Experimental::kV8_Main_Heap_CodeSpaceName},

    {Memory_Experimental::kV8_Main_Heap_CodeSpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_CodeSpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_LargeObjectSpaceNameHash, Memory_Experimental::kV8_Main_Heap_LargeObjectSpaceName},

    {Memory_Experimental::kV8_Main_Heap_LargeObjectSpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_LargeObjectSpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_MapSpaceNameHash, Memory_Experimental::kV8_Main_Heap_MapSpaceName},

    {Memory_Experimental::kV8_Main_Heap_MapSpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_MapSpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_NewLargeObjectSpaceNameHash, Memory_Experimental::kV8_Main_Heap_NewLargeObjectSpaceName},

    {Memory_Experimental::kV8_Main_Heap_NewLargeObjectSpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_NewLargeObjectSpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_NewSpaceNameHash, Memory_Experimental::kV8_Main_Heap_NewSpaceName},

    {Memory_Experimental::kV8_Main_Heap_NewSpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_NewSpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_OldSpaceNameHash, Memory_Experimental::kV8_Main_Heap_OldSpaceName},

    {Memory_Experimental::kV8_Main_Heap_OldSpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_OldSpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_Heap_ReadOnlySpaceNameHash, Memory_Experimental::kV8_Main_Heap_ReadOnlySpaceName},

    {Memory_Experimental::kV8_Main_Heap_ReadOnlySpace_AllocatedObjectsNameHash, Memory_Experimental::kV8_Main_Heap_ReadOnlySpace_AllocatedObjectsName},

    {Memory_Experimental::kV8_Main_MallocNameHash, Memory_Experimental::kV8_Main_MallocName},

    {Memory_Experimental::kV8_WorkersNameHash, Memory_Experimental::kV8_WorkersName},

    {Memory_Experimental::kV8_Workers_AllocatedObjectsNameHash, Memory_Experimental::kV8_Workers_AllocatedObjectsName},

    {Memory_Experimental::kWebCacheNameHash, Memory_Experimental::kWebCacheName},

    {Memory_Experimental::kWebCache_CSSStylesheetResourcesNameHash, Memory_Experimental::kWebCache_CSSStylesheetResourcesName},

    {Memory_Experimental::kWebCache_EncodedSizeDuplicatedInDataUrlsNameHash, Memory_Experimental::kWebCache_EncodedSizeDuplicatedInDataUrlsName},

    {Memory_Experimental::kWebCache_FontResourcesNameHash, Memory_Experimental::kWebCache_FontResourcesName},

    {Memory_Experimental::kWebCache_ImageResourcesNameHash, Memory_Experimental::kWebCache_ImageResourcesName},

    {Memory_Experimental::kWebCache_OtherResourcesNameHash, Memory_Experimental::kWebCache_OtherResourcesName},

    {Memory_Experimental::kWebCache_ScriptResourcesNameHash, Memory_Experimental::kWebCache_ScriptResourcesName},

    {Memory_Experimental::kWebCache_V8CodeCacheNameHash, Memory_Experimental::kWebCache_V8CodeCacheName},

    {Memory_Experimental::kWebCache_XSLStylesheetResourcesNameHash, Memory_Experimental::kWebCache_XSLStylesheetResourcesName},

        }
      }
    },

    {
      UINT64_C(12430751894188593646),
      {
        Memory_TabFootprint::kEntryName,
        {
          
    {Memory_TabFootprint::kMainFrameProcessPMFNameHash, Memory_TabFootprint::kMainFrameProcessPMFName},

    {Memory_TabFootprint::kSubFrameProcessPMF_ExcludedNameHash, Memory_TabFootprint::kSubFrameProcessPMF_ExcludedName},

    {Memory_TabFootprint::kSubFrameProcessPMF_IncludedNameHash, Memory_TabFootprint::kSubFrameProcessPMF_IncludedName},

    {Memory_TabFootprint::kSubFrameProcessPMF_TotalNameHash, Memory_TabFootprint::kSubFrameProcessPMF_TotalName},

    {Memory_TabFootprint::kTabPMFNameHash, Memory_TabFootprint::kTabPMFName},

        }
      }
    },

    {
      UINT64_C(9946364510678884885),
      {
        MixedContentAutoupgrade_ResourceRequest::kEntryName,
        {
          
    {MixedContentAutoupgrade_ResourceRequest::kCodeNameHash, MixedContentAutoupgrade_ResourceRequest::kCodeName},

    {MixedContentAutoupgrade_ResourceRequest::kStatusNameHash, MixedContentAutoupgrade_ResourceRequest::kStatusName},

        }
      }
    },

    {
      UINT64_C(83722319975286136),
      {
        Net_LegacyTLSVersion::kEntryName,
        {
          
        }
      }
    },

    {
      UINT64_C(5007192410804132260),
      {
        NoStatePrefetch::kEntryName,
        {
          
    {NoStatePrefetch::kPrefetchedRecently_FinalStatusNameHash, NoStatePrefetch::kPrefetchedRecently_FinalStatusName},

    {NoStatePrefetch::kPrefetchedRecently_OriginNameHash, NoStatePrefetch::kPrefetchedRecently_OriginName},

    {NoStatePrefetch::kPrefetchedRecently_PrefetchAgeNameHash, NoStatePrefetch::kPrefetchedRecently_PrefetchAgeName},

        }
      }
    },

    {
      UINT64_C(10867195639280438101),
      {
        Notification::kEntryName,
        {
          
    {Notification::kClosedReasonNameHash, Notification::kClosedReasonName},

    {Notification::kDidReplaceAnotherNotificationNameHash, Notification::kDidReplaceAnotherNotificationName},

    {Notification::kDidUserOpenSettingsNameHash, Notification::kDidUserOpenSettingsName},

    {Notification::kHasBadgeNameHash, Notification::kHasBadgeName},

    {Notification::kHasIconNameHash, Notification::kHasIconName},

    {Notification::kHasImageNameHash, Notification::kHasImageName},

    {Notification::kHasRenotifyNameHash, Notification::kHasRenotifyName},

    {Notification::kHasTagNameHash, Notification::kHasTagName},

    {Notification::kIsSilentNameHash, Notification::kIsSilentName},

    {Notification::kNumActionButtonClicksNameHash, Notification::kNumActionButtonClicksName},

    {Notification::kNumActionsNameHash, Notification::kNumActionsName},

    {Notification::kNumClicksNameHash, Notification::kNumClicksName},

    {Notification::kRequireInteractionNameHash, Notification::kRequireInteractionName},

    {Notification::kTimeUntilCloseNameHash, Notification::kTimeUntilCloseName},

    {Notification::kTimeUntilFirstClickNameHash, Notification::kTimeUntilFirstClickName},

    {Notification::kTimeUntilLastClickNameHash, Notification::kTimeUntilLastClickName},

        }
      }
    },

    {
      UINT64_C(5472140254770736949),
      {
        OfflinePages_SavePageRequested::kEntryName,
        {
          
    {OfflinePages_SavePageRequested::kRequestedFromForegroundNameHash, OfflinePages_SavePageRequested::kRequestedFromForegroundName},

        }
      }
    },

    {
      UINT64_C(12853622770478513093),
      {
        PageDomainInfo::kEntryName,
        {
          
    {PageDomainInfo::kDomainTypeNameHash, PageDomainInfo::kDomainTypeName},

        }
      }
    },

    {
      UINT64_C(14423022965050986312),
      {
        PageForegroundSession::kEntryName,
        {
          
    {PageForegroundSession::kForegroundDurationNameHash, PageForegroundSession::kForegroundDurationName},

        }
      }
    },

    {
      UINT64_C(12426032810838168341),
      {
        PageLoad::kEntryName,
        {
          
    {PageLoad::kCpuTimeNameHash, PageLoad::kCpuTimeName},

    {PageLoad::kDocumentTiming_NavigationToDOMContentLoadedEventFiredNameHash, PageLoad::kDocumentTiming_NavigationToDOMContentLoadedEventFiredName},

    {PageLoad::kDocumentTiming_NavigationToLoadEventFiredNameHash, PageLoad::kDocumentTiming_NavigationToLoadEventFiredName},

    {PageLoad::kExperimental_InputToNavigationStartNameHash, PageLoad::kExperimental_InputToNavigationStartName},

    {PageLoad::kExperimental_Navigation_UserInitiatedNameHash, PageLoad::kExperimental_Navigation_UserInitiatedName},

    {PageLoad::kExperimental_NavigationToInteractiveNameHash, PageLoad::kExperimental_NavigationToInteractiveName},

    {PageLoad::kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintNameHash, PageLoad::kExperimental_PaintTiming_NavigationToFirstMeaningfulPaintName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLargestContentPaintNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLargestContentPaintName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLargestContentPaintAllFramesNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLargestContentPaintAllFramesName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLargestImagePaintNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLargestImagePaintName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLargestImagePaint_BeforeUserInputNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLargestImagePaint_BeforeUserInputName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLargestTextPaintNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLargestTextPaintName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLargestTextPaint_BeforeUserInputNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLargestTextPaint_BeforeUserInputName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLastImagePaintNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLastImagePaintName},

    {PageLoad::kExperimental_PaintTiming_NavigationToLastTextPaintNameHash, PageLoad::kExperimental_PaintTiming_NavigationToLastTextPaintName},

    {PageLoad::kInteractiveTiming_FirstInputDelayNameHash, PageLoad::kInteractiveTiming_FirstInputDelayName},

    {PageLoad::kInteractiveTiming_FirstInputDelay_SkipFilteringComparisonNameHash, PageLoad::kInteractiveTiming_FirstInputDelay_SkipFilteringComparisonName},

    {PageLoad::kInteractiveTiming_FirstInputDelay2NameHash, PageLoad::kInteractiveTiming_FirstInputDelay2Name},

    {PageLoad::kInteractiveTiming_FirstInputDelay3NameHash, PageLoad::kInteractiveTiming_FirstInputDelay3Name},

    {PageLoad::kInteractiveTiming_FirstInputDelay4NameHash, PageLoad::kInteractiveTiming_FirstInputDelay4Name},

    {PageLoad::kInteractiveTiming_FirstInputTimestampNameHash, PageLoad::kInteractiveTiming_FirstInputTimestampName},

    {PageLoad::kInteractiveTiming_FirstInputTimestamp_SkipFilteringComparisonNameHash, PageLoad::kInteractiveTiming_FirstInputTimestamp_SkipFilteringComparisonName},

    {PageLoad::kInteractiveTiming_FirstInputTimestamp2NameHash, PageLoad::kInteractiveTiming_FirstInputTimestamp2Name},

    {PageLoad::kInteractiveTiming_FirstInputTimestamp3NameHash, PageLoad::kInteractiveTiming_FirstInputTimestamp3Name},

    {PageLoad::kInteractiveTiming_FirstInputTimestamp4NameHash, PageLoad::kInteractiveTiming_FirstInputTimestamp4Name},

    {PageLoad::kInteractiveTiming_LongestInputDelayNameHash, PageLoad::kInteractiveTiming_LongestInputDelayName},

    {PageLoad::kInteractiveTiming_LongestInputDelay2NameHash, PageLoad::kInteractiveTiming_LongestInputDelay2Name},

    {PageLoad::kInteractiveTiming_LongestInputDelay3NameHash, PageLoad::kInteractiveTiming_LongestInputDelay3Name},

    {PageLoad::kInteractiveTiming_LongestInputTimestampNameHash, PageLoad::kInteractiveTiming_LongestInputTimestampName},

    {PageLoad::kInteractiveTiming_LongestInputTimestamp2NameHash, PageLoad::kInteractiveTiming_LongestInputTimestamp2Name},

    {PageLoad::kInteractiveTiming_LongestInputTimestamp3NameHash, PageLoad::kInteractiveTiming_LongestInputTimestamp3Name},

    {PageLoad::kIsCrossProcessNavigationNameHash, PageLoad::kIsCrossProcessNavigationName},

    {PageLoad::kIsSignedExchangeInnerResponseNameHash, PageLoad::kIsSignedExchangeInnerResponseName},

    {PageLoad::kLayoutStability_JankScoreNameHash, PageLoad::kLayoutStability_JankScoreName},

    {PageLoad::kLayoutStability_JankScore_MainFrameNameHash, PageLoad::kLayoutStability_JankScore_MainFrameName},

    {PageLoad::kMainDocumentSequenceNumberNameHash, PageLoad::kMainDocumentSequenceNumberName},

    {PageLoad::kMainFrameResource_ConnectDelayNameHash, PageLoad::kMainFrameResource_ConnectDelayName},

    {PageLoad::kMainFrameResource_DNSDelayNameHash, PageLoad::kMainFrameResource_DNSDelayName},

    {PageLoad::kMainFrameResource_HttpProtocolSchemeNameHash, PageLoad::kMainFrameResource_HttpProtocolSchemeName},

    {PageLoad::kMainFrameResource_NavigationStartToRequestStartNameHash, PageLoad::kMainFrameResource_NavigationStartToRequestStartName},

    {PageLoad::kMainFrameResource_RedirectCountNameHash, PageLoad::kMainFrameResource_RedirectCountName},

    {PageLoad::kMainFrameResource_RequestStartToReceiveHeadersEndNameHash, PageLoad::kMainFrameResource_RequestStartToReceiveHeadersEndName},

    {PageLoad::kMainFrameResource_RequestStartToSendStartNameHash, PageLoad::kMainFrameResource_RequestStartToSendStartName},

    {PageLoad::kMainFrameResource_SendStartToReceiveHeadersEndNameHash, PageLoad::kMainFrameResource_SendStartToReceiveHeadersEndName},

    {PageLoad::kMainFrameResource_SocketReusedNameHash, PageLoad::kMainFrameResource_SocketReusedName},

    {PageLoad::kNavigation_PageEndReasonNameHash, PageLoad::kNavigation_PageEndReasonName},

    {PageLoad::kNavigation_PageTransitionNameHash, PageLoad::kNavigation_PageTransitionName},

    {PageLoad::kNavigationEntryOffsetNameHash, PageLoad::kNavigationEntryOffsetName},

    {PageLoad::kNet_CacheBytesNameHash, PageLoad::kNet_CacheBytesName},

    {PageLoad::kNet_DownstreamKbpsEstimate_OnNavigationStartNameHash, PageLoad::kNet_DownstreamKbpsEstimate_OnNavigationStartName},

    {PageLoad::kNet_EffectiveConnectionType_OnNavigationStartNameHash, PageLoad::kNet_EffectiveConnectionType_OnNavigationStartName},

    {PageLoad::kNet_EffectiveConnectionType2_OnNavigationStartNameHash, PageLoad::kNet_EffectiveConnectionType2_OnNavigationStartName},

    {PageLoad::kNet_ErrorCode_OnFailedProvisionalLoadNameHash, PageLoad::kNet_ErrorCode_OnFailedProvisionalLoadName},

    {PageLoad::kNet_HttpResponseCodeNameHash, PageLoad::kNet_HttpResponseCodeName},

    {PageLoad::kNet_HttpRttEstimate_OnNavigationStartNameHash, PageLoad::kNet_HttpRttEstimate_OnNavigationStartName},

    {PageLoad::kNet_NetworkBytesNameHash, PageLoad::kNet_NetworkBytesName},

    {PageLoad::kNet_NetworkBytes2NameHash, PageLoad::kNet_NetworkBytes2Name},

    {PageLoad::kNet_TransportRttEstimate_OnNavigationStartNameHash, PageLoad::kNet_TransportRttEstimate_OnNavigationStartName},

    {PageLoad::kPageTiming_ForegroundDurationNameHash, PageLoad::kPageTiming_ForegroundDurationName},

    {PageLoad::kPageTiming_NavigationToFailedProvisionalLoadNameHash, PageLoad::kPageTiming_NavigationToFailedProvisionalLoadName},

    {PageLoad::kPaintTiming_NavigationToFirstContentfulPaintNameHash, PageLoad::kPaintTiming_NavigationToFirstContentfulPaintName},

    {PageLoad::kPaintTiming_NavigationToFirstPaintNameHash, PageLoad::kPaintTiming_NavigationToFirstPaintName},

    {PageLoad::kParseTiming_NavigationToParseStartNameHash, PageLoad::kParseTiming_NavigationToParseStartName},

    {PageLoad::kSiteEngagementScoreNameHash, PageLoad::kSiteEngagementScoreName},

    {PageLoad::kWasCachedNameHash, PageLoad::kWasCachedName},

        }
      }
    },

    {
      UINT64_C(8384138607730558665),
      {
        PageLoad_FromGoogleSearch::kEntryName,
        {
          
        }
      }
    },

    {
      UINT64_C(18067304287773255026),
      {
        PageLoad_ServiceWorkerControlled::kEntryName,
        {
          
        }
      }
    },

    {
      UINT64_C(17892590333300151382),
      {
        PageLoadCapping::kEntryName,
        {
          
    {PageLoadCapping::kFinalStateNameHash, PageLoadCapping::kFinalStateName},

        }
      }
    },

    {
      UINT64_C(2493630448790526384),
      {
        PageWithPassword::kEntryName,
        {
          
    {PageWithPassword::kFormManagerAvailableNameHash, PageWithPassword::kFormManagerAvailableName},

    {PageWithPassword::kPageLevelUserActionNameHash, PageWithPassword::kPageLevelUserActionName},

    {PageWithPassword::kProvisionalSaveFailureNameHash, PageWithPassword::kProvisionalSaveFailureName},

    {PageWithPassword::kUserModifiedPasswordFieldNameHash, PageWithPassword::kUserModifiedPasswordFieldName},

        }
      }
    },

    {
      UINT64_C(8060270586115376858),
      {
        PasswordForm::kEntryName,
        {
          
    {PasswordForm::kContext_FormSignatureNameHash, PasswordForm::kContext_FormSignatureName},

    {PasswordForm::kDynamicFormChangesNameHash, PasswordForm::kDynamicFormChangesName},

    {PasswordForm::kFill_FirstFillingResultInRendererNameHash, PasswordForm::kFill_FirstFillingResultInRendererName},

    {PasswordForm::kFill_FirstWaitForUsernameReasonNameHash, PasswordForm::kFill_FirstWaitForUsernameReasonName},

    {PasswordForm::kFillOnLoadNameHash, PasswordForm::kFillOnLoadName},

    {PasswordForm::kGeneration_GeneratedPasswordNameHash, PasswordForm::kGeneration_GeneratedPasswordName},

    {PasswordForm::kGeneration_GeneratedPasswordModifiedNameHash, PasswordForm::kGeneration_GeneratedPasswordModifiedName},

    {PasswordForm::kGeneration_PopupShownNameHash, PasswordForm::kGeneration_PopupShownName},

    {PasswordForm::kGeneration_SpecPriorityNameHash, PasswordForm::kGeneration_SpecPriorityName},

    {PasswordForm::kManagerFill_ActionNameHash, PasswordForm::kManagerFill_ActionName},

    {PasswordForm::kManagerFill_AssistanceNameHash, PasswordForm::kManagerFill_AssistanceName},

    {PasswordForm::kParsingComparisonNameHash, PasswordForm::kParsingComparisonName},

    {PasswordForm::kParsingOnSavingDifferenceNameHash, PasswordForm::kParsingOnSavingDifferenceName},

    {PasswordForm::kReadonlyWhenFillingNameHash, PasswordForm::kReadonlyWhenFillingName},

    {PasswordForm::kReadonlyWhenSavingNameHash, PasswordForm::kReadonlyWhenSavingName},

    {PasswordForm::kSaving_Prompt_InteractionNameHash, PasswordForm::kSaving_Prompt_InteractionName},

    {PasswordForm::kSaving_Prompt_ShownNameHash, PasswordForm::kSaving_Prompt_ShownName},

    {PasswordForm::kSaving_Prompt_TriggerNameHash, PasswordForm::kSaving_Prompt_TriggerName},

    {PasswordForm::kSaving_ShowedManualFallbackForSavingNameHash, PasswordForm::kSaving_ShowedManualFallbackForSavingName},

    {PasswordForm::kSubmission_IndicatorNameHash, PasswordForm::kSubmission_IndicatorName},

    {PasswordForm::kSubmission_ObservedNameHash, PasswordForm::kSubmission_ObservedName},

    {PasswordForm::kSubmission_SubmissionResultNameHash, PasswordForm::kSubmission_SubmissionResultName},

    {PasswordForm::kSubmission_SubmittedFormTypeNameHash, PasswordForm::kSubmission_SubmittedFormTypeName},

    {PasswordForm::kSuppressedAccount_Generated_HTTPSNotHTTPNameHash, PasswordForm::kSuppressedAccount_Generated_HTTPSNotHTTPName},

    {PasswordForm::kSuppressedAccount_Generated_PSLMatchingNameHash, PasswordForm::kSuppressedAccount_Generated_PSLMatchingName},

    {PasswordForm::kSuppressedAccount_Generated_SameOrganizationNameNameHash, PasswordForm::kSuppressedAccount_Generated_SameOrganizationNameName},

    {PasswordForm::kSuppressedAccount_Manual_HTTPSNotHTTPNameHash, PasswordForm::kSuppressedAccount_Manual_HTTPSNotHTTPName},

    {PasswordForm::kSuppressedAccount_Manual_PSLMatchingNameHash, PasswordForm::kSuppressedAccount_Manual_PSLMatchingName},

    {PasswordForm::kSuppressedAccount_Manual_SameOrganizationNameNameHash, PasswordForm::kSuppressedAccount_Manual_SameOrganizationNameName},

    {PasswordForm::kUpdating_Prompt_InteractionNameHash, PasswordForm::kUpdating_Prompt_InteractionName},

    {PasswordForm::kUpdating_Prompt_ShownNameHash, PasswordForm::kUpdating_Prompt_ShownName},

    {PasswordForm::kUpdating_Prompt_TriggerNameHash, PasswordForm::kUpdating_Prompt_TriggerName},

    {PasswordForm::kUser_ActionNameHash, PasswordForm::kUser_ActionName},

    {PasswordForm::kUser_Action_CorrectedUsernameInFormNameHash, PasswordForm::kUser_Action_CorrectedUsernameInFormName},

    {PasswordForm::kUser_Action_EditedUsernameInBubbleNameHash, PasswordForm::kUser_Action_EditedUsernameInBubbleName},

    {PasswordForm::kUser_Action_SelectedDifferentPasswordInBubbleNameHash, PasswordForm::kUser_Action_SelectedDifferentPasswordInBubbleName},

    {PasswordForm::kUser_Action_TriggeredManualFallbackForSavingNameHash, PasswordForm::kUser_Action_TriggeredManualFallbackForSavingName},

    {PasswordForm::kUser_Action_TriggeredManualFallbackForUpdatingNameHash, PasswordForm::kUser_Action_TriggeredManualFallbackForUpdatingName},

    {PasswordForm::kUser_ActionSimplifiedNameHash, PasswordForm::kUser_ActionSimplifiedName},

        }
      }
    },

    {
      UINT64_C(9066413457122162526),
      {
        PaymentRequest_CheckoutEvents::kEntryName,
        {
          
    {PaymentRequest_CheckoutEvents::kCompletionStatusNameHash, PaymentRequest_CheckoutEvents::kCompletionStatusName},

    {PaymentRequest_CheckoutEvents::kEventsNameHash, PaymentRequest_CheckoutEvents::kEventsName},

        }
      }
    },

    {
      UINT64_C(4863880088883807024),
      {
        Pepper_Broker::kEntryName,
        {
          
        }
      }
    },

    {
      UINT64_C(17104084284355864347),
      {
        Permission::kEntryName,
        {
          
    {Permission::kActionNameHash, Permission::kActionName},

    {Permission::kGestureNameHash, Permission::kGestureName},

    {Permission::kPermissionTypeNameHash, Permission::kPermissionTypeName},

    {Permission::kPriorDismissalsNameHash, Permission::kPriorDismissalsName},

    {Permission::kPriorIgnoresNameHash, Permission::kPriorIgnoresName},

    {Permission::kSourceNameHash, Permission::kSourceName},

        }
      }
    },

    {
      UINT64_C(2851782918499658607),
      {
        Plugins_FlashInstance::kEntryName,
        {
          
        }
      }
    },

    {
      UINT64_C(5373577291340314501),
      {
        Popup_Closed::kEntryName,
        {
          
    {Popup_Closed::kEngagementTimeNameHash, Popup_Closed::kEngagementTimeName},

    {Popup_Closed::kNumInteractionsNameHash, Popup_Closed::kNumInteractionsName},

    {Popup_Closed::kTrustedNameHash, Popup_Closed::kTrustedName},

    {Popup_Closed::kUserInitiatedCloseNameHash, Popup_Closed::kUserInitiatedCloseName},

        }
      }
    },

    {
      UINT64_C(16176000469846917671),
      {
        Previews::kEntryName,
        {
          
    {Previews::kclient_lofiNameHash, Previews::kclient_lofiName},

    {Previews::kcoin_flip_resultNameHash, Previews::kcoin_flip_resultName},

    {Previews::klite_pageNameHash, Previews::klite_pageName},

    {Previews::klite_page_redirectNameHash, Previews::klite_page_redirectName},

    {Previews::klite_page_redirect_eligibility_reasonNameHash, Previews::klite_page_redirect_eligibility_reasonName},

    {Previews::knavigation_restart_penaltyNameHash, Previews::knavigation_restart_penaltyName},

    {Previews::knoscriptNameHash, Previews::knoscriptName},

    {Previews::knoscript_eligibility_reasonNameHash, Previews::knoscript_eligibility_reasonName},

    {Previews::koffline_eligibility_reasonNameHash, Previews::koffline_eligibility_reasonName},

    {Previews::koffline_previewNameHash, Previews::koffline_previewName},

    {Previews::kopt_outNameHash, Previews::kopt_outName},

    {Previews::korigin_opt_outNameHash, Previews::korigin_opt_outName},

    {Previews::kpreviews_likelyNameHash, Previews::kpreviews_likelyName},

    {Previews::kproxy_lite_page_eligibility_reasonNameHash, Previews::kproxy_lite_page_eligibility_reasonName},

    {Previews::kresource_loading_hintsNameHash, Previews::kresource_loading_hintsName},

    {Previews::kresource_loading_hints_eligibility_reasonNameHash, Previews::kresource_loading_hints_eligibility_reasonName},

    {Previews::ksave_data_enabledNameHash, Previews::ksave_data_enabledName},

    {Previews::kserver_lofiNameHash, Previews::kserver_lofiName},

        }
      }
    },

    {
      UINT64_C(2128752535034967467),
      {
        PreviewsResourceLoadingHints::kEntryName,
        {
          
    {PreviewsResourceLoadingHints::kblocked_high_priorityNameHash, PreviewsResourceLoadingHints::kblocked_high_priorityName},

    {PreviewsResourceLoadingHints::kblocked_low_priorityNameHash, PreviewsResourceLoadingHints::kblocked_low_priorityName},

    {PreviewsResourceLoadingHints::kblocked_medium_priorityNameHash, PreviewsResourceLoadingHints::kblocked_medium_priorityName},

    {PreviewsResourceLoadingHints::kblocked_very_high_priorityNameHash, PreviewsResourceLoadingHints::kblocked_very_high_priorityName},

    {PreviewsResourceLoadingHints::kblocked_very_low_priorityNameHash, PreviewsResourceLoadingHints::kblocked_very_low_priorityName},

    {PreviewsResourceLoadingHints::kpatterns_to_block_totalNameHash, PreviewsResourceLoadingHints::kpatterns_to_block_totalName},

    {PreviewsResourceLoadingHints::kpatterns_to_block_usedNameHash, PreviewsResourceLoadingHints::kpatterns_to_block_usedName},

        }
      }
    },

    {
      UINT64_C(18249372845339521807),
      {
        RendererSchedulerTask::kEntryName,
        {
          
    {RendererSchedulerTask::kFrameStatusNameHash, RendererSchedulerTask::kFrameStatusName},

    {RendererSchedulerTask::kIsOOPIFNameHash, RendererSchedulerTask::kIsOOPIFName},

    {RendererSchedulerTask::kPageSchedulersNameHash, RendererSchedulerTask::kPageSchedulersName},

    {RendererSchedulerTask::kQueueTypeNameHash, RendererSchedulerTask::kQueueTypeName},

    {RendererSchedulerTask::kRendererAudibleNameHash, RendererSchedulerTask::kRendererAudibleName},

    {RendererSchedulerTask::kRendererBackgroundedNameHash, RendererSchedulerTask::kRendererBackgroundedName},

    {RendererSchedulerTask::kRendererHiddenNameHash, RendererSchedulerTask::kRendererHiddenName},

    {RendererSchedulerTask::kSecondsSinceBackgroundedNameHash, RendererSchedulerTask::kSecondsSinceBackgroundedName},

    {RendererSchedulerTask::kTaskCPUDurationNameHash, RendererSchedulerTask::kTaskCPUDurationName},

    {RendererSchedulerTask::kTaskDurationNameHash, RendererSchedulerTask::kTaskDurationName},

    {RendererSchedulerTask::kTaskTypeNameHash, RendererSchedulerTask::kTaskTypeName},

    {RendererSchedulerTask::kThreadTypeNameHash, RendererSchedulerTask::kThreadTypeName},

    {RendererSchedulerTask::kUseCaseNameHash, RendererSchedulerTask::kUseCaseName},

    {RendererSchedulerTask::kVersionNameHash, RendererSchedulerTask::kVersionName},

        }
      }
    },

    {
      UINT64_C(6628044799783508745),
      {
        ResponsivenessMeasurement::kEntryName,
        {
          
    {ResponsivenessMeasurement::kExpectedTaskQueueingDurationNameHash, ResponsivenessMeasurement::kExpectedTaskQueueingDurationName},

        }
      }
    },

    {
      UINT64_C(17111718181803892778),
      {
        ScreenBrightness::kEntryName,
        {
          
    {ScreenBrightness::kBatteryPercentNameHash, ScreenBrightness::kBatteryPercentName},

    {ScreenBrightness::kBrightnessNameHash, ScreenBrightness::kBrightnessName},

    {ScreenBrightness::kDayOfWeekNameHash, ScreenBrightness::kDayOfWeekName},

    {ScreenBrightness::kDeviceModeNameHash, ScreenBrightness::kDeviceModeName},

    {ScreenBrightness::kHourOfDayNameHash, ScreenBrightness::kHourOfDayName},

    {ScreenBrightness::kIsAutoclickEnabledNameHash, ScreenBrightness::kIsAutoclickEnabledName},

    {ScreenBrightness::kIsBrailleDisplayConnectedNameHash, ScreenBrightness::kIsBrailleDisplayConnectedName},

    {ScreenBrightness::kIsCaretHighlightEnabledNameHash, ScreenBrightness::kIsCaretHighlightEnabledName},

    {ScreenBrightness::kIsCursorHighlightEnabledNameHash, ScreenBrightness::kIsCursorHighlightEnabledName},

    {ScreenBrightness::kIsFocusHighlightEnabledNameHash, ScreenBrightness::kIsFocusHighlightEnabledName},

    {ScreenBrightness::kIsHighContrastEnabledNameHash, ScreenBrightness::kIsHighContrastEnabledName},

    {ScreenBrightness::kIsLargeCursorEnabledNameHash, ScreenBrightness::kIsLargeCursorEnabledName},

    {ScreenBrightness::kIsMagnifierEnabledNameHash, ScreenBrightness::kIsMagnifierEnabledName},

    {ScreenBrightness::kIsMonoAudioEnabledNameHash, ScreenBrightness::kIsMonoAudioEnabledName},

    {ScreenBrightness::kIsSelectToSpeakEnabledNameHash, ScreenBrightness::kIsSelectToSpeakEnabledName},

    {ScreenBrightness::kIsSpokenFeedbackEnabledNameHash, ScreenBrightness::kIsSpokenFeedbackEnabledName},

    {ScreenBrightness::kIsSwitchAccessEnabledNameHash, ScreenBrightness::kIsSwitchAccessEnabledName},

    {ScreenBrightness::kIsVideoPlayingNameHash, ScreenBrightness::kIsVideoPlayingName},

    {ScreenBrightness::kIsVirtualKeyboardEnabledNameHash, ScreenBrightness::kIsVirtualKeyboardEnabledName},

    {ScreenBrightness::kLastActivityTimeSecNameHash, ScreenBrightness::kLastActivityTimeSecName},

    {ScreenBrightness::kNightLightTemperaturePercentNameHash, ScreenBrightness::kNightLightTemperaturePercentName},

    {ScreenBrightness::kNumRecentKeyEventsNameHash, ScreenBrightness::kNumRecentKeyEventsName},

    {ScreenBrightness::kNumRecentMouseEventsNameHash, ScreenBrightness::kNumRecentMouseEventsName},

    {ScreenBrightness::kNumRecentStylusEventsNameHash, ScreenBrightness::kNumRecentStylusEventsName},

    {ScreenBrightness::kNumRecentTouchEventsNameHash, ScreenBrightness::kNumRecentTouchEventsName},

    {ScreenBrightness::kOnBatteryNameHash, ScreenBrightness::kOnBatteryName},

    {ScreenBrightness::kPreviousBrightnessNameHash, ScreenBrightness::kPreviousBrightnessName},

    {ScreenBrightness::kReasonNameHash, ScreenBrightness::kReasonName},

    {ScreenBrightness::kRecentTimeActiveSecNameHash, ScreenBrightness::kRecentTimeActiveSecName},

    {ScreenBrightness::kSequenceIdNameHash, ScreenBrightness::kSequenceIdName},

    {ScreenBrightness::kTimeSinceLastEventSecNameHash, ScreenBrightness::kTimeSinceLastEventSecName},

        }
      }
    },

    {
      UINT64_C(10614135803401894002),
      {
        Security_SiteEngagement::kEntryName,
        {
          
    {Security_SiteEngagement::kFinalSecurityLevelNameHash, Security_SiteEngagement::kFinalSecurityLevelName},

    {Security_SiteEngagement::kInitialSecurityLevelNameHash, Security_SiteEngagement::kInitialSecurityLevelName},

    {Security_SiteEngagement::kScoreDeltaNameHash, Security_SiteEngagement::kScoreDeltaName},

    {Security_SiteEngagement::kScoreFinalNameHash, Security_SiteEngagement::kScoreFinalName},

        }
      }
    },

    {
      UINT64_C(12521351862360782743),
      {
        SiteIsolation_XSD_Browser_Blocked::kEntryName,
        {
          
    {SiteIsolation_XSD_Browser_Blocked::kCanonicalMimeTypeNameHash, SiteIsolation_XSD_Browser_Blocked::kCanonicalMimeTypeName},

    {SiteIsolation_XSD_Browser_Blocked::kContentLengthWasZeroNameHash, SiteIsolation_XSD_Browser_Blocked::kContentLengthWasZeroName},

    {SiteIsolation_XSD_Browser_Blocked::kContentResourceTypeNameHash, SiteIsolation_XSD_Browser_Blocked::kContentResourceTypeName},

    {SiteIsolation_XSD_Browser_Blocked::kHttpResponseCodeNameHash, SiteIsolation_XSD_Browser_Blocked::kHttpResponseCodeName},

    {SiteIsolation_XSD_Browser_Blocked::kNeededSniffingNameHash, SiteIsolation_XSD_Browser_Blocked::kNeededSniffingName},

        }
      }
    },

    {
      UINT64_C(1198169845674357824),
      {
        SSL_MixedContentShown::kEntryName,
        {
          
    {SSL_MixedContentShown::kTypeNameHash, SSL_MixedContentShown::kTypeName},

        }
      }
    },

    {
      UINT64_C(612277438991988290),
      {
        SubframeDownload::kEntryName,
        {
          
    {SubframeDownload::kHasGestureNameHash, SubframeDownload::kHasGestureName},

    {SubframeDownload::kHasSandboxNameHash, SubframeDownload::kHasSandboxName},

    {SubframeDownload::kIsAdFrameNameHash, SubframeDownload::kIsAdFrameName},

    {SubframeDownload::kIsCrossOriginNameHash, SubframeDownload::kIsCrossOriginName},

        }
      }
    },

    {
      UINT64_C(16234573202714536926),
      {
        SubresourceFilter::kEntryName,
        {
          
    {SubresourceFilter::kActivationDecisionNameHash, SubresourceFilter::kActivationDecisionName},

    {SubresourceFilter::kDryRunNameHash, SubresourceFilter::kDryRunName},

    {SubresourceFilter::kEnforcementRedirectPositionNameHash, SubresourceFilter::kEnforcementRedirectPositionName},

        }
      }
    },

    {
      UINT64_C(18395820288494961196),
      {
        Tab_RendererOOM::kEntryName,
        {
          
    {Tab_RendererOOM::kTimeSinceLastNavigationNameHash, Tab_RendererOOM::kTimeSinceLastNavigationName},

        }
      }
    },

    {
      UINT64_C(6962158576008124011),
      {
        TabManager_Background_FirstAlertFired::kEntryName,
        {
          
    {TabManager_Background_FirstAlertFired::kIsMainFrameNameHash, TabManager_Background_FirstAlertFired::kIsMainFrameName},

    {TabManager_Background_FirstAlertFired::kTimeFromBackgroundedNameHash, TabManager_Background_FirstAlertFired::kTimeFromBackgroundedName},

        }
      }
    },

    {
      UINT64_C(6253115585121265178),
      {
        TabManager_Background_FirstAudioStarts::kEntryName,
        {
          
    {TabManager_Background_FirstAudioStarts::kIsMainFrameNameHash, TabManager_Background_FirstAudioStarts::kIsMainFrameName},

    {TabManager_Background_FirstAudioStarts::kTimeFromBackgroundedNameHash, TabManager_Background_FirstAudioStarts::kTimeFromBackgroundedName},

        }
      }
    },

    {
      UINT64_C(7684352713481018374),
      {
        TabManager_Background_FirstFaviconUpdated::kEntryName,
        {
          
    {TabManager_Background_FirstFaviconUpdated::kTimeFromBackgroundedNameHash, TabManager_Background_FirstFaviconUpdated::kTimeFromBackgroundedName},

        }
      }
    },

    {
      UINT64_C(5800172692978642430),
      {
        TabManager_Background_FirstNonPersistentNotificationCreated::kEntryName,
        {
          
    {TabManager_Background_FirstNonPersistentNotificationCreated::kIsMainFrameNameHash, TabManager_Background_FirstNonPersistentNotificationCreated::kIsMainFrameName},

    {TabManager_Background_FirstNonPersistentNotificationCreated::kTimeFromBackgroundedNameHash, TabManager_Background_FirstNonPersistentNotificationCreated::kTimeFromBackgroundedName},

        }
      }
    },

    {
      UINT64_C(13224923626166210718),
      {
        TabManager_Background_FirstTitleUpdated::kEntryName,
        {
          
    {TabManager_Background_FirstTitleUpdated::kTimeFromBackgroundedNameHash, TabManager_Background_FirstTitleUpdated::kTimeFromBackgroundedName},

        }
      }
    },

    {
      UINT64_C(11823633373787678555),
      {
        TabManager_Background_ForegroundedOrClosed::kEntryName,
        {
          
    {TabManager_Background_ForegroundedOrClosed::kIsDiscardedNameHash, TabManager_Background_ForegroundedOrClosed::kIsDiscardedName},

    {TabManager_Background_ForegroundedOrClosed::kIsForegroundedNameHash, TabManager_Background_ForegroundedOrClosed::kIsForegroundedName},

    {TabManager_Background_ForegroundedOrClosed::kLabelIdNameHash, TabManager_Background_ForegroundedOrClosed::kLabelIdName},

    {TabManager_Background_ForegroundedOrClosed::kMRUIndexNameHash, TabManager_Background_ForegroundedOrClosed::kMRUIndexName},

    {TabManager_Background_ForegroundedOrClosed::kSequenceIdNameHash, TabManager_Background_ForegroundedOrClosed::kSequenceIdName},

    {TabManager_Background_ForegroundedOrClosed::kTimeFromBackgroundedNameHash, TabManager_Background_ForegroundedOrClosed::kTimeFromBackgroundedName},

    {TabManager_Background_ForegroundedOrClosed::kTotalTabCountNameHash, TabManager_Background_ForegroundedOrClosed::kTotalTabCountName},

        }
      }
    },

    {
      UINT64_C(2947416194925354680),
      {
        TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kEntryName,
        {
          
    {TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabLoadingCountNameHash, TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabLoadingCountName},

    {TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabOpeningSessionIdNameHash, TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabOpeningSessionIdName},

    {TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabPendingCountNameHash, TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kBackgroundTabPendingCountName},

    {TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationNameHash, TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationName},

    {TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdNameHash, TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdName},

    {TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountNameHash, TabManager_BackgroundTabOpening_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountName},

        }
      }
    },

    {
      UINT64_C(5089020187687107285),
      {
        TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kEntryName,
        {
          
    {TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabLoadingCountNameHash, TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabLoadingCountName},

    {TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabOpeningSessionIdNameHash, TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabOpeningSessionIdName},

    {TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabPendingCountNameHash, TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kBackgroundTabPendingCountName},

    {TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSequenceIdNameHash, TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSequenceIdName},

    {TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSystemTabCountNameHash, TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kSystemTabCountName},

    {TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kTabSwitchLoadTimeNameHash, TabManager_Experimental_BackgroundTabOpening_TabSwitchLoadStopped::kTabSwitchLoadTimeName},

        }
      }
    },

    {
      UINT64_C(5185149670019600507),
      {
        TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kEntryName,
        {
          
    {TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSessionRestoreTabCountNameHash, TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSessionRestoreTabCountName},

    {TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSystemTabCountNameHash, TabManager_Experimental_SessionRestore_ForegroundTab_PageLoad::kSystemTabCountName},

        }
      }
    },

    {
      UINT64_C(10989149245696867796),
      {
        TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kEntryName,
        {
          
    {TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSequenceIdNameHash, TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSequenceIdName},

    {TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreSessionIdNameHash, TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreSessionIdName},

    {TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreTabCountNameHash, TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSessionRestoreTabCountName},

    {TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSystemTabCountNameHash, TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kSystemTabCountName},

    {TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kTabSwitchLoadTimeNameHash, TabManager_Experimental_SessionRestore_TabSwitchLoadStopped::kTabSwitchLoadTimeName},

        }
      }
    },

    {
      UINT64_C(15361214325300303131),
      {
        TabManager_LifecycleStateChange::kEntryName,
        {
          
    {TabManager_LifecycleStateChange::kFailureGlobalBlacklistNameHash, TabManager_LifecycleStateChange::kFailureGlobalBlacklistName},

    {TabManager_LifecycleStateChange::kFailureHeuristicAudioNameHash, TabManager_LifecycleStateChange::kFailureHeuristicAudioName},

    {TabManager_LifecycleStateChange::kFailureHeuristicFaviconNameHash, TabManager_LifecycleStateChange::kFailureHeuristicFaviconName},

    {TabManager_LifecycleStateChange::kFailureHeuristicInsufficientObservationNameHash, TabManager_LifecycleStateChange::kFailureHeuristicInsufficientObservationName},

    {TabManager_LifecycleStateChange::kFailureHeuristicNotificationsNameHash, TabManager_LifecycleStateChange::kFailureHeuristicNotificationsName},

    {TabManager_LifecycleStateChange::kFailureHeuristicTitleNameHash, TabManager_LifecycleStateChange::kFailureHeuristicTitleName},

    {TabManager_LifecycleStateChange::kFailureLifecyclesEnterprisePolicyOptOutNameHash, TabManager_LifecycleStateChange::kFailureLifecyclesEnterprisePolicyOptOutName},

    {TabManager_LifecycleStateChange::kFailureLifecyclesFeaturePolicyOptOutNameHash, TabManager_LifecycleStateChange::kFailureLifecyclesFeaturePolicyOptOutName},

    {TabManager_LifecycleStateChange::kFailureLiveStateCapturingNameHash, TabManager_LifecycleStateChange::kFailureLiveStateCapturingName},

    {TabManager_LifecycleStateChange::kFailureLiveStateDesktopCaptureNameHash, TabManager_LifecycleStateChange::kFailureLiveStateDesktopCaptureName},

    {TabManager_LifecycleStateChange::kFailureLiveStateDevToolsOpenNameHash, TabManager_LifecycleStateChange::kFailureLiveStateDevToolsOpenName},

    {TabManager_LifecycleStateChange::kFailureLiveStateExtensionDisallowedNameHash, TabManager_LifecycleStateChange::kFailureLiveStateExtensionDisallowedName},

    {TabManager_LifecycleStateChange::kFailureLiveStateFormEntryNameHash, TabManager_LifecycleStateChange::kFailureLiveStateFormEntryName},

    {TabManager_LifecycleStateChange::kFailureLiveStateIsPDFNameHash, TabManager_LifecycleStateChange::kFailureLiveStateIsPDFName},

    {TabManager_LifecycleStateChange::kFailureLiveStateMirroringNameHash, TabManager_LifecycleStateChange::kFailureLiveStateMirroringName},

    {TabManager_LifecycleStateChange::kFailureLiveStatePlayingAudioNameHash, TabManager_LifecycleStateChange::kFailureLiveStatePlayingAudioName},

    {TabManager_LifecycleStateChange::kFailureLiveStateSharingBrowsingInstanceNameHash, TabManager_LifecycleStateChange::kFailureLiveStateSharingBrowsingInstanceName},

    {TabManager_LifecycleStateChange::kFailureLiveStateUsingWebSocketsNameHash, TabManager_LifecycleStateChange::kFailureLiveStateUsingWebSocketsName},

    {TabManager_LifecycleStateChange::kFailureLiveStateUsingWebUSBNameHash, TabManager_LifecycleStateChange::kFailureLiveStateUsingWebUSBName},

    {TabManager_LifecycleStateChange::kFailureLiveStateVisibleNameHash, TabManager_LifecycleStateChange::kFailureLiveStateVisibleName},

    {TabManager_LifecycleStateChange::kLifecycleStateChangeReasonNameHash, TabManager_LifecycleStateChange::kLifecycleStateChangeReasonName},

    {TabManager_LifecycleStateChange::kNewLifecycleStateNameHash, TabManager_LifecycleStateChange::kNewLifecycleStateName},

    {TabManager_LifecycleStateChange::kOldLifecycleStateNameHash, TabManager_LifecycleStateChange::kOldLifecycleStateName},

    {TabManager_LifecycleStateChange::kOutcomeNameHash, TabManager_LifecycleStateChange::kOutcomeName},

    {TabManager_LifecycleStateChange::kSuccessGlobalWhitelistNameHash, TabManager_LifecycleStateChange::kSuccessGlobalWhitelistName},

    {TabManager_LifecycleStateChange::kSuccessHeuristicNameHash, TabManager_LifecycleStateChange::kSuccessHeuristicName},

    {TabManager_LifecycleStateChange::kSuccessLifecyclesFeaturePolicyOptInNameHash, TabManager_LifecycleStateChange::kSuccessLifecyclesFeaturePolicyOptInName},

    {TabManager_LifecycleStateChange::kTimeSinceNavigationMsNameHash, TabManager_LifecycleStateChange::kTimeSinceNavigationMsName},

    {TabManager_LifecycleStateChange::kTimeSinceVisibilityStateChangeMsNameHash, TabManager_LifecycleStateChange::kTimeSinceVisibilityStateChangeMsName},

    {TabManager_LifecycleStateChange::kTransitionForcedNameHash, TabManager_LifecycleStateChange::kTransitionForcedName},

    {TabManager_LifecycleStateChange::kVisibilityStateNameHash, TabManager_LifecycleStateChange::kVisibilityStateName},

        }
      }
    },

    {
      UINT64_C(8999972273877232390),
      {
        TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kEntryName,
        {
          
    {TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationNameHash, TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kExpectedTaskQueueingDurationName},

    {TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdNameHash, TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSequenceIdName},

    {TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreSessionIdNameHash, TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreSessionIdName},

    {TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreTabCountNameHash, TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSessionRestoreTabCountName},

    {TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountNameHash, TabManager_SessionRestore_ForegroundTab_ExpectedTaskQueueingDurationInfo::kSystemTabCountName},

        }
      }
    },

    {
      UINT64_C(16307465990132225428),
      {
        TabManager_TabLifetime::kEntryName,
        {
          
    {TabManager_TabLifetime::kTimeSinceNavigationNameHash, TabManager_TabLifetime::kTimeSinceNavigationName},

        }
      }
    },

    {
      UINT64_C(16400979786435208530),
      {
        TabManager_TabMetrics::kEntryName,
        {
          
    {TabManager_TabMetrics::kContentTypeNameHash, TabManager_TabMetrics::kContentTypeName},

    {TabManager_TabMetrics::kDefaultProtocolHandlerNameHash, TabManager_TabMetrics::kDefaultProtocolHandlerName},

    {TabManager_TabMetrics::kHasBeforeUnloadHandlerNameHash, TabManager_TabMetrics::kHasBeforeUnloadHandlerName},

    {TabManager_TabMetrics::kHasFormEntryNameHash, TabManager_TabMetrics::kHasFormEntryName},

    {TabManager_TabMetrics::kIsExtensionProtectedNameHash, TabManager_TabMetrics::kIsExtensionProtectedName},

    {TabManager_TabMetrics::kIsPinnedNameHash, TabManager_TabMetrics::kIsPinnedName},

    {TabManager_TabMetrics::kKeyEventCountNameHash, TabManager_TabMetrics::kKeyEventCountName},

    {TabManager_TabMetrics::kLabelIdNameHash, TabManager_TabMetrics::kLabelIdName},

    {TabManager_TabMetrics::kMouseEventCountNameHash, TabManager_TabMetrics::kMouseEventCountName},

    {TabManager_TabMetrics::kMRUIndexNameHash, TabManager_TabMetrics::kMRUIndexName},

    {TabManager_TabMetrics::kNavigationEntryCountNameHash, TabManager_TabMetrics::kNavigationEntryCountName},

    {TabManager_TabMetrics::kNumReactivationBeforeNameHash, TabManager_TabMetrics::kNumReactivationBeforeName},

    {TabManager_TabMetrics::kPageTransitionCoreTypeNameHash, TabManager_TabMetrics::kPageTransitionCoreTypeName},

    {TabManager_TabMetrics::kPageTransitionFromAddressBarNameHash, TabManager_TabMetrics::kPageTransitionFromAddressBarName},

    {TabManager_TabMetrics::kPageTransitionIsRedirectNameHash, TabManager_TabMetrics::kPageTransitionIsRedirectName},

    {TabManager_TabMetrics::kQueryIdNameHash, TabManager_TabMetrics::kQueryIdName},

    {TabManager_TabMetrics::kSequenceIdNameHash, TabManager_TabMetrics::kSequenceIdName},

    {TabManager_TabMetrics::kSiteEngagementScoreNameHash, TabManager_TabMetrics::kSiteEngagementScoreName},

    {TabManager_TabMetrics::kTimeFromBackgroundedNameHash, TabManager_TabMetrics::kTimeFromBackgroundedName},

    {TabManager_TabMetrics::kTotalTabCountNameHash, TabManager_TabMetrics::kTotalTabCountName},

    {TabManager_TabMetrics::kTouchEventCountNameHash, TabManager_TabMetrics::kTouchEventCountName},

    {TabManager_TabMetrics::kWasRecentlyAudibleNameHash, TabManager_TabMetrics::kWasRecentlyAudibleName},

    {TabManager_TabMetrics::kWindowIdNameHash, TabManager_TabMetrics::kWindowIdName},

    {TabManager_TabMetrics::kWindowIsActiveNameHash, TabManager_TabMetrics::kWindowIsActiveName},

    {TabManager_TabMetrics::kWindowShowStateNameHash, TabManager_TabMetrics::kWindowShowStateName},

    {TabManager_TabMetrics::kWindowTabCountNameHash, TabManager_TabMetrics::kWindowTabCountName},

    {TabManager_TabMetrics::kWindowTypeNameHash, TabManager_TabMetrics::kWindowTypeName},

        }
      }
    },

    {
      UINT64_C(12562637272871338124),
      {
        TabManager_WindowMetrics::kEntryName,
        {
          
    {TabManager_WindowMetrics::kIsActiveNameHash, TabManager_WindowMetrics::kIsActiveName},

    {TabManager_WindowMetrics::kShowStateNameHash, TabManager_WindowMetrics::kShowStateName},

    {TabManager_WindowMetrics::kTabCountNameHash, TabManager_WindowMetrics::kTabCountName},

    {TabManager_WindowMetrics::kTypeNameHash, TabManager_WindowMetrics::kTypeName},

    {TabManager_WindowMetrics::kWindowIdNameHash, TabManager_WindowMetrics::kWindowIdName},

        }
      }
    },

    {
      UINT64_C(16054416016310256565),
      {
        Translate::kEntryName,
        {
          
    {Translate::kAcceptCountNameHash, Translate::kAcceptCountName},

    {Translate::kCountryNameHash, Translate::kCountryName},

    {Translate::kDeclineCountNameHash, Translate::kDeclineCountName},

    {Translate::kEventTypeNameHash, Translate::kEventTypeName},

    {Translate::kIgnoreCountNameHash, Translate::kIgnoreCountName},

    {Translate::kRankerResponseNameHash, Translate::kRankerResponseName},

    {Translate::kRankerVersionNameHash, Translate::kRankerVersionName},

    {Translate::kSourceLanguageNameHash, Translate::kSourceLanguageName},

    {Translate::kTargetLanguageNameHash, Translate::kTargetLanguageName},

        }
      }
    },

    {
      UINT64_C(15381255782093849665),
      {
        TrustedWebActivity_Open::kEntryName,
        {
          
        }
      }
    },

    {
      UINT64_C(2395897864454822590),
      {
        UserActivity::kEntryName,
        {
          
    {UserActivity::kBatteryPercentNameHash, UserActivity::kBatteryPercentName},

    {UserActivity::kDeviceManagementNameHash, UserActivity::kDeviceManagementName},

    {UserActivity::kDeviceModeNameHash, UserActivity::kDeviceModeName},

    {UserActivity::kDeviceTypeNameHash, UserActivity::kDeviceTypeName},

    {UserActivity::kEventLogDurationNameHash, UserActivity::kEventLogDurationName},

    {UserActivity::kEventReasonNameHash, UserActivity::kEventReasonName},

    {UserActivity::kEventTypeNameHash, UserActivity::kEventTypeName},

    {UserActivity::kKeyEventsInLastHourNameHash, UserActivity::kKeyEventsInLastHourName},

    {UserActivity::kLastActivityDayNameHash, UserActivity::kLastActivityDayName},

    {UserActivity::kLastActivityTimeNameHash, UserActivity::kLastActivityTimeName},

    {UserActivity::kLastUserActivityTimeNameHash, UserActivity::kLastUserActivityTimeName},

    {UserActivity::kModelAppliedNameHash, UserActivity::kModelAppliedName},

    {UserActivity::kModelDecisionThresholdNameHash, UserActivity::kModelDecisionThresholdName},

    {UserActivity::kModelInactivityScoreNameHash, UserActivity::kModelInactivityScoreName},

    {UserActivity::kModelResponseNameHash, UserActivity::kModelResponseName},

    {UserActivity::kMouseEventsInLastHourNameHash, UserActivity::kMouseEventsInLastHourName},

    {UserActivity::kOnBatteryNameHash, UserActivity::kOnBatteryName},

    {UserActivity::kPreviousNegativeActionsCountNameHash, UserActivity::kPreviousNegativeActionsCountName},

    {UserActivity::kPreviousPositiveActionsCountNameHash, UserActivity::kPreviousPositiveActionsCountName},

    {UserActivity::kRecentTimeActiveNameHash, UserActivity::kRecentTimeActiveName},

    {UserActivity::kRecentVideoPlayingTimeNameHash, UserActivity::kRecentVideoPlayingTimeName},

    {UserActivity::kScreenDimDelayNameHash, UserActivity::kScreenDimDelayName},

    {UserActivity::kScreenDimmedInitiallyNameHash, UserActivity::kScreenDimmedInitiallyName},

    {UserActivity::kScreenDimOccurredNameHash, UserActivity::kScreenDimOccurredName},

    {UserActivity::kScreenDimToOffDelayNameHash, UserActivity::kScreenDimToOffDelayName},

    {UserActivity::kScreenLockedInitiallyNameHash, UserActivity::kScreenLockedInitiallyName},

    {UserActivity::kScreenLockOccurredNameHash, UserActivity::kScreenLockOccurredName},

    {UserActivity::kScreenOffInitiallyNameHash, UserActivity::kScreenOffInitiallyName},

    {UserActivity::kScreenOffOccurredNameHash, UserActivity::kScreenOffOccurredName},

    {UserActivity::kSequenceIdNameHash, UserActivity::kSequenceIdName},

    {UserActivity::kTimeSinceLastKeyNameHash, UserActivity::kTimeSinceLastKeyName},

    {UserActivity::kTimeSinceLastMouseNameHash, UserActivity::kTimeSinceLastMouseName},

    {UserActivity::kTimeSinceLastTouchNameHash, UserActivity::kTimeSinceLastTouchName},

    {UserActivity::kTimeSinceLastVideoEndedNameHash, UserActivity::kTimeSinceLastVideoEndedName},

    {UserActivity::kTouchEventsInLastHourNameHash, UserActivity::kTouchEventsInLastHourName},

        }
      }
    },

    {
      UINT64_C(13821826834442202003),
      {
        UserActivityId::kEntryName,
        {
          
    {UserActivityId::kActivityIdNameHash, UserActivityId::kActivityIdName},

    {UserActivityId::kContentTypeNameHash, UserActivityId::kContentTypeName},

    {UserActivityId::kHasFormEntryNameHash, UserActivityId::kHasFormEntryName},

    {UserActivityId::kIsActiveNameHash, UserActivityId::kIsActiveName},

    {UserActivityId::kIsBrowserFocusedNameHash, UserActivityId::kIsBrowserFocusedName},

    {UserActivityId::kIsBrowserVisibleNameHash, UserActivityId::kIsBrowserVisibleName},

    {UserActivityId::kIsTopmostBrowserNameHash, UserActivityId::kIsTopmostBrowserName},

    {UserActivityId::kSiteEngagementScoreNameHash, UserActivityId::kSiteEngagementScoreName},

        }
      }
    },

    {
      UINT64_C(3904325154478962694),
      {
        VirtualKeyboard_Open::kEntryName,
        {
          
    {VirtualKeyboard_Open::kTextInputTypeNameHash, VirtualKeyboard_Open::kTextInputTypeName},

        }
      }
    },

    {
      UINT64_C(6759459948386423184),
      {
        WebRTC_AddressHarvesting::kEntryName,
        {
          
    {WebRTC_AddressHarvesting::kUsagePatternNameHash, WebRTC_AddressHarvesting::kUsagePatternName},

        }
      }
    },

    {
      UINT64_C(7456919696038345904),
      {
        WebRTC_ComplexSdp::kEntryName,
        {
          
    {WebRTC_ComplexSdp::kCategoryNameHash, WebRTC_ComplexSdp::kCategoryName},

        }
      }
    },

    {
      UINT64_C(18380849111718717977),
      {
        XR_PageSession::kEntryName,
        {
          
    {XR_PageSession::kDurationNameHash, XR_PageSession::kDurationName},

    {XR_PageSession::kEnteredFullscreenNameHash, XR_PageSession::kEnteredFullscreenName},

    {XR_PageSession::kEnteredVROnPageReasonNameHash, XR_PageSession::kEnteredVROnPageReasonName},

    {XR_PageSession::kTimeOnPageNameHash, XR_PageSession::kTimeOnPageName},

    {XR_PageSession::kWasOmniboxNavigationNameHash, XR_PageSession::kWasOmniboxNavigationName},

    {XR_PageSession::kWasVoiceSearchNavigationNameHash, XR_PageSession::kWasVoiceSearchNavigationName},

        }
      }
    },

    {
      UINT64_C(2966287978545946180),
      {
        XR_WebXR::kEntryName,
        {
          
    {XR_WebXR::kDidGetGamepadsNameHash, XR_WebXR::kDidGetGamepadsName},

    {XR_WebXR::kDidGetXRInputSourcesNameHash, XR_WebXR::kDidGetXRInputSourcesName},

    {XR_WebXR::kDidRequestAvailableDevicesNameHash, XR_WebXR::kDidRequestAvailableDevicesName},

    {XR_WebXR::kDidRequestPoseNameHash, XR_WebXR::kDidRequestPoseName},

    {XR_WebXR::kDidRequestPresentationNameHash, XR_WebXR::kDidRequestPresentationName},

    {XR_WebXR::kDidUseNavigatorXRNameHash, XR_WebXR::kDidUseNavigatorXRName},

    {XR_WebXR::kReturnedDeviceNameHash, XR_WebXR::kReturnedDeviceName},

    {XR_WebXR::kReturnedPresentationCapableDeviceNameHash, XR_WebXR::kReturnedPresentationCapableDeviceName},

        }
      }
    },

    {
      UINT64_C(16100523780689880831),
      {
        XR_WebXR_PresentationSession::kEntryName,
        {
          
    {XR_WebXR_PresentationSession::kDurationNameHash, XR_WebXR_PresentationSession::kDurationName},

    {XR_WebXR_PresentationSession::kStartActionNameHash, XR_WebXR_PresentationSession::kStartActionName},

        }
      }
    },

  };
}

}  // namespace builders
}  // namespace ukm
