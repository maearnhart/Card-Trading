#include "Card.h"

using namespace std;

void Card::Print(Card)
{
  cout << "Name: " << Card.name << endl;
  cout << "Value: " << Card.value << endl;
  cout << "Owned by: " << Card.owner << endl;
  cout << endl;
  cout << endl;
}
