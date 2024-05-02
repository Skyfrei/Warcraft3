#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API _assert_scalar {
  using schema = void (const at::Scalar &, c10::string_view);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_assert_scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_assert_scalar(Scalar self, str assert_msg) -> ()")
  static void call(const at::Scalar & self, c10::string_view assert_msg);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, c10::string_view assert_msg);
};

}} // namespace at::_ops