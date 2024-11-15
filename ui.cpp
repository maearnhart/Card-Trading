#include "UI.h"
#include "Card.h"

#include <string>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void UIOut(const string& title, bool includeOwnership, const vector<Card*>& deck) {
    cout << "[" << GREEN << title << RESET << "]" << "\n";
    cout << string(80, '-') << endl;
    cout << left << GREEN
        << setw(5) << ""
        << setw(35) << "Name";

    if (includeOwnership) {
        cout << setw(25) << "Owner";
    }

    cout << setw(15) << "Value" << RESET << endl;
    cout << string(80, '-') << endl;

    for (const Card* card : deck) {
        cout << left
            << setw(5) << ""
            << setw(35) << card->name;

        if (includeOwnership) {
            cout << setw(25) << card->owner;
        }

        cout << setw(15) << RED + to_string(card->value) + RESET
            << endl;
    }

    cout << string(80, '-') << endl;
    cout << endl;
}

void UIOut(const string& title, bool includeOwnership, const set<Card*>& deck) {
    cout << "[" << GREEN << title << RESET << "]" << "\n";
    cout << string(80, '-') << endl;
    cout << left << GREEN
        << setw(5) << ""
        << setw(35) << "Name";

    if (includeOwnership) {
        cout << setw(25) << "Owner";
    }

    cout << setw(15) << "Value" << RESET << endl;
    cout << string(80, '-') << endl;

    for (const Card* card : deck) {
        cout << left
            << setw(5) << ""
            << setw(35) << card->name;

        if (includeOwnership) {
            cout << setw(25) << card->owner;
        }

        cout << setw(15) << RED + to_string(card->value) + RESET
            << endl;
    }

    cout << string(80, '-') << endl;
    cout << endl;
}
