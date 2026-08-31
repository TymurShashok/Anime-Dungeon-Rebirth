#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <iomanip>

#include "AnimeDungeonRebirthSKILLS.h"
#include "AnimeDungeonRebirthMODIFIERS.h"
#include "AnimeDungeonRebirthSWORDS.h"
#include "AnimeDungeonRebirthARMORS.h"
#include "AnimeDungeonRebirthMONSTERS.h"


const std::string Name = "\033[1m Anime Dungeon: Rebirth\033[0m";

class STATS {

	// HP AND MANA
private:
	double HP = Vitality * 3 + 20;
	double Mana = Intelegience * 5 + 100;

	/// ABILITES

	int Strenght;
	int Intelegience;
	int Vitality;
	int Agility;

public:
	STATS(): HP(), Mana(), Strenght(), Intelegience(), Vitality(), Agility(){}
	STATS(double Health, double M, int STR, int INT, int VIT, int AGI) : HP(Health), Mana(M), Strenght(STR), Intelegience(INT), Vitality(VIT), Agility(AGI) {}

	// get
	double getHp() {
		return HP;
	}

	double getMana() {
		return Mana;
	}

	int getStrenght() {
		return Strenght;
	}
	int getIntelegience() {
		return Intelegience;
	}
	int getVitality() {
		return Vitality;
	}
	int getAgility() {
		return Agility;
	}

	// set

	 void setHP(double hp) {
		this->HP = hp;
	}
	 void setMana(double mana) {
		this->Mana = mana;
	}

};


class PLAYER {
private:

	STATS stats;
	WEAPON weapon;
	ARMOR armor;

public:
	PLAYER() : stats(), weapon(Wood_Sword), armor(StartClothes){}

	double attack(int g) {
		return weapon.getDamage(g) + stats.getStrenght() * 0.2;
	}
	
	double takeDamage(double damage) {
		double takeDamage = damage - armor.getDefense();
		stats.setHP(stats.getHp() - takeDamage);
	}

	double getHP() {
		return stats.getHp();
	}

	WEAPON getWeapon() {

	}

	void printSkills() {

		weapon.printSkills();
	}
};

int fightingChoice();
void fight(PLAYER player, MONSTERS Monster);


// Interface
void mainMenu(); // MainMenu of program