#pragma once
#include "AnimeDungeonRebirthSWORDS.h"
#include "AnimeDungeonRebirthARMORS.h"

class MONSTERSTATS {
	// HP AND MANA
private:

	int level = 1;
	double drop_Experience = 40;
	double HP = 40;
	double Mana = 100;
	

public:
	MONSTERSTATS(): HP(), level(1), drop_Experience(40.0), Mana() {}
	MONSTERSTATS(int level, double dropEXP, double Health , double M) : level(level), drop_Experience(dropEXP), HP(Health*level ), Mana(M) {}

	// get

	int getLevel() {
		return level;
	}

	double getHp() {
		return HP;
	}

	double getMana() {
		return Mana;
	}
	
	double getDrop_Experience() {
		return drop_Experience;
	}
	// set

	void setHP(double hp) {
		this->HP = hp;
	}
	void setMana(double mana) {
		this->Mana = mana;
	}

};


class MONSTERS {
private:
	std::string name;
	MONSTERSTATS stats;
	WEAPON weapon;
	ARMOR armor;


public:
	MONSTERS(): name(), stats(), weapon(), armor(){}
	MONSTERS(std::string name,MONSTERSTATS statistic, WEAPON Weap, ARMOR arm) :name(name),stats(statistic), weapon(Weap), armor(arm) {}
	double attack(int g) {
		return weapon.getDamage(g);
	}

	void takeDamage(double damage) {
		double takeDamage = damage;
		stats.setHP(stats.getHp() - takeDamage);
	}

	double get_damage() {
		return weapon.get_visual_damage();
	}

	int get_Level() {
		return stats.getLevel();
	}

	std::string getName() {
		return name;
	}

	double getMana() {
		return stats.getMana();
	}

	double getHP() {
		return stats.getHp();
	}

	double getDropExp() {
		return stats.getDrop_Experience();
	}
};

struct MonsterStatsRange {

	const int MIN_LVL;
	const int MAX_LVL;

	const double MIN_HP;
	const double MAX_HP;

	const double MIN_DROP_EXP;
	const double MAX_DROP_EXP;

	const double MANA;

};


//========
//Forest
//========

extern MONSTERSTATS ForestDungeonStats;
extern MONSTERS Butterfly;
extern MONSTERS Wolf;
extern MONSTERS Fox;
extern MONSTERS Dryad;
extern MONSTERS Centaur;
extern MONSTERS Bear;

//--------




// ORC
extern MONSTERSTATS OrcDungeonStats;
extern MONSTERS ORC;