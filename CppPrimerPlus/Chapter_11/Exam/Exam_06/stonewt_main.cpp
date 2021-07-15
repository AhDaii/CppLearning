#include "stonewt.h"
#include <iostream>
using namespace std;

int main() {
    Stonewt arr[6] = {Stonewt(154), Stonewt(11,11), Stonewt(99)};
    for(int i = 3; i < 6; i ++) {
        cout << "Enter pounds: ";
        int pounds;
        cin >> pounds;
        arr[i] = Stonewt(pounds);
    }

    Stonewt _max = arr[0], _min = arr[0], tmp(11, 0);
    int cnt = 0;
    for(int i = 0; i < 6; i ++) {
        if(arr[i]  > _max)
            _max = arr[i];
        else if(arr[i] < _min)
            _min = arr[i];
        if(arr[i] >= tmp)
            cnt ++;
    }
    cout << "the maximum stonewt object: " ;
    _max.show_stn();
    cout << "the minimum stonewt object: " ;
    _min.show_stn();
    cout << cnt << " bigger than 11 stone" ;
    return 0;
}