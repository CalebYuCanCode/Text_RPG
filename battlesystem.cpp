#include "battlesystem.h"
#include <cstdlib>
using namespace std;

void battle_paragraph(){// place this when needed in the game

	string enemy;

	srand((unsigned)time(NULL));

	int seed = rand();

	int battle = 1 + (rand() % 5);

	int rng = 1 + (rand() % 5);

	cout << battle << endl;
	cout << rng << endl;

	void enemies(); {
		switch (rng) {
		case 1:
			enemy = "enemy1" ;//have a way for these cases to mark something that allows the paragraphs to read
			break;
		case 2:
			enemy = "enemy2" ;
			break;
		case 3:
			enemy = "enemy3" ;
			break;
		case 4:
			enemy = "enemy4" ;
			break;
		case 5:
			enemy = "enemy5" ;
			break;
		}
	}

	switch (battle){
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


