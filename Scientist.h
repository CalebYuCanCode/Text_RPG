#pragma once
#include "hero.h"
#include <iostream>
#include <vector>

class Scientist_Class : public hero
{


public:

	void set_stats(int new_health_stat, int new_damage_stat, int new_defense_stat, int new_agility_stat);

	void Scientist();

	void get_hero_stats();

};

