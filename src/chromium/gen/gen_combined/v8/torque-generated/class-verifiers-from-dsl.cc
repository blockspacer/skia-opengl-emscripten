
#ifdef VERIFY_HEAP
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/module.h"
#include "src/objects/stack-frame-info.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "torque-generated/class-verifiers-from-dsl.h"

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"

namespace v8 {
namespace internal {

void ClassVerifiersFromDSL::AccessCheckInfoVerify(AccessCheckInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsAccessCheckInfo());
  {
    Object callback_value = READ_FIELD(o, AccessCheckInfo::kCallbackOffset);
    Object::VerifyPointer(isolate, callback_value);
    CHECK(callback_value.IsZero() || callback_value.IsForeign());
  }
  {
    Object named_interceptor_value = READ_FIELD(o, AccessCheckInfo::kNamedInterceptorOffset);
    Object::VerifyPointer(isolate, named_interceptor_value);
    CHECK(named_interceptor_value.IsZero() || named_interceptor_value.IsInterceptorInfo());
  }
  {
    Object indexed_interceptor_value = READ_FIELD(o, AccessCheckInfo::kIndexedInterceptorOffset);
    Object::VerifyPointer(isolate, indexed_interceptor_value);
    CHECK(indexed_interceptor_value.IsZero() || indexed_interceptor_value.IsInterceptorInfo());
  }
  {
    Object data_value = READ_FIELD(o, AccessCheckInfo::kDataOffset);
    Object::VerifyPointer(isolate, data_value);
  }
}
void ClassVerifiersFromDSL::AccessorInfoVerify(AccessorInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsAccessorInfo());
  {
    Object name_value = READ_FIELD(o, AccessorInfo::kNameOffset);
    Object::VerifyPointer(isolate, name_value);
  }
  {
    Object flags_value = READ_FIELD(o, AccessorInfo::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi());
  }
  {
    Object expected_receiver_type_value = READ_FIELD(o, AccessorInfo::kExpectedReceiverTypeOffset);
    Object::VerifyPointer(isolate, expected_receiver_type_value);
  }
  {
    Object data_value = READ_FIELD(o, AccessorInfo::kDataOffset);
    Object::VerifyPointer(isolate, data_value);
  }
}
void ClassVerifiersFromDSL::AccessorPairVerify(AccessorPair o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsAccessorPair());
  {
    Object getter_value = READ_FIELD(o, AccessorPair::kGetterOffset);
    Object::VerifyPointer(isolate, getter_value);
  }
  {
    Object setter_value = READ_FIELD(o, AccessorPair::kSetterOffset);
    Object::VerifyPointer(isolate, setter_value);
  }
}
void ClassVerifiersFromDSL::AliasedArgumentsEntryVerify(AliasedArgumentsEntry o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsAliasedArgumentsEntry());
  {
    Object aliased_context_slot_value = READ_FIELD(o, AliasedArgumentsEntry::kAliasedContextSlotOffset);
    Object::VerifyPointer(isolate, aliased_context_slot_value);
    CHECK(aliased_context_slot_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::AllocationMementoVerify(AllocationMemento o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsAllocationMemento());
}
void ClassVerifiersFromDSL::ArrayBoilerplateDescriptionVerify(ArrayBoilerplateDescription o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsArrayBoilerplateDescription());
  {
    Object flags_value = READ_FIELD(o, ArrayBoilerplateDescription::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi());
  }
  {
    Object constant_elements_value = READ_FIELD(o, ArrayBoilerplateDescription::kConstantElementsOffset);
    Object::VerifyPointer(isolate, constant_elements_value);
    CHECK(constant_elements_value.IsFixedArrayBase());
  }
}
void ClassVerifiersFromDSL::AsmWasmDataVerify(AsmWasmData o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsAsmWasmData());
  {
    Object managed_native_module_value = READ_FIELD(o, AsmWasmData::kManagedNativeModuleOffset);
    Object::VerifyPointer(isolate, managed_native_module_value);
    CHECK(managed_native_module_value.IsForeign());
  }
  {
    Object export_wrappers_value = READ_FIELD(o, AsmWasmData::kExportWrappersOffset);
    Object::VerifyPointer(isolate, export_wrappers_value);
    CHECK(export_wrappers_value.IsFixedArray());
  }
  {
    Object asm_js_offset_table_value = READ_FIELD(o, AsmWasmData::kAsmJsOffsetTableOffset);
    Object::VerifyPointer(isolate, asm_js_offset_table_value);
    CHECK(asm_js_offset_table_value.IsByteArray());
  }
  {
    Object uses_bitset_value = READ_FIELD(o, AsmWasmData::kUsesBitsetOffset);
    Object::VerifyPointer(isolate, uses_bitset_value);
    CHECK(uses_bitset_value.IsHeapNumber());
  }
}
void ClassVerifiersFromDSL::AsyncGeneratorRequestVerify(AsyncGeneratorRequest o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsAsyncGeneratorRequest());
  {
    Object next_value = READ_FIELD(o, AsyncGeneratorRequest::kNextOffset);
    Object::VerifyPointer(isolate, next_value);
    CHECK(next_value.IsUndefined() || next_value.IsAsyncGeneratorRequest());
  }
  {
    Object resume_mode_value = READ_FIELD(o, AsyncGeneratorRequest::kResumeModeOffset);
    Object::VerifyPointer(isolate, resume_mode_value);
    CHECK(resume_mode_value.IsSmi());
  }
  {
    Object value_value = READ_FIELD(o, AsyncGeneratorRequest::kValueOffset);
    Object::VerifyPointer(isolate, value_value);
  }
  {
    Object promise_value = READ_FIELD(o, AsyncGeneratorRequest::kPromiseOffset);
    Object::VerifyPointer(isolate, promise_value);
    CHECK(promise_value.IsJSPromise());
  }
}
void ClassVerifiersFromDSL::BreakPointVerify(BreakPoint o, Isolate* isolate) {
  o->Tuple2Verify(isolate);
  CHECK(o.IsBreakPoint());
}
void ClassVerifiersFromDSL::BreakPointInfoVerify(BreakPointInfo o, Isolate* isolate) {
  o->Tuple2Verify(isolate);
  CHECK(o.IsBreakPointInfo());
}
void ClassVerifiersFromDSL::ByteArrayVerify(ByteArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsByteArray());
}
void ClassVerifiersFromDSL::CallableTaskVerify(CallableTask o, Isolate* isolate) {
  o->MicrotaskVerify(isolate);
  CHECK(o.IsCallableTask());
  {
    Object callable_value = READ_FIELD(o, CallableTask::kCallableOffset);
    Object::VerifyPointer(isolate, callable_value);
    CHECK(callable_value.IsJSReceiver());
  }
  {
    Object context_value = READ_FIELD(o, CallableTask::kContextOffset);
    Object::VerifyPointer(isolate, context_value);
    CHECK(context_value.IsContext());
  }
}
void ClassVerifiersFromDSL::CallbackTaskVerify(CallbackTask o, Isolate* isolate) {
  o->MicrotaskVerify(isolate);
  CHECK(o.IsCallbackTask());
  {
    Object callback_value = READ_FIELD(o, CallbackTask::kCallbackOffset);
    Object::VerifyPointer(isolate, callback_value);
    CHECK(callback_value.IsForeign());
  }
  {
    Object data_value = READ_FIELD(o, CallbackTask::kDataOffset);
    Object::VerifyPointer(isolate, data_value);
    CHECK(data_value.IsForeign());
  }
}
void ClassVerifiersFromDSL::CellVerify(Cell o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsCell());
  {
    Object value_value = READ_FIELD(o, Cell::kValueOffset);
    Object::VerifyPointer(isolate, value_value);
  }
}
void ClassVerifiersFromDSL::ClassPositionsVerify(ClassPositions o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsClassPositions());
  {
    Object start_value = READ_FIELD(o, ClassPositions::kStartOffset);
    Object::VerifyPointer(isolate, start_value);
    CHECK(start_value.IsSmi());
  }
  {
    Object end_value = READ_FIELD(o, ClassPositions::kEndOffset);
    Object::VerifyPointer(isolate, end_value);
    CHECK(end_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::ConsStringVerify(ConsString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsConsString());
  {
    Object first_value = READ_FIELD(o, ConsString::kFirstOffset);
    Object::VerifyPointer(isolate, first_value);
    CHECK(first_value.IsString());
  }
  {
    Object second_value = READ_FIELD(o, ConsString::kSecondOffset);
    Object::VerifyPointer(isolate, second_value);
    CHECK(second_value.IsString());
  }
}
void ClassVerifiersFromDSL::ContextVerify(Context o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsContext());
  {
    Object length_value = READ_FIELD(o, Context::kLengthOffset);
    Object::VerifyPointer(isolate, length_value);
    CHECK(length_value.IsSmi());
  }
  {
    Object scope_info_value = READ_FIELD(o, Context::kScopeInfoOffset);
    Object::VerifyPointer(isolate, scope_info_value);
    CHECK(scope_info_value.IsScopeInfo());
  }
  {
    Object previous_value = READ_FIELD(o, Context::kPreviousOffset);
    Object::VerifyPointer(isolate, previous_value);
  }
  {
    Object extension_value = READ_FIELD(o, Context::kExtensionOffset);
    Object::VerifyPointer(isolate, extension_value);
  }
  {
    Object native_context_value = READ_FIELD(o, Context::kNativeContextOffset);
    Object::VerifyPointer(isolate, native_context_value);
  }
}
void ClassVerifiersFromDSL::CoverageInfoVerify(CoverageInfo o, Isolate* isolate) {
  o->FixedArrayVerify(isolate);
  CHECK(o.IsCoverageInfo());
}
void ClassVerifiersFromDSL::DataHandlerVerify(DataHandler o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsDataHandler());
  {
    Object smi_handler_value = READ_FIELD(o, DataHandler::kSmiHandlerOffset);
    Object::VerifyPointer(isolate, smi_handler_value);
    CHECK(smi_handler_value.IsCode() || smi_handler_value.IsSmi());
  }
  {
    Object validity_cell_value = READ_FIELD(o, DataHandler::kValidityCellOffset);
    Object::VerifyPointer(isolate, validity_cell_value);
    CHECK(validity_cell_value.IsSmi() || validity_cell_value.IsCell());
  }
}
void ClassVerifiersFromDSL::DebugInfoVerify(DebugInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsDebugInfo());
  {
    Object shared_function_info_value = READ_FIELD(o, DebugInfo::kSharedFunctionInfoOffset);
    Object::VerifyPointer(isolate, shared_function_info_value);
    CHECK(shared_function_info_value.IsSharedFunctionInfo());
  }
  {
    Object debugger_hints_value = READ_FIELD(o, DebugInfo::kDebuggerHintsOffset);
    Object::VerifyPointer(isolate, debugger_hints_value);
    CHECK(debugger_hints_value.IsSmi());
  }
  {
    Object script_value = READ_FIELD(o, DebugInfo::kScriptOffset);
    Object::VerifyPointer(isolate, script_value);
    CHECK(script_value.IsUndefined() || script_value.IsScript());
  }
  {
    Object original_bytecode_array_value = READ_FIELD(o, DebugInfo::kOriginalBytecodeArrayOffset);
    Object::VerifyPointer(isolate, original_bytecode_array_value);
    CHECK(original_bytecode_array_value.IsBytecodeArray() || original_bytecode_array_value.IsUndefined());
  }
  {
    Object debug_bytecode_array_value = READ_FIELD(o, DebugInfo::kDebugBytecodeArrayOffset);
    Object::VerifyPointer(isolate, debug_bytecode_array_value);
    CHECK(debug_bytecode_array_value.IsBytecodeArray() || debug_bytecode_array_value.IsUndefined());
  }
  {
    Object break_points_value = READ_FIELD(o, DebugInfo::kBreakPointsOffset);
    Object::VerifyPointer(isolate, break_points_value);
    CHECK(break_points_value.IsFixedArray());
  }
  {
    Object flags_value = READ_FIELD(o, DebugInfo::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi());
  }
  {
    Object coverage_info_value = READ_FIELD(o, DebugInfo::kCoverageInfoOffset);
    Object::VerifyPointer(isolate, coverage_info_value);
    CHECK(coverage_info_value.IsUndefined() || coverage_info_value.IsCoverageInfo());
  }
}
void ClassVerifiersFromDSL::DependentCodeVerify(DependentCode o, Isolate* isolate) {
  o->WeakFixedArrayVerify(isolate);
  CHECK(o.IsDependentCode());
}
void ClassVerifiersFromDSL::DescriptorArrayVerify(DescriptorArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsDescriptorArray());
  {
    Object enum_cache_value = READ_FIELD(o, DescriptorArray::kEnumCacheOffset);
    Object::VerifyPointer(isolate, enum_cache_value);
    CHECK(enum_cache_value.IsEnumCache());
  }
}
void ClassVerifiersFromDSL::EmbedderDataArrayVerify(EmbedderDataArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsEmbedderDataArray());
  {
    Object length_value = READ_FIELD(o, EmbedderDataArray::kLengthOffset);
    Object::VerifyPointer(isolate, length_value);
    CHECK(length_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::EnumCacheVerify(EnumCache o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsEnumCache());
  {
    Object keys_value = READ_FIELD(o, EnumCache::kKeysOffset);
    Object::VerifyPointer(isolate, keys_value);
    CHECK(keys_value.IsFixedArray());
  }
  {
    Object indices_value = READ_FIELD(o, EnumCache::kIndicesOffset);
    Object::VerifyPointer(isolate, indices_value);
    CHECK(indices_value.IsFixedArray());
  }
}
void ClassVerifiersFromDSL::ExternalOneByteStringVerify(ExternalOneByteString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsExternalOneByteString());
}
void ClassVerifiersFromDSL::ExternalTwoByteStringVerify(ExternalTwoByteString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsExternalTwoByteString());
}
void ClassVerifiersFromDSL::FeedbackCellVerify(FeedbackCell o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFeedbackCell());
  {
    Object value_value = READ_FIELD(o, FeedbackCell::kValueOffset);
    Object::VerifyPointer(isolate, value_value);
    CHECK(value_value.IsUndefined() || value_value.IsFeedbackVector() || value_value.IsFixedArray());
  }
}
void ClassVerifiersFromDSL::FeedbackVectorVerify(FeedbackVector o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFeedbackVector());
  {
    Object shared_function_info_value = READ_FIELD(o, FeedbackVector::kSharedFunctionInfoOffset);
    Object::VerifyPointer(isolate, shared_function_info_value);
    CHECK(shared_function_info_value.IsSharedFunctionInfo());
  }
  {
    Object closure_feedback_cell_array_value = READ_FIELD(o, FeedbackVector::kClosureFeedbackCellArrayOffset);
    Object::VerifyPointer(isolate, closure_feedback_cell_array_value);
    CHECK(closure_feedback_cell_array_value.IsFixedArray());
  }
}
void ClassVerifiersFromDSL::FixedArrayVerify(FixedArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFixedArray());
  for (int i = 0; i < Smi::ToInt(READ_FIELD(o, FixedArray::kLengthOffset)); ++i) {
    Object objects_value = READ_FIELD(o, FixedArray::kObjectsOffset + i * kTaggedSize);
    Object::VerifyPointer(isolate, objects_value);
  }
}
void ClassVerifiersFromDSL::FixedDoubleArrayVerify(FixedDoubleArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFixedDoubleArray());
}
void ClassVerifiersFromDSL::FixedTypedArrayBaseVerify(FixedTypedArrayBase o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFixedTypedArrayBase());
  {
    Object base_pointer_value = READ_FIELD(o, FixedTypedArrayBase::kBasePointerOffset);
    Object::VerifyPointer(isolate, base_pointer_value);
    CHECK(base_pointer_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::ForeignVerify(Foreign o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsForeign());
}
void ClassVerifiersFromDSL::FreeSpaceVerify(FreeSpace o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFreeSpace());
  {
    Object size_value = READ_FIELD(o, FreeSpace::kSizeOffset);
    Object::VerifyPointer(isolate, size_value);
    CHECK(size_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::FunctionTemplateInfoVerify(FunctionTemplateInfo o, Isolate* isolate) {
  o->TemplateInfoVerify(isolate);
  CHECK(o.IsFunctionTemplateInfo());
  {
    Object call_code_value = READ_FIELD(o, FunctionTemplateInfo::kCallCodeOffset);
    Object::VerifyPointer(isolate, call_code_value);
  }
  {
    Object class_name_value = READ_FIELD(o, FunctionTemplateInfo::kClassNameOffset);
    Object::VerifyPointer(isolate, class_name_value);
  }
  {
    Object signature_value = READ_FIELD(o, FunctionTemplateInfo::kSignatureOffset);
    Object::VerifyPointer(isolate, signature_value);
  }
  {
    Object function_template_rare_data_value = READ_FIELD(o, FunctionTemplateInfo::kFunctionTemplateRareDataOffset);
    Object::VerifyPointer(isolate, function_template_rare_data_value);
  }
  {
    Object shared_function_info_value = READ_FIELD(o, FunctionTemplateInfo::kSharedFunctionInfoOffset);
    Object::VerifyPointer(isolate, shared_function_info_value);
  }
  {
    Object flag_value = READ_FIELD(o, FunctionTemplateInfo::kFlagOffset);
    Object::VerifyPointer(isolate, flag_value);
    CHECK(flag_value.IsSmi());
  }
  {
    Object cached_property_name_value = READ_FIELD(o, FunctionTemplateInfo::kCachedPropertyNameOffset);
    Object::VerifyPointer(isolate, cached_property_name_value);
  }
}
void ClassVerifiersFromDSL::FunctionTemplateRareDataVerify(FunctionTemplateRareData o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsFunctionTemplateRareData());
  {
    Object prototype_template_value = READ_FIELD(o, FunctionTemplateRareData::kPrototypeTemplateOffset);
    Object::VerifyPointer(isolate, prototype_template_value);
  }
  {
    Object prototype_provider_template_value = READ_FIELD(o, FunctionTemplateRareData::kPrototypeProviderTemplateOffset);
    Object::VerifyPointer(isolate, prototype_provider_template_value);
  }
  {
    Object parent_template_value = READ_FIELD(o, FunctionTemplateRareData::kParentTemplateOffset);
    Object::VerifyPointer(isolate, parent_template_value);
  }
  {
    Object named_property_handler_value = READ_FIELD(o, FunctionTemplateRareData::kNamedPropertyHandlerOffset);
    Object::VerifyPointer(isolate, named_property_handler_value);
  }
  {
    Object indexed_property_handler_value = READ_FIELD(o, FunctionTemplateRareData::kIndexedPropertyHandlerOffset);
    Object::VerifyPointer(isolate, indexed_property_handler_value);
  }
  {
    Object instance_template_value = READ_FIELD(o, FunctionTemplateRareData::kInstanceTemplateOffset);
    Object::VerifyPointer(isolate, instance_template_value);
  }
  {
    Object instance_call_handler_value = READ_FIELD(o, FunctionTemplateRareData::kInstanceCallHandlerOffset);
    Object::VerifyPointer(isolate, instance_call_handler_value);
  }
  {
    Object access_check_info_value = READ_FIELD(o, FunctionTemplateRareData::kAccessCheckInfoOffset);
    Object::VerifyPointer(isolate, access_check_info_value);
  }
}
void ClassVerifiersFromDSL::HeapNumberVerify(HeapNumber o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsHeapNumber());
}
void ClassVerifiersFromDSL::HeapObjectVerify(HeapObject o, Isolate* isolate) {
  CHECK(o.IsHeapObject());
  {
    Object map_value = READ_FIELD(o, HeapObject::kMapOffset);
    Object::VerifyPointer(isolate, map_value);
    CHECK(map_value.IsMap());
  }
}
void ClassVerifiersFromDSL::InterceptorInfoVerify(InterceptorInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsInterceptorInfo());
  {
    Object data_value = READ_FIELD(o, InterceptorInfo::kDataOffset);
    Object::VerifyPointer(isolate, data_value);
  }
  {
    Object flags_value = READ_FIELD(o, InterceptorInfo::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::InternalizedStringVerify(InternalizedString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsInternalizedString());
}
void ClassVerifiersFromDSL::InterpreterDataVerify(InterpreterData o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsInterpreterData());
  {
    Object bytecode_array_value = READ_FIELD(o, InterpreterData::kBytecodeArrayOffset);
    Object::VerifyPointer(isolate, bytecode_array_value);
    CHECK(bytecode_array_value.IsBytecodeArray());
  }
  {
    Object interpreter_trampoline_value = READ_FIELD(o, InterpreterData::kInterpreterTrampolineOffset);
    Object::VerifyPointer(isolate, interpreter_trampoline_value);
    CHECK(interpreter_trampoline_value.IsCode());
  }
}
void ClassVerifiersFromDSL::JSArgumentsObjectVerify(JSArgumentsObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSArgumentsObject());
}
void ClassVerifiersFromDSL::JSArrayVerify(JSArray o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSArray());
  {
    Object length_value = READ_FIELD(o, JSArray::kLengthOffset);
    Object::VerifyPointer(isolate, length_value);
    CHECK(length_value.IsSmi() || length_value.IsHeapNumber() || length_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSArrayBufferVerify(JSArrayBuffer o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSArrayBuffer());
}
void ClassVerifiersFromDSL::JSArrayBufferViewVerify(JSArrayBufferView o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSArrayBufferView());
  {
    Object buffer_value = READ_FIELD(o, JSArrayBufferView::kBufferOffset);
    Object::VerifyPointer(isolate, buffer_value);
    CHECK(buffer_value.IsJSArrayBuffer() || buffer_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSArrayIteratorVerify(JSArrayIterator o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSArrayIterator());
  {
    Object iterated_object_value = READ_FIELD(o, JSArrayIterator::kIteratedObjectOffset);
    Object::VerifyPointer(isolate, iterated_object_value);
    CHECK(iterated_object_value.IsJSReceiver() || iterated_object_value.IsUndefined(isolate));
  }
  {
    Object next_index_value = READ_FIELD(o, JSArrayIterator::kNextIndexOffset);
    Object::VerifyPointer(isolate, next_index_value);
    CHECK(next_index_value.IsSmi() || next_index_value.IsHeapNumber() || next_index_value.IsUndefined(isolate));
  }
  {
    Object kind_value = READ_FIELD(o, JSArrayIterator::kKindOffset);
    Object::VerifyPointer(isolate, kind_value);
    CHECK(kind_value.IsSmi() || kind_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSAsyncFromSyncIterator());
  {
    Object sync_iterator_value = READ_FIELD(o, JSAsyncFromSyncIterator::kSyncIteratorOffset);
    Object::VerifyPointer(isolate, sync_iterator_value);
    CHECK(sync_iterator_value.IsJSReceiver() || sync_iterator_value.IsUndefined(isolate));
  }
  {
    Object next_value = READ_FIELD(o, JSAsyncFromSyncIterator::kNextOffset);
    Object::VerifyPointer(isolate, next_value);
  }
}
void ClassVerifiersFromDSL::JSAsyncFunctionObjectVerify(JSAsyncFunctionObject o, Isolate* isolate) {
  o->JSGeneratorObjectVerify(isolate);
  CHECK(o.IsJSAsyncFunctionObject());
  {
    Object promise_value = READ_FIELD(o, JSAsyncFunctionObject::kPromiseOffset);
    Object::VerifyPointer(isolate, promise_value);
    CHECK(promise_value.IsJSPromise() || promise_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSAsyncGeneratorObjectVerify(JSAsyncGeneratorObject o, Isolate* isolate) {
  o->JSGeneratorObjectVerify(isolate);
  CHECK(o.IsJSAsyncGeneratorObject());
  {
    Object queue_value = READ_FIELD(o, JSAsyncGeneratorObject::kQueueOffset);
    Object::VerifyPointer(isolate, queue_value);
    CHECK(queue_value.IsHeapObject() || queue_value.IsUndefined(isolate));
  }
  {
    Object is_awaiting_value = READ_FIELD(o, JSAsyncGeneratorObject::kIsAwaitingOffset);
    Object::VerifyPointer(isolate, is_awaiting_value);
    CHECK(is_awaiting_value.IsSmi() || is_awaiting_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSBoundFunctionVerify(JSBoundFunction o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSBoundFunction());
  {
    Object bound_target_function_value = READ_FIELD(o, JSBoundFunction::kBoundTargetFunctionOffset);
    Object::VerifyPointer(isolate, bound_target_function_value);
    CHECK(bound_target_function_value.IsJSReceiver() || bound_target_function_value.IsUndefined(isolate));
  }
  {
    Object bound_this_value = READ_FIELD(o, JSBoundFunction::kBoundThisOffset);
    Object::VerifyPointer(isolate, bound_this_value);
  }
  {
    Object bound_arguments_value = READ_FIELD(o, JSBoundFunction::kBoundArgumentsOffset);
    Object::VerifyPointer(isolate, bound_arguments_value);
    CHECK(bound_arguments_value.IsFixedArray() || bound_arguments_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSDataViewVerify(JSDataView o, Isolate* isolate) {
  o->JSArrayBufferViewVerify(isolate);
  CHECK(o.IsJSDataView());
}
void ClassVerifiersFromDSL::JSDateVerify(JSDate o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSDate());
  {
    Object value_value = READ_FIELD(o, JSDate::kValueOffset);
    Object::VerifyPointer(isolate, value_value);
    CHECK(value_value.IsSmi() || value_value.IsUndefined() || value_value.IsHeapNumber() || value_value.IsUndefined(isolate));
  }
  {
    Object year_value = READ_FIELD(o, JSDate::kYearOffset);
    Object::VerifyPointer(isolate, year_value);
    CHECK(year_value.IsNaN() || year_value.IsSmi() || year_value.IsUndefined() || year_value.IsUndefined(isolate));
  }
  {
    Object month_value = READ_FIELD(o, JSDate::kMonthOffset);
    Object::VerifyPointer(isolate, month_value);
    CHECK(month_value.IsNaN() || month_value.IsSmi() || month_value.IsUndefined() || month_value.IsUndefined(isolate));
  }
  {
    Object day_value = READ_FIELD(o, JSDate::kDayOffset);
    Object::VerifyPointer(isolate, day_value);
    CHECK(day_value.IsNaN() || day_value.IsSmi() || day_value.IsUndefined() || day_value.IsUndefined(isolate));
  }
  {
    Object weekday_value = READ_FIELD(o, JSDate::kWeekdayOffset);
    Object::VerifyPointer(isolate, weekday_value);
    CHECK(weekday_value.IsNaN() || weekday_value.IsSmi() || weekday_value.IsUndefined() || weekday_value.IsUndefined(isolate));
  }
  {
    Object hour_value = READ_FIELD(o, JSDate::kHourOffset);
    Object::VerifyPointer(isolate, hour_value);
    CHECK(hour_value.IsNaN() || hour_value.IsSmi() || hour_value.IsUndefined() || hour_value.IsUndefined(isolate));
  }
  {
    Object min_value = READ_FIELD(o, JSDate::kMinOffset);
    Object::VerifyPointer(isolate, min_value);
    CHECK(min_value.IsNaN() || min_value.IsSmi() || min_value.IsUndefined() || min_value.IsUndefined(isolate));
  }
  {
    Object sec_value = READ_FIELD(o, JSDate::kSecOffset);
    Object::VerifyPointer(isolate, sec_value);
    CHECK(sec_value.IsNaN() || sec_value.IsSmi() || sec_value.IsUndefined() || sec_value.IsUndefined(isolate));
  }
  {
    Object cache_stamp_value = READ_FIELD(o, JSDate::kCacheStampOffset);
    Object::VerifyPointer(isolate, cache_stamp_value);
    CHECK(cache_stamp_value.IsNaN() || cache_stamp_value.IsSmi() || cache_stamp_value.IsUndefined() || cache_stamp_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSDateTimeFormatVerify(JSDateTimeFormat o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSDateTimeFormat());
  {
    Object icu_locale_value = READ_FIELD(o, JSDateTimeFormat::kIcuLocaleOffset);
    Object::VerifyPointer(isolate, icu_locale_value);
    CHECK(icu_locale_value.IsForeign() || icu_locale_value.IsUndefined(isolate));
  }
  {
    Object icu_simple_date_format_value = READ_FIELD(o, JSDateTimeFormat::kIcuSimpleDateFormatOffset);
    Object::VerifyPointer(isolate, icu_simple_date_format_value);
    CHECK(icu_simple_date_format_value.IsForeign() || icu_simple_date_format_value.IsUndefined(isolate));
  }
  {
    Object icu_date_interval_format_value = READ_FIELD(o, JSDateTimeFormat::kIcuDateIntervalFormatOffset);
    Object::VerifyPointer(isolate, icu_date_interval_format_value);
    CHECK(icu_date_interval_format_value.IsForeign() || icu_date_interval_format_value.IsUndefined(isolate));
  }
  {
    Object bound_format_value = READ_FIELD(o, JSDateTimeFormat::kBoundFormatOffset);
    Object::VerifyPointer(isolate, bound_format_value);
    CHECK(bound_format_value.IsUndefined() || bound_format_value.IsJSFunction() || bound_format_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSDateTimeFormat::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSFunctionVerify(JSFunction o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSFunction());
  {
    Object shared_function_info_value = READ_FIELD(o, JSFunction::kSharedFunctionInfoOffset);
    Object::VerifyPointer(isolate, shared_function_info_value);
    CHECK(shared_function_info_value.IsSharedFunctionInfo() || shared_function_info_value.IsUndefined(isolate));
  }
  {
    Object context_value = READ_FIELD(o, JSFunction::kContextOffset);
    Object::VerifyPointer(isolate, context_value);
    CHECK(context_value.IsContext() || context_value.IsUndefined(isolate));
  }
  {
    Object feedback_cell_value = READ_FIELD(o, JSFunction::kFeedbackCellOffset);
    Object::VerifyPointer(isolate, feedback_cell_value);
    CHECK(feedback_cell_value.IsFeedbackCell() || feedback_cell_value.IsUndefined(isolate));
  }
  {
    MaybeObject code_value = READ_WEAK_FIELD(o, JSFunction::kCodeOffset);
    MaybeObject::VerifyMaybeObjectPointer(isolate, code_value);
    CHECK(code_value.IsWeakOrCleared() || code_value.GetHeapObjectOrSmi().IsCode() || code_value.GetHeapObjectOrSmi().IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSGeneratorObjectVerify(JSGeneratorObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSGeneratorObject());
  {
    Object function_value = READ_FIELD(o, JSGeneratorObject::kFunctionOffset);
    Object::VerifyPointer(isolate, function_value);
    CHECK(function_value.IsJSFunction() || function_value.IsUndefined(isolate));
  }
  {
    Object context_value = READ_FIELD(o, JSGeneratorObject::kContextOffset);
    Object::VerifyPointer(isolate, context_value);
    CHECK(context_value.IsContext() || context_value.IsUndefined(isolate));
  }
  {
    Object receiver_value = READ_FIELD(o, JSGeneratorObject::kReceiverOffset);
    Object::VerifyPointer(isolate, receiver_value);
  }
  {
    Object input_or_debug_pos_value = READ_FIELD(o, JSGeneratorObject::kInputOrDebugPosOffset);
    Object::VerifyPointer(isolate, input_or_debug_pos_value);
  }
  {
    Object resume_mode_value = READ_FIELD(o, JSGeneratorObject::kResumeModeOffset);
    Object::VerifyPointer(isolate, resume_mode_value);
    CHECK(resume_mode_value.IsSmi() || resume_mode_value.IsUndefined(isolate));
  }
  {
    Object continuation_value = READ_FIELD(o, JSGeneratorObject::kContinuationOffset);
    Object::VerifyPointer(isolate, continuation_value);
    CHECK(continuation_value.IsSmi() || continuation_value.IsUndefined(isolate));
  }
  {
    Object parameters_and_registers_value = READ_FIELD(o, JSGeneratorObject::kParametersAndRegistersOffset);
    Object::VerifyPointer(isolate, parameters_and_registers_value);
    CHECK(parameters_and_registers_value.IsFixedArray() || parameters_and_registers_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSGlobalObjectVerify(JSGlobalObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSGlobalObject());
  {
    Object native_context_value = READ_FIELD(o, JSGlobalObject::kNativeContextOffset);
    Object::VerifyPointer(isolate, native_context_value);
    CHECK(native_context_value.IsNativeContext() || native_context_value.IsUndefined(isolate));
  }
  {
    Object global_proxy_value = READ_FIELD(o, JSGlobalObject::kGlobalProxyOffset);
    Object::VerifyPointer(isolate, global_proxy_value);
    CHECK(global_proxy_value.IsJSGlobalProxy() || global_proxy_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSGlobalProxyVerify(JSGlobalProxy o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSGlobalProxy());
  {
    Object native_context_value = READ_FIELD(o, JSGlobalProxy::kNativeContextOffset);
    Object::VerifyPointer(isolate, native_context_value);
  }
}
void ClassVerifiersFromDSL::JSListFormatVerify(JSListFormat o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSListFormat());
  {
    Object locale_value = READ_FIELD(o, JSListFormat::kLocaleOffset);
    Object::VerifyPointer(isolate, locale_value);
    CHECK(locale_value.IsString() || locale_value.IsUndefined(isolate));
  }
  {
    Object icu_formatter_value = READ_FIELD(o, JSListFormat::kIcuFormatterOffset);
    Object::VerifyPointer(isolate, icu_formatter_value);
    CHECK(icu_formatter_value.IsForeign() || icu_formatter_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSListFormat::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSLocaleVerify(JSLocale o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSLocale());
  {
    Object icu_locale_value = READ_FIELD(o, JSLocale::kIcuLocaleOffset);
    Object::VerifyPointer(isolate, icu_locale_value);
    CHECK(icu_locale_value.IsForeign() || icu_locale_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSMapVerify(JSMap o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSMap());
}
void ClassVerifiersFromDSL::JSMessageObjectVerify(JSMessageObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSMessageObject());
  {
    Object message_type_value = READ_FIELD(o, JSMessageObject::kMessageTypeOffset);
    Object::VerifyPointer(isolate, message_type_value);
    CHECK(message_type_value.IsSmi() || message_type_value.IsUndefined(isolate));
  }
  {
    Object arguments_value = READ_FIELD(o, JSMessageObject::kArgumentsOffset);
    Object::VerifyPointer(isolate, arguments_value);
  }
  {
    Object script_value = READ_FIELD(o, JSMessageObject::kScriptOffset);
    Object::VerifyPointer(isolate, script_value);
    CHECK(script_value.IsScript() || script_value.IsUndefined(isolate));
  }
  {
    Object stack_frames_value = READ_FIELD(o, JSMessageObject::kStackFramesOffset);
    Object::VerifyPointer(isolate, stack_frames_value);
  }
  {
    Object shared_info_value = READ_FIELD(o, JSMessageObject::kSharedInfoOffset);
    Object::VerifyPointer(isolate, shared_info_value);
    CHECK(shared_info_value.IsUndefined() || shared_info_value.IsSharedFunctionInfo() || shared_info_value.IsUndefined(isolate));
  }
  {
    Object bytecode_offset_value = READ_FIELD(o, JSMessageObject::kBytecodeOffsetOffset);
    Object::VerifyPointer(isolate, bytecode_offset_value);
    CHECK(bytecode_offset_value.IsSmi() || bytecode_offset_value.IsUndefined(isolate));
  }
  {
    Object start_position_value = READ_FIELD(o, JSMessageObject::kStartPositionOffset);
    Object::VerifyPointer(isolate, start_position_value);
    CHECK(start_position_value.IsSmi() || start_position_value.IsUndefined(isolate));
  }
  {
    Object end_position_value = READ_FIELD(o, JSMessageObject::kEndPositionOffset);
    Object::VerifyPointer(isolate, end_position_value);
    CHECK(end_position_value.IsSmi() || end_position_value.IsUndefined(isolate));
  }
  {
    Object error_level_value = READ_FIELD(o, JSMessageObject::kErrorLevelOffset);
    Object::VerifyPointer(isolate, error_level_value);
    CHECK(error_level_value.IsSmi() || error_level_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSNumberFormatVerify(JSNumberFormat o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSNumberFormat());
  {
    Object locale_value = READ_FIELD(o, JSNumberFormat::kLocaleOffset);
    Object::VerifyPointer(isolate, locale_value);
    CHECK(locale_value.IsString() || locale_value.IsUndefined(isolate));
  }
  {
    Object icu_number_formatter_value = READ_FIELD(o, JSNumberFormat::kIcuNumberFormatterOffset);
    Object::VerifyPointer(isolate, icu_number_formatter_value);
    CHECK(icu_number_formatter_value.IsForeign() || icu_number_formatter_value.IsUndefined(isolate));
  }
  {
    Object bound_format_value = READ_FIELD(o, JSNumberFormat::kBoundFormatOffset);
    Object::VerifyPointer(isolate, bound_format_value);
    CHECK(bound_format_value.IsUndefined() || bound_format_value.IsJSFunction() || bound_format_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSNumberFormat::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSObjectVerify(JSObject o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsJSObject());
}
void ClassVerifiersFromDSL::JSPluralRulesVerify(JSPluralRules o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSPluralRules());
  {
    Object locale_value = READ_FIELD(o, JSPluralRules::kLocaleOffset);
    Object::VerifyPointer(isolate, locale_value);
    CHECK(locale_value.IsString() || locale_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSPluralRules::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
  {
    Object icu_plural_rules_value = READ_FIELD(o, JSPluralRules::kIcuPluralRulesOffset);
    Object::VerifyPointer(isolate, icu_plural_rules_value);
    CHECK(icu_plural_rules_value.IsForeign() || icu_plural_rules_value.IsUndefined(isolate));
  }
  {
    Object icu_decimal_format_value = READ_FIELD(o, JSPluralRules::kIcuDecimalFormatOffset);
    Object::VerifyPointer(isolate, icu_decimal_format_value);
    CHECK(icu_decimal_format_value.IsForeign() || icu_decimal_format_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSPromiseVerify(JSPromise o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSPromise());
  {
    Object reactions_or_result_value = READ_FIELD(o, JSPromise::kReactionsOrResultOffset);
    Object::VerifyPointer(isolate, reactions_or_result_value);
  }
  {
    Object flags_value = READ_FIELD(o, JSPromise::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSProxyVerify(JSProxy o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsJSProxy());
  {
    Object target_value = READ_FIELD(o, JSProxy::kTargetOffset);
    Object::VerifyPointer(isolate, target_value);
  }
  {
    Object handler_value = READ_FIELD(o, JSProxy::kHandlerOffset);
    Object::VerifyPointer(isolate, handler_value);
  }
}
void ClassVerifiersFromDSL::JSRegExpVerify(JSRegExp o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSRegExp());
  {
    Object data_value = READ_FIELD(o, JSRegExp::kDataOffset);
    Object::VerifyPointer(isolate, data_value);
    CHECK(data_value.IsUndefined() || data_value.IsFixedArray() || data_value.IsUndefined(isolate));
  }
  {
    Object source_value = READ_FIELD(o, JSRegExp::kSourceOffset);
    Object::VerifyPointer(isolate, source_value);
    CHECK(source_value.IsUndefined() || source_value.IsString() || source_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSRegExp::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSRegExpResultVerify(JSRegExpResult o, Isolate* isolate) {
  o->JSArrayVerify(isolate);
  CHECK(o.IsJSRegExpResult());
  {
    Object index_value = READ_FIELD(o, JSRegExpResult::kIndexOffset);
    Object::VerifyPointer(isolate, index_value);
  }
  {
    Object input_value = READ_FIELD(o, JSRegExpResult::kInputOffset);
    Object::VerifyPointer(isolate, input_value);
  }
  {
    Object groups_value = READ_FIELD(o, JSRegExpResult::kGroupsOffset);
    Object::VerifyPointer(isolate, groups_value);
  }
}
void ClassVerifiersFromDSL::JSRegExpStringIteratorVerify(JSRegExpStringIterator o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSRegExpStringIterator());
  {
    Object iterating_reg_exp_value = READ_FIELD(o, JSRegExpStringIterator::kIteratingRegExpOffset);
    Object::VerifyPointer(isolate, iterating_reg_exp_value);
  }
  {
    Object iterated_string_value = READ_FIELD(o, JSRegExpStringIterator::kIteratedStringOffset);
    Object::VerifyPointer(isolate, iterated_string_value);
    CHECK(iterated_string_value.IsString() || iterated_string_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSRegExpStringIterator::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSRelativeTimeFormatVerify(JSRelativeTimeFormat o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSRelativeTimeFormat());
  {
    Object locale_value = READ_FIELD(o, JSRelativeTimeFormat::kLocaleOffset);
    Object::VerifyPointer(isolate, locale_value);
    CHECK(locale_value.IsString() || locale_value.IsUndefined(isolate));
  }
  {
    Object icu_formatter_value = READ_FIELD(o, JSRelativeTimeFormat::kIcuFormatterOffset);
    Object::VerifyPointer(isolate, icu_formatter_value);
    CHECK(icu_formatter_value.IsForeign() || icu_formatter_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSRelativeTimeFormat::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSSegmentIteratorVerify(JSSegmentIterator o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSSegmentIterator());
  {
    Object icu_break_iterator_value = READ_FIELD(o, JSSegmentIterator::kIcuBreakIteratorOffset);
    Object::VerifyPointer(isolate, icu_break_iterator_value);
    CHECK(icu_break_iterator_value.IsForeign() || icu_break_iterator_value.IsUndefined(isolate));
  }
  {
    Object unicode_string_value = READ_FIELD(o, JSSegmentIterator::kUnicodeStringOffset);
    Object::VerifyPointer(isolate, unicode_string_value);
    CHECK(unicode_string_value.IsForeign() || unicode_string_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSSegmentIterator::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSSegmenterVerify(JSSegmenter o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSSegmenter());
  {
    Object locale_value = READ_FIELD(o, JSSegmenter::kLocaleOffset);
    Object::VerifyPointer(isolate, locale_value);
    CHECK(locale_value.IsString() || locale_value.IsUndefined(isolate));
  }
  {
    Object icu_break_iterator_value = READ_FIELD(o, JSSegmenter::kIcuBreakIteratorOffset);
    Object::VerifyPointer(isolate, icu_break_iterator_value);
    CHECK(icu_break_iterator_value.IsForeign() || icu_break_iterator_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, JSSegmenter::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSSetVerify(JSSet o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSSet());
}
void ClassVerifiersFromDSL::JSSloppyArgumentsObjectVerify(JSSloppyArgumentsObject o, Isolate* isolate) {
  o->JSArgumentsObjectVerify(isolate);
  CHECK(o.IsJSSloppyArgumentsObject());
  {
    Object callee_value = READ_FIELD(o, JSSloppyArgumentsObject::kCalleeOffset);
    Object::VerifyPointer(isolate, callee_value);
  }
}
void ClassVerifiersFromDSL::JSStringIteratorVerify(JSStringIterator o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSStringIterator());
  {
    Object string_value = READ_FIELD(o, JSStringIterator::kStringOffset);
    Object::VerifyPointer(isolate, string_value);
    CHECK(string_value.IsString() || string_value.IsUndefined(isolate));
  }
  {
    Object next_index_value = READ_FIELD(o, JSStringIterator::kNextIndexOffset);
    Object::VerifyPointer(isolate, next_index_value);
    CHECK(next_index_value.IsSmi() || next_index_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSTypedArrayVerify(JSTypedArray o, Isolate* isolate) {
  o->JSArrayBufferViewVerify(isolate);
  CHECK(o.IsJSTypedArray());
  {
    Object length_value = READ_FIELD(o, JSTypedArray::kLengthOffset);
    Object::VerifyPointer(isolate, length_value);
    CHECK(length_value.IsSmi() || length_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::JSValueVerify(JSValue o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSValue());
  {
    Object value_value = READ_FIELD(o, JSValue::kValueOffset);
    Object::VerifyPointer(isolate, value_value);
  }
}
void ClassVerifiersFromDSL::JSWeakMapVerify(JSWeakMap o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSWeakMap());
}
void ClassVerifiersFromDSL::JSWeakSetVerify(JSWeakSet o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsJSWeakSet());
}
void ClassVerifiersFromDSL::MicrotaskVerify(Microtask o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsMicrotask());
}
void ClassVerifiersFromDSL::ModuleInfoEntryVerify(ModuleInfoEntry o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsModuleInfoEntry());
  {
    Object export_name_value = READ_FIELD(o, ModuleInfoEntry::kExportNameOffset);
    Object::VerifyPointer(isolate, export_name_value);
    CHECK(export_name_value.IsUndefined() || export_name_value.IsString());
  }
  {
    Object local_name_value = READ_FIELD(o, ModuleInfoEntry::kLocalNameOffset);
    Object::VerifyPointer(isolate, local_name_value);
    CHECK(local_name_value.IsUndefined() || local_name_value.IsString());
  }
  {
    Object import_name_value = READ_FIELD(o, ModuleInfoEntry::kImportNameOffset);
    Object::VerifyPointer(isolate, import_name_value);
    CHECK(import_name_value.IsUndefined() || import_name_value.IsString());
  }
  {
    Object module_request_value = READ_FIELD(o, ModuleInfoEntry::kModuleRequestOffset);
    Object::VerifyPointer(isolate, module_request_value);
    CHECK(module_request_value.IsSmi());
  }
  {
    Object cell_index_value = READ_FIELD(o, ModuleInfoEntry::kCellIndexOffset);
    Object::VerifyPointer(isolate, cell_index_value);
    CHECK(cell_index_value.IsSmi());
  }
  {
    Object beg_pos_value = READ_FIELD(o, ModuleInfoEntry::kBegPosOffset);
    Object::VerifyPointer(isolate, beg_pos_value);
    CHECK(beg_pos_value.IsSmi());
  }
  {
    Object end_pos_value = READ_FIELD(o, ModuleInfoEntry::kEndPosOffset);
    Object::VerifyPointer(isolate, end_pos_value);
    CHECK(end_pos_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::ObjectTemplateInfoVerify(ObjectTemplateInfo o, Isolate* isolate) {
  o->TemplateInfoVerify(isolate);
  CHECK(o.IsObjectTemplateInfo());
  {
    Object constructor_value = READ_FIELD(o, ObjectTemplateInfo::kConstructorOffset);
    Object::VerifyPointer(isolate, constructor_value);
  }
  {
    Object data_value = READ_FIELD(o, ObjectTemplateInfo::kDataOffset);
    Object::VerifyPointer(isolate, data_value);
  }
}
void ClassVerifiersFromDSL::OddballVerify(Oddball o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsOddball());
  {
    Object to_string_value = READ_FIELD(o, Oddball::kToStringOffset);
    Object::VerifyPointer(isolate, to_string_value);
    CHECK(to_string_value.IsString());
  }
  {
    Object to_number_value = READ_FIELD(o, Oddball::kToNumberOffset);
    Object::VerifyPointer(isolate, to_number_value);
    CHECK(to_number_value.IsSmi() || to_number_value.IsHeapNumber());
  }
  {
    Object type_of_value = READ_FIELD(o, Oddball::kTypeOfOffset);
    Object::VerifyPointer(isolate, type_of_value);
    CHECK(type_of_value.IsString());
  }
  {
    Object kind_value = READ_FIELD(o, Oddball::kKindOffset);
    Object::VerifyPointer(isolate, kind_value);
    CHECK(kind_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::PreparseDataVerify(PreparseData o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPreparseData());
}
void ClassVerifiersFromDSL::PromiseCapabilityVerify(PromiseCapability o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPromiseCapability());
  {
    Object promise_value = READ_FIELD(o, PromiseCapability::kPromiseOffset);
    Object::VerifyPointer(isolate, promise_value);
    CHECK(promise_value.IsUndefined() || promise_value.IsJSReceiver());
  }
  {
    Object resolve_value = READ_FIELD(o, PromiseCapability::kResolveOffset);
    Object::VerifyPointer(isolate, resolve_value);
  }
  {
    Object reject_value = READ_FIELD(o, PromiseCapability::kRejectOffset);
    Object::VerifyPointer(isolate, reject_value);
  }
}
void ClassVerifiersFromDSL::PromiseFulfillReactionJobTaskVerify(PromiseFulfillReactionJobTask o, Isolate* isolate) {
  o->PromiseReactionJobTaskVerify(isolate);
  CHECK(o.IsPromiseFulfillReactionJobTask());
}
void ClassVerifiersFromDSL::PromiseReactionVerify(PromiseReaction o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPromiseReaction());
  {
    Object next_value = READ_FIELD(o, PromiseReaction::kNextOffset);
    Object::VerifyPointer(isolate, next_value);
    CHECK(next_value.IsZero() || next_value.IsPromiseReaction());
  }
  {
    Object reject_handler_value = READ_FIELD(o, PromiseReaction::kRejectHandlerOffset);
    Object::VerifyPointer(isolate, reject_handler_value);
    CHECK(reject_handler_value.IsUndefined() || reject_handler_value.IsJSBoundFunction() || reject_handler_value.IsJSFunction() || reject_handler_value.IsJSProxy());
  }
  {
    Object fulfill_handler_value = READ_FIELD(o, PromiseReaction::kFulfillHandlerOffset);
    Object::VerifyPointer(isolate, fulfill_handler_value);
    CHECK(fulfill_handler_value.IsUndefined() || fulfill_handler_value.IsJSBoundFunction() || fulfill_handler_value.IsJSFunction() || fulfill_handler_value.IsJSProxy());
  }
  {
    Object promise_or_capability_value = READ_FIELD(o, PromiseReaction::kPromiseOrCapabilityOffset);
    Object::VerifyPointer(isolate, promise_or_capability_value);
    CHECK(promise_or_capability_value.IsUndefined() || promise_or_capability_value.IsJSPromise() || promise_or_capability_value.IsPromiseCapability());
  }
}
void ClassVerifiersFromDSL::PromiseReactionJobTaskVerify(PromiseReactionJobTask o, Isolate* isolate) {
  o->MicrotaskVerify(isolate);
  CHECK(o.IsPromiseReactionJobTask());
  {
    Object argument_value = READ_FIELD(o, PromiseReactionJobTask::kArgumentOffset);
    Object::VerifyPointer(isolate, argument_value);
  }
  {
    Object context_value = READ_FIELD(o, PromiseReactionJobTask::kContextOffset);
    Object::VerifyPointer(isolate, context_value);
    CHECK(context_value.IsContext());
  }
  {
    Object promise_or_capability_value = READ_FIELD(o, PromiseReactionJobTask::kPromiseOrCapabilityOffset);
    Object::VerifyPointer(isolate, promise_or_capability_value);
    CHECK(promise_or_capability_value.IsUndefined() || promise_or_capability_value.IsJSPromise() || promise_or_capability_value.IsPromiseCapability());
  }
}
void ClassVerifiersFromDSL::PromiseRejectReactionJobTaskVerify(PromiseRejectReactionJobTask o, Isolate* isolate) {
  o->PromiseReactionJobTaskVerify(isolate);
  CHECK(o.IsPromiseRejectReactionJobTask());
}
void ClassVerifiersFromDSL::PromiseResolveThenableJobTaskVerify(PromiseResolveThenableJobTask o, Isolate* isolate) {
  o->MicrotaskVerify(isolate);
  CHECK(o.IsPromiseResolveThenableJobTask());
  {
    Object context_value = READ_FIELD(o, PromiseResolveThenableJobTask::kContextOffset);
    Object::VerifyPointer(isolate, context_value);
    CHECK(context_value.IsContext());
  }
  {
    Object promise_to_resolve_value = READ_FIELD(o, PromiseResolveThenableJobTask::kPromiseToResolveOffset);
    Object::VerifyPointer(isolate, promise_to_resolve_value);
    CHECK(promise_to_resolve_value.IsJSPromise());
  }
  {
    Object then_value = READ_FIELD(o, PromiseResolveThenableJobTask::kThenOffset);
    Object::VerifyPointer(isolate, then_value);
    CHECK(then_value.IsJSReceiver());
  }
  {
    Object thenable_value = READ_FIELD(o, PromiseResolveThenableJobTask::kThenableOffset);
    Object::VerifyPointer(isolate, thenable_value);
    CHECK(thenable_value.IsJSReceiver());
  }
}
void ClassVerifiersFromDSL::PropertyArrayVerify(PropertyArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPropertyArray());
  {
    Object length_and_hash_value = READ_FIELD(o, PropertyArray::kLengthAndHashOffset);
    Object::VerifyPointer(isolate, length_and_hash_value);
    CHECK(length_and_hash_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::PropertyCellVerify(PropertyCell o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPropertyCell());
  {
    Object name_value = READ_FIELD(o, PropertyCell::kNameOffset);
    Object::VerifyPointer(isolate, name_value);
    CHECK(name_value.IsName());
  }
  {
    Object property_details_raw_value = READ_FIELD(o, PropertyCell::kPropertyDetailsRawOffset);
    Object::VerifyPointer(isolate, property_details_raw_value);
    CHECK(property_details_raw_value.IsSmi());
  }
  {
    Object value_value = READ_FIELD(o, PropertyCell::kValueOffset);
    Object::VerifyPointer(isolate, value_value);
  }
  {
    Object dependent_code_value = READ_FIELD(o, PropertyCell::kDependentCodeOffset);
    Object::VerifyPointer(isolate, dependent_code_value);
    CHECK(dependent_code_value.IsDependentCode());
  }
}
void ClassVerifiersFromDSL::PrototypeInfoVerify(PrototypeInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsPrototypeInfo());
  {
    Object js_module_namespace_value = READ_FIELD(o, PrototypeInfo::kJsModuleNamespaceOffset);
    Object::VerifyPointer(isolate, js_module_namespace_value);
    CHECK(js_module_namespace_value.IsJSModuleNamespace() || js_module_namespace_value.IsUndefined());
  }
  {
    Object prototype_users_value = READ_FIELD(o, PrototypeInfo::kPrototypeUsersOffset);
    Object::VerifyPointer(isolate, prototype_users_value);
    CHECK(prototype_users_value.IsWeakArrayList() || prototype_users_value.IsZero());
  }
  {
    Object registry_slot_value = READ_FIELD(o, PrototypeInfo::kRegistrySlotOffset);
    Object::VerifyPointer(isolate, registry_slot_value);
    CHECK(registry_slot_value.IsSmi());
  }
  {
    Object validity_cell_value = READ_FIELD(o, PrototypeInfo::kValidityCellOffset);
    Object::VerifyPointer(isolate, validity_cell_value);
  }
  {
    Object bit_field_value = READ_FIELD(o, PrototypeInfo::kBitFieldOffset);
    Object::VerifyPointer(isolate, bit_field_value);
    CHECK(bit_field_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::RegExpMatchInfoVerify(RegExpMatchInfo o, Isolate* isolate) {
  o->FixedArrayVerify(isolate);
  CHECK(o.IsRegExpMatchInfo());
}
void ClassVerifiersFromDSL::ScriptVerify(Script o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsScript());
  {
    Object source_value = READ_FIELD(o, Script::kSourceOffset);
    Object::VerifyPointer(isolate, source_value);
  }
  {
    Object name_value = READ_FIELD(o, Script::kNameOffset);
    Object::VerifyPointer(isolate, name_value);
  }
  {
    Object line_offset_value = READ_FIELD(o, Script::kLineOffsetOffset);
    Object::VerifyPointer(isolate, line_offset_value);
    CHECK(line_offset_value.IsSmi());
  }
  {
    Object column_offset_value = READ_FIELD(o, Script::kColumnOffsetOffset);
    Object::VerifyPointer(isolate, column_offset_value);
    CHECK(column_offset_value.IsSmi());
  }
  {
    Object context_value = READ_FIELD(o, Script::kContextOffset);
    Object::VerifyPointer(isolate, context_value);
  }
  {
    Object script_type_value = READ_FIELD(o, Script::kScriptTypeOffset);
    Object::VerifyPointer(isolate, script_type_value);
    CHECK(script_type_value.IsSmi());
  }
  {
    Object line_ends_value = READ_FIELD(o, Script::kLineEndsOffset);
    Object::VerifyPointer(isolate, line_ends_value);
  }
  {
    Object id_value = READ_FIELD(o, Script::kIdOffset);
    Object::VerifyPointer(isolate, id_value);
    CHECK(id_value.IsSmi());
  }
  {
    Object eval_from_shared_or_wrapped_arguments_value = READ_FIELD(o, Script::kEvalFromSharedOrWrappedArgumentsOffset);
    Object::VerifyPointer(isolate, eval_from_shared_or_wrapped_arguments_value);
  }
  {
    Object eval_from_position_value = READ_FIELD(o, Script::kEvalFromPositionOffset);
    Object::VerifyPointer(isolate, eval_from_position_value);
    CHECK(eval_from_position_value.IsSmi());
  }
  {
    Object shared_function_infos_value = READ_FIELD(o, Script::kSharedFunctionInfosOffset);
    Object::VerifyPointer(isolate, shared_function_infos_value);
  }
  {
    Object flags_value = READ_FIELD(o, Script::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi());
  }
  {
    Object source_url_value = READ_FIELD(o, Script::kSourceUrlOffset);
    Object::VerifyPointer(isolate, source_url_value);
  }
  {
    Object source_mapping_url_value = READ_FIELD(o, Script::kSourceMappingUrlOffset);
    Object::VerifyPointer(isolate, source_mapping_url_value);
  }
  {
    Object host_defined_options_value = READ_FIELD(o, Script::kHostDefinedOptionsOffset);
    Object::VerifyPointer(isolate, host_defined_options_value);
  }
}
void ClassVerifiersFromDSL::SeqOneByteStringVerify(SeqOneByteString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsSeqOneByteString());
}
void ClassVerifiersFromDSL::SeqTwoByteStringVerify(SeqTwoByteString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsSeqTwoByteString());
}
void ClassVerifiersFromDSL::SharedFunctionInfoVerify(SharedFunctionInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsSharedFunctionInfo());
  {
    MaybeObject function_data_value = READ_WEAK_FIELD(o, SharedFunctionInfo::kFunctionDataOffset);
    MaybeObject::VerifyMaybeObjectPointer(isolate, function_data_value);
  }
  {
    Object name_or_scope_info_value = READ_FIELD(o, SharedFunctionInfo::kNameOrScopeInfoOffset);
    Object::VerifyPointer(isolate, name_or_scope_info_value);
    CHECK(name_or_scope_info_value.IsNoSharedNameSentinel() || name_or_scope_info_value.IsScopeInfo() || name_or_scope_info_value.IsString());
  }
  {
    Object outer_scope_info_or_feedback_metadata_value = READ_FIELD(o, SharedFunctionInfo::kOuterScopeInfoOrFeedbackMetadataOffset);
    Object::VerifyPointer(isolate, outer_scope_info_or_feedback_metadata_value);
    CHECK(outer_scope_info_or_feedback_metadata_value.IsHeapObject());
  }
  {
    Object script_or_debug_info_value = READ_FIELD(o, SharedFunctionInfo::kScriptOrDebugInfoOffset);
    Object::VerifyPointer(isolate, script_or_debug_info_value);
    CHECK(script_or_debug_info_value.IsUndefined() || script_or_debug_info_value.IsDebugInfo() || script_or_debug_info_value.IsScript());
  }
}
void ClassVerifiersFromDSL::SlicedStringVerify(SlicedString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsSlicedString());
  {
    Object parent_value = READ_FIELD(o, SlicedString::kParentOffset);
    Object::VerifyPointer(isolate, parent_value);
    CHECK(parent_value.IsString());
  }
  {
    Object offset_value = READ_FIELD(o, SlicedString::kOffsetOffset);
    Object::VerifyPointer(isolate, offset_value);
    CHECK(offset_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::SloppyArgumentsElementsVerify(SloppyArgumentsElements o, Isolate* isolate) {
  o->FixedArrayVerify(isolate);
  CHECK(o.IsSloppyArgumentsElements());
}
void ClassVerifiersFromDSL::SourcePositionTableWithFrameCacheVerify(SourcePositionTableWithFrameCache o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsSourcePositionTableWithFrameCache());
  {
    Object source_position_table_value = READ_FIELD(o, SourcePositionTableWithFrameCache::kSourcePositionTableOffset);
    Object::VerifyPointer(isolate, source_position_table_value);
    CHECK(source_position_table_value.IsByteArray());
  }
  {
    Object stack_frame_cache_value = READ_FIELD(o, SourcePositionTableWithFrameCache::kStackFrameCacheOffset);
    Object::VerifyPointer(isolate, stack_frame_cache_value);
  }
}
void ClassVerifiersFromDSL::StackFrameInfoVerify(StackFrameInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsStackFrameInfo());
  {
    Object line_number_value = READ_FIELD(o, StackFrameInfo::kLineNumberOffset);
    Object::VerifyPointer(isolate, line_number_value);
    CHECK(line_number_value.IsSmi());
  }
  {
    Object column_number_value = READ_FIELD(o, StackFrameInfo::kColumnNumberOffset);
    Object::VerifyPointer(isolate, column_number_value);
    CHECK(column_number_value.IsSmi());
  }
  {
    Object script_id_value = READ_FIELD(o, StackFrameInfo::kScriptIdOffset);
    Object::VerifyPointer(isolate, script_id_value);
    CHECK(script_id_value.IsSmi());
  }
  {
    Object script_name_value = READ_FIELD(o, StackFrameInfo::kScriptNameOffset);
    Object::VerifyPointer(isolate, script_name_value);
  }
  {
    Object script_name_or_source_url_value = READ_FIELD(o, StackFrameInfo::kScriptNameOrSourceUrlOffset);
    Object::VerifyPointer(isolate, script_name_or_source_url_value);
  }
  {
    Object function_name_value = READ_FIELD(o, StackFrameInfo::kFunctionNameOffset);
    Object::VerifyPointer(isolate, function_name_value);
  }
  {
    Object flag_value = READ_FIELD(o, StackFrameInfo::kFlagOffset);
    Object::VerifyPointer(isolate, flag_value);
    CHECK(flag_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::StackTraceFrameVerify(StackTraceFrame o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsStackTraceFrame());
  {
    Object frame_array_value = READ_FIELD(o, StackTraceFrame::kFrameArrayOffset);
    Object::VerifyPointer(isolate, frame_array_value);
  }
  {
    Object frame_index_value = READ_FIELD(o, StackTraceFrame::kFrameIndexOffset);
    Object::VerifyPointer(isolate, frame_index_value);
    CHECK(frame_index_value.IsSmi());
  }
  {
    Object frame_info_value = READ_FIELD(o, StackTraceFrame::kFrameInfoOffset);
    Object::VerifyPointer(isolate, frame_info_value);
  }
  {
    Object id_value = READ_FIELD(o, StackTraceFrame::kIdOffset);
    Object::VerifyPointer(isolate, id_value);
    CHECK(id_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::StringVerify(String o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsString());
}
void ClassVerifiersFromDSL::SymbolVerify(Symbol o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsSymbol());
  {
    Object name_value = READ_FIELD(o, Symbol::kNameOffset);
    Object::VerifyPointer(isolate, name_value);
  }
}
void ClassVerifiersFromDSL::TemplateInfoVerify(TemplateInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsTemplateInfo());
  {
    Object tag_value = READ_FIELD(o, TemplateInfo::kTagOffset);
    Object::VerifyPointer(isolate, tag_value);
  }
  {
    Object serial_number_value = READ_FIELD(o, TemplateInfo::kSerialNumberOffset);
    Object::VerifyPointer(isolate, serial_number_value);
  }
  {
    Object number_of_properties_value = READ_FIELD(o, TemplateInfo::kNumberOfPropertiesOffset);
    Object::VerifyPointer(isolate, number_of_properties_value);
    CHECK(number_of_properties_value.IsSmi());
  }
  {
    Object property_list_value = READ_FIELD(o, TemplateInfo::kPropertyListOffset);
    Object::VerifyPointer(isolate, property_list_value);
  }
  {
    Object property_accessors_value = READ_FIELD(o, TemplateInfo::kPropertyAccessorsOffset);
    Object::VerifyPointer(isolate, property_accessors_value);
  }
}
void ClassVerifiersFromDSL::ThinStringVerify(ThinString o, Isolate* isolate) {
  o->StringVerify(isolate);
  CHECK(o.IsThinString());
  {
    Object actual_value = READ_FIELD(o, ThinString::kActualOffset);
    Object::VerifyPointer(isolate, actual_value);
    CHECK(actual_value.IsString());
  }
}
void ClassVerifiersFromDSL::Tuple2Verify(Tuple2 o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsTuple2());
  {
    Object value1_value = READ_FIELD(o, Tuple2::kValue1Offset);
    Object::VerifyPointer(isolate, value1_value);
  }
  {
    Object value2_value = READ_FIELD(o, Tuple2::kValue2Offset);
    Object::VerifyPointer(isolate, value2_value);
  }
}
void ClassVerifiersFromDSL::Tuple3Verify(Tuple3 o, Isolate* isolate) {
  o->Tuple2Verify(isolate);
  CHECK(o.IsTuple3());
  {
    Object value3_value = READ_FIELD(o, Tuple3::kValue3Offset);
    Object::VerifyPointer(isolate, value3_value);
  }
}
void ClassVerifiersFromDSL::WasmCapiFunctionDataVerify(WasmCapiFunctionData o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWasmCapiFunctionData());
  {
    Object wrapper_code_value = READ_FIELD(o, WasmCapiFunctionData::kWrapperCodeOffset);
    Object::VerifyPointer(isolate, wrapper_code_value);
    CHECK(wrapper_code_value.IsCode());
  }
  {
    Object serialized_signature_value = READ_FIELD(o, WasmCapiFunctionData::kSerializedSignatureOffset);
    Object::VerifyPointer(isolate, serialized_signature_value);
    CHECK(serialized_signature_value.IsByteArray());
  }
}
void ClassVerifiersFromDSL::WasmDebugInfoVerify(WasmDebugInfo o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWasmDebugInfo());
  {
    Object instance_value = READ_FIELD(o, WasmDebugInfo::kInstanceOffset);
    Object::VerifyPointer(isolate, instance_value);
    CHECK(instance_value.IsWasmInstanceObject());
  }
  {
    Object interpreter_handle_value = READ_FIELD(o, WasmDebugInfo::kInterpreterHandleOffset);
    Object::VerifyPointer(isolate, interpreter_handle_value);
    CHECK(interpreter_handle_value.IsUndefined() || interpreter_handle_value.IsForeign());
  }
  {
    Object locals_names_value = READ_FIELD(o, WasmDebugInfo::kLocalsNamesOffset);
    Object::VerifyPointer(isolate, locals_names_value);
    CHECK(locals_names_value.IsUndefined() || locals_names_value.IsFixedArray());
  }
  {
    Object c_wasm_entries_value = READ_FIELD(o, WasmDebugInfo::kCWasmEntriesOffset);
    Object::VerifyPointer(isolate, c_wasm_entries_value);
    CHECK(c_wasm_entries_value.IsUndefined() || c_wasm_entries_value.IsFixedArray());
  }
  {
    Object c_wasm_entry_map_value = READ_FIELD(o, WasmDebugInfo::kCWasmEntryMapOffset);
    Object::VerifyPointer(isolate, c_wasm_entry_map_value);
    CHECK(c_wasm_entry_map_value.IsUndefined() || c_wasm_entry_map_value.IsForeign());
  }
}
void ClassVerifiersFromDSL::WasmExceptionObjectVerify(WasmExceptionObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsWasmExceptionObject());
  {
    Object serialized_signature_value = READ_FIELD(o, WasmExceptionObject::kSerializedSignatureOffset);
    Object::VerifyPointer(isolate, serialized_signature_value);
    CHECK(serialized_signature_value.IsByteArray() || serialized_signature_value.IsUndefined(isolate));
  }
  {
    Object exception_tag_value = READ_FIELD(o, WasmExceptionObject::kExceptionTagOffset);
    Object::VerifyPointer(isolate, exception_tag_value);
    CHECK(exception_tag_value.IsHeapObject() || exception_tag_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::WasmExceptionTagVerify(WasmExceptionTag o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWasmExceptionTag());
  {
    Object index_value = READ_FIELD(o, WasmExceptionTag::kIndexOffset);
    Object::VerifyPointer(isolate, index_value);
    CHECK(index_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::WasmExportedFunctionDataVerify(WasmExportedFunctionData o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWasmExportedFunctionData());
  {
    Object wrapper_code_value = READ_FIELD(o, WasmExportedFunctionData::kWrapperCodeOffset);
    Object::VerifyPointer(isolate, wrapper_code_value);
    CHECK(wrapper_code_value.IsCode());
  }
  {
    Object instance_value = READ_FIELD(o, WasmExportedFunctionData::kInstanceOffset);
    Object::VerifyPointer(isolate, instance_value);
    CHECK(instance_value.IsWasmInstanceObject());
  }
  {
    Object jump_table_offset_value = READ_FIELD(o, WasmExportedFunctionData::kJumpTableOffsetOffset);
    Object::VerifyPointer(isolate, jump_table_offset_value);
    CHECK(jump_table_offset_value.IsSmi());
  }
  {
    Object function_index_value = READ_FIELD(o, WasmExportedFunctionData::kFunctionIndexOffset);
    Object::VerifyPointer(isolate, function_index_value);
    CHECK(function_index_value.IsSmi());
  }
}
void ClassVerifiersFromDSL::WasmGlobalObjectVerify(WasmGlobalObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsWasmGlobalObject());
  {
    Object untagged_buffer_value = READ_FIELD(o, WasmGlobalObject::kUntaggedBufferOffset);
    Object::VerifyPointer(isolate, untagged_buffer_value);
    CHECK(untagged_buffer_value.IsJSArrayBuffer() || untagged_buffer_value.IsUndefined(isolate));
  }
  {
    Object tagged_buffer_value = READ_FIELD(o, WasmGlobalObject::kTaggedBufferOffset);
    Object::VerifyPointer(isolate, tagged_buffer_value);
    CHECK(tagged_buffer_value.IsFixedArray() || tagged_buffer_value.IsUndefined(isolate));
  }
  {
    Object offset_value = READ_FIELD(o, WasmGlobalObject::kOffsetOffset);
    Object::VerifyPointer(isolate, offset_value);
    CHECK(offset_value.IsSmi() || offset_value.IsUndefined(isolate));
  }
  {
    Object flags_value = READ_FIELD(o, WasmGlobalObject::kFlagsOffset);
    Object::VerifyPointer(isolate, flags_value);
    CHECK(flags_value.IsSmi() || flags_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::WasmMemoryObjectVerify(WasmMemoryObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsWasmMemoryObject());
  {
    Object array_buffer_value = READ_FIELD(o, WasmMemoryObject::kArrayBufferOffset);
    Object::VerifyPointer(isolate, array_buffer_value);
    CHECK(array_buffer_value.IsJSArrayBuffer() || array_buffer_value.IsUndefined(isolate));
  }
  {
    Object maximum_pages_value = READ_FIELD(o, WasmMemoryObject::kMaximumPagesOffset);
    Object::VerifyPointer(isolate, maximum_pages_value);
    CHECK(maximum_pages_value.IsSmi() || maximum_pages_value.IsUndefined(isolate));
  }
  {
    Object instances_value = READ_FIELD(o, WasmMemoryObject::kInstancesOffset);
    Object::VerifyPointer(isolate, instances_value);
    CHECK(instances_value.IsUndefined() || instances_value.IsWeakArrayList() || instances_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::WasmModuleObjectVerify(WasmModuleObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsWasmModuleObject());
  {
    Object native_module_value = READ_FIELD(o, WasmModuleObject::kNativeModuleOffset);
    Object::VerifyPointer(isolate, native_module_value);
    CHECK(native_module_value.IsForeign() || native_module_value.IsUndefined(isolate));
  }
  {
    Object export_wrappers_value = READ_FIELD(o, WasmModuleObject::kExportWrappersOffset);
    Object::VerifyPointer(isolate, export_wrappers_value);
    CHECK(export_wrappers_value.IsFixedArray() || export_wrappers_value.IsUndefined(isolate));
  }
  {
    Object script_value = READ_FIELD(o, WasmModuleObject::kScriptOffset);
    Object::VerifyPointer(isolate, script_value);
    CHECK(script_value.IsScript() || script_value.IsUndefined(isolate));
  }
  {
    Object weak_instance_list_value = READ_FIELD(o, WasmModuleObject::kWeakInstanceListOffset);
    Object::VerifyPointer(isolate, weak_instance_list_value);
    CHECK(weak_instance_list_value.IsWeakArrayList() || weak_instance_list_value.IsUndefined(isolate));
  }
  {
    Object asm_js_offset_table_value = READ_FIELD(o, WasmModuleObject::kAsmJsOffsetTableOffset);
    Object::VerifyPointer(isolate, asm_js_offset_table_value);
    CHECK(asm_js_offset_table_value.IsUndefined() || asm_js_offset_table_value.IsByteArray() || asm_js_offset_table_value.IsUndefined(isolate));
  }
  {
    Object break_point_infos_value = READ_FIELD(o, WasmModuleObject::kBreakPointInfosOffset);
    Object::VerifyPointer(isolate, break_point_infos_value);
    CHECK(break_point_infos_value.IsUndefined() || break_point_infos_value.IsFixedArray() || break_point_infos_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::WasmTableObjectVerify(WasmTableObject o, Isolate* isolate) {
  o->JSObjectVerify(isolate);
  CHECK(o.IsWasmTableObject());
  {
    Object entries_value = READ_FIELD(o, WasmTableObject::kEntriesOffset);
    Object::VerifyPointer(isolate, entries_value);
    CHECK(entries_value.IsFixedArray() || entries_value.IsUndefined(isolate));
  }
  {
    Object maximum_length_value = READ_FIELD(o, WasmTableObject::kMaximumLengthOffset);
    Object::VerifyPointer(isolate, maximum_length_value);
    CHECK(maximum_length_value.IsSmi() || maximum_length_value.IsUndefined() || maximum_length_value.IsHeapNumber() || maximum_length_value.IsUndefined(isolate));
  }
  {
    Object dispatch_tables_value = READ_FIELD(o, WasmTableObject::kDispatchTablesOffset);
    Object::VerifyPointer(isolate, dispatch_tables_value);
    CHECK(dispatch_tables_value.IsFixedArray() || dispatch_tables_value.IsUndefined(isolate));
  }
  {
    Object raw_type_value = READ_FIELD(o, WasmTableObject::kRawTypeOffset);
    Object::VerifyPointer(isolate, raw_type_value);
    CHECK(raw_type_value.IsSmi() || raw_type_value.IsUndefined(isolate));
  }
}
void ClassVerifiersFromDSL::WeakFixedArrayVerify(WeakFixedArray o, Isolate* isolate) {
  HeapObjectVerify(o, isolate);
  CHECK(o.IsWeakFixedArray());
  {
    Object length_value = READ_FIELD(o, WeakFixedArray::kLengthOffset);
    Object::VerifyPointer(isolate, length_value);
    CHECK(length_value.IsSmi());
  }
}

}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"

#endif  // VERIFY_HEAP
