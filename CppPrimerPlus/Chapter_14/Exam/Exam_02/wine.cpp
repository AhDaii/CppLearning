#include "wine.h"
#include <iostream>
using std::cin;
using std::cout;

void Wine::GetBottles() {
    cout << (const std::string &)*this << " data for " << year << " year(s):" << '\n';
    for(int i = 0; i < year; i ++) {
        cout << "Enter year: ";
        cin >> PairArray::first()[i];
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second()[i];
    }
}

void Wine::Show() const {
    cout << "Wine: " << (const std::string &)*this << '\n';
    cout << "\tYear\tBottles\n";
    for(int i = 0; i < year; i ++) {
        cout << '\t' << PairArray::first()[i] << '\t' << PairArray::second()[i] << '\n';
    }
}