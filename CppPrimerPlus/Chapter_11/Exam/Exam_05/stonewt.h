#ifndef _STONEWT_H_
#define _STONEWT_H_

#include <iostream>
class Stonewt {
private:
    enum Mode{LBS, STN};
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    int mode;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    Stonewt operator*(int x) const;
    Stonewt operator+(const Stonewt stonewt) const;
    Stonewt operator-(const Stonewt stonewt) const;
    friend Stonewt operator*(int x, Stonewt stonewt);
    friend std::ostream & operator<<(std::ostream &os, const Stonewt &stonewt);
};

#endif