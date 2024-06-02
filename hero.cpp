#include "hero.h"
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map> 

using namespace std;



void hero::getting_data(){

}

hero::hero() {
	health = 0;
	damage = 0;
	defense = 0;
	agility = 0;

	vector<int> hero_stats = { health, damage, defense, agility };
}

void hero::hero_tools(int sword, int bow, int axe) {

	sword = 0;
	bow = 0;
	axe = 0;
}
void hero::hero_health(int health) {

	health = 0;
}
void hero::inventory(){

unordered_map<string, int> inventory{
{"Small Potions", 0},
{"Large Potions", 0}
	};

};