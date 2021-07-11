#include "sales.h"
#include <iostream>

namespace SALES {
    using std::cin;
    using std::cout;
    using std::endl;
    void Sales::showSales() const {
        cout << "[SHOW] all sales: ";
        for(int i = 0; i < 4; i ++)
            cout << sales[i] << " ";
        cout << ", max: " << max << ", min: " << min << ", average: " << average << endl;
    }
}