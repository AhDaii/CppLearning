#include <iostream>

int main() {
    enum Response{Yes = 1, No = 0, Maybe = 2};
    std::cout << "Yes = " << Yes << std::endl;
    std::cout << "No = " << No << std::endl;
    std::cout << "Maybe = " << Maybe << std::endl;
    return 0;
}