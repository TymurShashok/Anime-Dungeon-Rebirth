#include "AnimeDungeonRebirthHeader.h"

bool get_new_lvl(PLAYER& player) {
	if (player.get_experience() > player.get_Max_Experience()) {
		player.lvl_up(player.get_Level());
		player.reset_experience();
		return true;
	}
	else {
		return false;
	}

}
