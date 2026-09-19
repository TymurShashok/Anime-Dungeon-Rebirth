#pragma once
#include "AnimeDungeonRebirthHeader.h"
class ARMOR {
private:
	int defense; // 1 defense = 1 damage;


public:
	ARMOR() : defense(0){}
	ARMOR(int DEF): defense(DEF) {}


	int getDefense(){
		return defense;
	}
};


extern ARMOR StartClothes;
extern ARMOR Iron_Clothing;
extern ARMOR Gold_Clothing;
extern ARMOR Zombie_Clothing;
extern ARMOR Leaf_Clothing;
extern ARMOR Volcanic_Clothing;
extern ARMOR Apalon_Clothing;

