#include "AnimeDungeonRebirthHeader.h"

PLAYER player = {};

enum commands { PLAY = 1, INVENTORY = 2, SHOP = 3, SETTINGS = 4, };

int main() {

	int cmd = 0;
	std::cout << std::setfill('=') << std::setw(100) << " " << std::endl;
	std::cout << std::setfill(' ') << std::setw(65) << Name << std::endl;;
	std::cout << std::setfill('=') << std::setw(100) << " " << std::endl;
	
	do {

		mainMenu();
		std::cout << std::setfill('=') << std::setw(100) << " " << std::endl;
		std::cout << "Insert a Command: ";
		std::cin >> cmd;
		system("cls");
		switch (cmd) {
		case PLAY: {

			fight(player, ORC);

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