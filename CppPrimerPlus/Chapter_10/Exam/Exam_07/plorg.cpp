#include "plorg.h"
#include <cstring>
#include <iostream>


Plorg::Plorg(const char *str) {
    strcpy(name, str);
    CI = 50;
}

void Plorg::show() const {
    std::cout << "[SHOW] name = " << name << ", CI = " << CI << std::endl;
}

void Plorg::setCI(int val) {
    CI = val;
}