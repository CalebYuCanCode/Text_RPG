#include "battlesystems.h"
#include "enemy_class.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
srand((unsigned)time(NULL));

void enemies(string& enemy){//see if this is useful
	int rng = 1 + (rand() % 5);
	switch (rng) {
	case 1:
		enemy = "sneck1";//change this to use functions
		break;
	case 2:
		enemy = "sneck2";

		break;
	case 3:
		enemy = "sneck3";

		break;
	case 4:
		enemy = "sneck4";

		break;
	case 5:
		enemy = "sneck5";

		break;
	}
}

void battle(){// place this when needed in the game

	string enemy;

	int battle = 1 + (rand() % 5);

	switch (battle) {
	case 1:
		cout << "placer holder paragraph 1 " << enemy << endl;
		break;
	case 2:
		cout << "placer holder paragraph 2 " << enemy << endl;
		break;
	case 3:
		cout << "placer holder paragraph 3 " << enemy << endl;
		break;
	case 4:
		cout << "placer holder paragraph 4 " << enemy << endl;
		break;
	case 5:
		cout << "placer holder paragraph 5 " << enemy << endl;
		break;
	}
}

static void battle_actions(int& enemy_health, int& enemy_defense, int& enemy_attack, int& player_health, int& player_defense,int& player_attack, int& player_agility, int& player_items, string& enemy){//take player health from hero_class

	srand((unsigned)time(NULL));
	int percent_chance = (rand() % (100)) + 1;

	

	bool isBattleOver = false;
	while (!isBattleOver) {

		string action;
		int enemy_action = 0;

		cout << "What do you want to do?" << endl;
		cout << "Attack | Use Item | Flee" << endl;
		getline(cin, action);

		if (action == "attack") {
			//use a new variable to take away the damage
			enemy_health -= 2;//add calculation to defense
			if (enemy_health <= 0) {//change the enemy function in there
				cout << "Enemy defeated!" << endl;
				isBattleOver = true;
			}
		}
		else if (action == "use item" || action == "item") {

			if (player_items > 0) {
				player_health += 5;//change this stat based on how it is
				player_items--;
				cout << "You used an item and restored health!" << endl;
			}
			else {
				cout << "You have no items left!" << endl;
			}
		}
		else if (action == "flee") {//percent chance based on agility

			cout << "You fled the battle!" << endl;
			isBattleOver = true;
		}
		else {

			cout << "Not a valid answer. Check your spelling and pick again." << endl;
		}

		if (player_health <= 0) {
			cout << "You have been defeated!" << endl;//make this cooler
			isBattleOver = true;
		}

		//enemy attack
		while(enemy_action == 0){


			if (!(percent_chance > player_agility)) {
				cout << "You dodged" << enemy_name << endl;
			}
			
			//calculate damage with defense and agility



			enemy_action++;

		}

	}
}

