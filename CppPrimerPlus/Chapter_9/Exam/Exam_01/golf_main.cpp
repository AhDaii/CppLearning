#include "golf.h"

int main() {
    golf g;
    setgolf(g, "hello", 1);
    showgolf(g);
    handicap(g, 0);
    showgolf(g);
    setgolf(g);
    showgolf(g);
    return 0;
}