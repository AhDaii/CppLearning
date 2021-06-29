#include <iostream>
using namespace std;

int main() {
    double daphne_money = 100, cleo_money = 100;
    int year = 0;
    while(cleo_money <= daphne_money) {
        daphne_money += 10;
        cleo_money *= 1.05;
        year ++;
    }
    cout << year << " Daphne:" << daphne_money << "  Cleo:" << cleo_money;
    return 0;
}