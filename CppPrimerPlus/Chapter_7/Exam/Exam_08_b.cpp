#include <iostream>
using namespace std;
const int Seasons = 4;

const char* Snames[Seasons]{"Spring", "Summber", "Fall", "Winter"};

struct QAQ {
    double pa[Seasons];
};

void fill(struct QAQ *orz) {
    for(int i = 0; i < Seasons; i ++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> orz->pa[i];
    }
}

void show(const struct QAQ *orz) {
    double total = 0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i ++) {
        cout << Snames[i] << ": $" << orz->pa[i] << endl;
        total += orz->pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

int main() {
    struct QAQ pa;
    fill(&pa);
    show(&pa);
    return 0;
}