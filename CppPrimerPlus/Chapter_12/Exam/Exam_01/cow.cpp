#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow() {
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    std::strcpy(name, nm);
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c) {
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow& Cow::operator=(const Cow &c) {
    if(this == &c)
        return *this;
    delete [] hobby;
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

Cow::~Cow() {
    std::cout << "delete object name: " << name << std::endl;
    delete [] hobby;
}

void Cow::ShowCow() const {
    std::cout << "[SHOW] name = " << name << ", hobby = " << hobby << ", weight = " << weight << std::endl;
}