#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar {
    char name[50];
    double weight;
    int heat;
};

void init(CandyBar &cb, const char* name = "Millennium Much", const double weight = 2.85, const int heat = 350) {
    strcpy(cb.name, name);
    cb.weight = weight;
    cb.heat = heat;
}

void show(const CandyBar &cb) {
    cout << cb.name << " " << cb.weight << " " << cb.heat << endl;
}

int main() {
    CandyBar cb;
    init(cb);
    show(cb);
    init(cb, "david", 1.1, 200);
    show(cb);
    return 0;
}