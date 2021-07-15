#include "mytime.h"
#include <iostream>
using namespace std;

int main() {
    Time aida(3, 35);
    Time tosca(2, 48);
    Time tmp;

    cout << "Aida and Toscs: \n";
    cout << aida << "; " << tosca << endl;
    tmp = aida + tosca;
    cout << "Aida + Toscs: " << tmp << endl;
    tmp = aida * 1.17;
    cout << "Aida * 1.17: " << tmp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    return 0;
}