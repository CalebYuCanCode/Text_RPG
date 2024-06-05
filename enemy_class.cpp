#include "enemy_class.h"
using namespace std;


void enemy_class::set_stats(int new_health_stat, int new_damage_stat, int new_defense_stat) {//these are the way to change the stats

	health = new_health_stat;
	damage = new_damage_stat;
	defense = new_defense_stat;

}

void enemy_class::get_hero_stats() const {
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
	cout << "Defense: " << defense << endl;
};
