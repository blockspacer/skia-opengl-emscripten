#ifndef V8_TORQUE_STRING_ITERATOR_FROM_DSL_BASE_H__
#define V8_TORQUE_STRING_ITERATOR_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"
#include "src/utils.h"
#include "torque-generated/class-definitions-from-dsl.h"

namespace v8 {
namespace internal {

class V8_EXPORT_PRIVATE StringIteratorBuiltinsFromDSLAssembler {
 public:
  explicit StringIteratorBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  compiler::TNode<JSStringIterator> NewJSStringIterator(compiler::TNode<Context> p_context, compiler::TNode<String> p_string, compiler::TNode<Smi> p_nextIndex);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_STRING_ITERATOR_FROM_DSL_BASE_H__
