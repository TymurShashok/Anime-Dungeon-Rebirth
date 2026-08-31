#pragma once
#include "AnimeDungeonRebirthSWORDS.h"
#include "AnimeDungeonRebirthARMORS.h"

class MONSTERSTATS {
	// HP AND MANA
private:
	double HP;
	double Mana;

public:
	MONSTERSTATS(): HP(), Mana() {}
	MONSTERSTATS(double Health, double M) : HP(Health), Mana(M){}

	// get
	double getHp() {
		return HP;
	}

	double getMana() {
		return Mana;
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
	MONSTERSTATS stats;
	WEAPON weapon;
	ARMOR armor;


public:
	MONSTERS(): stats(), weapon(), armor(){}
	MONSTERS(MONSTERSTATS statistic, WEAPON Weap, ARMOR arm) : stats(statistic), weapon(Weap), armor(arm){}
	double attack(int g) {
		return weapon.getDamage(g);
	}

	void takeDamage(double damage) {
		double takeDamage = damage;
		stats.setHP(stats.getHp() - takeDamage);
	}

	double getHP() {
		return stats.getHp();
	}
};



// ORC
extern MONSTERSTATS firstOrcDungeonStatistic;
extern MONSTERS ORC;