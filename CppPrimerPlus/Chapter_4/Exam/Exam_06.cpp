#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calorie;
};

int main() {
    struct CandyBar arr[3]{{"Mocha Munch", 2.3, 500}, {"Mocha Munch2", 2.1, 501}, {"Mocha Munch3", 2.4, 503}};
    cout << "brand: " << arr[0].brand << endl;
    cout << "weight: " << arr[0].weight << endl;
    cout << "calorie: " << arr[0].calorie << endl;
    cout << "brand: " << arr[1].brand << endl;
    cout << "weight: " << arr[1].weight << endl;
    cout << "calorie: " << arr[1].calorie << endl;
    cout << "brand: " << arr[2].brand << endl;
    cout << "weight: " << arr[2].weight << endl;
    cout << "calorie: " << arr[2].calorie << endl;
    return 0;
}