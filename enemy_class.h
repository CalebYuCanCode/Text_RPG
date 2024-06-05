#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <string>


class enemy_class{

public:

int health = 0;
int damage = 0;
int defense = 0;


void set_stats(int new_health_stat, int new_damage_stat, int new_defense_stat);

string enemy_name;

void get_hero_stats() const;//not needed used for testing

};
