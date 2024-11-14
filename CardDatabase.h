#include "Card.h"

class CardDatabase{
public:
  CardDatabase();
  ~CardDatabase();
  void AddCard(Card C);
  Card getCard(int n);
  int SearhName(string name);
  int SearchVal(int val);
  int SearchOwner(string name);

private:
  vector<Card> cards;
  map<string, int> nameToSlot;
  map<int, int> valueToSlot;
};
