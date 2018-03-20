// Interactive Fun.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;

string GetTextFromUser() {
	string a;
	getline(cin, a);
	return a;
}

int GetNumberFromUser() {
	int a;
	cin >> a;
	return a;
}


int main(){
	// Varable to store inputs from player
	int Input;
	int SecondInput;
	// Using Enums to have locations and keep track
	enum Places {home,forest,town,well,dungeon};
	//varable for where the player is
	int PlayerLocation = home;
	// Currency counter for the player
	int Gems = 0;

	//setting up bools to check for end condtions
	bool FoundBook = false;
	bool isLitch = false;

	// The Title output
	cout << "Welcome to the game of Forgotten Tomes" << endl;
	cout << "What do the call thyself: ";
	//storing the name for future reference
	string Name = GetTextFromUser();

	cout << "\nYou Startle awake, to the sound of a door slamming..." << endl;
	cout << "But wait, you were alone when you went to bed..." << endl;

	while(true) {
		switch (PlayerLocation) {
			// player starts off in home

		case home:
			//Story for the home
			cout << "You are inside of your studio in1 your home, filled with books about every subject." << endl;
			cout << "There is a single door to the outside on your left." << endl;
			cout << "What will You do? " << endl;

			// The options
			cout << endl;
			cout << "1. Look around Your studio" << endl;
			cout << "2. Leave Through the door" << endl;
			// Accepting input from the player
			Input = GetNumberFromUser();
				switch (Input) {
				case 1:
					if (!FoundBook) {
						// story for the book
						cout << "As you look around your studio you discover a particular book that happens to...";
						cout << "Speak Out to you inside your Mind" << endl;
						cout << "You are a being of particular intrest, pick me UP, READ ME, and you will see the world in a new way" << endl;
						cout << "Should i pick up the strange speaking book?" << endl;
						
						// The choices for the book
						cout << "1. Pick UP THE Book" << endl;
						cout << "2. Try to walk away from the strange book..." << endl;
						
					}
					break;
				case 2:


					break;
				default:
					cout << "Incorrect Choice " << Name << ", Dont fail me Again!" << endl;
				}

				//Get Out Of case 1 just in case
				break;
		}
	}
}

