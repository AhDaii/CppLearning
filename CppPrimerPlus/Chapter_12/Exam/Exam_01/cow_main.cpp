#include "cow.h"
#include <iostream>
using namespace std;

int main() {
    {
        Cow cow; // use Cow()
        Cow tmp = Cow("david", "swim", 100); // use Cow(const char *nm, const char *ho, double wt)
        cow.ShowCow();
        tmp.ShowCow();
        cow = Cow(tmp); // use Cow(const Cow &c) and operator=(const Cow &c)
        cow.ShowCow();
    } // use ~Cow();
    return 0;
}