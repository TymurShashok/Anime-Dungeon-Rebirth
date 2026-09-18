#include "AnimeDungeonRebirthHeader.h"

void experiencetest(double experience, double Expected_experience) {

	if (experience == Expected_experience) {
		std::cout << "WORKING";
	}
	if (experience < Expected_experience) {
		std::cout << "FAILED";
	}
}
