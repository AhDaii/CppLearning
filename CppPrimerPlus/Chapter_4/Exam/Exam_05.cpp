#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calorie;
};

int main() {
    struct CandyBar snack{"Mocha Munch", 2.3, 500};
    cout << "brand: " << snack.brand << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calorie: " << snack.calorie << endl;
    return 0;
}