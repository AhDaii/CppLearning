#include <iostream>
using namespace std;
const int strsize = 50;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main() {
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\tb. display by title" << endl;
    cout << "c. display by bopname\td. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice: ";
    char ch;
    struct bop *bops = new struct bop[3]{
        {"david", "Junior Programmer", "bop_1", 0},
        {"helo", "Software Engineer", "bop_2", 1},
        {"kivei", "Test Engineer", "bop_3", 2}
    };
    
    while(cin >> ch) {
        switch(ch) {
            case 'a': 
                for(int i = 0; i < 3; i ++)
                    cout << (bops + i)->fullname << endl;
                break;
            case 'b':
                for(int i = 0; i < 3; i ++)
                    cout << (*(bops + i)).title << endl;
                break;
            case 'c':
                for(int i = 0; i < 3; i ++)
                    cout << bops[i].bopname << endl;
                break;
            case 'd':
                for(int i = 0; i < 3; i ++) {
                    switch(bops[i].preference) {
                        case 0: cout << bops[i].fullname << endl; break;
                        case 1: cout << bops[i].title << endl; break;
                        case 2: cout << bops[i].bopname << endl; break;
                    }
                }
                break;
        }
        if(ch == 'q') {
            cout << "Bye!" << endl;
            break;
        }
        cout << "Next choice: ";
    }

    delete [] bops;
    return 0;
}