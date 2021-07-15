#include "mytime.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time operator+(const Time &a, const Time &b) {
    Time res;
    res.minutes = a.minutes + b.minutes;
    res.hours = a.hours + b.hours + res.minutes / 60;
    res.minutes %= 60;
    return res;
}

Time operator-(const Time &a, const Time &b) {
    Time diff;
    int tot1, tot2;
    tot1 = a.hours * 60 + a.minutes;
    tot2 = b.hours * 60 + b.minutes;
    diff.hours = (tot2 - tot1) / 60;
    diff.minutes = (tot2 - tot1) % 60;
    return diff;
}

Time operator*(const Time &a, double n) {
    Time res;
    int tot = a.hours * n * 60 + a.minutes * n;
    res.hours = tot / 60;
    res.minutes = tot % 60;
    return res;
}

Time operator*(double n, const Time &a) {
    return a * n;
}

std::ostream &operator<<(std::ostream &os, const Time &a) {
    os << a.hours << " hours, " << a.minutes << " minutes"; 
    return os;
}