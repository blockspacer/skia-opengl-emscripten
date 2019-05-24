#ifndef V8_TORQUE_INTERNAL_COVERAGE_FROM_DSL_BASE_H__
#define V8_TORQUE_INTERNAL_COVERAGE_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"
#include "src/utils.h"
#include "torque-generated/class-definitions-from-dsl.h"

namespace v8 {
namespace internal {

class V8_EXPORT_PRIVATE InternalCoverageBuiltinsFromDSLAssembler {
 public:
  explicit InternalCoverageBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  compiler::TNode<CoverageInfo> GetCoverageInfo(compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_function, compiler::CodeAssemblerLabel* label_IfNoCoverageInfo);
  compiler::TNode<Smi> SlotCount(compiler::TNode<CoverageInfo> p_coverageInfo);
  compiler::TNode<Smi> FirstIndexForSlot(compiler::TNode<Context> p_context, compiler::TNode<Smi> p_slot);
  void IncrementBlockCount(compiler::TNode<Context> p_context, compiler::TNode<CoverageInfo> p_coverageInfo, compiler::TNode<Smi> p_slot);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_INTERNAL_COVERAGE_FROM_DSL_BASE_H__
