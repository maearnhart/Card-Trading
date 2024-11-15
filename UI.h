#pragma once
#include "Card.h"
#include <string>
#include <vector>
#include <set>


using namespace std;

const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string RESET = "\033[0m";
const string BOLD = "\033[1m";

void UIOut(const string& title, bool includeOwnership, const vector<Card*>& deck);
void UIOut(const string& title, bool includeOwnership, const set<Card*>& deck);
