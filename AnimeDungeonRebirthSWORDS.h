#pragma once
#include "AnimeDungeonRebirthHeader.h"
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

	double get_visual_damage() {
		return damage;
	}

	double getDamage(int i) {
		return damage + Skills[i-1].getSkillDamage();
	}

	std::string getSkillName(int i) {
		return Skills[i-1].getSkillName();
	}
};

// PLAYER
extern WEAPON Wood_Sword;
extern WEAPON Stone_Sword;
extern WEAPON Zangetsu;
extern WEAPON NarutoCombatV1;
extern WEAPON SasukeCombatV1;
extern WEAPON Virtus_Hammer;


// MONSTER
extern WEAPON Butterfly_weapon;
extern WEAPON Claws;
extern WEAPON Dryad_Wand;
extern WEAPON Centaur_Axe;
