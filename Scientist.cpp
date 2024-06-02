#include "Scientist.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Scientist_Class::Scientist() {
	health;
	damage;
	defense;
	agility;

}// find a way to change these stats and put in in the global scope


void Scientist_Class::get_hero_stats() {
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
	cout << "Defense: " << defense << endl;
	cout << "Agility: " << agility << endl;

};
