/* Copyright (C) 2019, Nikolai Wuttke. All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "data/game_options.hpp"
#include "engine/timing.hpp"


namespace rigel::ui {

class OptionsMenu {
public:
  enum class Type {
    Main,
    InGame
  };

  OptionsMenu(data::GameOptions* pOptions, const Type type)
    : mpOptions(pOptions)
    , mType(type)
  {
  }

  void updateAndRender(engine::TimeDelta dt);
  bool isFinished() const;

private:
  data::GameOptions* mpOptions;
  Type mType;
  bool mMenuOpen = true;
};

}
