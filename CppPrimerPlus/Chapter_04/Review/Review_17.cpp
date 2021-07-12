#include <iostream>
#include <vector>
#include <string>
#include <array>


int main() {
    const int SIZE = 10;
    std::vector<std::string> arr(SIZE);
    std::cout << "the length of arr is " << arr.size() << std::endl;
    
    std::array<std::string, SIZE> arr2;
    std::cout << "the length of arr2 is " << arr2.size() << std::endl;
    return 0;
}