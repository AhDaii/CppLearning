#include <cstring>
#include <iostream>

int main() {
    using namespace std;
    const int SIZE = 20;
    char first_name[SIZE], last_name[SIZE];
    cout << "Enter your first name: ";
    cin.getline(first_name, SIZE);
    cout << "Enter your last name: ";
    cin.getline(last_name, SIZE);
    char name[2 * SIZE];
    strcpy(name, last_name);
    strcat(name, ", ");
    strcat(name, first_name);
    cout << "Here's the information in a single string: " << name;
    return 0;
}