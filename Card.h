#pragma once

#include <string>
#include <set>

using namespace std;

struct Card {
	string name;
	string owner;
	int value;

	// Constructor
	Card(string Name, string Owner, int val) : name(Name), owner(Owner), value(val) {} 

	// Methods
	void print();
	void print(const set<Card*> cards);

};
