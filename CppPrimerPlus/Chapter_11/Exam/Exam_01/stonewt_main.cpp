#include "stonewt.h"
#include <iostream>
using namespace std;

int main() {
    Stonewt stonewt(10, 8);
    stonewt.show_lbs();
    stonewt.show_stn();
    Stonewt tmp = stonewt * 2;
    tmp.show_lbs();
    tmp.show_stn();
    return 0;
}