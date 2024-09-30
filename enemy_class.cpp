#include "enemy_class.h"
#include <iostream>
#include <string>
using namespace std;

void enemy_sneck() {//we do not need to do this as we have static variables We can create an object that has these variables to have different things. 
	//Will probably have to rework now as it is an object
	enemy_name = "sneck";
	enemy_health = 6;
	enemy_damage = 9;
	enemy_defense = 12;
	battle_actions(enemy_health,12,6,5);//put player health there//also make sure its a variable not a int you are putting in there//definatly add al the parameters
	//enemy_health, enemy_defense, enemy_attack, player_health, player_defense,player_attack, player_agility, player_items, string enemy_name// order of the parameters
	cout << enemy_health << enemy_damage << enemy_defense << endl;//try to change the function outside of the thing
}
