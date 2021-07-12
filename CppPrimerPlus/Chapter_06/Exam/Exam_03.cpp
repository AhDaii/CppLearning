#include <iostream>
using namespace std;

int main() {
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore\tp) pianist" << endl;
    cout << "t) tree\tg) game" << endl;
    char ch;
    while(cin >> ch) {
        switch(ch) {
            case 'c': cout << "carnivore" << endl; break;
            case 'p': cout << "pianist" << endl; break;
            case 't': cout << "tree" << endl; break;
            case 'g': cout << "game" << endl; break;
            default: cout << "Please enter a c, p, t, or g: "; break;
        }
    }
    return 0;
}