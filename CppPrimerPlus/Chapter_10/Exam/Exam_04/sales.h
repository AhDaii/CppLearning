#ifndef _SALES_H_
#define _SALES_H_
#include <iostream>
namespace SALES {    
    const int QUARTERS = 4;
    class Sales {
    private: 
        double sales[QUARTERS];
        double average;
        double max;
        double min;

    public:
        Sales(const double ar[], int n) {
            double total = 0, _max = ar[0], _min = ar[0];
            n = QUARTERS < n ? QUARTERS : n;
            for(int i = 0; i < n; i ++) {
                sales[i] = ar[i];
                total += ar[i];
                if(ar[i] > _max)
                    _max = ar[i];
                else if(ar[i] < _min)
                    _min = ar[i];
            }
            max = _max;
            min = _min;
            average = total / n;
        }
        Sales() {
            std::cout << "input 4 quarters sales: ";
            double total = 0, _max = 0, _min = 0;
            for(int i = 0; i < QUARTERS; i ++) {
                std::cin >> sales[i];
                total += sales[i];
                if(i == 0)
                    _min = _max = sales[i];
                else {
                    if(sales[i] > _max)
                        _max = sales[i];
                    else if(sales[i] < _min)
                        _min = sales[i];
                }
            }
            max = _max;
            min = _min;
            average = total / QUARTERS;
        }
        void showSales() const;
    };
}

#endif