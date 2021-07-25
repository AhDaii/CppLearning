#include "wine.h"
#include <iostream>
using std::cin;
using std::cout;

void Wine::GetBottles() {
    cout << label << " data for " << year << " year(s):" << '\n';
    for(int i = 0; i < year; i ++) {
        cout << "Enter year: ";
        cin >> arr.first()[i];
        cout << "Enter bottles for that year: ";
        cin >> arr.second()[i];
    }
}

void Wine::Show() const {
    cout << "Wine: " << label << '\n';
    cout << "\tYear\tBottles\n";
    for(int i = 0; i < year; i ++) {
        cout << '\t' << arr.first()[i] << '\t' << arr.second()[i] << '\n';
    }
}