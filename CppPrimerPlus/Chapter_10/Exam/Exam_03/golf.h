#ifndef _GOLF_H_
#define _GOLF_H_
#include <cstring>
#include <iostream>
class Golf{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;

public:
    Golf(const char* name, int hc) {
        strcpy(fullname, name);
        handicap = hc;
    }

    Golf() {
        std::cout << "input name: ";
        std::cin.get(fullname, Len);
        std::cout << "input handicap: ";
        std::cin >> handicap;
    }
    void setHandicap(int hc);
    void showgolf() const;
};

#endif