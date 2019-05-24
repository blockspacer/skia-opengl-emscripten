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

void RegexpReplaceBuiltinsFromDSLAssembler::RegExpReplaceCallableNoExplicitCaptures(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, HeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, HeapObject, String> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_string, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<String> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 35);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 36);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<String> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp13}, compiler::TNode<IntPtrT>{tmp9}));
    ca_.Branch(tmp14, &block2, &block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<FixedArray> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<String> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 37);
    compiler::TNode<Object> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp16}, compiler::TNode<IntPtrT>{tmp21}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 39);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp23 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp22}, &label0);
    ca_.Goto(&block8, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp22, tmp23);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp22);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<FixedArray> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<String> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    ca_.Bind(&block9, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block7, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<FixedArray> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<String> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 43);
    compiler::TNode<Smi> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp42}, compiler::TNode<Smi>{tmp43}));
    ca_.Branch(tmp44, &block10, &block11, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp42);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<FixedArray> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<String> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Smi> tmp53;
    ca_.Bind(&block10, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 47);
    compiler::TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp53}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 48);
    compiler::TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(11));
    compiler::TNode<IntPtrT> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).WordSar(compiler::TNode<IntPtrT>{tmp54}, compiler::TNode<IntPtrT>{tmp55}));
    compiler::TNode<IntPtrT> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0x7FF));
    compiler::TNode<IntPtrT> tmp58;
    USE(tmp58);
    tmp58 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).WordAnd(compiler::TNode<IntPtrT>{tmp54}, compiler::TNode<IntPtrT>{tmp57}));
    compiler::TNode<IntPtrT> tmp59;
    USE(tmp59);
    tmp59 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp56}, compiler::TNode<IntPtrT>{tmp58}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 49);
    compiler::TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi8ATintptr(compiler::TNode<IntPtrT>{tmp59}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 43);
    ca_.Goto(&block12, tmp45, tmp46, tmp47, tmp48, tmp49, tmp60, tmp51, tmp52, tmp53);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<FixedArray> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    compiler::TNode<String> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Smi> tmp69;
    ca_.Bind(&block11, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 53);
    compiler::TNode<IntPtrT> tmp70;
    USE(tmp70);
    tmp70 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp67}, compiler::TNode<IntPtrT>{tmp70}));
    compiler::TNode<Object> tmp72;
    USE(tmp72);
    tmp72 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp62}, compiler::TNode<IntPtrT>{tmp71}));
    compiler::TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast5ATSmi(compiler::TNode<Context>{tmp61}, compiler::TNode<Object>{tmp72}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 54);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp69}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 50);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 43);
    ca_.Goto(&block12, tmp61, tmp62, tmp63, tmp64, tmp65, tmp74, tmp71, tmp68, tmp69);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<String> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<IntPtrT> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Smi> tmp83;
    ca_.Bind(&block12, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block6, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<FixedArray> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<String> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<IntPtrT> tmp90;
    compiler::TNode<Object> tmp91;
    ca_.Bind(&block7, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 59);
    compiler::TNode<String> tmp92;
    USE(tmp92);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp92 = BaseBuiltinsFromDSLAssembler(state_).Cast6String(compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp91)}, &label0);
    ca_.Goto(&block15, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, ca_.UncheckedCast<HeapObject>(tmp91), tmp92);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, ca_.UncheckedCast<HeapObject>(tmp91));
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<FixedArray> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    compiler::TNode<String> tmp96;
    compiler::TNode<JSReceiver> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<HeapObject> tmp101;
    ca_.Bind(&block16, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block14, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<FixedArray> tmp103;
    compiler::TNode<IntPtrT> tmp104;
    compiler::TNode<String> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<HeapObject> tmp110;
    compiler::TNode<String> tmp111;
    ca_.Bind(&block15, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 61);
    compiler::TNode<Oddball> tmp112;
    USE(tmp112);
    tmp112 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<Object> tmp113;
    USE(tmp113);
    tmp113 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp102}, compiler::TNode<JSReceiver>{tmp106}, compiler::TNode<Object>{tmp112}, compiler::TNode<Object>{tmp111}, compiler::TNode<Object>{tmp107}, compiler::TNode<Object>{tmp105}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 60);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 62);
    compiler::TNode<String> tmp114;
    USE(tmp114);
    tmp114 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp102}, compiler::TNode<Object>{tmp113}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 63);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp103}, compiler::TNode<IntPtrT>{tmp108}, compiler::TNode<HeapObject>{tmp114});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 64);
    compiler::TNode<Smi> tmp115;
    USE(tmp115);
    tmp115 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp111}));
    compiler::TNode<Smi> tmp116;
    USE(tmp116);
    tmp116 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp107}, compiler::TNode<Smi>{tmp115}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 59);
    ca_.Goto(&block13, tmp102, tmp103, tmp104, tmp105, tmp106, tmp116, tmp108, tmp109);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<FixedArray> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<String> tmp120;
    compiler::TNode<JSReceiver> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<IntPtrT> tmp123;
    compiler::TNode<Object> tmp124;
    ca_.Bind(&block14, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 66);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 67);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/regexp-replace.tq:67:11");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp125;
    compiler::TNode<FixedArray> tmp126;
    compiler::TNode<IntPtrT> tmp127;
    compiler::TNode<String> tmp128;
    compiler::TNode<JSReceiver> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<IntPtrT> tmp131;
    compiler::TNode<Object> tmp132;
    ca_.Bind(&block13, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block6, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp133;
    compiler::TNode<FixedArray> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<String> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<IntPtrT> tmp139;
    compiler::TNode<Object> tmp140;
    ca_.Bind(&block6, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 37);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 36);
    ca_.Goto(&block5, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp141;
    compiler::TNode<FixedArray> tmp142;
    compiler::TNode<IntPtrT> tmp143;
    compiler::TNode<String> tmp144;
    compiler::TNode<JSReceiver> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    ca_.Bind(&block5, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    compiler::TNode<IntPtrT> tmp148;
    USE(tmp148);
    tmp148 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<IntPtrT> tmp149;
    USE(tmp149);
    tmp149 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp147}, compiler::TNode<IntPtrT>{tmp148}));
    ca_.Goto(&block4, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp149);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<FixedArray> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<String> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    ca_.Bind(&block3, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 34);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 31);
    ca_.Goto(&block1, tmp150, tmp151, tmp152, tmp153, tmp154);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp157;
    compiler::TNode<FixedArray> tmp158;
    compiler::TNode<IntPtrT> tmp159;
    compiler::TNode<String> tmp160;
    compiler::TNode<JSReceiver> tmp161;
    ca_.Bind(&block1, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.Goto(&block17, tmp157, tmp158, tmp159, tmp160, tmp161);
  }

    compiler::TNode<Context> tmp162;
    compiler::TNode<FixedArray> tmp163;
    compiler::TNode<IntPtrT> tmp164;
    compiler::TNode<String> tmp165;
    compiler::TNode<JSReceiver> tmp166;
    ca_.Bind(&block17, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166);
}

