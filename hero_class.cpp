#include "hero_class.h"
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map> 

using namespace std;



void hero_class::get_hero_stats() const {
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
	cout << "Defense: " << defense << endl;
	cout << "Agility: " << agility << endl;

};

void hero_class::set_stats(int new_health_stat, int new_damage_stat, int new_defense_stat, int new_agility_stat) {//use this for leveling
	// there must also be a way to make this a hero class function so you do not need to keep on making this for each class//do that if you can find out a save system
	health = new_health_stat;
	damage = new_damage_stat;
	defense = new_defense_stat;
	agility = new_agility_stat;//chance to dodge attack twice and flee
}

void hero_class::hero_tools(int sword, int bow, int axe) {// focus on a weapon system later to see if you really want it// needs a complete rework

	sword = 0;
	bow = 0;
	axe = 0;
}

void hero_class::inventory() {// figure out how to change these stats

	unordered_map<string, int> inventory{
	{"Health Potions", 0}
	};
	//you can use an if statement to add a health potion
};