#ifndef _WINE_H_
#define _WINE_H_

#include <valarray>
#include <string>
#include <iostream>

template <class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
    Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1,T2>::first() {
    return a;
}
template<class T1, class T2>
T2 & Pair<T1,T2>::second() {
    return b;
}

class Wine {
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string label;
    int year;
    PairArray arr;
public:
    Wine(const char *l = "NULL", int y = 0): label(l), year(y), arr(ArrayInt(y), ArrayInt(y)) {}
    Wine(const char *l, int y, const int yr[], const int bot[]): label(l), year(y), arr(ArrayInt(yr, y), ArrayInt(bot, y)) {}
    void GetBottles();
    std::string Label() const { return label; }
    int sum() const { return arr.second().sum(); };
    void Show() const;
};

#endif