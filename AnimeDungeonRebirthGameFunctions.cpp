#include "AnimeDungeonRebirthHeader.h"

MONSTERSTATS generate_stats(MONSTERSTATS& stats, MonsterStatsRange st) {
	return stats = { random_value(st.MIN_LVL, st.MAX_LVL),random_value(st.MIN_DROP_EXP, st.MAX_DROP_EXP), random_value(st.MIN_HP, st.MAX_HP), st.MANA };
}

MONSTERS random_forest_monster(int random_value, MonsterStatsRange st) {
	switch(random_value) {
	case 1: Butterfly.generateNewStats(st); return Butterfly;
	case 2: Wolf.generateNewStats(st); return Wolf;
	case 3: Fox.generateNewStats(st); return Fox;
	case 4: Dryad.generateNewStats(st); return Dryad;
	case 5: Centaur.generateNewStats(st); return Centaur;
	case 6: Bear.generateNewStats(st); return Bear;
	default: Butterfly.generateNewStats(st); return Butterfly;
	}
}

char fightingChoice() {
	char cmd = _getch();
	return cmd;
}

int skill_choice(char skill) {
	switch(skill){
	case '1': return static_cast<int>(skill) - '0';
	case '2': return static_cast<int>(skill) - '0';
	case '3': return static_cast<int>(skill) - '0';
	case '4': return static_cast<int>(skill) - '0';
	default: return 1;
	}
	return 1;
}

void Play(PLAYER& player, MONSTERS Monster){

}

void fight(PLAYER& player, MONSTERS Monster) {

	char skillch;
	int skillint;
	char cmd = '0';
	char action = cmd;
	//std::cout << "Monster Bar" << std::endl;
	//std::cout << Monster.getName();

	while (Monster.getHP() > 0 && player.getHP() > 0) {

		do {
			cmd = '0';
			Fighting_Tab();
			fighting_stats(player, Monster);
			action_tab(player, Monster, cmd);
			cmd = fightingChoice();
			system("cls");

		} while (cmd != '1' && cmd != '2' && cmd != '3');

		switch (cmd) {
		case '1': {
				Fighting_Tab();
				fighting_stats(player, Monster);
				action_tab(player, Monster, cmd);
				skillch = fightingChoice();
				skillint = skill_choice(skillch);
				Monster.takeDamage(player.attack(skillint));
				system("cls");
			break;
		}
		case '2': {

			break;
		}

		}

		if (Monster.getHP() > 0) {
			player.takeDamage(Monster.attack(random_value(1,4)));
		}

	}
	if (player.getHP() <= 0) {
		player.Die();
		return;
	}
		player.getExp(Monster.getDropExp());
		getNewLevel(player);
		system("cls");
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
