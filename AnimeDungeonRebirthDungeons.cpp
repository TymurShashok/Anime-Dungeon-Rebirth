#include "AnimeDungeonRebirthHeader.h"

enum DUNGEONS { FOREST = 1, CAVE = 2, AIRSHIP = 3, PIRATE_BOAT = 4, VOLCANO = 5, ROGUE_VILLAGE = 6 };

int dungeonChoice() {
	int number;
	std::cout << "Choose a dungeon: ";
	std::cin >> number;
	return number;
}

void forest_dungeon(PLAYER& player) {
	const int forest_size = 3;
	for (int i = 0; i < forest_size; i++) {
		fight(player, random_forest_monster(random_value(1, 7)));
		if (player.getHP() < 0) {
			return;
		}
	}
}



void dungeons(PLAYER& player, MONSTERS monster) {
	int dungeon_choice = dungeonChoice();
	switch (dungeon_choice) {
	case FOREST: {

	}


	}
}

//│    │
//│    ├── ACTION_MENU
//│    ├── TARGET_SELECT
//│    ├── SKILL_SELECT
//│    ├── INVENTORY
//│    ├── STATUS
//│    └── BATTLE_RESULT
//│
//├── INVENTORY
//│