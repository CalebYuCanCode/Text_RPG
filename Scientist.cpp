#include "Scientist.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Scientist_Class::set_stats(int new_health_stat, int new_damage_stat, int new_defense_stat, int new_agility_stat){//use this for leveling
	// there must also be a way to make this a hero class function so you do not need to keep on making this for each class
	health = new_health_stat;
	damage = new_damage_stat;
	defense = new_defense_stat;
	agility = new_agility_stat;
}

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
