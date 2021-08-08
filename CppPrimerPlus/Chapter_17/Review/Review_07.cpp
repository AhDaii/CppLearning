#include <iomanip>
#include <iostream>
using namespace std;
const int LIM = 30;

int main() {
    cout << "Enter your name: ";
    char name[LIM];
    cin.getline(name, LIM);
    cout << "Enter your hourly wages: ";
    double wages;
    cin >> wages;
    double work;
    cout << "Enter number of hours worked: ";
    cin >> work;
    cout << "First foramt:\n";
    cout << setw(30) << name << ": $" << setw(10) << fixed << setprecision(2)
         << wages << ": " << setw(5) << setprecision(1) << work << endl;
    cout << "Second format:\n";
    cout.setf(ios_base::left, ios_base::adjustfield);
    cout << setw(30) << name << ": $" << setw(10) << fixed << setprecision(2)
         << wages << ":" << setw(5) << setprecision(1) << work << endl;
    return 0;
}