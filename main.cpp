#include "CardDatabase.h"

using namespace std;

int main()
{

	CardDatabase deck;

	deck.addCard("Micheal Jordan", "Utsav", 3000);
	deck.addCard("Lebron James", "Mackenzie", 2500);
	deck.addCard("Stephen Curry", "Micheal", 2750);
	deck.displayDatabase();

	deck.displayOwner("Utsav");
	deck.displayCards(deck.searchVal("<", 2750));


	return 0;
}
