#include <initializer_list>
#include <iostream>
using namespace std;

template <typename T>
T average_list(initializer_list<T> li);

int main(int argc, char* argv[]) {
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;
    return 0;
}

template <typename T>
T average_list(initializer_list<T> li) {
    T ret = T();
    if (li.size() == 0)
        return ret;
    for (auto& it : li)
        ret += it;
    return ret / li.size();
}