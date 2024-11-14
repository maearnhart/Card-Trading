#include "Card.h"
#include <vector>
#include <map>
#include <set>

class CardDatabase{
public:
  CardDatabase();
  ~CardDatabase();
  void addCard(Card* card);
  void addCard(string name, string owner, int val); // Function Overload
  Card getCard(int n);
  int searchName(string name);
  int searchVal(int val);
  int searchOwner(string name);
  void displayDatabase();

private:
  vector<Card> cards;
  map<string, int> nameToSlot;
  map<int, set<int>> valueToSlot;
  map<string, set<int>> ownerToSlot;
};
