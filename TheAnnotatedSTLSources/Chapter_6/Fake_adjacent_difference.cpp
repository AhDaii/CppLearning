#include "../../SGI_STL/numeric"
#include <iostream>
#include <vector>
using namespace sgistd;

template <class InputIterator, class OuputIterator>
OuputIterator my_adjacent_difference(InputIterator first, InputIterator last, OuputIterator result) {
    if (first == last)
        return result;
    *result = *first;
    typedef typename iterator_traits<InputIterator>::value_type vtype;
    vtype value = *first;
    while (++first != last) {
        vtype tmp = *first;
        *++result = tmp - value;
        value = tmp;
    }
    return ++result;
}

template <class InputIterator, class OuputIterator, class Binary_Operator>
OuputIterator my_adjacent_difference(InputIterator first,
                                     InputIterator last,
                                     OuputIterator result,
                                     Binary_Operator binary_op) {
    if (first == last)
        return result;
    *result = *first;
    typedef typename iterator_traits<InputIterator>::value_type vtype;
    vtype value = *first;
    while (++first != last) {
        vtype tmp = *first;
        *++result = binary_op(tmp, value);
        value = tmp;
    }
    return ++result;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    std::vector<int> v(a, a + 5);
    my_adjacent_difference(v.begin(), v.end(), ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
    my_adjacent_difference(v.begin(), v.end(), ostream_iterator<int>(std::cout, " "), plus<int>());
    return 0;
}