#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
#include <cstring>
using namespace std;

class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const string &ln, const char * fn = "Heyyou") {
        lname = ln;
        strcpy(fname, fn);
    }
    void show() const;
    void FormalShow() const;

};



#endif