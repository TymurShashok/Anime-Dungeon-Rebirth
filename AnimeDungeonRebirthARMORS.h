#pragma once

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

