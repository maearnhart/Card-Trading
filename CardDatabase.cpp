#include "CardDatabase.h"

CardDatabase()
{
  vector<Card> Deck;
}

~CardDatabase()
{
  
}

void addCard(string name, string owner, int value){
    Card* p = new Card;
    p->name = name;
    p->owner = owner;
    p->value = value;
    cards.push_back(p);

}

void addCard(Card* card) {
    cards.push_back(card);
}

Card getCard(int n) {
    return cards[n];
}
