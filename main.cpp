#include "CardDatabase.h"

using namespace std;

int main()
{

  CardDatabase deck1;

  deck1.addCard("MJ", "Mackenzie", 100);
  deck1.addCard("Kareem", "Utsav", 100);
  deck1.addCard("Lebron", "Michael", 100);

  string test;
  cout << "Search by name: " << endl;
  cin >> test;

  cout << Print(deck1.getCards({deck1.searchName(test)}));
  
  
  return 0;
}
