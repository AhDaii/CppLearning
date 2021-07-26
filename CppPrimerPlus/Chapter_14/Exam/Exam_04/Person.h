#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
using std::string;

class Person {
private:
    string fname, lname;
public:
    Person(const char *fn = "none", const char *ln = "none"): fname(fn), lname(ln) {}
    virtual ~Person() {}
    virtual void Show() const;
    virtual void Set();
};

#endif