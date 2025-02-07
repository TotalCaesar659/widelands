/*
 * Copyright (C) 2021 by the Widelands Development Team
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#include "network/host_game_settings_provider.h"

void HostGameSettingsProvider::set_scenario(bool is_scenario) {
	host_->set_scenario(is_scenario);
}

const GameSettings& HostGameSettingsProvider::settings() {
	return host_->settings();
}

bool HostGameSettingsProvider::can_change_map() {
	return true;
}

bool HostGameSettingsProvider::can_change_player_state(uint8_t const number) {
	if (number >= HostGameSettingsProvider::settings().players.size()) {
		return false;
	}
	if (settings().savegame) {
		return HostGameSettingsProvider::settings().players.at(number).state !=
		       PlayerSettings::State::kClosed;
	} else if (settings().scenario) {
		return HostGameSettingsProvider::settings().players.at(number).state !=
		       PlayerSettings::State::kComputer;
	}
	return true;
}

bool HostGameSettingsProvider::can_change_player_tribe(uint8_t const number) {
	return HostGameSettingsProvider::can_change_player_team(number);
}

bool HostGameSettingsProvider::can_change_player_init(uint8_t const number) {
	if (settings().scenario || HostGameSettingsProvider::settings().savegame) {
		return false;
	}
	return number < HostGameSettingsProvider::settings().players.size();
}
bool HostGameSettingsProvider::can_change_player_team(uint8_t number) {
	if (settings().scenario || HostGameSettingsProvider::settings().savegame) {
		return false;
	}
	if (number >= HostGameSettingsProvider::settings().players.size()) {
		return false;
	}
	if (number == HostGameSettingsProvider::settings().playernum) {
		return true;
	}
	return HostGameSettingsProvider::settings().players.at(number).state ==
	       PlayerSettings::State::kComputer;
}

bool HostGameSettingsProvider::can_launch() {
	return host_->can_launch();
}

void HostGameSettingsProvider::set_map(const std::string& mapname,
                                       const std::string& mapfilename,
                                       const std::string& theme,
                                       const std::string& bg,
                                       uint32_t const maxplayers,
                                       bool const savegame = false) {
	host_->set_map(mapname, mapfilename, theme, bg, maxplayers, savegame);
}
void HostGameSettingsProvider::set_player_state(uint8_t number, PlayerSettings::State const state) {
	if (number >= HostGameSettingsProvider::settings().players.size()) {
		return;
	}
	host_->set_player_state(number, state);
}

void HostGameSettingsProvider::set_player_tribe(uint8_t number,
                                                const std::string& tribe,
                                                bool const random_tribe) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	if (number == HostGameSettingsProvider::settings().playernum ||
	    settings().players.at(number).state == PlayerSettings::State::kComputer ||
	    settings().players.at(number).state == PlayerSettings::State::kShared ||
	    settings().players.at(number).state ==
	       PlayerSettings::State::kOpen) {  // For savegame loading
		host_->set_player_tribe(number, tribe, random_tribe);
	}
}

void HostGameSettingsProvider::set_player_team(uint8_t number, Widelands::TeamNumber team) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	if (number == HostGameSettingsProvider::settings().playernum ||
	    settings().players.at(number).state == PlayerSettings::State::kComputer) {
		host_->set_player_team(number, team);
	}
}

void HostGameSettingsProvider::set_player_color(const uint8_t number, const RGBColor& col) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	if (number == HostGameSettingsProvider::settings().playernum ||
	    settings().players.at(number).state == PlayerSettings::State::kComputer) {
		host_->set_player_color(number, col);
	}
}

void HostGameSettingsProvider::set_player_closeable(uint8_t number, bool closeable) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	host_->set_player_closeable(number, closeable);
}

void HostGameSettingsProvider::set_player_shared(PlayerSlot number,
                                                 Widelands::PlayerNumber shared) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	host_->set_player_shared(number, shared);
}

void HostGameSettingsProvider::set_player_init(uint8_t const number, uint8_t const index) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	host_->set_player_init(number, index);
}

void HostGameSettingsProvider::set_player_ai(uint8_t number,
                                             const std::string& name,
                                             bool const random_ai = false) {
	host_->set_player_ai(number, name, random_ai);
}

void HostGameSettingsProvider::set_player_name(uint8_t const number, const std::string& name) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	host_->set_player_name(number, name);
}

void HostGameSettingsProvider::set_player(uint8_t const number, const PlayerSettings& ps) {
	if (number >= host_->settings().players.size()) {
		return;
	}
	host_->set_player(number, ps);
}

void HostGameSettingsProvider::set_player_number(uint8_t const number) {
	if (number == UserSettings::none() || number < host_->settings().players.size()) {
		host_->set_player_number(number);
	}
}

std::string HostGameSettingsProvider::get_win_condition_script() {
	return host_->settings().win_condition_script;
}

void HostGameSettingsProvider::set_win_condition_script(const std::string& wc) {
	host_->set_win_condition_script(wc);
}

void HostGameSettingsProvider::set_peaceful_mode(bool peace) {
	host_->set_peaceful_mode(peace);
}

bool HostGameSettingsProvider::is_peaceful_mode() {
	return host_->settings().peaceful;
}

void HostGameSettingsProvider::set_custom_starting_positions(bool c) {
	host_->set_custom_starting_positions(c);
}

bool HostGameSettingsProvider::get_custom_starting_positions() {
	return host_->settings().custom_starting_positions;
}
