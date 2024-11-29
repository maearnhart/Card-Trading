#include "CardDatabase.h"
#include "Card.h"
#include "UI.h"
#include <iostream>

CardDatabase::CardDatabase(): deck(), nameToSlot(), valueToSlot(), ownerToSlot() {}


void CardDatabase::addCard(string name, string owner, int val) {
    // Push back card into the vector
    Card* c = new Card(name, owner, val);
    deck.push_back(c);

    // Add values to the map
    int slot = deck.size() - 1;
    nameToSlot[name].insert(slot);
    valueToSlot[val].insert(slot);
    ownerToSlot[owner].insert(slot);


}

void CardDatabase::addCard(Card* card) {
    // Notes: Calls the other function to simplify logic and editing later

    addCard(card->name, card->owner, card->value);
}

set<Card*> CardDatabase::getCards(int n) {
    return { deck[n] };
}

set<Card*> CardDatabase::getCards(set<int> cards) {
    set<Card*> output;
    for (auto& i : cards) {
        output.insert(deck[i]);
    }

    return output;
}

set<int> CardDatabase::searchName(string name) {
    if (nameToSlot.find(name) != nameToSlot.end()) {
        return nameToSlot[name];
    }
    return set<int>();

}

set<int> CardDatabase::searchOwner(string owner) {
    if (ownerToSlot.find(owner) != ownerToSlot.end()) {
        return ownerToSlot[owner];
    }
    return set<int>(); 
}

set<int> CardDatabase::searchVal(string op, int value) {
    set<int> output;
    
    if (op == "=") {
        if (valueToSlot.find(value) != valueToSlot.end()) {
            return valueToSlot[value];
        }
    }
    if (op == "<") {
        auto pair = valueToSlot.upper_bound(value);  
        while (pair != valueToSlot.begin()) {
            pair--;
            output.insert(pair->second.begin(), pair->second.end());
        }
    }
    if (op == ">") {
        auto pair = valueToSlot.lower_bound(value);
        while (pair != valueToSlot.end()) {
            output.insert(pair->second.begin(), pair->second.end());
            pair++;
        }
    }

    return output;
}


void CardDatabase::displayDatabase() {
    UIOut("Database", true, deck);
}

void CardDatabase::displayOwner(string owner) {
    set<int> cardIndices = searchOwner(owner);
    if (cardIndices.empty()) {
        cout << "No cards found for owner: " << owner << endl;
        return;
    }
    UIOut(owner + "'s Inventory", false, getCards(cardIndices));
}

void CardDatabase::displayCards(set<int> cards) {
    UIOut("Cards", true, getCards(cards));
}

void CardDatabase::tradeExecute(Card* c1, Card* c2)
{
    string temp = c1->owner;
    c1->owner = c2->owner;
    c2->owner = temp;
}

void CardDatabase::tradeByVal(int val, int m)
{
    set<int> output;

    auto it = valueToSlot.lower_bound(val - m);
    while(it != valueToSlot.end() && it->first <= val + m)
    {
        output.insert(it->second.begin(), it->second.end());
        it++;
    }

    return output;
}
    

