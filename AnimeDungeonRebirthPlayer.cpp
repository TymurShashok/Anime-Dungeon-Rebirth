#include "AnimeDungeonRebirthHeader.h"

void getNewLevel(PLAYER& player) {
	if (player.getExperience() > player.get_Max_Experience()) {
		player.Levelup(player.get_Level());
		player.resetExperience();
	}
	else {
		return;
	}

}
