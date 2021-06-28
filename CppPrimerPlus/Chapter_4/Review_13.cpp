#include <iostream>
#include <vector>
#include <malloc.h>

int main() {
    int *arr = new int[10];
    std::cout << "the length of arr is " << _msize(arr) / sizeof(int) << std::endl;
    delete [] arr;

    std::vector<int> arr2(10);
    std::cout << "the length of arr2 is " << arr2.size() << std::endl;
    return 0;
}