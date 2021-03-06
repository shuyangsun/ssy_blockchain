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

#ifndef SSYBC_INCLUDE_SSYBC_SSYBC_HPP
#define SSYBC_INCLUDE_SSYBC_SSYBC_HPP

#include "include/ssybc/general/general.hpp"

#include "include/ssybc/logging/logging.hpp"

#include "include/ssybc/utility/utility.hpp"
#include "include/ssybc/utility/operator.hpp"

#include "include/ssybc/binary_data_converter/binary_data_converter_interface.hpp"
#include "include/ssybc/binary_data_converter/binary_data_converter_default.hpp"

#include "include/ssybc/hash_calculator/hash_calculator_interface.hpp"
#include "include/ssybc/hash_calculator/hash_calculator_sha256.hpp"
#include "include/ssybc/hash_calculator/hash_calculator_double_sha256.hpp"

#include "include/ssybc/block/block.hpp"
#include "include/ssybc/block/block_header/block_header.hpp"
#include "include/ssybc/block/block_content/block_content.hpp"

#include "include/ssybc/validator/block_validator.hpp"
#include "include/ssybc/validator/block_validator_less_hash.hpp"

#include "include/ssybc/blockchain/blockchain.hpp"
#include "include/ssybc/blockchain/blockchain_iterator/blockchain_iterator.hpp"

#include "include/ssybc/miner/block_miner.hpp"
#include "include/ssybc/miner/block_miner_cpu_brute_force.hpp"

#endif  // SSYBC_INCLUDE_SSYBC_SSYBC_HPP

