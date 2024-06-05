#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

class hero_class {// use inheritance



public:

	int health = 0;
	int damage = 0;
	int defense = 0;
	int agility = 0;

	vector<int> hero_stats = { health, damage, defense, agility };//maybe not needed check

	void set_stats(int new_health_stat, int new_damage_stat, int new_defense_stat, int new_agility_stat);

	void get_hero_stats() const;

	void hero_tools(int sword, int bow, int axe);

	void inventory();
};