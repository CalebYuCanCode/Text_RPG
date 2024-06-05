#include "battlesystems.h"
#include "enemy_class.h"
#include <string>
#include <cstdlib>
using namespace std;

void battle() {// place this when needed in the game

	string enemy;
	enemy_class sneck;

	srand((unsigned)time(NULL));
	int battle = 1 + (rand() % 5);
	int rng = 1 + (rand() % 5);


	void enemies(); {
		switch (rng) {
		case 1:
			enemy = "sneck1";//have this set it up like the hero class
			sneck.set_stats(3, 3, 3);
			sneck.get_hero_stats();
			break;
		case 2:
			enemy = "sneck2";
			sneck.set_stats(4, 3, 3);
			sneck.get_hero_stats();
			break;
		case 3:
			enemy = "sneck3";
			sneck.set_stats(5, 3, 3);
			sneck.get_hero_stats();
			break;
		case 4:
			enemy = "sneck4";
			sneck.set_stats(6, 3, 3);
			sneck.get_hero_stats();
			break;
		case 5:
			enemy = "sneck5";
			sneck.set_stats(7, 3, 3);
			sneck.get_hero_stats();
			break;
		}
	}

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

void battle_actions() {//this function need to get stats to be able to adequately attack]
	string action;


	for (int check = 0; check == 0; check++) {//have this function run over and over again until health is depleted in a if loop in source or something
		check++;
		cout << "What do you want to do?" << endl;
		cout << "Attack | Use Item | Flee" << endl;
		getline(cin, action);//while loop and have some condition
		if (action == "Attack" || action == "attack") {

		}
		else if (action == "Use Item" || action == "use item" || action == "Item" || action == "item") {

		}
		else if (action == "Flee" || action == "flee") {

		}
		else {
			cout << "Not a valid answer check you spelling and pick again" << endl;
			check = -1;
		}
	}
}


