#include "../../SGI_STL/numeric"
#include <iostream>
#include <vector>
using namespace sgistd;

template <class InputIterator, class T>
T my_inner_product(InputIterator first1, InputIterator last1, InputIterator first2, T init) {
    for (; first1 != last1; ++first1, ++first2)
        init = init + *first1 * *first2;
    return init;
}

template <class InputIterator, class T, class BinaryOperator1, class BinaryOperator2>
T my_inner_product(InputIterator first1,
                   InputIterator last1,
                   InputIterator first2,
                   T init,
                   BinaryOperator1 binary_op1,
                   BinaryOperator2 binary_op2) {
    for (; first1 != last1; ++first1, ++first2)
        init = binary_op1(init, binary_op2(*first1, *first2));
    return init;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    std::vector<int> v(a, a + 5);
    std::cout << my_inner_product(v.begin(), v.end(), v.begin(), 0) << '\n';
    std::cout << my_inner_product(v.begin(), v.end(), v.begin(), 0, minus<int>(), multiplies<int>());
    return 0;
}