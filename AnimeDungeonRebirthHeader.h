#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib> 
#include <ctime> 


#include "AnimeDungeonRebirthSKILLS.h"
#include "AnimeDungeonRebirthMODIFIERS.h"
#include "AnimeDungeonRebirthSWORDS.h"
#include "AnimeDungeonRebirthARMORS.h"
#include "AnimeDungeonRebirthMONSTERS.h"


const std::string Name = "\033[1m Anime Dungeon: Rebirth\033[0m";

class STATS {

	// HP AND MANA
private:
	int Level = 1;
	double Experience = 0;
	double Max_Experience = 80 * Level;
	int Skill_Points = Level * 3;
	double HP = Vitality * 3 + 20;
	double Mana = Intelegience * 5 + 100;

	/// ABILITES

	int Strenght = 1;
	int Intelegience = 1;
	int Vitality = 1;
	int Agility = 1;

public:
	STATS(): Level(1), Experience(0), Max_Experience(80), Skill_Points(0), HP(20), Mana(100), Strenght(0), Intelegience(0), Vitality(0), Agility(0) {}
	STATS(int Lvl,  double Health, double M, int STR, int INT, int VIT, int AGI) : Level(Lvl), HP(Health), Mana(M), Strenght(STR), Intelegience(INT), Vitality(VIT), Agility(AGI) {}

	// get

	int getLevel() {
		return Level;
	}

	double getExperience() {
		return Experience;
	}

	double getMax_Experience() {
		return Max_Experience;
	}

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

	// 

	void Levelup(int Lvl) {
		this->Level = Lvl + 1;
	}
	void setLevel(int Lvl) {
		this->Level = Lvl;
	}

	 void setHP(double hp) {
		this->HP = hp;
	}
	 void setMana(double mana) {
		this->Mana = mana;
	}

	 void getExp(double exp) {
		 this->Experience += exp;
	 }
	 void resetExperience() {
		 this->Experience = 0;
	 }
};


class PLAYER {
private:
	std::string name;
	STATS stats;
	WEAPON weapon;
	ARMOR armor;

public:
	PLAYER() :name("None"), stats(), weapon(Wood_Sword), armor(StartClothes) {}
	PLAYER(WEAPON weapon, ARMOR arm) :name("None"), stats(), weapon(weapon), armor(arm) {}
	PLAYER(std::string name , STATS stats, WEAPON weapon, ARMOR arm) :name(name), stats(stats), weapon(weapon), armor(arm) {}

	std::string getName() {
		return name;
	}

	double get_damage() {
		return weapon.get_visual_damage();
	}

	double attack(int g) {
		return weapon.getDamage(g) + stats.getStrenght() * 0.2;
	}

	double takeDamage(double damage) {
		double takeDamage = damage - armor.getDefense();
		stats.setHP(stats.getHp() - takeDamage);
	}


	double getMana() {
		return stats.getMana();
	}
	double getHP() {
		return stats.getHp();
	}

	int get_Level() {
		return stats.getLevel();
	}

	double getExperience() {
		return stats.getExperience();
	}

	double get_Max_Experience() {
		return stats.getMax_Experience();
	}

	void Levelup(int Lvl) {
		stats.setLevel(Lvl + 1);
	}

	void printSkills() {

		weapon.printSkills();
	}

	void getExp(double exp) {
		stats.getExp(exp);
	}

	void resetExperience() {
		stats.resetExperience();
	}

	void getAll() {
		std::cout << stats.getExperience() << std::endl;
		std::cout << stats.getHp() << std::endl;
		std::cout << stats.getHp() << std::endl;
		std::cout << stats.getLevel() << std::endl;
		std::cout << stats.getMax_Experience() << std::endl;

	}

};

//==============================
//DUNGEONS 
//==============================

int dungeonChoice();
void forest_dungeon(PLAYER& player);
void Dungeons(PLAYER& player, MONSTERS monster);





//==============================


//==============================
//FIGHTING
//==============================

int fightingChoice();
void Play(PLAYER& player, MONSTERS Monster); // Function for Play game; Dungeon Choice, Fighting and more;
void fight(PLAYER& player, MONSTERS Monster); // Fight Mechanic






//-------------------------------


//===============================
// Player
//===============================
void getNewLevel(PLAYER& player); // Function for LevelUp Mechanic



//--------------------------------




//===============================
// Interface
//===============================
void Fighting_Tab();

template<typename T>
void hp_bar(T player_or_Monster) {
	int i = 0;
	for (i; i < player_or_Monster.getHP(); i += 10) {

		if (i % 20 == 0) {
			std::cout << "#";
		}

		if (i == player_or_Monster.getHP()) {
			return;
		}

	}

}

std::string stat_to_string(double value);
void box_top_and_bottom(int width);
void boxLine(std::string playerstat, std::string monsterstat, int width);

void FightingBox(PLAYER player, MONSTERS monster);
void fighting_stats(PLAYER player, MONSTERS monster);

void mainMenu(); // MainMenu of program
void moveChoice();



//-------------------------------

// tests
void experiencetest(double experience, double Expected_experience);


//RANDOM_VALUE

template<typename T>
T random_value(T min, T max) {
	if constexpr (std::is_same_v<T, int>) {
		return rand() % (max - min + 1) + min;
	}
	if constexpr (std::is_same_v<T, double>) {
		return rand() * (max - min + 1) / RAND_MAX + min;
	}

}
MONSTERSTATS generate_stats(MONSTERSTATS& stats, MonsterStatsRange st);
MONSTERS random_forest_monster(int random_value);