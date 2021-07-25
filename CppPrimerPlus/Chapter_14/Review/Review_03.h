#include <iostream>
#include <cstring>
using std::cout;
using std::strcpy;

class Frabjous {
private:
    char fab[20];
public: 
    Frabjous(const char* s = "C++") {
        strcpy(fab, s);
    }
    virtual void tell(){ cout << fab; }
}; 

class Gloam : private Frabjous {
private:
    int glip;
public: 
    Gloam(int g = 0, const char* s = "C++"): glip(g), Frabjous(s) {}
    Gloam(int g, const Frabjous& f): glip(g), Frabjous(f) {}
    void tell() {
        Frabjous::tell();
        cout << ' ' << glip << '\n';
    }
};