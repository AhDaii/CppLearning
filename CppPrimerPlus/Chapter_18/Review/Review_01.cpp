#include <iostream>
#include <vector>
using namespace std;

class Z200 {
   private:
    int j;
    char ch;
    double z;

   public:
    Z200(int jv, char chv, double zv) : j(jv), ch(chv), z(zv) {}
    Z200() = default;
};

int main() {
    double x{8.8};
    string s{"What a bracing effect!"};
    Z200 zip{200, 'Z', 0.675};
    vector<int> ai{3, 9, 4, 7, 1};
    return 0;
}