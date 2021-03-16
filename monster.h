#ifndef MONSTER_H
#define MONSTER_H

#include "helper.h"

class Monster {
public:
	Monster();
	Monster(uint8, uint8, uint8, uint8, uint8, uint8);
	~Monster() {}

	uint8 getLevel();
	uint8 getMaxHealth();
	uint8 getCurrentHealth();
	uint8 getAttack();
	uint8 getDefense();
	uint8 getSpecialAttack();
	uint8 getSpecialDefense();
	uint8 getSpeed();

	uint32 getExperience();

	void printStats();
	void heal();

private:
	uint32 experience;

	uint8 level;
	uint8 maxHealth;
	uint8 currentHealth;
	uint8 attack;
	uint8 defense;
	uint8 specialAttack;
	uint8 specialDefense;
	uint8 speed;
};

#endif