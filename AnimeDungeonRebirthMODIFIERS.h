#pragma once
#include "AnimeDungeonRebirthHeader.h"
class MODIFIERS {
private:
	int damage_buff;
	int armor_buff;

public:
	MODIFIERS() : damage_buff(0), armor_buff(0) {}
	MODIFIERS(int damage_buff, int armor_buff)
		: damage_buff(damage_buff), armor_buff(armor_buff) {
	}
};

extern MODIFIERS NOPE;