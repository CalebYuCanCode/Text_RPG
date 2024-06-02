#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

class hero {// use inheritance



public:

	int health = 0;
	int damage = 0;
	int defense = 0;
	int agility = 0;

	vector<int> hero_stats = { health, damage, defense, agility };

	hero();

	void getting_data();

	void hero_tools(int sword, int bow, int axe);

	void hero_health(int health);

	void inventory();
};