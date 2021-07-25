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

class Gloam {
private:
    int glip;
    Frabjous fb;
public: 
    Gloam(int g = 0, const char* s = "C++") : glip(g), fb(s) {}
    Gloam(int g, const Frabjous& f) : glip(g), fb(f) {}
    void tell() {
        fb.tell();
        cout << ' ' << glip << '\n';
    }
};