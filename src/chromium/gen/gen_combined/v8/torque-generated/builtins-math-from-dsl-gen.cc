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
#include "torque-generated/builtins-base-from-dsl-gen.h"
#include "torque-generated/builtins-arguments-from-dsl-gen.h"
#include "torque-generated/builtins-array-copywithin-from-dsl-gen.h"
#include "torque-generated/builtins-array-from-dsl-gen.h"
#include "torque-generated/builtins-array-filter-from-dsl-gen.h"
#include "torque-generated/builtins-array-find-from-dsl-gen.h"
#include "torque-generated/builtins-array-findindex-from-dsl-gen.h"
#include "torque-generated/builtins-array-foreach-from-dsl-gen.h"
#include "torque-generated/builtins-array-join-from-dsl-gen.h"
#include "torque-generated/builtins-array-lastindexof-from-dsl-gen.h"
#include "torque-generated/builtins-array-map-from-dsl-gen.h"
#include "torque-generated/builtins-array-of-from-dsl-gen.h"
#include "torque-generated/builtins-array-reverse-from-dsl-gen.h"
#include "torque-generated/builtins-array-shift-from-dsl-gen.h"
#include "torque-generated/builtins-array-slice-from-dsl-gen.h"
#include "torque-generated/builtins-array-splice-from-dsl-gen.h"
#include "torque-generated/builtins-array-unshift-from-dsl-gen.h"
#include "torque-generated/builtins-collections-from-dsl-gen.h"
#include "torque-generated/builtins-data-view-from-dsl-gen.h"
#include "torque-generated/builtins-extras-utils-from-dsl-gen.h"
#include "torque-generated/builtins-growable-fixed-array-from-dsl-gen.h"
#include "torque-generated/builtins-internal-coverage-from-dsl-gen.h"
#include "torque-generated/builtins-iterator-from-dsl-gen.h"
#include "torque-generated/builtins-math-from-dsl-gen.h"
#include "torque-generated/builtins-object-from-dsl-gen.h"
#include "torque-generated/builtins-proxy-from-dsl-gen.h"
#include "torque-generated/builtins-regexp-replace-from-dsl-gen.h"
#include "torque-generated/builtins-regexp-from-dsl-gen.h"
#include "torque-generated/builtins-string-from-dsl-gen.h"
#include "torque-generated/builtins-string-html-from-dsl-gen.h"
#include "torque-generated/builtins-string-iterator-from-dsl-gen.h"
#include "torque-generated/builtins-string-repeat-from-dsl-gen.h"
#include "torque-generated/builtins-string-substring-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-createtypedarray-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-every-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-filter-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-find-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-findindex-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-foreach-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-reduce-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-reduceright-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-slice-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-some-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-subarray-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-from-dsl-gen.h"
#include "torque-generated/builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

TF_BUILTIN(MathAcos, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 11);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 12);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Acos(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAcosh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 20);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 21);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Acosh(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAsin, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 29);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 30);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Asin(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAsinh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 38);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 39);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Asinh(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAtan, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 47);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 48);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Atan(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathAtan2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 56);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp4}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 57);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}));
    compiler::TNode<Float64T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp6}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 58);
    compiler::TNode<Float64T> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Atan2(compiler::TNode<Float64T>{tmp5}, compiler::TNode<Float64T>{tmp7}));
    compiler::TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp8}));
    CodeStubAssembler(state_).Return(tmp9);
  }
}

TF_BUILTIN(MathAtanh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 66);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 67);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Atanh(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathCbrt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 75);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 76);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Cbrt(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathClz32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Int32T, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 84);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 86);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 87);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 88);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, ca_.Uninitialized<Int32T>(), tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, ca_.Uninitialized<Int32T>(), tmp3, tmp3);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Int32T> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<Int32T> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<Number> tmp18;
    compiler::TNode<Smi> tmp19;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 89);
    compiler::TNode<Int32T> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).Convert7ATint325ATSmi(compiler::TNode<Smi>{tmp19}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 88);
    ca_.Goto(&block1, tmp12, tmp13, tmp14, tmp15, tmp20, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 91);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 92);
    compiler::TNode<Int32T> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).TruncateHeapNumberValueToWord32(compiler::TNode<Number>{ca_.UncheckedCast<HeapNumber>(tmp26)}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 88);
    ca_.Goto(&block1, tmp21, tmp22, tmp23, tmp24, tmp27, tmp26);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Number> tmp31;
    compiler::TNode<Int32T> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 87);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 96);
    compiler::TNode<Int32T> tmp34;
    USE(tmp34);
    tmp34 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Word32Clz(compiler::TNode<Int32T>{tmp32}));
    compiler::TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber7ATint32(compiler::TNode<Int32T>{tmp34}));
    CodeStubAssembler(state_).Return(tmp35);
  }
}

TF_BUILTIN(MathCos, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 104);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 105);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Cos(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathCosh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 113);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 114);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Cosh(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathExp, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 122);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 123);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Exp(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathExpm1, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 131);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 132);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Expm1(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathFround, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 138);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float32T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat3220UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 139);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat649ATfloat32(compiler::TNode<Float32T>{tmp4}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 140);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 148);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 149);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Log(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog1p, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 157);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 158);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Log1p(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog10, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 166);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 167);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Log10(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathLog2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 175);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 176);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Log2(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathSin, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 184);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 185);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Sin(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathSign, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number, Float64T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 191);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 192);
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 194);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATfloat6417ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64LessThan(compiler::TNode<Float64T>{tmp4}, compiler::TNode<Float64T>{tmp5}));
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Float64T> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 195);
    compiler::TNode<Number> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(-1));
    CodeStubAssembler(state_).Return(tmp12);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Number> tmp16;
    compiler::TNode<Float64T> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 196);
    compiler::TNode<Float64T> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATfloat6417ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp17}, compiler::TNode<Float64T>{tmp18}));
    ca_.Branch(tmp19, &block4, &block5, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Float64T> tmp24;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 197);
    compiler::TNode<Number> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    CodeStubAssembler(state_).Return(tmp25);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Float64T> tmp30;
    ca_.Bind(&block5, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 199);
    CodeStubAssembler(state_).Return(tmp29);
  }
}

TF_BUILTIN(MathSinh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 208);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 209);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Sinh(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathSqrt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 217);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 218);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Sqrt(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathTan, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 226);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 227);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Tan(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(MathTanh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 235);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/math.tq", 236);
    compiler::TNode<Float64T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Tanh(compiler::TNode<Float64T>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATfloat64(compiler::TNode<Float64T>{tmp5}));
    CodeStubAssembler(state_).Return(tmp6);
  }
}

}  // namespace internal
}  // namespace v8

