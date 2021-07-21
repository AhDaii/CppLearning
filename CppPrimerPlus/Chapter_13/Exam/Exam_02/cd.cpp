#include "cd.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::strcpy;
using std::strlen;

Cd::Cd(char *s1, char *s2, int n, double x) {
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char[strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd() {
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::Cd(const Cd &d) {
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd() {
    delete [] performers;
    delete [] label;
}

void Cd::Report() const {
    cout << "[SHOW] " << "performers = " << performers << ", label = " << label << ", selections = " << selections << ", playtime = " << playtime << '\n';
}

Cd& Cd::operator=(const Cd &d) {
    if(this == &d)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(char *mw, char *s1, char *s2, int n, double x): Cd(s1, s2, n, x) {
    main_work = new char[strlen(mw)];
    strcpy(main_work, mw);
}

Classic::Classic(const Classic& c) {
    delete [] main_work;
    main_work = new char[strlen(c.main_work) + 1];
    strcpy(main_work, c.main_work);
}

Classic::Classic(): Cd() {
    main_work = new char[1];
    main_work[0] = '\0';
}

Classic::~Classic() {
    delete [] main_work;
}

void Classic::Report() const {
    Cd::Report();
    cout << "[SHOW CLASSIC] main work = " << main_work << '\n';
}


Classic& Classic::operator=(const Classic& c) {
    if(this == &c)
        return *this;
    Cd::operator=(c);
    delete [] main_work;
    main_work = new char[strlen(c.main_work) + 1];
    strcpy(main_work, c.main_work);

    return *this;
}