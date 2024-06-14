#pragma once
#include "enemy_class.h"
#include <iostream>
#include <string>
#include <cstdlib>


void battle();

static void battle_actions(int& enemy_health, int& enemy_defense, int& enemy_attack, int& player_health, int& player_defense, int& player_attack, int& player_agility, int& player_items, string& enemy_name);