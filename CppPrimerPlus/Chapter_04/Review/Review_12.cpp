#include <iostream>

int main() {
    float treacle[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
    float *ptr_treacle = treacle;
    std::cout << "The first element is " << *ptr_treacle  << ", the last element is " << *(ptr_treacle + 9) << std::endl;
    return 0;
}