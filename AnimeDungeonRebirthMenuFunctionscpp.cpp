#include "AnimeDungeonRebirthHeader.h"

void mainMenu() {
	
	std::ifstream infile("Interface/MainMenu.txt");
	std::string buf;
	if (!infile) {
		std::cout << "Don`t Open!";
		return;
	}
	while (infile.eof() == 0) {

		std::getline(infile, buf);
		std::cout << buf << std::endl;

	}

}



void Fighting_Tab() {

	std::ifstream infile("Interface/Fighting.txt");
	std::string buf;
	if (!infile) {
		std::cout << "Don`t Open!";
		return;
	}
	while (infile.eof() == 0) {

		std::getline(infile, buf);
		std::cout << buf << std::endl;

	}

}

void box_top_and_bottom(int width) {
	std::cout << '+' << std::setfill('-') << std::setw((width*2) + 4) << '-' << std::setfill(' ') << '+' << std::endl;
}
void boxLine(std::string playerstat, std::string monsterstat, int width)
{
	std::cout << std::left << "| " << std::setw(width) << playerstat;
	std::cout << std::left << "| " << std::setw(width) << monsterstat << " |\n";
}

std::string stat_to_string(double value) {
	return std::to_string(static_cast<int>(value));
}

void FightingBox(PLAYER player, MONSTERS monster)
{
	const int width = 17;
		boxLine(player.getName(), monster.getName(), width);

		boxLine("Level: " + stat_to_string(player.get_Level()), "Level: " + std::to_string(monster.get_Level()), width);;
		boxLine("HP: " + stat_to_string(player.getHP()), "HP: " + stat_to_string(monster.getHP()), width);
		boxLine("MANA: " + stat_to_string(player.getMana()), "MANA: " + stat_to_string(monster.getMana()), width);
		boxLine("ATTACK: " + stat_to_string(player.get_damage()), "ATTACK: " + stat_to_string(monster.get_damage()), width);
		box_top_and_bottom(width);
}


void fighting_stats(PLAYER player, MONSTERS monster) {

	FightingBox(player, monster);
}

void action_box_line(std::string text, int width)
{
	std::cout << std::left << "| " << std::setw(width*2 + 2) << text << " |\n";
}

void action_tab_box(PLAYER player, MONSTERS monster, char action) {
	const int width = 17;
	action = static_cast<int>(action) - '0';
	box_top_and_bottom(width);
	switch (action) {
	case 1: {
		for (int i = 1; i <= 4; i++) {
			action_box_line(player.getSkillName(i), width);
		}
		break;
	}
	default: {
		action_box_line("[1] = ATTACK", width);
		action_box_line("[2] = BAG", width);
		action_box_line("[3] = RUN", width);
		break;
	}
	}
	box_top_and_bottom(width);
}

void action_tab(PLAYER player, MONSTERS monster, char action) {

	action_tab_box(player, monster,  action);
}
void moveChoice() {

	std::ifstream infile("Interface/moveChoice.txt");
	std::string buf;
	if (!infile) {
		std::cout << "Don`t Open!";
		return;
	}
	while (infile.eof() == 0) {

		std::getline(infile, buf);
		std::cout << buf << std::endl;

	}

}

void action_tab() {

	std::ifstream infile("Interface/Action_Tab.txt");
	std::string buf;
	if (!infile) {
		std::cout << "Don`t Open!";
		return;
	}
	while (infile.eof() == 0) {

		std::getline(infile, buf);
		std::cout << buf << std::endl;

	}

}

