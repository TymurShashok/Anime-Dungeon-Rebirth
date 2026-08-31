#include "AnimeDungeonRebirthHeader.h"


// SKILLS
SKILL NONE{ "None", 0.0, 0.0, 0 };
SKILL slash{ "Slash", 12.0, 40.0, 2 };
SKILL Fireball{ "FireBall", 13.0, 50.0, 3 };

// MODIFIERS
MODIFIERS NOPE{};

// WEAPONS
WEAPON Wood_Sword{ 8.0, NOPE, slash, NONE, NONE, NONE };
WEAPON Fire_Sword{ 12.0, NOPE, slash, Fireball, NONE, NONE };
// ARMORS
ARMOR StartClothes{ 5 };

// MONSTERS
MONSTERSTATS firstOrcDungeonStatistic{ 40.0, 100.0 };
MONSTERS ORC{ firstOrcDungeonStatistic, Wood_Sword, StartClothes };

