/*
 * Copyright (C) 2002 by the Widelands Development Team
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

#ifndef __S__LAUNCH_GAME_MENU_H
#define __S__LAUNCH_GAME_MENU_H

#include "constants.h"
#include "fullscreen_menu_base.h"

class Game;
class PlayerDescriptionGroup;
class UIButton;
class UITextarea;
class Map_Loader;

/**
 * Fullscreen menu to select map and to set map options.
 */
class Fullscreen_Menu_LaunchGame : public Fullscreen_Menu_Base {
	Game* m_game;
   Map_Loader** m_ml;

	UIButton*						m_ok;
	UITextarea*					m_mapname;
	PlayerDescriptionGroup* m_players[MAX_PLAYERS];
   bool                    m_is_scenario;
   void clicked(int);

public:
	Fullscreen_Menu_LaunchGame(Game *g, Map_Loader**);

	void think();

	void refresh();

	void select_map();
};


#endif
