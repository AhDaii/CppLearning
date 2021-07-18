#ifndef _STRING1_H_
#define _STRING1_H_

#include <iostream>
using std::ostream;
using std::istream;

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;

public:
    String();
    String(const char *s);
    String(const String &);
    ~String();
    int length() const { return len; }
    void stringlow();
    void stringup();
    int has(char ch) const;

    String& operator=(const String &);
    String& operator=(const char *);
    const String& operator+(const String &);
    char& operator[](int i);
    const char& operator[](int i) const;

    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream& operator<<(ostream &os, const String &st);
    friend istream& operator>>(istream &is, String &st);
    friend const String operator+(const char *c, const String &st);

    static int HowMany();

};

#endif 