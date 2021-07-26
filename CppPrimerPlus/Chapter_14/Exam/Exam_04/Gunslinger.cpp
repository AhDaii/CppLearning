#include "Gunslinger.h"
#include <iostream>
using std::cout;
using std::cin;

void Gunslinger::Show() const
{
    Person::Show();
    cout << "Draw: " << drawtime << '\n';
    cout << "Notches: " << notches << '\n';
}

void Gunslinger::Set()
{
    Person::Set();
    cout << "Enter Drawtime: ";
    cin >> drawtime;
    cout << "Enter Notches: ";
    cin >> notches;
}