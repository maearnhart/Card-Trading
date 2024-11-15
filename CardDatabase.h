#include "Card.h"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

class CardDatabase{
public:
  CardDatabase();
  ~CardDatabase();
  void addCard(Card* card);
  void addCard(string name, string owner, int val); // Function Overload
  Card* getCard(int n);
  Card* getCard(set<int>); // Function Overload
  int searchName(string name);
  set<int> searchVal(int val);
  set<int> searchOwner(string name);
  void displayDatabase();

private:
  vector<Card*> cards;
  map<string, int> nameToSlot;
  map<int, set<int>> valueToSlot;
  map<string, set<int>> ownerToSlot;
};
