//////////////////////////////////////////////////////////////////////////////
// This file is part of the LibreMaple MMORPG client                        //
// Copyright © 2015-2016 Daniel Allendorf, 2018-2019 LibreMaple Team        //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////
#pragma once
#include <cstdint>

namespace jrc
{
namespace InventoryType
{
//! Inventory types.
enum Id : std::int8_t { NONE, EQUIP, USE, SETUP, ETC, CASH, EQUIPPED, LENGTH };

//! Return the inventory type by item id.
Id by_item_id(std::int32_t item_id);
//! Return the inventory type by value.
Id by_value(std::int8_t value);
} // namespace InventoryType

struct InventoryPosition {
    InventoryType::Id type;
    std::int16_t slot;
};
} // namespace jrc
