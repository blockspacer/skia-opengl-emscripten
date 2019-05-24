#ifndef V8_TORQUE_REGEXP_REPLACE_FROM_DSL_BASE_H__
#define V8_TORQUE_REGEXP_REPLACE_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"
#include "src/utils.h"
#include "torque-generated/class-definitions-from-dsl.h"

namespace v8 {
namespace internal {

class V8_EXPORT_PRIVATE RegexpReplaceBuiltinsFromDSLAssembler {
 public:
  explicit RegexpReplaceBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  void RegExpReplaceCallableNoExplicitCaptures(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn);
  void RegExpReplaceCallableWithExplicitCaptures(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn);
  compiler::TNode<String> RegExpReplaceFastGlobalCallable(compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn);
  compiler::TNode<String> RegExpReplaceFastString(compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<String> p_replaceString);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_REGEXP_REPLACE_FROM_DSL_BASE_H__
