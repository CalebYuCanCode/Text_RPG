#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "There are FOUR Classes you can pick" << endl;
	cout << "THE SCIENTIST: With their incredible knowledge be able to get a health potion every battle. Hoping to expand the knowledge of this world he will explore and discover." << endl;
	cout << "Scientist Stats:\n"
		"(health placeholder)\n"
		"(attack Placeholder)\n"
		"(defense placeholder)\n"
		"(agility placeholder)\n";
	cout << "THE WARRIOR: With their legendary sword slice throw enemies with more attack. Wanting to gain honor and glory in conquering this land he will venture deep." << endl;
	cout << "Warrior Stats:\n"
		"(health placeholder)\n"
		"(attack Placeholder)\n"
		"(defense placeholder)\n"
		"(agility placeholder)\n";
	cout << "THE NINJA: After years of martial arts training they have mastered their agility. Wanting to get revenge for his fallen master he follows clues here." << endl;
	cout << "Ninja Stats:\n"
		"(health placeholder)\n"
		"(attack Placeholder)\n"
		"(defense placeholder)\n"
		"(agility placeholder)\n";
	cout << "JUST LARRY: This man who just got fired from his 9-5 plans on finding who he is with his newfound freedom. His pot belly provides some protection increasing his defense." << endl;
	cout << "Larry's Stats:\n"
		"(health placeholder)\n"
		"(attack Placeholder)\n"
		"(defense placeholder)\n"
		"(agility placeholder)\n";
	cout << "Pick one of the characters" << endl;
	string character;
	getline(cin, character);
	if (character == "Scientist" || character == "scientist") {
		cout << "Knowlodge is Power" << endl;//give them scientist
	}
	else if (character == "Warrior" || character == "warrior") {
		cout << "FOR GLORY!!!" << endl;// give them warrior
	}
	else if (character == "Larry" || character == "larry") {
		cout << "Hey got any burgers? " << endl;//give them larry
	}
	else if (character == "ninja" || character == "Ninja") {
		cout << "SHH" << endl;
	}
	else {
		cout << "YOU KNOW WHAT YOU GET NOTHING";
		cout << "YOUR CHARACTER GETS 1 DEFENSE, 1 ATTACK, 1 DAMAGE, 1 AGILITY, AND 1 HEALTH!" << endl;// set the stats to that
	}
}