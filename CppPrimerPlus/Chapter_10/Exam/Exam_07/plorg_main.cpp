#include "plorg.h"
#include <iostream>
using namespace std;

int main() {
    Plorg g;
    g.show();
    g.setCI(20);
    g.show();

    g = Plorg("David");
    g.show();
    return 0;
}