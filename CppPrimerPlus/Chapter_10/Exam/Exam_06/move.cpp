#include "move.h"
#include <iostream>

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    std::cout << "[SHOW] x = " << x << ", y = " << y << std::endl; 
}

Move Move::add(const Move &m) const {
    Move res;
    res.x = x + m.x;
    res.y = y + m.y;
    return res;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}