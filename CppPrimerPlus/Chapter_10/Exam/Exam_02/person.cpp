#include <iostream>
#include "person.h"
using namespace std;


void Person::show() const {
    cout << "[SHOW] lname = " << lname << ", fname = " << fname << endl;
}

void Person::FormalShow() const {
    cout << "[FORMAT SHOW] name = " << fname << " " << lname << endl;
}