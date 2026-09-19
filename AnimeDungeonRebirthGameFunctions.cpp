#include "AnimeDungeonRebirthHeader.h"

MONSTERSTATS generate_stats(MONSTERSTATS& stats, MonsterStatsRange st) {
	return stats = { random_value(st.MIN_LVL, st.MAX_LVL),random_value(st.MIN_DROP_EXP, st.MAX_DROP_EXP), random_value(st.MIN_HP, st.MAX_HP), st.mana_ };
}

MONSTERS random_forest_monster(int random_value, MonsterStatsRange st) {
	switch(random_value) {
	case 1: Butterfly.generate_new_stats(st); return Butterfly;
	case 2: Wolf.generate_new_stats(st); return Wolf;
	case 3: Fox.generate_new_stats(st); return Fox;
	case 4: Dryad.generate_new_stats(st); return Dryad;
	case 5: Centaur.generate_new_stats(st); return Centaur;
	case 6: Bear.generate_new_stats(st); return Bear;
	default: Butterfly.generate_new_stats(st); return Butterfly;
	}
}

char fighting_choice() {
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
	//std::cout << Monster.get_name();

	while (Monster.get_HP() > 0 && player.get_HP() > 0) {

		do {
			cmd = '0';
			fighting_tab();
			fighting_stats(player, Monster);
			action_tab(player, Monster, cmd);
			cmd = fighting_choice();
			system("cls");

		} while (cmd != '1' && cmd != '2' && cmd != '3');

		switch (cmd) {
		case '1': {
				fighting_tab();
				fighting_stats(player, Monster);
				action_tab(player, Monster, cmd);
				skillch = fighting_choice();
				skillint = skill_choice(skillch);
				Monster.take_damage(player.attack(skillint));
				system("cls");
			break;
		}
		case '2': {

			break;
		}

		}

		if (Monster.get_HP() > 0) {
			player.take_damage(Monster.attack(random_value(1,4)));
		}

	}
	if (player.get_HP() <= 0) {
		player.Die();
		return;
	}
		player.get_experience(Monster.get_drop_experienece());
		level_up_tab_box(player, Monster);
	return;
}