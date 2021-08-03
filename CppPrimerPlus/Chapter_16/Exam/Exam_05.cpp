#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <class T>
int reduce(T ar[], int n) {
    sort(ar, ar + n);
    return unique(ar, ar + n) - ar;
}

template <class T>
void show(T ar[], int n) {
    ostream_iterator<T, char> oi(cout, " ");
    copy(ar, ar + n, oi);
}

int main() {
    long ar[5] = {2, 2, 2, 1, 3};
    int len = reduce(ar, 5);
    show(ar, len);
    cout << '\n';
    string ar2[5] = {"2", "2", "2", "1", "3"};
    len = reduce(ar2, 5);
    show(ar2, len);

    /* Ouput: 
        1 2 3 
        1 2 3 
     */
    return 0;
}