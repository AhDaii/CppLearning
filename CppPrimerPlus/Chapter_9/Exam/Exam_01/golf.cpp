#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;

void setgolf(golf &g, const char* name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g) {
    cout << "input name: ";
    cin.get(g.fullname, Len);
    cout << "input handicap: ";
    cin >> g.handicap;
    return strlen(g.fullname) != 0;
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf &g) {
    cout << "[SHOW] fullname: " << g.fullname << ", handicap: " << g.handicap << endl;
}