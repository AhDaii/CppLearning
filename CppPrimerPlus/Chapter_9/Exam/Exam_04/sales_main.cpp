#include "sales.h"
using namespace SALES;

int main() {
    Sales s;
    double tmp[4]{1.1, 2.2, 3.3, 4.4};
    setSales(s, tmp, 4);
    showSales(s);
    setSales(s);
    showSales(s);
}