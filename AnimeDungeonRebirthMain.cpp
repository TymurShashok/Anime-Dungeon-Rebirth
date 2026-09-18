#include "AnimeDungeonRebirthHeader.h"

PLAYER player = {Virtus_Hammer, StartClothes}; // stats / weapon / armor

enum COMMANDS { PLAY = 1, INVENTORY = 2, SHOP = 3, SETTINGS = 4, };

int main() {

	srand(time(NULL));

	
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	/*player.getAll();*/

	//_getch();

	//test
	//player.getExp(ORC.getDropExp());
	//experiencetest(player.getExperience(), 40);
	//getNewLevel(player);
	//std::cout << player.get_Level();

	int cmd = 0;

	do {
		std::cout << std::setfill('=') << std::setw(100) << " " << std::endl;
		std::cout << std::setfill(' ') << std::setw(65) << Name << std::endl;;
		std::cout << std::setfill('=') << std::setw(100) << " " << std::endl;
		mainMenu();
		std::cout << std::setfill('=') << std::setw(100) << " " << std::endl;
		std::cout << std::setfill(' ');
		std::cout << "Insert a Command: ";
		std::cin >> cmd;
		system("cls");
		switch (cmd) {
		case PLAY: {

			forest_dungeon(player);

			break;
		}
		case INVENTORY: {

			break;
		}
		case SHOP: {

			break;
		}



		}

	} while (true);


}




//fight(player, ORC);