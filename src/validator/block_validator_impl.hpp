/**********************************************************************************************************************
 *
 * Copyright (c) 2017-2018 Shuyang Sun
 *
 * License: MIT
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
 * OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *********************************************************************************************************************/


#ifndef SSYBC_SRC_VALIDATOR_BLOCK_VALIDATOR_IMPL_HPP_
#define SSYBC_SRC_VALIDATOR_BLOCK_VALIDATOR_IMPL_HPP_

#include "include/ssybc/validator/block_validator.hpp"


// --------------------------------------------------- Public Method --------------------------------------------------


template<typename BlockT, ssybc::HashDifficulty Difficulty>
inline bool ssybc::BlockValidator<BlockT, Difficulty>::IsBlockPreAdjacentTo(
  BlockT const & lhs,
  BlockT const & rhs) const
{
  if (lhs.Header().Index() != (rhs.Header().Index() - 1)) { return false;  }
  if (lhs.Header().TimeStamp() > rhs.Header().TimeStamp()) { return false; }
  if (lhs.Header().Hash() != rhs.Header().PreviousHash()) { return false; }
  return true;
}


template<typename BlockT, ssybc::HashDifficulty Difficulty>
inline bool ssybc::BlockValidator<BlockT, Difficulty>::IsValidGenesisBlock(BlockT const & block) const
{
  bool const is_hash_valid {
    block.Header().PreviousHash() == typename BlockT::HeaderHashCalculatorType().GenesisBlockPreviousHash()
  };
  return block.Header().Index() == 0 && is_hash_valid && IsValidGenesisBlockHash(block.Header().Hash());
}


template<typename BlockT, ssybc::HashDifficulty Difficulty>
inline bool ssybc::BlockValidator<BlockT, Difficulty>::IsValidToAppend(
  BlockT const & previous_block,
  BlockT const & block) const
{
  return
    IsBlockPreAdjacentTo(previous_block, block)
    && IsValidHashToAppend(previous_block.Header().Hash(), block.Header().Hash());
}


#endif  // SSYBC_SRC_VALIDATOR_BLOCK_VALIDATOR_IMPL_HPP_
