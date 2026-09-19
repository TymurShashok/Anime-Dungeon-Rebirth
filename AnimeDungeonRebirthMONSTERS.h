#pragma once
#include "AnimeDungeonRebirthHeader.h"
#include "AnimeDungeonRebirthSWORDS.h"
#include "AnimeDungeonRebirthARMORS.h"

struct MonsterStatsRange {

	const int MIN_LVL;
	const int MAX_LVL;

	const double MIN_HP;
	const double MAX_HP;

	const double MIN_DROP_EXP;
	const double MAX_DROP_EXP;

	const double mana_;

};



class MONSTERSTATS {
	// HP_ AND mana_
private:

	int level_ = 1;
	double drop_Experience = 40;
	double HP_ = 40;
	double mana_ = 100;
	

public:
	MONSTERSTATS(): HP_(), level_(1), drop_Experience(40.0), mana_() {}
	MONSTERSTATS(int level_, double dropEXP, double Health , double M) : level_(level_), drop_Experience(dropEXP), HP_(Health*level_ ), mana_(M) {}

	// get

	int get_level() {
		return level_;
	}

	double get_HP() {
		return HP_;
	}

	double get_mana() {
		return mana_;
	}
	
	double get_drop_experience() {
		return drop_Experience;
	}
	// set

	void set_HP(double HP_) {
		this->HP_ = HP_;
	}
	void set_mana(double mana_) {
		this->mana_ = mana_;
	}

	void generate_new_stats(MonsterStatsRange st) {
		level_ = random_value(st.MIN_LVL, st.MAX_LVL);
		drop_Experience = random_value(st.MIN_DROP_EXP, st.MAX_DROP_EXP);
		HP_ = random_value(st.MIN_HP, st.MAX_HP);
		mana_ = st.mana_;
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
		return weapon.get_damage(g);
	}

	void take_damage(double damage) {
		double take_damage = damage;
		stats.set_HP(stats.get_HP() - take_damage);
	}

	double get_damage() {
		return weapon.get_visual_damage();
	}

	int get_Level() {
		return stats.get_level();
	}

	std::string get_name() {
		return name;
	}

	double get_mana() {
		return stats.get_mana();
	}

	double get_HP() {
		return stats.get_HP();
	}

	double get_drop_experienece() {
		return stats.get_drop_experience();
		
	}
	void generate_new_stats(MonsterStatsRange st) {
		stats.generate_new_stats(st);
	}
};



//========
//Forest
//========
extern MonsterStatsRange forest_stats_range;
extern MONSTERSTATS forest_dungeon_stats;
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