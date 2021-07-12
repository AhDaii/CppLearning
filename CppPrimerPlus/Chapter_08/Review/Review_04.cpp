#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_box(struct box &b) {
    cout << b.maker << ' ' << b.height << ' ' << b.width << ' ' << b.length << ' ' << b.volume << endl;
}

void calc_volume(struct box &ptr_b) {
    ptr_b.volume = ptr_b.height * ptr_b.width * ptr_b.length;
}

int main() {
    struct box b{"David", 1, 2, 3};
    show_box(b);
    calc_volume(b);
    show_box(b);
    return 0;
}