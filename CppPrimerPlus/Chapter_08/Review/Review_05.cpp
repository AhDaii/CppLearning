#include <iostream>
#include <vector>
using namespace std;
const int Seasons = 4;

const char* Snames[Seasons]{"Spring", "Summber", "Fall", "Winter"};

void fill(vector<double> &pa) {
    for(int i = 0; i < Seasons; i ++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(const vector<double>& pa) {
    double total = 0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i ++) {
        cout << Snames[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

int main() {
    vector<double> pa(Seasons);
    fill(pa);
    show(pa);
    return 0;
}