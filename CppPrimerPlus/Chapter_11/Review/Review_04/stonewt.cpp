#include "stonewt.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {

}

void Stonewt::show_lbs() const {
    cout << "[SHOW] " << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_stn() const {
    cout << "[SHOW] " << pounds << " pounds\n";
}

Stonewt Stonewt::operator*(int x) const{
    return Stonewt(pounds * x);
}

Stonewt operator*(int x, Stonewt stonewt) {
    return stonewt.pounds * x;
}