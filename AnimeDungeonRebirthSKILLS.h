#pragma once
#include "AnimeDungeonRebirthHeader.h"
const int maxSkills = 4;

class SKILL {
private:
	std::string skill_name;
	double damage;
	double mana_cost;
	int skill_CD;

public:
	SKILL()
		: skill_name(), damage(0.0), mana_cost(0.0), skill_CD(0) {
	}
	SKILL(std::string name, double damage, double mana_cost, int skill_CD)
		: skill_name( name),
		damage(damage),
		mana_cost(mana_cost),
		skill_CD(skill_CD) {
	}

	double get_skill_damage() {
		return damage;

	}

	double get_skill_cd() {
		return skill_CD;

	}

	double get_mana_cost() {
		return mana_cost;

	}
	std::string get_skill_name() {
		return skill_name;
	}
};

extern SKILL slash;