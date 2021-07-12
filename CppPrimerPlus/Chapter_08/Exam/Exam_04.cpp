#include <iostream>
#include <cstring>
using namespace std;

struct stringy {
    char *str;
    int ct;
};

void set(stringy& str, const char *ptr);


void show(const stringy str, const int times = 1) {
    for(int i = 0; i < times; i ++)
        cout << str.str << " " << str.ct << endl;
}

void show(const char* str, const int times = 1) {
    for(int i = 0; i < times; i ++) 
        cout << str << endl;
}

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy& str, const char *ptr) {
    str.ct = strlen(ptr);
    str.str = new char[str.ct];
    strcpy(str.str, ptr);
}  