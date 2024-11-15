#include "Card.h"
#include "UI.h"

#include <iostream>
#include <set>

using namespace std;

void Card::print()
{
	// Notes: Uses "\n" instead of endl to create newlines as endl performs flushing operations on the output stream
	cout << "Name: " << this->name << "\n"
		<< "Value: " << this->value << "\n"
		<< "Owned by: " << this->owner << endl;
}

void Card::print(const set<Card*> cards) {
	UIOut("Cards", true, cards);
}
