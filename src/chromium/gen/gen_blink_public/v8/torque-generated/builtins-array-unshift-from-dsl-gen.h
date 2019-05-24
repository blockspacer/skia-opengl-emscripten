#ifndef V8_TORQUE_ARRAY_UNSHIFT_FROM_DSL_BASE_H__
#define V8_TORQUE_ARRAY_UNSHIFT_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"
#include "src/utils.h"
#include "torque-generated/class-definitions-from-dsl.h"

namespace v8 {
namespace internal {

class V8_EXPORT_PRIVATE ArrayUnshiftBuiltinsFromDSLAssembler {
 public:
  explicit ArrayUnshiftBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  void TryFastArrayUnshift(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, BaseBuiltinsFromDSLAssembler::Arguments p_arguments, compiler::CodeAssemblerLabel* label_Slow);
  compiler::TNode<Number> GenericArrayUnshift(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, BaseBuiltinsFromDSLAssembler::Arguments p_arguments);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_ARRAY_UNSHIFT_FROM_DSL_BASE_H__
