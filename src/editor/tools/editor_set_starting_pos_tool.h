/*
 * Copyright (C) 2002-4 by the Widelands Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __S__EDITOR_SET_STARTING_POS_TOOL_H
#define __S__EDITOR_SET_STARTING_POS_TOOL_H

#include <string>
#include "editor_tool.h"


// How much place should be left around a player position
// where no other player can start
#define MIN_PLACE_AROUND_PLAYERS 24
#define STARTING_POS_HOTSPOT_Y 55



/*
=============================
class Editor_Set_Starting_Pos_Tool

Set the starting position of the various players
=============================
*/
class Editor_Set_Starting_Pos_Tool : public Editor_Tool {
   public:
      Editor_Set_Starting_Pos_Tool();
      virtual ~Editor_Set_Starting_Pos_Tool();

      virtual int handle_click_impl(FCoords&, Map*, Editor_Interactive*);

      virtual const char* get_fsel_impl(void) { if(m_current_fieldsel_pic.size()) return m_current_fieldsel_pic.c_str(); return 0; }

      // tool functions
      void set_current_player(int i);

   private:
      std::string m_current_fieldsel_pic;
};

int Editor_Tool_Set_Starting_Pos_Callback(FCoords& c, void* data, int);

#endif
