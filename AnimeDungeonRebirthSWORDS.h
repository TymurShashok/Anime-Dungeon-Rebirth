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

	int get_skill_CD() {

	}

	double get_visual_damage() {
		return damage;
	}

	double get_damage(int i) {
		return damage + Skills[i-1].get_skill_damage();
	}

	std::string get_skill_name(int i) {
		return Skills[i-1].get_skill_name();
	}
};

// PLAYER
extern WEAPON Wood_Sword;
extern WEAPON Stone_Sword;
extern WEAPON Zangetsu;
extern WEAPON naruto_combat_v1;
extern WEAPON sasuke_combat_v1;
extern WEAPON Virtus_Hammer;


// MONSTER
extern WEAPON Butterfly_weapon;
extern WEAPON Claws;
extern WEAPON Dryad_Wand;
extern WEAPON Centaur_Axe;
