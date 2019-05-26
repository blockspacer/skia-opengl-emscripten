#ifndef V8_TORQUE_TYPED_ARRAY_EVERY_FROM_DSL_BASE_H__
#define V8_TORQUE_TYPED_ARRAY_EVERY_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"
#include "src/utils.h"
#include "torque-generated/class-definitions-from-dsl.h"

namespace v8 {
namespace internal {

class V8_EXPORT_PRIVATE TypedArrayEveryBuiltinsFromDSLAssembler {
 public:
  explicit TypedArrayEveryBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  const char* kBuiltinName();
  compiler::TNode<Oddball> EveryAllElements(compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_TYPED_ARRAY_EVERY_FROM_DSL_BASE_H__