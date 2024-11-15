#include "CardDatabase.h"

CardDatabase()
{
  vector<Card> Deck;
}

~CardDatabase()
{
  
}

void addCard(string name, string owner, int val) {
    Card* c = new Card;
    c->name = name;
    c->owner = owner;
    c->value = val;
    cards.push_back(c);

}

void addCard(Card* card) {
    cards.push_back(card);
}

set<Card*> getCard(set<int> n) {
    return Deck[n];
}


