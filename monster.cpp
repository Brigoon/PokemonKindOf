#include "monster.h"

using namespace std;

Monster::Monster() : experience(0), level(1), maxHealth(0), currentHealth(0), attack(0), defense(0), specialAttack(0), specialDefense(0), speed(0) {}

Monster::Monster(uint8 h_in, uint8 a_in, uint8 d_in, uint8 sa_in, uint8 sd_in, uint8 s_in) :
	experience(0), level(1), maxHealth(h_in), currentHealth(h_in), attack(a_in), defense(d_in), specialAttack(sa_in), specialDefense(sd_in), speed(s_in) {}

uint8 Monster::getLevel() { return level; }
uint8 Monster::getMaxHealth() { return maxHealth; }
uint8 Monster::getCurrentHealth() { return currentHealth; }
uint8 Monster::getAttack() { return attack; }
uint8 Monster::getDefense() { return defense; }
uint8 Monster::getSpecialAttack() { return specialAttack; }
uint8 Monster::getSpecialDefense() { return specialDefense; }
uint8 Monster::getSpeed() { return speed; }
uint32 Monster::getExperience() { return experience; }

void Monster::printStats()
{
	cout << "Level: " << +level << '\n';
	cout << "Health: "  << +currentHealth << "/" << +maxHealth << '\n';
	cout << "Attack: " << +attack << '\n';
	cout << "Defense: " << +defense << '\n';
	cout << "Special Attack: " << +specialAttack << '\n';
	cout << "Special Defense: " << +specialDefense << '\n';
	cout << "Speed: " << +speed << '\n';
	cout << "Experience: " << experience << '\n' << endl;
}

void Monster::heal()
{
	currentHealth = maxHealth;
}