#include "stonewt.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = LBS;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = STN;
}

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {

}

std::ostream & operator<<(std::ostream &os, const Stonewt &stonewt){
    if(stonewt.mode == Stonewt::LBS)
        os << "[SHOW] " << stonewt.stone << " stone, " << stonewt.pds_left << " pounds\n";
    else if(stonewt.mode == Stonewt::STN)
        os << "[SHOW] " << stonewt.pounds << " pounds\n";
    else 
        os << "Stonewt object mode is invalid\n";
    return os;
}


Stonewt Stonewt::operator*(int x) const{
    return Stonewt(pounds * x);
}

Stonewt Stonewt::operator+(const Stonewt stonewt) const {
    return Stonewt(pounds + stonewt.pounds);
}

Stonewt Stonewt::operator-(const Stonewt stonewt) const {
    return Stonewt(pounds - stonewt.pounds);
}

Stonewt operator*(int x, Stonewt stonewt) {
    return stonewt.pounds * x;
}