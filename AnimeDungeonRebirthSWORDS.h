#pragma once
#include "AnimeDungeonRebirthMODIFIERS.h"
#include "AnimeDungeonRebirthSKILLS.h"

class WEAPON {
private:
	double damage;
	MODIFIERS Modifier;

	SKILL Skills[4];

public:
	WEAPON() : damage(), Modifier(), Skills() {}
	WEAPON(double DMG, MODIFIERS MDF, SKILL firstSK, SKILL SecondSK, SKILL ThirdSK, SKILL FourthSK)
		: damage(DMG),
		Modifier(MDF),
		Skills{ firstSK, SecondSK, ThirdSK, FourthSK } {
	}

	double getDamage(int i) {
		return damage + Skills[i-1].getSkillDamage();
	}

	void getSkills() {

		for(int i = 0; i < 4; i++){
			std::cout << Skills[i].getSkillName();
		}
	}

	void printSkills() {

		for (int i = 0; i < 4; i++) {
			std::cout << Skills[i].getSkillName() << " ";
			std::cout << std::endl;
		}
	}
};


extern WEAPON Wood_Sword;
extern WEAPON Stone_Sword;
extern WEAPON Zangetsu;
extern WEAPON NarutoCombatV1;
extern WEAPON SasukeCombatV1;