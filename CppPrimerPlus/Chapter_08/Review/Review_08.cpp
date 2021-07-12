#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_box(struct box b) {
    cout << b.maker << ' ' << b.height << ' ' << b.width << ' ' << b.length << ' ' << b.volume << endl;
}

template <typename T>
T _max(T a, T b) {
    return a > b ? a : b;
}

template<> 
box _max<box> (box a, box b) {
    return a.volume > b.volume ? a : b;
}


int main() {
    box a{"david", 1, 1, 1, 1}, b{"david2", 2, 2, 2, 2};
    cout << _max(1, 2) << endl;
    cout << _max(1.1, 2.2) << endl;
    show_box(_max(a, b));
    return 0;
}