#include "AnimeDungeonRebirthHeader.h"

MONSTERSTATS generate_stats(MONSTERSTATS& stats, MonsterStatsRange st) {
	return stats = { random_value(st.MIN_LVL, st.MAX_LVL),random_value(st.MIN_DROP_EXP, st.MAX_DROP_EXP), random_value(st.MIN_HP, st.MAX_HP), st.MANA };
}

MONSTERS random_forest_monster(int random_value) {
	switch(random_value) {
	case 1: return Butterfly;
	case 2: return Wolf;
	case 3: return Fox;
	case 4: return Dryad;
	case 5: return Centaur;
	case 6: return Bear;
	default: return Butterfly;
	}
}

int fightingChoice() {
	int x;
	std::cin >> x;
	return x;
}

void Play(PLAYER& player, MONSTERS Monster){

}

void fight(PLAYER& player, MONSTERS Monster) {
	int cmd = 0;
	int skill = 0;

	//std::cout << "Monster Bar" << std::endl;
	//std::cout << Monster.getName();

	while (Monster.getHP() > 0 && player.getHP() > 0) {

		Fighting_Tab();
		fighting_stats(player, Monster);
		moveChoice();
		switch (fightingChoice()) {
		case 1: {
			system("cls");
			player.printSkills();
			std::cin >> skill;
			Monster.takeDamage(player.attack(skill));
			std::cout << Monster.getHP();
			_getch();
			system("cls");
			break;
		}
		case 2: {

			break;
		}
							
		}
	
	}
	

	player.getExp(Monster.getDropExp());
	getNewLevel(player);
	system("cls");
	_getch();
	return;
}
	

	/*switch (fightingChoice()) {
	case 1: {
		moveChoice();
		switch (fightingChoice()) {
		case 1: {
			player.printSkills();
			std::cin >> g;

			break;
		}

			  break;
		case 2:

			break;
		}


		Monster.takeDamage(player.attack(g));
		std::cout << Monster.getHP();
	}*/
