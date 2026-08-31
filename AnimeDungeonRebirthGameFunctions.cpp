#include "AnimeDungeonRebirthHeader.h"

int fightingChoice() {
	int x;
	std::cin >> x;
	return x;
}

void fight(PLAYER player, MONSTERS Monster) {
	int cmd;
	int g;
	do {
		
		for (int i = 0; i < 15; i++) {
			switch (fightingChoice()) {
			case 1:

				switch (fightingChoice()) {
				case 1: {
					player.printSkills();
				}
					  std::cin >> g;

					  break;
				}

				break;
			case 2:

				break;
			}


			Monster.takeDamage(player.attack(g));
			std::cout << Monster.getHP();
		} 
	} while (Monster.getHP() > 0 || player.getHP() > 0);
	return;
}

