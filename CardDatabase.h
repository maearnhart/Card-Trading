#pragma once

#include "Card.h"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

class CardDatabase {
private:
	vector<Card*> deck;
	map<string, set<int>> nameToSlot;
	map<int, set<int>> valueToSlot;
	map<string, set<int>> ownerToSlot;

public:
	CardDatabase();
	void addCard(Card* card);
	void addCard(string name, string owner, int val); // Function Overload

	set<Card*> getCards(int n);
	set<Card*> getCards(set<int> cards);

	set<int> searchName(string name);
	set<int> searchVal(string op, int val);
	set<int> searchOwner(string name);
	void displayDatabase();
	void displayOwner(string owner);
	void displayCards(set<int>);

	void tradeExecute(Card* c1, Card* c2); //Execute trade
	void tradeByVal(int val, int m); //Search for possible trades within range of m

};
