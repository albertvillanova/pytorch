#pragma once

#include "torch/csrc/jit/ir.h"
#include "torch/csrc/WindowsTorchApiMacro.h"

#include <cstddef>

namespace torch { namespace jit {

// insert GraphExecutor nodes that group together
// subgraphs that are differentiable by the jit's autodiff passes
// threshold - minimum number of nodes that will appear in a block
// returns all differentiable blocks that have been found
TORCH_API std::vector<Node*> CreateAutodiffSubgraphs(Graph & graph, size_t threshold = 2);

}}