void RegexpReplaceBuiltinsFromDSLAssembler::RegExpReplaceCallableWithExplicitCaptures(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT, Object, JSArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_string, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<String> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 77);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<FixedArray> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    compiler::TNode<String> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp11}, compiler::TNode<IntPtrT>{tmp8}));
    ca_.Branch(tmp12, &block2, &block3, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<FixedArray> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<String> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 79);
    compiler::TNode<Object> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp14}, compiler::TNode<IntPtrT>{tmp18}));
    compiler::TNode<JSArray> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = BaseBuiltinsFromDSLAssembler(state_).Cast7JSArray(compiler::TNode<Context>{tmp13}, compiler::TNode<Object>{tmp19}, &label0);
    ca_.Goto(&block8, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<FixedArray> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<String> tmp24;
    compiler::TNode<JSReceiver> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block9, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<FixedArray> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<String> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSArray> tmp35;
    ca_.Bind(&block8, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<FixedArray> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<String> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    ca_.Bind(&block7, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.Goto(&block5, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<FixedArray> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<String> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<JSArray> tmp48;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 84);
    compiler::TNode<JSReceiver> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<JSReceiver>(BaseBuiltinsFromDSLAssembler(state_).GetReflectApply(compiler::TNode<Context>{tmp42}));
    compiler::TNode<Oddball> tmp50;
    USE(tmp50);
    tmp50 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 83);
    compiler::TNode<Object> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp42}, compiler::TNode<JSReceiver>{tmp49}, compiler::TNode<Object>{tmp50}, compiler::TNode<Object>{tmp46}, compiler::TNode<Object>{tmp51}, compiler::TNode<Object>{tmp48}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 88);
    compiler::TNode<String> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp42}, compiler::TNode<Object>{tmp52}));
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp43}, compiler::TNode<IntPtrT>{tmp47}, compiler::TNode<HeapObject>{tmp53});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 77);
    ca_.Goto(&block5, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<FixedArray> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<String> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    ca_.Bind(&block5, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    compiler::TNode<IntPtrT> tmp60;
    USE(tmp60);
    tmp60 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<IntPtrT> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp59}, compiler::TNode<IntPtrT>{tmp60}));
    ca_.Goto(&block4, tmp54, tmp55, tmp56, tmp57, tmp58, tmp61);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<FixedArray> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<String> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    ca_.Bind(&block3, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 73);
    ca_.Goto(&block1, tmp62, tmp63, tmp64, tmp65, tmp66);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<FixedArray> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<String> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    ca_.Bind(&block1, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.Goto(&block10, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

    compiler::TNode<Context> tmp73;
    compiler::TNode<FixedArray> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<String> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    ca_.Bind(&block10, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
}

compiler::TNode<String> RegexpReplaceBuiltinsFromDSLAssembler::RegExpReplaceFastGlobalCallable(compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 95);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp1}, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 97);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(16));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 98);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 100);
    compiler::TNode<RegExpMatchInfo> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<RegExpMatchInfo>(BaseBuiltinsFromDSLAssembler(state_).GetRegExpLastMatchInfo(compiler::TNode<Context>{tmp0}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 102);
    compiler::TNode<Map> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).GetFastPackedElementsJSArrayMap(compiler::TNode<Context>{tmp0}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 103);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 101);
    compiler::TNode<JSArray> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).AllocateJSArray(PACKED_ELEMENTS, compiler::TNode<Map>{tmp8}, compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp6}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 99);
    compiler::TNode<HeapObject> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpExecMultiple, tmp0, tmp1, tmp2, tmp7, tmp9)); 
    USE(tmp10);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 105);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp1}, compiler::TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 108);
    compiler::TNode<Oddball> tmp12;
    USE(tmp12);
    tmp12 = BaseBuiltinsFromDSLAssembler(state_).Null();
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp10}, compiler::TNode<HeapObject>{tmp12}));
    ca_.Branch(tmp13, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6, tmp10);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSRegExp> tmp15;
    compiler::TNode<String> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<HeapObject> tmp20;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSRegExp> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<HeapObject> tmp27;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 110);
    compiler::TNode<JSArray> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<JSArray>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast7JSArray(compiler::TNode<Context>{tmp21}, compiler::TNode<Object>{tmp27}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 111);
    compiler::TNode<IntPtrT> tmp29 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp29);
    compiler::TNode<Number>tmp30 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp28, tmp29});
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSRegExp> tmp33;
    compiler::TNode<String> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<HeapObject> tmp38;
    compiler::TNode<JSArray> tmp39;
    compiler::TNode<Number> tmp40;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSRegExp> tmp42;
    compiler::TNode<String> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<HeapObject> tmp47;
    compiler::TNode<JSArray> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Smi> tmp50;
    ca_.Bind(&block6, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block4, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSRegExp> tmp52;
    compiler::TNode<String> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<HeapObject> tmp57;
    compiler::TNode<JSArray> tmp58;
    ca_.Bind(&block5, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/regexp-replace.tq:111:68");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSRegExp> tmp60;
    compiler::TNode<String> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<HeapObject> tmp65;
    compiler::TNode<JSArray> tmp66;
    compiler::TNode<Smi> tmp67;
    ca_.Bind(&block4, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 112);
    compiler::TNode<IntPtrT> tmp68;
    USE(tmp68);
    tmp68 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp67}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 114);
    compiler::TNode<IntPtrT> tmp69 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp69);
    compiler::TNode<FixedArrayBase>tmp70 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp66, tmp69});
    compiler::TNode<FixedArray> tmp71;
    USE(tmp71);
    tmp71 = ca_.UncheckedCast<FixedArray>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast10FixedArray(compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp70}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 113);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 117);
    compiler::TNode<RegExpMatchInfo> tmp72;
    USE(tmp72);
    tmp72 = ca_.UncheckedCast<RegExpMatchInfo>(BaseBuiltinsFromDSLAssembler(state_).GetRegExpLastMatchInfo(compiler::TNode<Context>{tmp59}));
    compiler::TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_)._method_RegExpMatchInfo_NumberOfCaptures(compiler::TNode<Context>{tmp59}, compiler::TNode<RegExpMatchInfo>{tmp72}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 122);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp74}));
    ca_.Branch(tmp75, &block8, &block9, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71, tmp73);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSRegExp> tmp77;
    compiler::TNode<String> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<HeapObject> tmp82;
    compiler::TNode<JSArray> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 124);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 123);
    RegexpReplaceBuiltinsFromDSLAssembler(state_).RegExpReplaceCallableNoExplicitCaptures(compiler::TNode<Context>{tmp76}, compiler::TNode<FixedArray>{tmp86}, compiler::TNode<IntPtrT>{tmp85}, compiler::TNode<String>{tmp78}, compiler::TNode<JSReceiver>{tmp79});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 122);
    ca_.Goto(&block10, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<JSRegExp> tmp89;
    compiler::TNode<String> tmp90;
    compiler::TNode<JSReceiver> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<HeapObject> tmp94;
    compiler::TNode<JSArray> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<Smi> tmp99;
    ca_.Bind(&block9, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 127);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 126);
    RegexpReplaceBuiltinsFromDSLAssembler(state_).RegExpReplaceCallableWithExplicitCaptures(compiler::TNode<Context>{tmp88}, compiler::TNode<FixedArray>{tmp98}, compiler::TNode<IntPtrT>{tmp97}, compiler::TNode<String>{tmp90}, compiler::TNode<JSReceiver>{tmp91});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 122);
    ca_.Goto(&block10, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSRegExp> tmp101;
    compiler::TNode<String> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<HeapObject> tmp106;
    compiler::TNode<JSArray> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<FixedArray> tmp110;
    compiler::TNode<Smi> tmp111;
    ca_.Bind(&block10, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 130);
    compiler::TNode<String> tmp112;
    tmp112 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringBuilderConcat, tmp100, tmp107, tmp108, tmp102)); 
    USE(tmp112);
    ca_.Goto(&block1, tmp100, tmp101, tmp102, tmp103, tmp112);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<JSRegExp> tmp114;
    compiler::TNode<String> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<String> tmp117;
    ca_.Bind(&block1, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 92);
    ca_.Goto(&block11, tmp113, tmp114, tmp115, tmp116, tmp117);
  }

    compiler::TNode<Context> tmp118;
    compiler::TNode<JSRegExp> tmp119;
    compiler::TNode<String> tmp120;
    compiler::TNode<JSReceiver> tmp121;
    compiler::TNode<String> tmp122;
    ca_.Bind(&block11, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
  return compiler::TNode<String>{tmp122};
}

