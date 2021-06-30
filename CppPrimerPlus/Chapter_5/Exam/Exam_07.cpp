#include <iostream>
#include <string>
using namespace std;

struct Car{
    string manufacturer;
    int year_of_production;
};

int main() {
    int N;
    cout << "How many cars do you wish to catalog? ";
    cin >> N;
    struct Car *cars = new struct Car[N];
    for(int i = 0; i < N; i ++) {
        getchar();
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].manufacturer);
        cout << "Please enter the year made: ";
        cin >> cars[i].year_of_production;
    }
    cout << "Here is your collection:" << endl;
    for(int i = 0; i < N; i ++) 
        cout << cars[i].year_of_production << " " << cars[i].manufacturer << endl;
    return 0;
}