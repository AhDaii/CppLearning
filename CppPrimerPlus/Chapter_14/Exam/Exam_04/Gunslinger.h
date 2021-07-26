#ifndef _GUNSLINGER_H_
#define _GUNSLINGER_H_

#include "Person.h"

class Gunslinger: virtual public Person {
private:
    double drawtime;
    int notches;
public:
    Gunslinger(const char *fn = "none", const char *ln = "none", double d = 0.0, int n = 0):
                Person(fn, ln), drawtime(d), notches(n) {}
    ~Gunslinger() {}
    double Draw() const { return drawtime; }
    double Notches() const { return notches; }
    void Show() const;
    void Set();
};



#endif