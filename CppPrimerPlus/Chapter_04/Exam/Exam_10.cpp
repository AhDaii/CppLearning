#include <iostream>
#include <array>

int main() {
    using namespace std;

    array<double, 3> arr{10.1, 9.9, 8.8};
    cout << arr.size() << ", " << arr.at(0) << " " << arr[1] << " " << arr.at(2);
}