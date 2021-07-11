#include "golf.h"

int main() {
    Golf g("hello", 1);
    g.showgolf();
    g.setHandicap(0);
    g.showgolf();

    g = Golf();
    g.showgolf();
    return 0;
}