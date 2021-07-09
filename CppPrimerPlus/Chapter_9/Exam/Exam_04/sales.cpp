#include "sales.h"
#include <iostream>

namespace SALES {
    using std::cin;
    using std::cout;
    using std::endl;
    void setSales(Sales &s, const double ar[], int n) {
        double total = 0, _max = ar[0], _min = ar[0];
        n = QUARTERS < n ? QUARTERS : n;
        for(int i = 0; i < n; i ++) {
            s.sales[i] = ar[i];
            total += ar[i];
            if(ar[i] > _max)
                _max = ar[i];
            else if(ar[i] < _min)
                _min = ar[i];
        }
        s.max = _max;
        s.min = _min;
        s.average = total / n;
    }
    void setSales(Sales &s) {
        cout << "input 4 quarters sales: ";
        double total = 0, _max = 0, _min = 0;
        for(int i = 0; i < QUARTERS; i ++) {
            cin >> s.sales[i];
            total += s.sales[i];
            if(i == 0)
                _min = _max = s.sales[i];
            else {
                if(s.sales[i] > _max)
                    _max = s.sales[i];
                else if(s.sales[i] < _min)
                    _min = s.sales[i];
            }
        }
        s.max = _max;
        s.min = _min;
        s.average = total / QUARTERS;
    }
    void showSales(const Sales &s) {
        cout << "[SHOW] all sales: ";
        for(int i = 0; i < 4; i ++)
            cout << s.sales[i] << " ";
        cout << ", max: " << s.max << ", min: " << s.min << ", average: " << s.average << endl;
    }
}