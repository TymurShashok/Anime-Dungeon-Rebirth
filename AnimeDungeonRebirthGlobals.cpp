#include "AnimeDungeonRebirthHeader.h"


/// === SKILLS ==== ///


// --SWORDS--
SKILL NONE{ "None", 0.0, 0.0, 0 }; // PlaceHolder
SKILL slash{ "Slash", 12.0, 40.0, 2 }; // All Swords
SKILL Fireball{ "FireBall", 13.0, 50.0, 3 }; // Fire_Sword
SKILL WaterGun("WaterGun", 11.0, 35.0, 3); // Water_Sword
// --HAMMERS--
SKILL Earth_Shake("Earth Shake", 19.0, 70.0, 2); // HAMMER SKILL: 19 DAMAGE, 70 MANA. 2 CD
SKILL Hammer_Throw("Hammer Throw", 11.0, 25.5, 1); // HAMMER SKILL: 11 DAMAGE, 25.5 MANA. 1 CD
SKILL Virtus_Slam("Virtus Slam", 30, 90.0, 4); // HAMMER SKILL: 39 DAMAGE, 90 MANA. 4 CD

// --MONSTERSKILLS--


SKILL Hp_Drain("Hp drain", 21.0, 70.0, 4);
SKILL WaterFall("WaterFall",50.0, 70.0, 7);

/// === MODIFIERS === ///
MODIFIERS NOPE{};

// WEAPONS
WEAPON Wood_Sword{ 8.0, NOPE, slash, NONE, NONE, NONE };
WEAPON Fire_Sword{ 12.0, NOPE, slash, Fireball, NONE, NONE };
WEAPON Water_Sword{ 12.0, NOPE, slash, Fireball, NONE, NONE };
WEAPON Virtus_Hammer{ 19.0, NOPE, Earth_Shake, Hammer_Throw, Virtus_Slam, NONE };

// ARMORS
ARMOR StartClothes{ 5 };

// MONSTERS

//===============
// FOREST
//===============

//WEAPONS//
WEAPON Butterfly_weapon{ random_value(14.0, 18.0), NOPE, slash, Fireball, Hp_Drain, WaterFall };
WEAPON Claws{ random_value(11.0, 13.0), NOPE, slash, Fireball, Hp_Drain, WaterFall };
WEAPON Dryad_Wand{ random_value(6.0, 9.0), NOPE, slash, Fireball, Hp_Drain, WaterFall};
WEAPON Centaur_Axe{ random_value(21.0, 24.0) , NOPE, slash, Fireball, Hp_Drain, WaterFall };

//MONSTER//

MONSTERSTATS ForestDungeonStats{ random_value(1, 4),random_value(40.0, 95.7), random_value(40.0, 51.0), 100.0 };
MonsterStatsRange ForestStatsRange = { 1, 4, 40.0, 65.0, 40, 55, 100 }; // STATS FOR FOREST MONSTERS
MONSTERS Butterfly{ "Butterfly" , generate_stats(ForestDungeonStats,ForestStatsRange), Butterfly_weapon, StartClothes};
MONSTERS Wolf{ "Wolf",generate_stats(ForestDungeonStats,ForestStatsRange), Claws, StartClothes };
MONSTERS Fox{ "Fox",generate_stats(ForestDungeonStats,ForestStatsRange), Claws, StartClothes };
MONSTERS Dryad{ "Dryad",generate_stats(ForestDungeonStats,ForestStatsRange), Dryad_Wand, StartClothes };
MONSTERS Centaur{ "Centaur",generate_stats(ForestDungeonStats,ForestStatsRange), Centaur_Axe, StartClothes };
MONSTERS Bear{ "Bear",generate_stats(ForestDungeonStats,ForestStatsRange), Claws, StartClothes };

//---------------
MONSTERSTATS OrcDungeonStats { 1, 40.0 , 90.0 , 100.0 }; // level, dropexp, hp, mana
//MONSTERS ORC{ OrcDungeonStats, Wood_Sword, StartClothes };

