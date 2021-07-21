#include <iostream>
#include "abc.h"

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portrabelly", 8);
    lacksDMA balloon("red", "Blumpo", 4);
    hasDMA map("Mercator", "Buffalo Kyes", 5);
    cout << shirt;
    cout << balloon;
    cout << map ;
    lacksDMA balloon2(balloon);
    hasDMA map2;
    map2 = map;
    cout << balloon2 ;
    cout << map2;

    ABC * pts[3];
    pts[0] = &shirt;
    pts[1] = &balloon;
    pts[2] = &map;

    for (int i = 0; i < 3; ++ i)
        cout << *pts[i];
    for (int i = 0; i < 3; ++ i)
        pts[i]->View();
    for(int i = 0; i < 3; i ++)
        delete pts[i];
    return 0;
}