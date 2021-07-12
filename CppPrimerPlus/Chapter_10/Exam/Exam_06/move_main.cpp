#include "move.h"
#include <iostream>
using namespace std;

int main() {
    Move a(1, 2), b(2, 3);
    a.showmove();
    b.showmove();
    a.reset();
    a.add(b).showmove();
    return 0;
}