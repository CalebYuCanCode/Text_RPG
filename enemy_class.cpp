#include "enemy_class.h"
using namespace std;

void enemy_sneck(){
	health = 6;
	damage = 9;
	defense = 12;
	battle_actions();
	cout << health << damage << defense << endl;//try to change the function outside of the thing
}
