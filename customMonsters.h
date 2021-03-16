#ifndef CUSTOMMONSTERS_H
#define CUSTOMMONSTERS_H

#include "monster.h"

class Bulbasaur : public Monster {
public:
	Bulbasaur() : Monster(45, 49, 49, 65, 65, 45) {}
};

class Charmander : public Monster {
public:
	Charmander() : Monster(39, 52, 43, 60, 50, 65) {}
};

class Squirtle : public Monster {
public:
	Squirtle() : Monster(44, 48, 65, 50, 64, 43) {}
};

#endif