#include <iostream>

int main() {
    double red = 1.1;
    double *ptr_red = &red;
    std::cout << *ptr_red;
    return 0;
}