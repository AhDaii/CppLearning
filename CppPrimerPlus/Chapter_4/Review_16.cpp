#include <iostream>

int main() {
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cout << "What is its street address?\n";
    char address[80];
    cin >> address;
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n"; 
    return 0;

    /* 
      Result:
        What year was your house built?
        1966
        What is its street address?
        43821 Unsigned Short Street
        Year built: 1966
        Address: 43821
        Done!
     */
}