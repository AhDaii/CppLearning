#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << "input number: ";
    int x;
    cin >> x;
    cout.setf(ios_base::showbase);
    cout << setw(15) << dec << x << setw(15) << oct << x << setw(15) << hex
         << x;
    return 0;
}