#include <iostream>
#include "golf.h"
using namespace std;


void Golf::setHandicap(int hc) {
    handicap = hc;
}

void Golf::showgolf() const {
    cout << "[SHOW] fullname: " << fullname << ", handicap: " << handicap << endl;
}