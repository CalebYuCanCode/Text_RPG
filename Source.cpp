#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "Scientist.h"
#include "hero.h"
using namespace std;


	int main() {


		string yes_no;
		string name;
		Scientist_Class get_stats;// you can make more objects for more functions later


		get_stats.get_hero_stats();// use this as a function to call on stats
		
		cout << "Welcome To My RPG. You will explore many wonderous lands and fight terrifying monsters. Are you ready?\n";
		cout << "Yes or No (Be careful of spaces)\n";
		getline(cin, yes_no);
		if (yes_no == "Yes" || yes_no == "yes" || yes_no == "Y" || yes_no == "y") {
			cout << "Lets Go \n";
		}
		else if (yes_no == "No" || yes_no == "no" || yes_no == "N" || yes_no == "n") {
			cout << "Well get ready then\n";
		}
		else {
			cout << "What are you doing pick something correct\n";
		}
		
		yes_no.clear();

		cout << "Enter your name: ";
		getline(cin, name);
		cout << "Welcome " << name << ", lets now pick who you want to be" << endl;
		// that comes way to fast find a way to slow it down
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
			cout << "Knowledge is Power" << endl;//give them scientist
		}
		else if (character == "Warrior" || character == "warrior") {
			cout << "FOR GLORY!!!" << endl;// give them warrior
		}
		else if (character == "Larry" || character == "larry") {
			cout << "Hey got any burgers? " << endl;//give them larry
		}
		else if (character == "ninja" || character == "Ninja") {
			cout << "SHHH!!!" << endl;
		}
		else {
			cout << "YOU KNOW WHAT YOU GET NOTHING";
			cout << "YOUR CHARACTER GETS 1 DEFENSE, 1 ATTACK, 1 DAMAGE, 1 AGILITY, AND 1 HEALTH!" << endl;// set the stats to that
		}
	
	} 