#include <string>

struct Card{
  string name;
  string owner;
  int value;

  Card(string Name, string Owner, int val) : name(Name), owner(Owner), value(val) {} //Constructor
};
