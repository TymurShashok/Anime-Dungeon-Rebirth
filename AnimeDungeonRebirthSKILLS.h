#pragma once

const int maxSkills = 4;

class SKILL {
private:
	std::string skillName;
	double damage;
	double manaCost;
	int skillCD;

public:
	SKILL()
		: skillName(), damage(0.0), manaCost(0.0), skillCD(0) {
	}
	SKILL(std::string name, double damage, double manaCost, int skillCD)
		: skillName( name),
		damage(damage),
		manaCost(manaCost),
		skillCD(skillCD) {
	}

	double getSkillDamage() {
		return damage;

	}

	double getskillCD() {
		return skillCD;

	}

	double getmanaCost() {
		return manaCost;

	}
	std::string getSkillName() {
		return skillName;
	}
};

extern SKILL slash;