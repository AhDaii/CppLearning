#include <iostream>
#include <iomanip>
using namespace std;

void iquote(int x) {
    cout << "\"" << x << "\"" << endl;
}

void iquote(double x) {
    cout.setf(ios::fixed);
    cout << "\"" << setprecision(2) << x << "\"" << endl;
}

void iquote(string x) {
    cout << "\"" << x << "\"" << endl;
}

int main() {
    iquote(1);
    iquote(2.2);
    iquote("3");
    return 0;
}