compiler::TNode<String> RegexpReplaceBuiltinsFromDSLAssembler::RegExpReplaceFastString(compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<String> p_replaceString) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String, RegExpMatchInfo> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceString);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<String> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 138);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).kEmptyString();
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 139);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 140);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 141);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp3}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 142);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(compiler::TNode<JSRegExp>{tmp1}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 144);
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSRegExp> tmp10;
    compiler::TNode<String> tmp11;
    compiler::TNode<String> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<BoolT> tmp17;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 145);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<BoolT>(RegExpBuiltinsAssembler(state_).FastFlagGetterUnicode(compiler::TNode<JSRegExp>{tmp10}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 146);
    compiler::TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp10}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 144);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp18, tmp16, tmp17);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSRegExp> tmp21;
    compiler::TNode<String> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<String> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<BoolT> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<BoolT> tmp28;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 149);
    ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSRegExp> tmp30;
    compiler::TNode<String> tmp31;
    compiler::TNode<String> tmp32;
    compiler::TNode<String> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<BoolT> tmp37;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Branch(tmp38, &block4, &block5, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSRegExp> tmp40;
    compiler::TNode<String> tmp41;
    compiler::TNode<String> tmp42;
    compiler::TNode<String> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<BoolT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<BoolT> tmp47;
    ca_.Bind(&block4, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 151);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 150);
    compiler::TNode<RegExpMatchInfo> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp48 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBodyWithoutResultFast(compiler::TNode<Context>{tmp39}, compiler::TNode<JSReceiver>{tmp40}, compiler::TNode<String>{tmp41}, &label0);
    ca_.Goto(&block9, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41, tmp48);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSRegExp> tmp50;
    compiler::TNode<String> tmp51;
    compiler::TNode<String> tmp52;
    compiler::TNode<String> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<BoolT> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<BoolT> tmp57;
    compiler::TNode<JSRegExp> tmp58;
    compiler::TNode<String> tmp59;
    ca_.Bind(&block10, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block8, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSRegExp> tmp61;
    compiler::TNode<String> tmp62;
    compiler::TNode<String> tmp63;
    compiler::TNode<String> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<BoolT> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<BoolT> tmp68;
    compiler::TNode<JSRegExp> tmp69;
    compiler::TNode<String> tmp70;
    compiler::TNode<RegExpMatchInfo> tmp71;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block7, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<JSRegExp> tmp73;
    compiler::TNode<String> tmp74;
    compiler::TNode<String> tmp75;
    compiler::TNode<String> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<BoolT> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<BoolT> tmp80;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 151);
    ca_.Goto(&block5, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<JSRegExp> tmp82;
    compiler::TNode<String> tmp83;
    compiler::TNode<String> tmp84;
    compiler::TNode<String> tmp85;
    compiler::TNode<Smi> tmp86;
    compiler::TNode<BoolT> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<BoolT> tmp89;
    compiler::TNode<RegExpMatchInfo> tmp90;
    ca_.Bind(&block7, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 150);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 152);
    compiler::TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_)._method_RegExpMatchInfo_GetStartOfCapture(compiler::TNode<Context>{tmp81}, compiler::TNode<RegExpMatchInfo>{tmp90}, 0));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 153);
    compiler::TNode<Smi> tmp92;
    USE(tmp92);
    tmp92 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_)._method_RegExpMatchInfo_GetEndOfCapture(compiler::TNode<Context>{tmp81}, compiler::TNode<RegExpMatchInfo>{tmp90}, 0));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 157);
    compiler::TNode<String> tmp93;
    tmp93 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp81, tmp83, tmp86, tmp91));
    USE(tmp93);
    compiler::TNode<String> tmp94;
    USE(tmp94);
    tmp94 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).StringAdd(compiler::TNode<Context>{tmp81}, compiler::TNode<String>{tmp85}, compiler::TNode<String>{tmp93}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 158);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 160);
    compiler::TNode<Smi> tmp95;
    USE(tmp95);
    tmp95 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp88}, compiler::TNode<Smi>{tmp95}));
    ca_.Branch(tmp96, &block11, &block12, tmp81, tmp82, tmp83, tmp84, tmp94, tmp92, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSRegExp> tmp98;
    compiler::TNode<String> tmp99;
    compiler::TNode<String> tmp100;
    compiler::TNode<String> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<BoolT> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<BoolT> tmp105;
    compiler::TNode<RegExpMatchInfo> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Smi> tmp108;
    ca_.Bind(&block11, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    compiler::TNode<String> tmp109;
    USE(tmp109);
    tmp109 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).StringAdd(compiler::TNode<Context>{tmp97}, compiler::TNode<String>{tmp101}, compiler::TNode<String>{tmp100}));
    ca_.Goto(&block12, tmp97, tmp98, tmp99, tmp100, tmp109, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<JSRegExp> tmp111;
    compiler::TNode<String> tmp112;
    compiler::TNode<String> tmp113;
    compiler::TNode<String> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<BoolT> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<BoolT> tmp118;
    compiler::TNode<RegExpMatchInfo> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    ca_.Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 163);
    compiler::TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp118}));
    ca_.Branch(tmp122, &block13, &block14, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp123;
    compiler::TNode<JSRegExp> tmp124;
    compiler::TNode<String> tmp125;
    compiler::TNode<String> tmp126;
    compiler::TNode<String> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<BoolT> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<BoolT> tmp131;
    compiler::TNode<RegExpMatchInfo> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    ca_.Bind(&block13, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block5, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<JSRegExp> tmp136;
    compiler::TNode<String> tmp137;
    compiler::TNode<String> tmp138;
    compiler::TNode<String> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<BoolT> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<BoolT> tmp143;
    compiler::TNode<RegExpMatchInfo> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<Smi> tmp146;
    ca_.Bind(&block14, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 166);
    compiler::TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp146}, compiler::TNode<Smi>{tmp145}));
    ca_.Branch(tmp147, &block15, &block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<JSRegExp> tmp149;
    compiler::TNode<String> tmp150;
    compiler::TNode<String> tmp151;
    compiler::TNode<String> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<BoolT> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<BoolT> tmp156;
    compiler::TNode<RegExpMatchInfo> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block15, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 167);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 168);
    compiler::TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = ca_.UncheckedCast<Smi>(RegExpBuiltinsAssembler(state_).FastLoadLastIndex(compiler::TNode<JSRegExp>{tmp149}));
    compiler::TNode<Smi> tmp161;
    USE(tmp161);
    tmp161 = ca_.UncheckedCast<Smi>(RegExpBuiltinsAssembler(state_).AdvanceStringIndexFast(compiler::TNode<String>{tmp150}, compiler::TNode<Number>{tmp160}, compiler::TNode<BoolT>{tmp154}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 167);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp149}, compiler::TNode<Smi>{tmp161});
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 166);
    ca_.Goto(&block16, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<JSRegExp> tmp163;
    compiler::TNode<String> tmp164;
    compiler::TNode<String> tmp165;
    compiler::TNode<String> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<BoolT> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<BoolT> tmp170;
    compiler::TNode<RegExpMatchInfo> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    ca_.Bind(&block16, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 149);
    ca_.Goto(&block6, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<JSRegExp> tmp175;
    compiler::TNode<String> tmp176;
    compiler::TNode<String> tmp177;
    compiler::TNode<String> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<BoolT> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<BoolT> tmp182;
    ca_.Bind(&block5, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 172);
    compiler::TNode<Smi> tmp183;
    USE(tmp183);
    tmp183 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp176}));
    compiler::TNode<String> tmp184;
    tmp184 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp174, tmp176, tmp179, tmp183));
    USE(tmp184);
    compiler::TNode<String> tmp185;
    USE(tmp185);
    tmp185 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).StringAdd(compiler::TNode<Context>{tmp174}, compiler::TNode<String>{tmp178}, compiler::TNode<String>{tmp184}));
    ca_.Goto(&block1, tmp174, tmp175, tmp176, tmp177, tmp185);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<JSRegExp> tmp187;
    compiler::TNode<String> tmp188;
    compiler::TNode<String> tmp189;
    compiler::TNode<String> tmp190;
    ca_.Bind(&block1, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 133);
    ca_.Goto(&block17, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

    compiler::TNode<Context> tmp191;
    compiler::TNode<JSRegExp> tmp192;
    compiler::TNode<String> tmp193;
    compiler::TNode<String> tmp194;
    compiler::TNode<String> tmp195;
    ca_.Bind(&block17, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
  return compiler::TNode<String>{tmp195};
}

TF_BUILTIN(RegExpReplace, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kRegexp));
  USE(parameter1);
  compiler::TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kReplaceValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver, String> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp, JSRegExp> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 179);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is14ATFastJSRegExp14ATFastJSRegExp(compiler::TNode<Context>{tmp0}, compiler::TNode<JSRegExp>{tmp1}));
    ca_.Branch(tmp4, &block1, &block2, tmp0, tmp1, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSRegExp> tmp6;
    compiler::TNode<String> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<FastJSRegExp>(regexp)\' failed", "../../v8/src/builtins/regexp-replace.tq", 179);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSRegExp> tmp10;
    compiler::TNode<String> tmp11;
    compiler::TNode<Object> tmp12;
    ca_.Bind(&block1, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 182);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 183);
    compiler::TNode<JSReceiver> tmp13;
    USE(tmp13);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp13 = BaseBuiltinsFromDSLAssembler(state_).Cast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<Context>{tmp9}, compiler::TNode<Object>{tmp12}, &label0);
    ca_.Goto(&block5, tmp9, tmp10, tmp11, tmp12, tmp12, tmp12, tmp13);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp9, tmp10, tmp11, tmp12, tmp12, tmp12);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSRegExp> tmp15;
    compiler::TNode<String> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block4, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSRegExp> tmp21;
    compiler::TNode<String> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    ca_.Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 184);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<BoolT>(RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(compiler::TNode<JSRegExp>{tmp21}));
    ca_.Branch(tmp27, &block7, &block8, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSRegExp> tmp29;
    compiler::TNode<String> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 185);
    compiler::TNode<String> tmp34;
    USE(tmp34);
    tmp34 = ca_.UncheckedCast<String>(RegexpReplaceBuiltinsFromDSLAssembler(state_).RegExpReplaceFastGlobalCallable(compiler::TNode<Context>{tmp28}, compiler::TNode<JSRegExp>{tmp29}, compiler::TNode<String>{tmp30}, compiler::TNode<JSReceiver>{tmp33}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 184);
    ca_.Goto(&block10, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSRegExp> tmp36;
    compiler::TNode<String> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    ca_.Bind(&block8, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 186);
    compiler::TNode<String> tmp41;
    tmp41 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringReplaceNonGlobalRegExpWithFunction, tmp35, tmp37, tmp36, tmp40)); 
    USE(tmp41);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 184);
    ca_.Goto(&block9, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<JSRegExp> tmp43;
    compiler::TNode<String> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    compiler::TNode<String> tmp48;
    ca_.Bind(&block10, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.Goto(&block9, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSRegExp> tmp50;
    compiler::TNode<String> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<String> tmp55;
    ca_.Bind(&block9, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    CodeStubAssembler(state_).Return(tmp55);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<JSRegExp> tmp57;
    compiler::TNode<String> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    ca_.Bind(&block4, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 188);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 189);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 190);
    compiler::TNode<String> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp56}, compiler::TNode<Object>{tmp59}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 196);
    compiler::TNode<JSRegExp> tmp62;
    USE(tmp62);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp62 = BaseBuiltinsFromDSLAssembler(state_).Cast14ATFastJSRegExp(compiler::TNode<Context>{tmp56}, compiler::TNode<HeapObject>{tmp57}, &label0);
    ca_.Goto(&block13, tmp56, tmp57, tmp58, tmp59, tmp60, ca_.UncheckedCast<Object>(tmp60), tmp57, tmp61, tmp57, tmp62);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp56, tmp57, tmp58, tmp59, tmp60, ca_.UncheckedCast<Object>(tmp60), tmp57, tmp61, tmp57);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSRegExp> tmp64;
    compiler::TNode<String> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<JSRegExp> tmp69;
    compiler::TNode<String> tmp70;
    compiler::TNode<JSRegExp> tmp71;
    ca_.Bind(&block14, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block12, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<JSRegExp> tmp73;
    compiler::TNode<String> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSRegExp> tmp78;
    compiler::TNode<String> tmp79;
    compiler::TNode<JSRegExp> tmp80;
    compiler::TNode<JSRegExp> tmp81;
    ca_.Bind(&block13, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 198);
    compiler::TNode<String> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).SingleCharacterStringConstant("$"));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 197);
    compiler::TNode<Smi> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<Smi> tmp84;
    tmp84 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringIndexOf, tmp72, tmp79, tmp82, tmp83));
    USE(tmp84);
    compiler::TNode<Smi> tmp85;
    USE(tmp85);
    tmp85 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(-1));
    compiler::TNode<BoolT> tmp86;
    USE(tmp86);
    tmp86 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp84}, compiler::TNode<Smi>{tmp85}));
    ca_.Branch(tmp86, &block15, &block16, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp81);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<JSRegExp> tmp88;
    compiler::TNode<String> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<JSRegExp> tmp93;
    compiler::TNode<String> tmp94;
    compiler::TNode<JSRegExp> tmp95;
    ca_.Bind(&block15, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 199);
    ca_.Goto(&block12, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<JSRegExp> tmp97;
    compiler::TNode<String> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSRegExp> tmp102;
    compiler::TNode<String> tmp103;
    compiler::TNode<JSRegExp> tmp104;
    ca_.Bind(&block16, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 202);
    compiler::TNode<String> tmp105;
    USE(tmp105);
    tmp105 = ca_.UncheckedCast<String>(RegexpReplaceBuiltinsFromDSLAssembler(state_).RegExpReplaceFastString(compiler::TNode<Context>{tmp96}, compiler::TNode<JSRegExp>{tmp104}, compiler::TNode<String>{tmp98}, compiler::TNode<String>{tmp103}));
    CodeStubAssembler(state_).Return(tmp105);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<JSRegExp> tmp107;
    compiler::TNode<String> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSRegExp> tmp112;
    compiler::TNode<String> tmp113;
    ca_.Bind(&block12, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 205);
    compiler::TNode<String> tmp114;
    tmp114 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp106, tmp112, tmp108, tmp113)); 
    USE(tmp114);
    CodeStubAssembler(state_).Return(tmp114);
  }
}

