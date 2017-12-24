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

#ifndef SSYBC_SRC_BINARY_CONTENT_DATA_BINARY_CONTENT_DATA_IMPL_HPP_
#define SSYBC_SRC_BINARY_CONTENT_DATA_BINARY_CONTENT_DATA_IMPL_HPP_

#include "include/ssybc/binary_content_data/binary_content_data.hpp"
#include "include/ssybc/utility/utility.hpp"

#include <algorithm>


// --------------------------------------------- Constructor & Destructor ---------------------------------------------


ssybc::BinaryContentData::BinaryContentData(ssybc::BinaryData const &data):
  data_{ data }
{ EMPTY_BLOCK }


ssybc::BinaryContentData::BinaryContentData(ssybc::BinaryData &&data):
  data_{ data }
{ EMPTY_BLOCK }


// --------------------------------------------------- Public Method --------------------------------------------------


inline ssybc::BinaryData ssybc::BinaryContentData::Data() const
{
  return data_;
}


inline ssybc::BinaryContentData::operator std::string() const
{
  return util::HexStringFromBytes(data_, " ");
}


#endif  // SSYBC_SRC_BINARY_CONTENT_DATA_BINARY_CONTENT_DATA_IMPL_HPP_
