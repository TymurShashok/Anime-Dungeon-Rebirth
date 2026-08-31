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