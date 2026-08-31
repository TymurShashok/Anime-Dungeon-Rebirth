#pragma once
class MODIFIERS {
private:
	int damageBuff;
	int armorBuff;

public:
	MODIFIERS() : damageBuff(0), armorBuff(0) {}
	MODIFIERS(int damageBuff, int armorBuff)
		: damageBuff(damageBuff), armorBuff(armorBuff) {
	}
};

extern MODIFIERS NOPE;