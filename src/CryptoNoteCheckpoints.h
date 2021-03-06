// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
  {     0, "4755c750a1ed8535ba1789570899720f3cd010ccf7ab70a1a2d2d53f298eafd5"},
  {     1000, "7b5ed4e68acdf47e14bedffb4e35c734d909d9aace011e4cf52a68cd899558b2"},
  {     2000, "fd43c705668c66fc7bb7c000fc4512dbfd33abba4a8881f85dba6b3bcd0b50e2"},
  {     3000, "54b761d3ab816d6be1a768238aae9d4709871a893cc6da4d3a129b7af9a834cd"}
};
}
