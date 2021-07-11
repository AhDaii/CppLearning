#include "sales.h"
using namespace SALES;

int main() {
    double tmp[4]{1.1, 2.2, 3.3, 4.4};
    Sales s(tmp, 4);
    s.showSales();
    s = Sales();
    s.showSales();
}