#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> batch_norm_update_stats_out(const at::Tensor & input, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, double momentum, at::Tensor & out0, at::Tensor & out1);
TORCH_API ::std::tuple<at::Tensor,at::Tensor> batch_norm_update_stats_cpu(const at::Tensor & input, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, double momentum);
TORCH_API ::std::tuple<at::Tensor,at::Tensor> batch_norm_update_stats_cuda(const at::Tensor & input, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, double momentum);
} // namespace native
} // namespace at