#include "CardDatabase.cpp"

using namespace std;

int main()
{

  CardDatabase deck1;

  deck1.Add("MJ", "Mackenzie", 100);
  deck1.Add("Kareem", "Utsav", 100);
  deck1.Add("Lebron", "Michael", 100);

  string test;
  cout << "Search by name: " << endl;
  cin >> test;

  cout << Print(deck1.getCard(deck1.searchName(test));
  
  
  return 0;
}
