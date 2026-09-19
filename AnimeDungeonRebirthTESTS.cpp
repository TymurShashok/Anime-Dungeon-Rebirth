#include "AnimeDungeonRebirthHeader.h"

void test_experience(double experience_, double Expected_experience) {

	if (experience_ == Expected_experience) {
		std::cout << "WORKING";
	}
	if (experience_ < Expected_experience) {
		std::cout << "FAILED";
	}
}
