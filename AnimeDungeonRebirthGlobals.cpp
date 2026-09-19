#include "AnimeDungeonRebirthHeader.h"


/// === SKILLS ==== ///


// --SWORDS--
SKILL NONE{ "None", 0.0, 0.0, 0 }; // PlaceHolder
SKILL slash{ "Slash", 12.0, 40.0, 2 }; // All Swords
SKILL Fireball{ "FireBall", 13.0, 50.0, 3 }; // Fire_Sword
SKILL WaterGun("WaterGun", 11.0, 35.0, 3); // Water_Sword
// --HAMMERS--
SKILL Earth_Shake("Earth Shake", 19.0, 70.0, 2); // HAMMER SKILL: 19 DAMAGE, 70 mana_. 2 CD
SKILL Hammer_Throw("Hammer Throw", 11.0, 25.5, 1); // HAMMER SKILL: 11 DAMAGE, 25.5 mana_. 1 CD
SKILL Virtus_Slam("Virtus Slam", 30, 90.0, 4); // HAMMER SKILL: 39 DAMAGE, 90 mana_. 4 CD

// --MONSTERSKILLS--

SKILL Hp_Drain("HP_ drain", 21.0, 70.0, 4);
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
ARMOR Iron_Clothing{ 15 };
ARMOR Gold_Clothing{ 22 };
ARMOR Zombie_Clothing{ 30 };
ARMOR Leaf_Clothing{ 10 };
ARMOR Volcanic_Clothing{ 45 };
ARMOR Apalon_Clothing{ 55 };

// MONSTERS

//===============
// FOREST
//===============

//WEAPONS//
WEAPON Butterfly_weapon{ random_value(6.0, 8.0), NOPE, slash, slash, Hp_Drain, Hp_Drain };
WEAPON Claws{ random_value(7.0, 9.0), NOPE, slash, slash, slash, slash };
WEAPON Dryad_Wand{ random_value(6.0, 9.0), NOPE, slash, Fireball, Hp_Drain, WaterFall};
WEAPON Centaur_Axe{ random_value(21.0, 24.0) , NOPE, slash, slash, slash, WaterFall };

//MONSTER//

MONSTERSTATS forest_dungeon_stats{ random_value(1, 4),random_value(40.0, 95.7), random_value(40.0, 51.0), 100.0 };
MonsterStatsRange forest_stats_range = { 1, 3, 40.0, 65.0, 40, 55, 100 }; // STATS FOR FOREST MONSTERS
MONSTERS Butterfly{ "Butterfly" , generate_stats(forest_dungeon_stats,forest_stats_range), Butterfly_weapon, StartClothes};
MONSTERS Wolf{ "Wolf",generate_stats(forest_dungeon_stats,forest_stats_range), Claws, StartClothes };
MONSTERS Fox{ "Fox",generate_stats(forest_dungeon_stats,forest_stats_range), Claws, StartClothes };
MONSTERS Dryad{ "Dryad",generate_stats(forest_dungeon_stats,forest_stats_range), Dryad_Wand, StartClothes };
MONSTERS Centaur{ "Centaur",generate_stats(forest_dungeon_stats,forest_stats_range), Centaur_Axe, StartClothes };
MONSTERS Bear{ "Bear",generate_stats(forest_dungeon_stats,forest_stats_range), Claws, StartClothes };

//---------------
MONSTERSTATS OrcDungeonStats { 1, 40.0 , 90.0 , 100.0 }; // level_, dropexp, HP_, mana_
//MONSTERS ORC{ OrcDungeonStats, Wood_Sword, StartClothes };

