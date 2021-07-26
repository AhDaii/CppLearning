#include "Person.h"
#include <iostream>
using std::cout;
using std::cin;

void Person::Show() const{
    cout << fname << '\n';
    cout << lname << '\n';
}

void Person::Set()
{
    cout << "Enter firstname: ";
    cin >> fname;
    cout << "Enter lastname: ";
    cin >> lname;
}