TF_BUILTIN(RegExpPrototypeReplace, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  BaseBuiltinsFromDSLAssembler::Arguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSReceiver, String, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSReceiver, String, JSReceiver, JSRegExp> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSReceiver, String> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 233);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 234);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp7}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 238);
    compiler::TNode<JSReceiver> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = BaseBuiltinsFromDSLAssembler(state_).Cast10JSReceiver(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp1, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block2, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 239);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp27}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@replace");
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    ca_.Bind(&block1, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 242);
    compiler::TNode<String> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp39}));
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 246);
    compiler::TNode<JSRegExp> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = BaseBuiltinsFromDSLAssembler(state_).Cast14ATFastJSRegExp(compiler::TNode<Context>{tmp34}, compiler::TNode<HeapObject>{tmp41}, &label0);
    ca_.Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41, tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<String> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    ca_.Bind(&block8, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block6, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<String> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    compiler::TNode<JSRegExp> tmp64;
    ca_.Bind(&block7, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 247);
    compiler::TNode<String> tmp65;
    tmp65 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kRegExpReplace, tmp54, tmp64, tmp62, tmp60));
    USE(tmp65);
    arguments.PopAndReturn(tmp65);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<RawPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<String> tmp74;
    ca_.Bind(&block6, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../v8/src/builtins/regexp-replace.tq", 250);
    compiler::TNode<String> tmp75;
    tmp75 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp66, tmp73, tmp74, tmp72)); 
    USE(tmp75);
    arguments.PopAndReturn(tmp75);
  }
}

}  // namespace internal
}  // namespace v8

