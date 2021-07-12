#include <iostream>
#include <string>
using namespace std;

struct Pizza {
    string company;
    double diameter, weight;
};

int main() {
    struct Pizza pizza;
    cout << "input company: ";
    getline(cin, pizza.company);
    cout << "input diameter: ";
    cin >> pizza.diameter;
    cout << "input weight: ";
    cin>> pizza.weight;
    cout << "company: " << pizza.company << endl;
    cout << "diameter: " << pizza.diameter << endl;
    cout << "weight: " << pizza.weight << endl;
    return 0;
}